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
    int n, a, b, t;
    string s;

    si(t);

    while (t)
    {
        t--;
        si(n), si(a), si(b);

        string temp = "";
        int c = 0;
        char ct;
        s = "";

        for (int i = 0; i < a; i++)
        {
            ct = 'a' + c;
            temp.append(1, ct);
            if (b > 1)
            {
                c++;
                b--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            s.append(1, temp[i % a]);
        }

        cout << s << endl;
    }

    return 0;
}