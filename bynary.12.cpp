#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,x; cin>> n >> x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	auto it=upper_bound(a,a+n,x);
	if(*(it-1)==x) cout<<it-a-1;
	else cout<<" khong tim thay";
}
