#include <iostream>
void bubble_sort(int A[],int n){
    int flag=0;
    int temp;
    for(int i=0;i<n-1 && !flag;i++){
        flag=1;
        for(int j=n-1;j>i;j--){
            if(A[j]<A[j-1]){
                flag=0;
                temp=A[j];
                A[j]=A[j-1];
                A[j-1]=temp;
            }
        }
    }
}

int main(){
    int n;
    std::cout<<"Enter the number of elements:";
    std::cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}

