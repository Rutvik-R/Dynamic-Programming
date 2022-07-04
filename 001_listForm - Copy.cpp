// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long febona(long long n, long long dp[])
{
    if (n == 1 || n == 0)
        return n;
    if ((dp[n]) != -1)
        return dp[n];

    return dp[n] = febona(n - 1, dp) + febona(n - 2, dp);
}

int main()
{
    long long n;
    cout << "Enter a no which you find febona :   ";
    cin >> n;
    long long dp[n + 1];
    memset(dp, -1, sizeof dp);
    cout << febona(n - 1, dp) << endl;
    return 0;
}
