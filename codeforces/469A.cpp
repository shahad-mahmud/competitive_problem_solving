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

#define pi(x) printf("%d", x)

int main()
{
    int n, p, q, t;
    bool flags[105] = {false};

    si(n);
    si(p);

    for (int i = 0; i < p; i++)
    {
        si(t);

        flags[t] = true;
    }

    si(q);
    for (int i = 0; i < q; i++)
    {
        si(t);

        flags[t] = true;
    }
    int i;
    for (i = 1; i <= n; i++)
    {
        if (flags[i] == false)
        {
            cout << "Oh, my keyboard!";
            break;
        }
    }
    if (i == n + 1)
    {
        cout << "I become the guy.";
    }

    return 0;
}