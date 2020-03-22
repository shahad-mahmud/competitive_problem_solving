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
#define ssws(s) scanf(" %[^\n]s",s)

#define pi  2*acos(0.0)

#define ll_inf 9223372036854775807
#define dl_inf 1.79769e+308
#define int_inf 2147483647

bool isOdd(int n){
	return (n%2);
}

int solve(int n, int m){
	if(m==0 || m==1)
		return 1;
	if(n == m)
		return 0;

	int mid, max;

	if(isOdd(n)){
		max = ((n + 1)/2) - 1;

		if(m == ((n + 1)/2 - 1) || m == ((n + 1)/2)){
			return max;
		}else if(m > max){
			return n - m;
		}else
			return m;

	}else{
		max = (n/2) - 1;

		if(m == (n/2 - 1) || m == (n/2) || m == (n/2 + 1)){
			return max;
		}else if(m > max){
			return n - m;
		}else
			return m;
	}

	return 0;
}

int solve2(int n, int m){
	if(m==0 || m==1)
		return 1;
	else if(m < (n+1)/2)
		return m;
	else
		return n - m;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    sl(n);
    sl(m);

    cout << solve2(n,m);

    return 0;
}
