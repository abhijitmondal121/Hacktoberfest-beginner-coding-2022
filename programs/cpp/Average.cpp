#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n],i,average;
    float sum=0;
    cout<<"Enter array elements : \n";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    sum=sum+a[i];
    cout<<"Average : "<<(sum/n);
}