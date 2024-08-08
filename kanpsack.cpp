#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

const int N = 1E3+7;
int dp[N][N];
using namespace std;

vector<int> wt; // Store weights
vector<int> val; // Store values

int knapsack(int n, int w) {
    if (n <= 0)
        return 0;
    if (w <= 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];

    if (wt[n-1] > w)
        dp[n][w] = knapsack(n-1, w);
    else
        dp[n][w] = max(knapsack(n-1, w), knapsack(n-1, w - wt[n-1]) + val[n-1]);

    return dp[n][w];
}

int main() {
    int n;
    cin >> n;

    wt.resize(n);
    val.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    memset(dp, -1, sizeof dp);

    int w;
    cin >> w;
    cout << knapsack(n, w) << endl;

    return 0;
}


