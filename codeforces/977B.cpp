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
    string s, res;

    sl(n);

    cin>>s;

    if(n%2 == 1)
    	s += '*';
    //cout << s <<endl;

    for(i=0;i<n;i+=1){
    	string sub = s.substr(i,2);
    	
    	ll c = 0;

    	for(j = i; j< n; j+=1){
    		string s_sub = s.substr(j,2);

    		if(sub == s_sub){
    			c++;
    			//cout << s_sub<<endl;
    		}
    	}

    	if(c > count){
    		// cout << c << " " << sub << endl;
    		count = c;
    		res = sub;
    	}
    }

    cout << res;

    return 0;
}
