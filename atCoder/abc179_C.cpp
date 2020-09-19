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

    for (int i = 1; i < t; i++)
    {
        if (t % i == 0)
        {
            count += (t / i) - 1;
        }
        else
        {
            count += floor(t / (double)i);
        }
    }

    printf("%lld\n", count);

    return 0;
}