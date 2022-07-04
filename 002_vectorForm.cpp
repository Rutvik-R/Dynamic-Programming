#include <bits/stdc++.h>
using namespace std;

int febona(int n, vector<int> &dp)
{
    if (n == 1 || n == 0)
        return n;
    if ((dp[n]) != -1)
    {
        return dp[n];
    }
    
    return dp[n] = febona(n - 1, dp) + febona(n - 2, dp);
}

int main()
{
    int n;
    cout << "Enter a no which you find febona :   ";
    cin >> n;
    vector<int> dp(n + 1, -1);
    for (int i = 0; i < n + 1; i++)
    {
        cout << dp[i] << " ";
    }
    cout <<endl<< febona(n - 1, dp);
    cout<<endl;
    for (int i = 0; i < n + 1; i++)
    {
        cout << dp[i] << " ";
    }
    return 0;
}
