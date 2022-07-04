#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a0 = 0, a1 = 1, a2;
    cout << "Enter a no which you find febona :   ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        a2 = a0 + a1;
        a0 = a1;
        a1 = a2;
        cout<<i<<" "<<a0<<" "<<a1<<" "<<a2<<endl;
    }

    cout << a1;
    return 0;
}