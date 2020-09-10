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
    ll t, zero, count = 0, one;
    string s;
    sll(t);

    while (t--)
    {
        cin >> s;
        zero = one = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if (min(zero, one) % 2 == 1)
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NET\n";
        }
    }

    return 0;
}