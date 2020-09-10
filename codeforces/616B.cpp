#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long

#define si(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

#define pi(x) printf("%d", x)

int main()
{
    ll t, n, count = 0, m;
    ll costs[105][105], row_cost = -1, row;
    sll(m), sll(n);

    for (int i = 0; i < m; i++)
    {
        ll min_cost = 1000000009;

        for (int j = 0; j < n; j++)
        {
            sll(costs[i][j]);

            if (costs[i][j] < min_cost)
                min_cost = costs[i][j];
        }

        if (min_cost > row_cost)
        {
            row = i;
            row_cost = min_cost;
        }
    }

    ll min_cost = 1000000009;

    for (int i = 0; i < n; i++)
    {
        if (costs[row][i] < min_cost)
        {
            min_cost = costs[row][i];
        }
    }

    printf("%lld\n", min_cost);

    return 0;
}