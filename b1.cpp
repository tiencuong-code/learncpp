#include<iostream>
#include<cmath>
#include<iomanip> 
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int a[100005];
	int b[100005]; 
	while(t--)
	{
		cin>>n;
		int sum=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		for(int i=0;i<n;i++) sum=sum+abs(a[i]-b[i]);
		cout<<fixed<<setprecision(2)<<(double)sum/n<<endl;
		
	}
}
