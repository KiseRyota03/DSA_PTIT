#include<bits/stdc++.h>

using namespace std;

string a[10000];

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		a[0] = 'A';
		a[1] = 'B';
		int pos = 2;
		int k = 0;
		while(a[k].size() < n) {
			a[pos++] = a[k] + 'A';
			a[pos++] = a[k] + 'B';
			k++;
		}
		for(int i =k;i<pos;i++) {
			cout << a[i];
			cout << " ";
		}
		cout << endl;
	}
}