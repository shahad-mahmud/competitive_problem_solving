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
    sll(t);

    while (t--)
    {
        sll(n), sll(m);
        bool prev = true;

        if (n == m && prev)
        {
            count++;
            prev = true;
        }
        else
        {
            if (count < 3)
            {
                count = 0;
            }
            prev = false;
        }
    }

    if (count >= 3)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}