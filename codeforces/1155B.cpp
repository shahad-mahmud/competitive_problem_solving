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

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    sl(n);

    cin >> s;

    m = n - 11;

    for(i = 0; i<= m ;i++){
    	if(s[i] == '8')
    		count++;
    }

    m = m/2;

    if(count > m){
    	cout << "YES";
    }else{
    	cout << "NO";
    }

    return 0;
}
