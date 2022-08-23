#include<bits/stdc++.h>

using namespace std;

int a[10000],b[10000], n, ok,k, check;
stack<string> st;
string s;
vector<int> v; // danh dau nhung gia tri a[i] thich hop

void ktao() {
	for(int i=1;i<=n;i++) b[i] = 0;
}

void sinh() {
	int i =n;
	while(i>=1 && b[i] == 1) {
		b[i] = 0;
		i--;
	}
	if(i==0) ok =0;
	else b[i] =1;
}

void solve() {
	int sum =0;
	for(int i =1;i<=n;i++) {
		if(b[i]) {
			sum+= a[i];
			v.push_back(a[i]);
		}
	}
	if(sum== k) {
		check =1;
		s= "[";
		int len = v.size();
		for(int i =0;i<len-1;i++) {
			s += to_string(v[i]) + " ";
		}
		s += to_string(v[len-1]) + "]";
		st.push(s);
		v.clear();
	}
	else v.clear();
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i=1;i<=n;i++) cin >> a[i];
		for(int i=1;i<=n-1;i++) {
			for(int j =i+1;j<=n;j++) {
				if(a[i] > a[j]) swap(a[i],a[j]);
			}
		}
		ktao();
		ok =1;
		check = 0;
		while(ok) {
			solve();
			sinh();
		}
		if(check) {
			while(st.empty() ==0) {
				cout << st.top() << " ";
				st.pop();
			}
			cout << endl;
		}
		else cout << "-1" << endl; 
	}
}