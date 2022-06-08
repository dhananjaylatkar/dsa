#include <bits/stdc++.h>
using namespace std;

vector<int> span(vector<int> &stocks)
{
    vector<int> res;
    int n = stocks.size();
    // Use stack to save index of previous larger element
    // For each elem in input, pop stack up until current elem is less than
    // top elem of stack.
    // To get span of curr elem, use "i-top".
    // If no greater elem is found in stack, thn span is "i+1".
    stack<int> s;
    s.push(0);
    res.push_back(1);

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && stocks[s.top()] <= stocks[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            res.push_back(i + 1);
        }
        else
        {
            res.push_back(i - s.top());
        }
        s.push(i);
    }

    return res;
}

int main(int argc, char *argv[])
{
    vector<int> stocks = {60, 10, 20, 40, 35, 30, 50, 70, 65};
    vector<int> res = span(stocks);
    for (auto s : stocks) cout << s << " ";
    cout << endl;
    for (auto r : res) cout << r << " ";
    cout << endl;
    return 0;
}
