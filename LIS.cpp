#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

const int N = 1E3+7;
int dp[N];

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++) {
    dp[i] = 1;
}


    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[i] > a[j])
                dp[i] = max(dp[i], 1 + dp[j]);
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;

    return 0;
}
