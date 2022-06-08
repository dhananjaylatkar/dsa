#include <bits/stdc++.h>
using namespace std;

int sum_of_dig(int n)
{
    if (n < 10)
    {
        return n;
    }
    return n % 10 + sum_of_dig(n / 10);
}

int main(int argc, char *argv[])
{
    int num;
    cin >> num;
    cout << sum_of_dig(num) << endl;
    return 0;
}
