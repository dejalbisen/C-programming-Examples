#include<iostream>
using namespace std;
using namespace std;
int getWater(int arr[],int n){
	int res=0;
	for(int i=1;i<n-1;i++){
		int res=0;
		int lmax[n];
		int rmax[n];
		lmax[0]=arr[0];
		for(int i=1;i<n;i++)
		lmax[i]=max(arr[i],lmax[i-1]);
		rmax[n-1]=arr[n-1];
		for(int i=n-2;i>=0;i--)
		rmax[i]=max(arr[i],rmax[i+1]);
		for(int i=1;i<n-1;i++)
		res=res+(min(lmax[i],rmax[i]-arr[i]));
		return res;
	}
	return res;
}
int main(){
	int arr[]={5,0,6,2,3},n=5;
	cout<<getWater(arr,n);
}
