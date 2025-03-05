#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m;
		vector<int> v(n+1);
		for(int i=1;i<=n;i++) cin>>v[i];
		long long max=-9999999999;
		for(int i=1;i<=n;i++) 
		if(v[i]>max) {
			max=v[i];
			k=i;
		}
		v.insert(v.begin()+k-1,3);
		for(int i=1;i<=n+1;i++) if(v[i]<0) cout<<v[i]<<" ";
		for(int i=1;i<=n+1;i++) if(v[i]>=0) cout<<v[i]<<" ";
		cout<<endl;
	}	
}
