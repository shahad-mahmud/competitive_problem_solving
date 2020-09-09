#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
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
#define pb(x) push_back(x)

#define fr(a,b) for(i=a;i<b;i++)

#define pi  2*acos(0.0)

#define max 10000009

vector <int> prime;
bool mark[max]={false};

int seive()
{
    //prime.push_back(2);
    for(long i=2;i<=max;i++)
    {
        if(mark[i]==false)
        {
            //cout<<i<<endl;
            prime.push_back(i);
            for(long long j=2*i;j<=max; j=j+i)
                mark[j]=true;
        }
    }

    
    return 0;
}

int main()
{
    int i,j,T,k=1,n,p,q,count=0;
    //string s;

    seive();

    //cout<<prime.size();

    cin>>T;

    while(T--)
    {
        count=0;
        cin>>n;
        for(i=0;1;i++)
        {
            p=prime[i];
            q=n-p;
            if(p>q)
                break;
            //cout<<q<<" "<<mark[q]<<endl;
            if(mark[q]==false )
                count++;
        }
        printf("Case %d: %d\n", k++, count);
    }

    k=5;
    k>>=3;
    cout<< k;


    return 0;
}