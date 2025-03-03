#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> arrays(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; j++)
        {
            cin >> arrays[i][j];
        }
    }
    for (int i = 0; i < q; i++)
    {
        int arrayindex, arrayelement;
        cin >> arrayindex >> arrayelement;
        cout << arrays[arrayindex][arrayelement] << endl;
    }
    return 0;
}
