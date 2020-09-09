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
#define ssws(s) scanf(" %[^\n]s",s)

#define pi  2*acos(0.0)

#define ll_inf 9223372036854775807
#define dl_inf 1.79769e+308
#define int_inf 2147483647

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    ll one=0, two=0, three=0, four;

    sl(n);

    for(i=0;i<n;i++)
    {
    	sl(m);

    	if(m==4)
    		count++;
    	else if(m == 3)
    		three++;
    	else if(m == 2)
    		two++;
    	else if(m == 1)
    		one++;
    }
    //cout<< one << " "<< two << " "<< three << " "<< count << "\n";
	if(one == 0)
	{
		count+=three;
		three = 0;
	}
	else if(three>=one)
	{
		count+=one;
		three-=one;
		one = 0;
	}
	else
	{
		count+=three;
		one-=three;
		three = 0;
	}

	//cout<< one << " "<< two << " "<< three << " "<< count << "\n";

	three>0? count+=three: count+=0;
	count += two/2;
	two%2 == 0? two = 0 : two = 1;

	if(two == 1)
	{
		count++;
		if(one>=2)
		{
			one-=2;
		}
		else if(one == 1)
			one--;
	}

	count+= one/4;
	one = one%4;

	if(one>0)
		count++;

    	
    
    cout<< count<<endl;

    return 0;
}
