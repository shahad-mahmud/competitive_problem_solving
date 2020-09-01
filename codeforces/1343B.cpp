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
    int n, t;
    si(t);

    while (t)
    {
        si(n);

        if (n % 4 == 0)
        {
            printf("YES\n");
            int even = 0;
            int odd = 1;
            // it can be devided into two parts
            for (int i = 0; i < n / 2; i++)
            {
                even += 2;
                printf("%d ", even);
            }

            for (int i = 0; i < n / 2 - 1; i++)
            {
                printf("%d ", odd);
                odd += 2;
            }
            odd += n / 2;
            printf("%d\n", odd);
        }
        else
        {
            printf("NO\n");
        }
        t--;
    }

    return 0;
}