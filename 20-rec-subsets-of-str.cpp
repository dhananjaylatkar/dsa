#include <bits/stdc++.h>
using namespace std;

void subs(string &str, string curr = "", int index = 0)
{
    if (str.length() == index)
    {
        cout << curr << endl;
        return;
    }
    subs(str, curr, index + 1);
    subs(str, curr + str[index], index + 1);
}
int main(int argc, char *argv[])
{
    string str;
    cin >> str;
    subs(str);
    return 0;
}
