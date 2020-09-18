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
    ll a, b, c, d, mul = 1;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    printf("%lld\n", max(a * c, max(a * d, max(b * c, b * d))));

    return 0;
}