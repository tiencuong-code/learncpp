#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,p,c;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int q; cin>>q;
   	for(int i=1;i<=q;i++) 
   	{
   		cin>>p;
   		if(p==1) {
			cin>>c;
   			v.push_back(c);
   			for(int j=0;j<v.size();j++) cout<<v[j]<<" ";
   			cout<<endl;
   		}
   		if(p==2) {
		if (!v.empty()) {
    		v.pop_back();
			}
   		for(int j=0;j<v.size();j++) cout<<v[j]<<" ";
   		cout<<endl;}
   		if(p==3){

   		sort(v.begin(),v.end());
   		for(int j=0;j<v.size();j++) cout<<v[j]<<" ";
   		cout<<endl;}
   		if(p==4){
		   
   		sort(v.begin(),v.end(),greater<int>());
   		for(int j=0;j<v.size();j++) cout<<v[j]<<" ";
   		cout<<endl;}
   		if(p==5)
   		cout<<v.size()<<endl;
	}

}
