#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int q; cin>>q;
	sort(a,a+n);
	while(q--){
		int l,r;
		cin>>l>>r;
		auto it1=lower_bound(a,a+n,l);
		auto it2=upper_bound(a,a+n,r);
		
		if(it2==0) cout<<"0"<<endl;
		else cout<<it2-it1<<endl;
	
	}
	

	

	}


