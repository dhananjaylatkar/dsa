#include <bits/stdc++.h>
using namespace std;

int lonely_num(int num[], int n)
{
    int res = 0;
    for (size_t i = 0; i < n; i++) {
        res = res^num[i];
    }
    return res;
}

int main (int argc, char *argv[])
{
    int n = 5;
    int num[] = {3, 2, 2, 1, 1};
    cout << lonely_num(num, n) << endl;
    return 0;
}
