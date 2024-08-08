#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int count=0;
        if(s1.size()<s2.size())
        {
            count=s2.size();
        }
        else{
        int count = s1.size();
        
        for (int i = 0; i < s2.size(); i++) {
            bool found = false;
            for (int j = 0; j < s1.size(); j++) {
                if (s1[j] == s2[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                count++;
            }
        }
        }
        cout << count << endl;
    }
    
    return 0;
}
