#include<bits/stdc++.h>
int ktra(int a[],int n){
	for(int i=0;i<n-1;i++) if(a[i]<a[i+1]) return 1;
	return 0;
}
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    	int n;cin>>n;
    	int a[n];
    	int max=-10000000;
    	for(int i=0;i<n;i++) cin>>a[i];
    	
    	if(ktra(a,n))
    	{
    	for(int i=0;i<n;i++)
    	{
    		for(int j=n-1;j>i;j--)
    		if(a[j]>a[i]){
    			if(j-i>max) max=j-i;
    			break;
			}
		}
		cout<<max<<endl;
		}
		else cout<<"-1"<<endl;
	
}
    	
}
