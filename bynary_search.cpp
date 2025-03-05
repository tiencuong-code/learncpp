#include<bits/stdc++.h>
using namespace std;

int search(int a[],int n,int x){
	int left=0;int right =n;
	while(left<=right){
		int mid=(left+right)/2;
		if(a[mid]==x) return 1;
		else{
			if(a[mid]>x) right=mid-1;
			else left=mid+1;
		}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    /*
	muon ap dung phai xap xep
	no co san
	
	bynary_search(a,a+n,x) true false
	bynary_search(a+x,a+y+1,x) tim tren doan x,y
	
	lower_bound() : tim phan tu dau tien >= x trong mang, vector tang dan
	upper_bound() : tim phan tu dau tien > x trong mang, vector tang dan
	
	vd auto it = lower_bound(a, a+n, x); tra ve con tro dau tien 
	voi vecto thi auto it=lower_bound(a.begin(),a.end()	,x)
	ket hop voi set--> for(int i=1;i<=10;i++) se.insert(i)--> se.lower_bound(x);
	
	
	int chiso= it-a  vi vi tri ban dau no gan la a, tiep theo la a+1 nen tru di a se ra
	*it la gia tri cua con tro it
	k tim dk x tra ve a+n
	*/
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	if(search(a,n,4)) cout<<"tim thay";
	else cout<<"k tim thay";
}
