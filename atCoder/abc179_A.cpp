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
    string s;

    cin >> s;

    if (s[s.length() - 1] != 's')
    {
        cout << s + 's';
    }
    else
    {
        cout << s + "es";
    }

    return 0;
}