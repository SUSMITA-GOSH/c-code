#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, l;
        cin >> n >> k >> l;
        string str;
        cin >> str;
        int cnt = 0;
        bool possible = true;
        
        for (int i = 0; i < n; i+=k) {
            if (str[i] == 'C') {
                
                if(n>k)
                possible = false;
                break;
            } else if (str[i] == 'W' ) {
                cnt++;
                if (cnt > l) {
                    possible = false;
                    break;
                }
            
            }
        }

        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
