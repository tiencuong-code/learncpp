#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	set<pair<int,int>> se;
	for(int i=0;i<n;i++) {
		int x,y;cin>>x>>y;
		se.insert({x,y});
	}
	cout<<se.size();
}
