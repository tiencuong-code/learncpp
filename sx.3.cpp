#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
	sort(begin(v),end(v),cmp);
	int cnt=1;
	int j=1,i=0;
	while(i<n-1 && j<n){
		if(v[j].first>=v[i].second) {
			cnt++;
			i=j;
			j++;
		}
		else j++;
	}
	cout<<cnt;
	
}
