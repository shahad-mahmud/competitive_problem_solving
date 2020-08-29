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
    string current, previous = "";
    int n, count = 0;

    si(n);

    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current != previous)
        {
            count++;
        }

        previous = current;
    }

    pi(count);

    return 0;
}