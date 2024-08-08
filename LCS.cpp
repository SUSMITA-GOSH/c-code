#include<iostream>
#include<string>
#define int long long
const int  N=1E3+7;
//int a[N];
int dp[N][N];
using namespace std;
int lcs(string &s1,string &s2,int n,int m)
{
    if(n==0 || m==0)
    return 0;
    if(dp[n][m]!=-1)
    return dp[n][m];
    if(s1[n-1]==s2[m-1])
     dp[n][m]=1+lcs(s1,s2,n-1,m-1);
    else
    dp[n][m]=max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
    return dp[n][m];
}


signed main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    memset(dp,-1,sizeof dp);
     cout<<lcs(s1,s2,n,m)<<endl;


}
