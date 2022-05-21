#include <iostream>
#include <string>
using namespace std;

/*
 * reverse words in a string
 * "Hello World" => "World Hello"
 */

void rev(string &str)
{
    /*
     * first reverse all individual words
     * then reverse whole string
     */
    int start = 0;
    int end = 0;
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str.begin() + start, str.begin() + start + end);
            start = i + 1;
        }
        else
        {
            end++;
        }
    }

    reverse(str.begin() + start, str.begin() + len);
    reverse(str.begin(), str.end());
}
int main(int argc, char *argv[])
{
    string str = "hello world";
    cout << str << endl;
    rev(str);
    cout << str << endl;

    return 0;
}
