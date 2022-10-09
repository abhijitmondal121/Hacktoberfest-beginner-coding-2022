int dp[1001][1001];
int knapsack(vector<int>&A,vector<int>&B,int n,int C)
{
    if(n==0 || C==0){return 0;}
    if(dp[n][C]!=-1) return dp[n][C];
    if(B[n-1]<=C)
    {
        return dp[n][C]=max(A[n-1]+knapsack(A,B,n-1,C-B[n-1]),knapsack(A,B,n-1,C));
    }else if(B[n-1]>C)
    {
        return dp[n][C]=knapsack(A,B,n-1,C);   
    }
}
int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    memset(dp,-1,sizeof(dp));
    int ans=knapsack(A,B,A.size(),C);
    return ans;
}