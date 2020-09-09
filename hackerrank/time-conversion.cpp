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
    ll i,j,T,k=1,n,count=0;
    string s;

    cin >> s;

    ll h,m,sec;

    h = (s[0]-'0')*10 + (s[1] - '0');
    //cout<<h<<endl;
    m = (s[3]-'0')*10 + (s[4] - '0');
    //cout<<m<<endl;
    sec = (s[6]-'0')*10 + (s[7] - '0');
    //cout<<sec;

    if(s[8] == 'P')
    	h+=12;

    

    if(s[0]== '1' && s[1] == '2' && s[8]== 'A')
    	s[0]='0',s[1]='0';

    else if(s[0]== '1' && s[1] == '2' && s[8]== 'P')
    	s[0]='1',s[1]='2';

   	else
   	{
   		s[1] = (h%10) + '0'; h/=10;
    	s[0] = h%10+ '0';
   	}

    for(i=0;i<8;i++)
    	cout<< s[i];

    return 0;
}
