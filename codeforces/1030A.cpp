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
    int n, temp;
    string flag = "EASY";

    si(n);

    for (int i = 0; i < n; i++)
    {
        si(temp);

        if (temp == 1)
        {
            flag = "HARD";
        }
    }

    cout << flag;

    return 0;
}