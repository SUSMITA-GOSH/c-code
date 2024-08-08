#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> r >> l;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count = 0;
        long long sum=0;int s=0;
        
        
            
            for(int i=0;i<n;i++)
            {
                if(a[i]>l)
                {
                    sum=0;
                    s=1+i;
                    continue;
                }
                sum+=a[i];
                while (sum>l)
                {
                    sum-=a[s];
                    s++;
                }
                if(sum>=r && sum<=l)
                {
                    count++;
                    sum=0;
                    s=i+1;
                }
                
            }
        
        cout << count << endl;
    }
    return 0;
}

