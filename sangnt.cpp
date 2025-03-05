#include<iostream>
using namespace std;
int a[1000001];

void sangnt(){
	a[0]=a[1]=0;
	for(int i=1;i<=1000000;i++) a[i]=1;
	for(int i=2;i*i<=1000000;i++)
	if (a[i]){
		for(int j=i*i;j<=1000000;j+=i)
			a[j]=0;
	}
}
int main()
{
	sangnt();
	cout<<a[3];
}
