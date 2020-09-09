#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

int main()
{
    ll even, odd,i=1,n,m,count=0,even_count=0, odd_count=0;

    sl(n);

    while(n--)
    {
    	sl(m);

    	if(m&1)
    	{
            odd_count++;
            odd=i;
        }
    	else
    	{
            even_count++;
            even=i;
        }
        i++;
    }

    cout<<(odd_count<even_count?odd:even) <<endl;

    //cout<< abs(odd_count);


    return 0;
}
