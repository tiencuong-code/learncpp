#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
	pair <int,int> a;
	cin>>a.first>>a.second;
	cout<<a.first<<" "<<a.second<<endl;
	//pair long nhau
	pair<int,pair<int,int>> a;
	cout<<a.first;
	cout<<a.second.first<<" "<<a.second.second;
}
