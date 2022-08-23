#include<bits/stdc++.h>

using namespace std;

int n;
void check(string s) {
	int len = s.length();
	if(s[0] != 'H' || s[len-1] != 'A') return;
	for(int i =0;i<len;i++) {
		if(s[i] == s[i+1] && s[i] == 'H') return;
	}
	cout << s << endl;
}

void Try(string s) {
	if(s.size() == n) check(s);
	else {
		Try(s + 'A');
		Try(s + 'H');  
	} 
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		Try("");
	}
}