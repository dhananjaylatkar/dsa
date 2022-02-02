#include <bits/stdc++.h>
using namespace std;
void freq_sorted(int arr[], int n)
{
    int curr = arr[0];
    int freq = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == curr)
        {
            freq++;
        }
        else
        {
            cout << curr << " " << freq << endl;
            curr = arr[i];
            freq = 1;
        }
    }
    cout << curr << " " << freq << endl;
}
int main (int argc, char *argv[])
{
    int n = 6;
    int arr[] = {10, 10, 10, 25, 30, 30};
    freq_sorted(arr, n);
    return 0;
}

