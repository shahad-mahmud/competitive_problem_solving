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
    sll(t);

    while (t--)
    {
        vector<int> v;
        cin >> s;
        count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' && count > 0)
            {
                v.push_back(count);
                count = 0;
            }
            else if (s[i] == '1')
                count++;
        }
        v.push_back(count);

        sort(v.begin(), v.end(), greater<int>());

        count = 0;
        for (int i = 0; i < v.size(); i += 2)
        {
            count += v[i];
        }

        printf("%lld\n", count);
    }

    return 0;
}