#include<bits/stdc++.h>

using namespace std;
// xi = j; hang i, cot j
// quan li duong cheo: 
// xuoi: i - j + n; nguoc: i + j - 1;
// dk: cot[j] == 1; cheo1[i-j+n] == 1, cheo2[i+j-1] ==1;
int n, x[100], cot[100], cheo1[100], cheo2[100],cnt;
void ktao() {
	for(int i=1;i<=99;i++) cheo1[i] = cheo2[i] = cot[i] = i;
}

void sinh(int i) {
	for(int j =1;j<=n;j++) {
		if(cot[j] == 1 && cheo1[i-j+n] == 1 && cheo2[i+j-1] == 1) {
			cot[j] = cheo1[i-j+n] = cheo2[i+j-1] =0 ;
			if(i==n) cnt++;
			else {
				sinh(i+1);
			}
			cot[j] = cheo1[i-j+n] = cheo2[i+j-1] = 1;		
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n;
		cnt =0;
		for(int i=1;i<=99;i++) {
			cheo1[i] = cheo2[i] = cot[i] = 1;
		}
		sinh(1);
		cout << cnt << endl;
	}
	
}