#include <iostream>
#include <algorithm> 
#include <cmath> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int a1 = abs(a - a) + abs(a - b) + abs(a - c);
        int a2 = abs(a - b) + abs(b - b) + abs(b - c);
        int a3 = abs(a - c) + abs(b - c) + abs(c - c);
        int m = min({a1, a2, a3});
        cout << m << endl;
    }
    return 0;
}
