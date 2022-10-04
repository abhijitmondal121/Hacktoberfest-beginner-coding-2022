#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) +fib(n-1);
}

int main(){
    //factorial of a number:
    // 6!=6*5*4*3*2*1= 720
    //n! n * (n-1)!
    int a;
    cout<<"enter a index number: "<<endl;
    cin>>a;
    cout<<"fibonacci value at index of a is: "<<fib(a)<<endl;

    return 0;
}
