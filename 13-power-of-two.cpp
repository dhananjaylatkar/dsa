#include <bits/stdc++.h>
using namespace std;
bool power_2(int n)
{
    if (n == 0)
    {
        return false;
    }
    return ((n & (n-1)) == 0);
}
int main (int argc, char *argv[])
{
    int inp;
    cin >> inp;
    cout << power_2(inp) << endl;
    return 0;
}
