#include<bits/stdc++.h>

using namespace std;

int a[1000],ok,m,k,x;
set<int>s;
vector<int>v;

void ktao() {
	for(int i=1;i<=k;i++) a[i] =i;
}
void sinh() {
	int i = k;
	while(i>=1 && a[i] == m -k+i) i--;
	if(i==0) ok =0;
	else {
		a[i]++;
		for(int j =i+1;j<=k;j++) {
			a[j] = a[j-1] +1;
		}
	}
}

int main() {
	int n;
	cin >> n >> k;
	for(int i=1;i<=n;i++) {
		cin >> x;
		s.insert(x);
	}
	m = s.size();
	for(auto y: s) {
		v.push_back(y);
	}
	// vector v: 1 2 3 4 5 
	ktao();
	ok =1;
	while(ok) {
		for(int i =1;i<=k;i++) {
			cout << v[a[i]-1] << " ";
		}
		cout << endl;
		sinh();
	}
}