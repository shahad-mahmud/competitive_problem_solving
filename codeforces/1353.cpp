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
    int arr1[35], arr2[35], k, t, n;

    si(t);

    while (t)
    {
        t--;
        si(n), si(k);

        for (int i = 0; i < n; i++)
        {
            si(arr1[i]);
        }

        for (int i = 0; i < n; i++)
        {
            si(arr2[i]);
        }

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);

        int j = n - 1;
        int temp, sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr1[i] < arr2[j] && k)
            {
                k--;
                temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
                j--;
            }
            sum += arr1[i];
        }

        printf("%d\n", sum);
    }

    return 0;
}