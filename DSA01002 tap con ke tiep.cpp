	#include<bits/stdc++.h>
	
	using namespace std;
	
	int main() {
		int t; cin >> t;
		while(t--) {
			int n,k;
			cin >> n >> k;
			int a[n];
			for(int i =1;i<=k;i++) cin >> a[i];
			int i =k;
			while(i>=1 && n-k+i == a[i] ) i--;
			if(i<=0) {
				for(int i =1;i<=k;i++) 
				cout << i << " ";
				cout << endl;
			}
			else {
				a[i] += 1;
				for(int j=i+1;j<=k;j++) {
					a[j] = a[j-1] +1;
				}		
				for(int i =1;i<=k;i++) 
				cout << a[i] << " ";
				cout << endl;
			}
		}
	}
	// 1 2 3
	//  n= 5, k =3, i =3, a[3] = 5
	//  1