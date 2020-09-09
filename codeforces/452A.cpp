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

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    sl(n);
    cin>>s;

    if(n==8)
	{
		cout<<"vaporeon\n";
		return 0;
	}

	if(n==6)
	{
		cout<<"espeon\n";
		return 0;
	}

	string p[]={"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};

	for(i=0;i<6;i++)
	{
		for(j=0;j<7;j++)
		{
			//cout<<s[j];
			if(s[j]!='.' && p[i][j]!=s[j])
				break;
		}

		if(j==7)
		{
			cout<< p[i]<<endl;
			return 0;
		}
	}	

    return 0;
}