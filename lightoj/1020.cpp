#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    ll t;
    char x[6];
	
	sl(t);

	for (int j = 1; j <= t; j++) {
		sl(n);
		scanf("%s", x);

		n = n % 3;
		if(strcmp(x, "Alice") == 0) {
			if(n == 0 or n == 2) {
				printf("Case %d: Alice\n", j);
			}

			else {
				printf("Case %d: Bob\n", j);
			}

		}

		else
		{
			if(n == 1 or n == 2) {
				printf("Case %d: Bob\n", j);
			}

			else {
				printf("Case %d: Alice\n", j);

			}

		}


	}


    return 0;
}