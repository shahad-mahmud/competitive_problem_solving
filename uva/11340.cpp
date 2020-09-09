#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
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
    ll i,T,k=1,n,m,count=0;
    ll value[260]={0};
    ll no[260]={0};
    char c;
    string txt;

    sl(T);

    while(T--)
    {
        count=0;
        for(i=0;i<260;i++)
        {value[i]=0;
        no[i]=0;}

        sl(n);
        for(i=0;i<n;i++)
        {
            cin>>c;
            ll index=c;
            sl(value[index]);
        }
        sl(m);
        cin.ignore();
        while(m--)
        {
            //cin.ignore();
            getline(cin, txt);
            //cin.ignore();
            ll ln=txt.length();
            for(i=0;i<ln;i++)
            { ll index=txt[i]; no[index]++;}
            txt.clear();
        }
        //cin.ignore();
        for(i=0;i<260;i++)
            count+=(no[i]*value[i]);
        printf("%.2lf$\n",count/100.00);
        txt.clear();
        //cout<< txt;
    }

    return 0;
}

