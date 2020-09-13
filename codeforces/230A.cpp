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

struct points
{
    int x;
    int y;
} xy[1003];

bool sm(points a, points b)
{
    return a.x < b.x;
}

int main()
{
    ll t, n, count = 0, m, s;
    sll(s), sll(n);

    for (int i = 0; i < n; i++)
    {
        si(xy[i].x), si(xy[i].y);
    }

    sort(xy, xy + n, sm);

    int i;
    for (i = 0; i < n; i++)
    {
        if (xy[i].x < s)
        {
            s += xy[i].y;
        }
        else
        {
            break;
        }
    }

    if (i == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}