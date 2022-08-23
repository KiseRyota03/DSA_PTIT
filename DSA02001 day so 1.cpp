#include<bits/stdc++.h>

using namespace std;

int a[1000];

void in(int n) {
	if(n==0) return;
	cout << '[';
	for(int i =1;i<n;i++) cout << a[i] << ' ';
	cout << a[n] << ']' << endl;
}

void bt(int n) {
	for(int i =1;i<=n;i++) {
		a[i] = a[i+1] + a[i];
	}
	in(n-1);
	if(n>2) bt(n-1);
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i =1;i<=n;i++) {
			cin >> a[i];
		}
		in
		bt(n);
	}
}