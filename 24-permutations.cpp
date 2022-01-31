#include <bits/stdc++.h>
using namespace std;
void swap(string &str, int i, int j)
{
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}
void perm(string &str, int index = 0)
{
    int length = str.length();
    if (length-1 == index)
    {
        cout << str << endl;
        return;
    }
    for (int j = index; j < length; j++) {
        swap(str, index, j);
        perm(str, index+1);
        swap(str, index, j);
    }
}
int main (int argc, char *argv[])
{
    string str;
    cin >> str;
    perm(str);
    return 0;
}
