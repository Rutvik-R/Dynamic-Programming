#include <bits/stdc++.h>
using namespace std;

/*
int ans(vector<int> dp, int n)
{
    if (dp[n] != -1)
        return dp[n];
    if (n == 1 || n == 2)
    {
        cout<<endl;
        for (int i = 0; i < n + 1; i++)
        {
            cout << dp[i] << " ";
        }
        cout<<endl;
        return n;
    }

    return dp[n] = ans(dp, n - 1) + ans(dp, n - 2);
}

int main()
{ 
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    for (int i = 0; i < n + 1; i++)
    {
        cout << dp[i] << " ";
    }

    cout << endl
         << ans(dp, n) << endl;

    for (int i = 0; i < n + 1; i++)
    {
        cout << dp[i] << " ";
    }
    return 0;
}

*/

int main() {
    int n;
    cin>>n;
    int a1=1 , a2 =2  , a3;
    for (int i = 2; i < n; i++)
    {
        a3 = a1 +a2 ;
        a1 = a2 ;
        a2 = a3;
    }
    cout<<a2 ;
    return 0 ;
}