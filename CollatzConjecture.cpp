#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;
        x++;k--;
        
        while(x != y) {
            if(x%y==0){
            x=x/y;
            
            }
            if(k==0)
            {
                cout<<x<<endl;
            }
            ll p = y - (x % y);
            if (p <= k) {
               x += p;
                k -= p;
            } else {
               cout<<x+k<<endl; 
            }
            
                
            
        }

        

        cout << 1+k%(y-1) << endl;
    }
    return 0;
}

