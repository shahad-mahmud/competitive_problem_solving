#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

#define max 10009

ll prime[max];
bool mark[max]={false};

int seive()
{
    mark[0]=mark[1]=true;
    for(long i=2;i<max;i++)
    {
        if(mark[i]==false)
        {
            //mark[i]=true;
            for(int j=i*i;j<max;j+=(i+i))
                mark[j]=true;
        }
    }

    return 0;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;

    seive();

    sl(T);

    while(T--)
    {
    	sl(n);
    	printf("%s\n",mark[n]==false?"Yes":"No");
    }


    return 0;
}