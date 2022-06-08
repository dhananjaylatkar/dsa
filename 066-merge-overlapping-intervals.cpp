#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int start;
    int end;
};

bool myComp(Interval i1, Interval i2) { return (i1.start <= i2.start); }

void mergeOverlapping(Interval arr[], int n)
{
    sort(arr, arr + n, myComp);
    int res = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[res].end >= arr[i].start)
        {
            arr[res].start = min(arr[res].start, arr[i].start);
            arr[res].end = max(arr[res].end, arr[i].end);
        }
        else
        {
            res++;
            arr[res] = arr[i];
        }
    }

    for (int i = 0; i <= res; i++)
    {
        cout << "(" << arr[i].start << ", " << arr[i].end << ")"
             << " ";
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    Interval arr[] = {{5, 10}, {3, 15}, {18, 30}, {2, 7}};
    int n = 4;
    mergeOverlapping(arr, n);
    return 0;
}
