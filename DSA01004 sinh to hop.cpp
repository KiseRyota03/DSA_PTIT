#include<bits/stdc++.h>

using namespace std;
// a[3] = 5-3+3 = 5
int a[11];
int ok;
int k,n;
void ktao() {
	for(int i =1;i<=k;i++) a[i] = i;
}
// 123 124 
// 4 3 
void sinh() {
	int i =k;
	while(i>=1 && a[i] == n-k+i) i--;
	if(i==0) ok =0;
	else {
		a[i]++;
		for(int j =i+1;j<=k;j++) {
			a[j] = a[j-1] +1; // so dang truoc +1
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ok = 1;
		cin >> n >> k;
		ktao();
		while(ok) {
			for(int i =1;i<=k;i++) 
			cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}