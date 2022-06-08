#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
    // N persons are on circle strting with 0
    // k th person is killed every round.
    // Find the index of serviving person.

    if (n == 1)
    {
        return 0;
    }
    return (josephus(n - 1, k) + k) % n;
}

int main(int argc, char *argv[])
{
    int n, k;
    cin >> n;
    cin >> k;
    cout << josephus(n, k) << endl;
    return 0;
}
