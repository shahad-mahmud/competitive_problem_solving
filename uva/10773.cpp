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
    double d,u,v,t1,t2;

    cin>>T;
    for(int i=0;i<T;i++){
        cin>>d>>v>>u;

        if(v>=u || u==0 || v==0){
            printf("Case %d: can't determine\n",i+1);
            continue;
        }

        t1=d/u;
        t2=d/sqrt(u*u-v*v);

        printf("Case %d: %.3lf\n",i+1,fabs(t2-t1));
    }

    return 0;
}

