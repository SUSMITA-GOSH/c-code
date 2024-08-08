#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char ch;
        long long int row = -1, row1 = -1;
        long long int col = 1e9, col1 = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ch; 
                if (ch == '#' && row == -1) row = i + 1;
                if (ch == '#') row1 = i + 1;
                if (ch == '#' && col > j + 1) col = j + 1;
                if (ch == '#' && col1 < j + 1) col1 = j + 1;
            }
        }
        
        int x = (row + row1) / 2;
        int y = (col + col1) / 2;
        cout << x << " " << y << endl;
    }

    return 0;
}

