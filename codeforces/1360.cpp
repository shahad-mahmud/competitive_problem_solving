#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long

#define si(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

#define pi(x) printf("%d\n", x)

int main()
{
    int n, t, arr[55];

    si(t);

    while (t)
    {
        t--;
        si(n);
        int min_dif = 123456789;

        for (int i = 0; i < n; i++)
        {
            si(arr[i]);
        }

        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] - arr[i] < min_dif)
                min_dif = arr[i + 1] - arr[i];
        }

        pi(min_dif);
    }

    return 0;
}