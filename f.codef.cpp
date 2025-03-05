#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n,d1=0,d2=0;
	cin>>n;
	vector<int> v(n);
	vector<int> le;
	vector<int> chan;
	for(int i=0;i<n;i++) {
		cin>>v[i];
		if(v[i]%2==0) chan.push_back(v[i]);
		else le.push_back(v[i]);
	}
	sort(chan.begin(),chan.end());
	sort(le.begin(),le.end(),greater<int>());
	
	for(int i=0;i<n;i++){
		if(v[i]%2==0){
			cout<<chan[d1]<<" ";
			d1++;
		}
		else{
			cout<<le[d2]<<" ";
			d2++;	
		}
	}

	
	
	


}
