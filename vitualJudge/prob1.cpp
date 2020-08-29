#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
#include <cmath>
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
        count++;
        si(n);

        if (n == -1 || count > 20)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            si(t);
            v.push_back(t);
        }

        sort(v.begin(), v.end());

        int middle;

        if (n % 2)
        {
            // odd len
            middle = n / 2;
            median = v[middle];
        }
        else
        {
            // even len
            middle = n / 2;
            median = (v[(n - 1) / 2] + v[middle]) / 2;
        }

        printf("%d\n", median);
    }

    return 0;
}