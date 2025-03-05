#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a[n+10];
	map <long long, int> mp;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i=0;i<n;i++) 
	{
		if(mp[a[i]]!=0)
		cout<<a[i]<<" "<<mp[a[i]]<<endl;
		mp[a[i]]=0;
		
	}
	//for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
}
