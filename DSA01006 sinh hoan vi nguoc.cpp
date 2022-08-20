#include<bits/stdc++.h>

using namespace std;

int a[100], k,ok,n;
vector<int> v;
void ktao() {
	for(int i=1;i<=n;i++) a[i] = i;
}

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

void nhap() {
	for(int i =1;i<=n;i++) v.push_back(a[i]);
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		ktao();
		ok = 1;
		while(ok) {
			nhap();
			sinh();
		}
		int x = v.size();
		while(x>0) {
		for(int i = x-n+1;i<=x;i++) {
			cout << v[i-1];
		}	
		cout << " ";	
		x-= n;
		}
		cout << endl;
		v.clear();
	}
	}