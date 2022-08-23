#include<bits/stdc++.h>

using namespace std;
int a[100],n,k;

void in() {
	for(int i =1;i<=n;i++) cout << a[i];
	cout << '\n';
}
void solve(int i) {
	for(int j=0;j<=1;j++) {
		a[i] = j;
	if(i==n) {
		int dem =0;
		for(int l = 1;l<=n;l++) {
			if(a[l] == 1) dem++;
		}
		if(dem ==k) in();
	}
	else solve(i+1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		solve(1);
	}
}