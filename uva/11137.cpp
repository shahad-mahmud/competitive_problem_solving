#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

int main() {
	int i, j, N;
	long long DP[10000] = {};
	DP[0] = 1;
	for(i = 1; i*i*i < 10000; i++) {
		for(j = i*i*i; j < 10000; j++)
			DP[j] += DP[j-i*i*i];
	}
	while(scanf("%d", &N) == 1) {
		printf("%lld\n", DP[N]);
	}
    return 0;
}