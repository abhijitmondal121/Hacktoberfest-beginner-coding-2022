#include<bits/stdc++.h>
using namespace std;
//0-1 knapsack using top down approach
int KnackSnap(vector<int>wt,vector<int>val,int W,int n){
  int t[n+1][W+1];
   //Initialize matrix -->Base Condition
 for(int i=0;i<n+1;i++){
   for(int j=0;j<W+1;j++){
     if(i==0||j==0)
       t[i][j]=0;
   }
 }
   //Choice Diagram to code
  for(int i=1;i<n+1;i++){
   for(int j=1;j<W+1;j++){
      //1. In case of choice
     if(wt[i-1]<=j){
         t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
     }
       //No choice
     else if(wt[i-1] > j){
                    t[i][j] = t[i-1][j];
                }
     }
    }
  return t[n][W];
}
int main(){
vector<int>wt;
  vector<int>val;
int n;
  cout<<"Enter the size of vectors :"<<endl;
  cin>>n;
int W,x,y;
cout<<"Enter the weight array"<<endl;
for(int i=0;i<n;i++){
  cin>>x;
   wt.push_back(x);
}
 cout<<"Enter the values for respective weights :"<<endl;
 for(int i=0;i<n;i++){
   cin>>y;
   val.push_back(y);
 }
 cout<<"Enter the maximum capacity of the bag :";
 cin>>W;
 cout<<"The maximum Profit here is :"<<KnackSnap(wt,val,W,n);
return 0;
}
