#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
       cin>>n>>m;
       string str;
       cin>>str;
       set<int>a;
       for(int i=0;i<m;i++)
       {
              int x;
              cin>>x;
            a.insert(x);
       }
       string st;
      cin>>st;
      sort(st.begin(),st.end());
      int ind=0;
      for (set<int>::iterator it = a.begin(); it != a.end(); ++it) {
    str[*it - 1] = st[ind];
    ind++;
}


      cout<<str<<endl;
    }
    
}