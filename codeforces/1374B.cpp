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

#define max 32000

vector<long> prime;
bool mark[max] = {false};

int seive()
{
    prime.push_back(2);
    for (long i = 3; i < max; i = i + 2)
    {
        if (mark[i] == false)
        {
            prime.push_back(i);
            for (int j = i * i; j < max; j += (i + i))
                mark[j] = true;
        }
    }

    return 0;
}

int main()
{
    ll t, n, two, three;
    ;

    sll(t);

    while (t--)
    {
        sll(n);
        two = three = 0;
        ll i = 0;

        while (n != 1)
        {
            if (n % 2 == 0)
            {
                two++;
                n /= 2;
            }
            else if (n % 3 == 0)
            {
                three++;
                n /= 3;
            }
            else
            {
                break;
            }
        }

        if (n == 1)
        {
            if (two > three)
            {
                printf("%d\n", -1);
            }
            else
            {
                printf("%lld\n", three + three - two);
            }
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}