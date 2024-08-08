#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n = 3;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        sort(a.begin(), a.end());  

        for (int i = 0; i < 5; i++) {
            if (a[0] + 1 <= a[1]) {
                a[0]++;
            } else if (a[1] + 1 <= a[2]) {
                a[1]++;
            } else {
                a[2]++;
            }
            sort(a.begin(), a.end());
        }

        int max_product = a[0] * a[1] * a[2];
        cout << max_product << endl;  
    }

    return 0;
}
