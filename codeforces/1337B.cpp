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
    ll t, n, count = 0, m, x, new_x;
    sll(t);

    while (t--)
    {
        sll(x), sll(n), sll(m);

        while (n-- && x > 0)
        {
            new_x = floor(x / 2) + 10;
            if (new_x >= x)
            {
                break;
            }
            x = new_x;
        }

        while (m-- && x > 0)
        {
            x -= 10;
        }

        if (x <= 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}