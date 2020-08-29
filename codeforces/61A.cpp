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
    string num1, num2;
    int len;

    cin >> num1 >> num2;
    len = num1.length();

    for (int i = 0; i < len; i++)
    {
        if (num1[i] == num2[i])
        {
            cout << '0';
        }
        else
        {
            cout << '1';
        }
    }

    return 0;
}