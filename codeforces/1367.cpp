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
    int n, evn = 0, odd = 0, m[45], t;

    si(t);

    while (t)
    {
        t--;
        si(n);

        evn = 0;
        odd = 0;

        for (int i = 0; i < n; i++)
        {
            si(m[i]);

            if (m[i] % 2 != i % 2)
            {
                if (i % 2)
                {
                    evn++;
                }
                else
                {
                    odd++;
                }
            }
        }

        if (odd == evn)
        {
            pi(odd);
        }
        else
        {
            pi(-1);
        }
    }

    return 0;
}