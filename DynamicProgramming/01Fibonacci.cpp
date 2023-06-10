#include<iostream>
#include<vector>
using namespace std;

int fibonacciTopDown(int n,vector<int> &dp){
    //Step 1
    if(n<=1){
        cout<<"step1"<<endl;
        return n;
    }
    //Step 3
    if(dp[n]!=-1){
        cout<<"step3"<<endl;
        return dp[n];
    }
    //Step 2
    cout<<"step2"<<endl;
    dp[n]=fibonacciTopDown(n-1,dp)+fibonacciTopDown(n-2,dp);
    return dp[n];
}

int fibonacciBottomUp(int n){
//    step 1
    vector<int> dp(n+1,-1);
//    step 2
    dp[0]=0;
    dp[1]=1;
//    step 3
    for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
//    step 4
    return dp[n];
}

int iterative(int n){
    int p1=1;
    int p2=0;
    if(n<=1)return n;
    for(int i=2;i<=n;i++){
        int current=p1+p2;
        p2=p1;
        p1=current;
    }
    return p1;
}

int main(){
    int n=6;
    vector<int> dp(n+1,-1);
//    int fib=fibonacciTopDown(n,dp);
//    int fib=fibonacciBottomUp(n);
    int fib=iterative(6);
    cout<<fib;
    return 0;
}
