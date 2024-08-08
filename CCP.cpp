#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // Create a DP table of size (n+1) x (w+1)
    vector<vector<int> > dp(n + 1, vector<int>(w + 1, 0));

    // Base case: There's exactly one way to make 0 amount (use no coins)
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            if (coins[i-1] > j) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
            }
        }
    }

   
    cout << dp[n][w] << endl;

    return 0;
}
