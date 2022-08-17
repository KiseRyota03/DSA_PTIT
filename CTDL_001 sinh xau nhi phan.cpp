#include<bits/stdc++.h>

using namespace std;

string a[100000];

bool check(string s) {
	int l =0; 
	int r = s.size() -1;
	while(l<r) {
		if(s[l++] != s[r--]) return false;
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	a[0] = "0";
	a[1] = "1";
	int k =0;
	int pos =2;
	for(a[k].length() < n) {
		a[pos++] = a[k] + "0";
		a[pos++] = a[k] + "1";
		k++;
	}
	for(int i=k;i< pos;i++ ) {
		if(check(a[i])) {
			string s = a[i];
			for(int j =0;j<n;j++) {
				cout << s[j] << " ";
			}
			cout << '\n';
		}
	}
}

// a0 = 0 a1= 1 k =0;
// a2 = 00 a3 = 01 k =1
// a4 = 10 a5 = 11 k =2;
// a6 = 000 a7 = 010 k =3; // 6 
// a8 = 100 a9 = 101 k =4;
// a10 = 110 a11 = 111 k=5; pos =11;