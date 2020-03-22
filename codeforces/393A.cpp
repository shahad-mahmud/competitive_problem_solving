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
    ll i,j,T,k=1,n,m,t,e,count=0;
    string s;

    n=i=e=t=0;

    cin>>s;

    ll len = s.length();

    // cout<<len;

    for(j=0;j<len;j++){
    	if(s[j]=='n')
    		n++;
    	else if(s[j]=='i')
    		i++;
    	else if(s[j]=='e')
    		e++;
    	else if(s[j]=='t')
    		t++;
    }

    cout<<n<<" "<<e<<" "<<i<<" "<<t<<endl;

    n = n/3;
    e = e/3;

    cout << min(n,min(e,min(i,t)));

    return 0;
}
