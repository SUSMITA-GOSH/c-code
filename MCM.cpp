#include<iostream>
#include<vector>
#define int long long
const int  N=102,MOD=1E9+7;
int a[N];
int dp[N][N];

using namespace std;
int MCM(int i,int j)
{
     if(i==j)
     return 0;
     if(dp[i][j]!=-1)
     return dp[i][j];
     
     dp[i][j]=MOD;
     for(int k=i;k<j;k++)
     {
        dp[i][j]=min(dp[i][j],MCM(i,k)+MCM(k+1,j)+a[i-1]*a[k]*a[j]);
     }
     return dp[i][j];
}


signed main()
{

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    memset(dp,-1,sizeof dp);
    cout<<MCM(1,n-1)<<endl;

}