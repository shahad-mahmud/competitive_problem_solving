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

//****************start of function & other things for seive****************************
#define max 100

vector <long> prime;
bool mark[max]={false};

int seive()
{
    prime.push_back(2);
    for(long i=3;i<max;i=i+2)
    {
        if(mark[i]==false)
        {
            prime.push_back(i);
            for(int j=i*i;j<max;j+=(i+i))
                mark[j]=true;
        }
    }

    return 0;
}
//*********************************end of seive*****************************************


//*************sum of divisors***********************
ll sumofDivisor(ll a)
{
	ll sum=0,ta=a,c;
	ll rt=sqrt(a),tem;

	sum=1;
	//cout<<sum;
	for(ll i=0;prime[i]<=rt;i++)
	{
		
		if(a%prime[i]==0)
		{
			c=0;
			tem=0;
			while(a%prime[i]==0)
			{
				a/=prime[i];
				c++;
			}
			c++;
			tem=pow(prime[i],c);
			tem-=1;
			tem/=(prime[i]-1);

			//cout<<tem<<endl;

			sum*=tem;
		}
	}

	tem=0;

	if(a>1)
	{
		tem=pow(a,2);
		tem-=1;
		tem/=(a-1);

		//cout<<tem<<endl;

		sum*=tem;
	}

	return (sum-ta-1);
}
//*************sum of divisors************************

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;
    seive();

    //cout<< sumofDivisor(21);

    sl(T);

    while(T--)
    {
    	count=0;
    	sl(n);

    	for(i=2;i*i<=n;i++)
    	{
    		j=n/i;
    		count+=(i+j)*(j-i+1)/2;
    		count+=i*(j-i);
    	}

    	printf("Case %lld: %lld\n",k++,count);
    }

    return 0;
}