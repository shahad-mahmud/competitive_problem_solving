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

int main()
{
    int n, h, count = 0, fh;

    si(n), si(h);

    for (int i = 0; i < n; i++)
    {
        si(fh);

        if (fh > h)
        {
            count += 2;
        }
        else
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}