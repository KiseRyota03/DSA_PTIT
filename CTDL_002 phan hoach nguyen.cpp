#include<bits/stdc++.h>

using namespace std;
// tim ai !=1
// giam don vi ai 1 don vi 
// bieu dien so moi duoi dang so vua giam
int ok, n, a[10000];
int b[100] = {0}; // mang nhi phan

void ktao() {
	for(int i =1;i<=n;i++) b[i] = 0;
}
void sinh(){
	int i = n;
	while(i>=1 && b[i] ==1) {
		b[i] = 0;
		i--;
	}
	if(i==0) ok =0;
	else b[i] = 1;
}

bool check(int a[],int b[], int n,int k) {
	int sum = 0;
	for(int i=1;i<=n;i++) {
		if(b[i] == 1 ) sum += a[i];
	}	
	if(sum==k) return true;
	else return false;
}
int main() {
	int k;
	ok =1;
	cin >> n >> k;
	ktao();
	int dem =0;
	for(int i=1;i<=n;i++) cin >> a[i]; // cac so de cong
	while(ok) {
		if(check(a,b,n,k)) {
			for(int i=1;i<=n;i++) {
				if(b[i] == 1) cout << a[i] << " ";      
			}
			cout << '\n';
			dem++;	 
		}
		sinh();
	}
		cout << dem << " ";
}