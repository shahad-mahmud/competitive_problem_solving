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

vector<ll>v;

void split(char s[])
{
	ll ln= strlen(s),num=0,indx=0;

	for(ll i=0;i<ln;i++)
	{
		if(s[i]!=' ')
			num= num*10+ s[i]-'0';
		else
		{
			v.push_back(num);
			num=0;
		}
	}

	v.push_back(num);

	//return 0;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0,*ptr;
    char s[]="100 02 5 54";

    //ptr=ar;
    split(s);

    for(i=0;i<v.size();i++)
    	cout<< v[i]<<endl;

    return 0;
}
