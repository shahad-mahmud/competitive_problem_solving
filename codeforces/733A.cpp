
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define pi  2*acos(0.0)

int main()
{
    ll i,T,k=1,n,m,count=1,cn=1;
    string s;

    cin>> s;

    ll ln= s.size();

    for(i=0;i<ln;i++)
    {
        if(s[i]== 'A' ||s[i]== 'E' ||s[i]== 'I' ||s[i]== 'O' ||s[i]== 'U' ||s[i]== 'Y')
            count=1;
        else
        {
            count++;
            if(count>cn)
                cn=count;
        }
    }

    cout<<cn<<endl;

    return 0;
}
