// this program is written by Deepansh Jain (55).

#include<iostream>
#include<stdlib.h>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void quicksort(int a[],int L,int R);
int partition(int a[],int L,int R);
void swap(int &x,int &y);
int main()
{
	int n;
	cout<<"how many random elements you want in your array\n";
	cin>>n;
	int a[n];
	fillarray(a,n);
	
	cout<<"\n*********\nbefore sorting\n";
	displayarray(a,n);
	
	cout<<"\n*******\n";
	quicksort(a,0,n-1);
	
	cout<<"\n*******\nafter sorting\n";
	displayarray(a,n);
	
	cout<<"\n******\n";
	
	return 0;
	
}
void fillarray(int a[],int n){
	cout<<"enter element ";
	for(int i=0;i<=n-1;i++)
	cin>>a[i];
}
void displayarray(int a[],int n){
	cout<<"\n the array is ";
	for(int i=0;i<=n-1;i++)
	cout<<"\t"<<a[i];
}
void quicksort(int a[],int L,int R)
{
	if(L<R)
	{
		int pos=partition(a,L,R);
		quicksort(a,L,pos-1);
		quicksort(a,pos+1,R);
		
	}
}
int partition (int a[],int L,int R)
{
	int i=L-1;
	int pivot=a[R];
	for(int j=L;j<=R-1;j++)
	{
		if(a[j]<pivot)
		swap(a[++i],a[j]);
		
	}
	swap(a[++i],a[R]);
	return i ;
}
void swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
