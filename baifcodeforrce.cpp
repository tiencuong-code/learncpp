#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k,g;
	map<int,int> mp;
	cin>>n>>k;
	int a[n+10];
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i=1;i<=k;i++) 
	{
		cin>>g;
		mp[g]=0;
	}
	int kt=0;
	for(int i=0;i<n;i++) {
	
		if(mp[a[i]]!=0) {
		cout<<a[i]<<" ";
		kt=1;
	}}
	if(kt==0) cout<<"-1";
	
}
