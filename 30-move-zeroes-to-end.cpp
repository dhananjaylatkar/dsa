#include <bits/stdc++.h>
using namespace std;
void move_z (int arr[], int n)
{
    int non_z = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[non_z]);
            non_z++;
        }
    }
}
int main (int argc, char *argv[])
{
    int n = 5;
    int arr[] = {0, 9, 0, 5, 4};
    move_z(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

