#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;long long a[n];
	cin>>n;
	map <long long, int> mp;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		mp[a[i]]++;
	}
	for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
}
