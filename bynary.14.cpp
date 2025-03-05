#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m,x; cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	sort(b,b+m);
	for(int i=0;i<m;i++) cout<<b[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++){
		auto it=lower_bound(b,b+m,a[i]);
		cout<<it-b<<" ";
	}
}
