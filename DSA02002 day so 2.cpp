#include<bits/stdc++.h>

using namespace std;

int a[10000], n ;
stack<string> st;
string s;
void ktao(int n ) {
	if(n==0) return;
	string s = "[";
	for(int i =1;i<n;i++) {
		s += to_string(a[i]);
		s += " ";
	}
	s += to_string(a[n]) + "]";
	st.push(s);
}

void bt(int n ){
	for(int i =1;i<n;i++) {
		a[i] = a[i+1] + a[i];
	}
	ktao(n-1);
	if(n>2) bt(n-1);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=1;i<=n;i++) cin >> a[i];
		ktao(n);
		bt(n);
		while(st.size()) {
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
}