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

ll ln,tem[100]={0};
string s,p;

int main()
{
    ll i,j,T,k=1,n,m,count=0;

    while(1)
    {
    	cin>>s;
    	if(s==".")
    		break;

        ln=s.length();
    	//cout<< s;
    	//preFunc();
        ll mx=1;

    	for(i=1;i<ln;i++)
    	{
    		while(s[i]!=s[i%mx])
                mx++;
            //cout<< mx << endl;

           
    	}

         if(ln%mx==0)
            cout<< ln/mx<<endl;
        else
            cout<< 1<<endl;
    }

    return 0;
}