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

int n, m, x;
int des[15][15];

int solve(int i, int res[])
{
    if (i >= n)
    {
        return -1;
    }

    int sum = 0;

    for (int j = 0; j < m; j++)
    {
        res[j] += des[i][j];
    }
    
    
}

int main()
{
    int res[15];

    si(n), si(m), si(x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            si(des[i][j]);
        }
    }

    return 0;
}