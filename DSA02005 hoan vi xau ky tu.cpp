#include<bits/stdc++.h>

using namespace std;
string s;
int a[10000],ok;
void ktao() {
	for(int i =1;i<=s.size();i++) a[i] =i;
}

void sinh() {
	int n =s.size();
	int i = n-1;
	while(i>=1 && a[i] > a[i+1]) i--;
	if(i==0) ok =0;
	int k = n;
	while(a[i] > a[k]) k--;
	swap(a[i],a[k]);
	int l=i+1, r =n;
	while(l<r) {
		swap(a[l], a[r]);
		l++; r--;
	}  
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> s;
		ktao();
		ok =1;
		while(ok) {
			for(int i =0;i<s.size();i++) {
				cout << char('A' + a[i+1] -1);
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}