#include <bits/stdc++.h>
using namespace std;
void leaders(int arr[], int n)
{
    /* Leader is an element when
     * it's greater than all of
     * following elements.
     */
    int curr_leader = arr[n - 1];  // last elem is always a leader
    cout << curr_leader << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > curr_leader)
        {
            curr_leader = arr[i];
            cout << curr_leader << endl;
        }
    }
}
int main(int argc, char *argv[])
{
    int n = 7;
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    leaders(arr, n);
    return 0;
}
