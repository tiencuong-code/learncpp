#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int dem=0;
	sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++){
		auto it=upper_bound(a,a+n,a[i]+k);
		if(*(it-1)==a[i]+k) dem++;
	}
cout<<dem;
}
