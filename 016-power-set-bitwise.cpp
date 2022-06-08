#include <bits/stdc++.h>
using namespace std;

void power_set(string str)
{
    int len = str.length();
    int power_size = pow(2, len);

    for (int i = 0; i < power_size; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i & (1 << j))
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
}

int main(int argc, char *argv[])
{
    string s = "abc";
    power_set(s);
    return 0;
}
