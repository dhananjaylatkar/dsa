#include <bits/stdc++.h>
using namespace std;

bool kth(int num, int k)
{
    if (num & (1 << (k - 1))) return true;

    return false;
}
bool kth_right(int num, int k)
{
    if ((num >> (k - 1)) & 1) return true;

    return false;
}
int main(int argc, char *argv[])
{
    int inp1;
    int inp2;
    cin >> inp1;
    cin >> inp2;
    cout << kth(inp1, inp2) << endl;
    cout << kth_right(inp1, inp2) << endl;
    return 0;
}
