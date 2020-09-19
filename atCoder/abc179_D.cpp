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

vector<ll> s;
ll len = 0;
ll prime = 998244353;
ll flag[200019];

ll solve(ll n, ll cur_pos)
{
    if (cur_pos > n)
        return 0;

    if (cur_pos == n)
        return 1;

    if (flag[cur_pos] != -1)
        return flag[cur_pos];

    ll res = 0;

    for (int i = 0; i < len; i++)
    {
        res = (res % prime + solve(n, cur_pos + s[i]) % prime) % prime;
    }

    flag[cur_pos] = res;
    return flag[cur_pos];
}

int main()
{
    for (int i = 0; i < 200019; i++)
    {
        flag[i] = -1;
    }

    ll t, n, count = 0, m, k, l, r;
    sll(n), sll(k);

    for (ll i = 0; i < k; i++)
    {
        sll(l);
        sll(r);
        for (int i = l; i <= r; i++)
            s.push_back(i);
    }

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    len = s.size();

    cout << solve(n, 1) << endl;

    return 0;
}