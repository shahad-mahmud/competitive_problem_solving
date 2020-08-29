#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

#define si(x) scanf("%d", &x)

int main()
{
    int n, t, count = 0;
    int median;
    int arr[30];

    vector<int> v;

    while (1)
    {
        si(n);

        if (n == -1)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            si(t);
            arr[i] = t;
        }

        sort(arr, arr+n);

        int middle;

        if (n % 2)
        {
            // odd len
            middle = n / 2;
            median = arr[middle];
        }
        else
        {
            // even len
            middle = n / 2;
            median = (arr[middle - 1] + arr[middle]) / 2;
        }

        printf("%d\n", median);
        // v.clear();
    }
    return 0;
}