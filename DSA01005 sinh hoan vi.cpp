#include<bits/stdc++.h>

using namespace std;

int a[100], k,ok,n;
vector<int> v;
void ktao() {
	for(int i=1;i<=n;i++) a[i] = i;
}
// 1 2 3 8 9 7 6 
// swap: 1 2 3 9 8 7 6 
// sap xep: 1 2 3 9 6 7 8 (do sap xep theo thu tu nen swap vi tri a[l], a[r]
void sinh() {
	int i = n-1;
	while(i>=1 && a[i] > a[i+1]) i--;
	if(i == 0) ok = 0;
	else {
		int k = n;
		while(a[i] > a[k] ) k--;
		swap(a[i], a[k]);
		int l = i+1, r = n;
		while(l<r) {
			swap(a[l], a[r]);
			l++; r--;
			}
		}
	}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		ktao();
		ok = 1;
		while(ok) {
			for(int i=1;i<=n;i++) {
				cout << a[i];
			}
			cout << " ";
			sinh();	
		}
		cout << endl;
	}
}