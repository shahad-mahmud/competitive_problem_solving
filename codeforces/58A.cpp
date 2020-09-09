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
    bool f1,f2,f3,f4,f5;

    f1=f2=f3=f4=f5=false;

    cin>>s;

    ll ln=s.length();

    for(i=0;i<ln;i++)
    {
        //cout<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<" "<<f5<<endl;
    	if(s[i]=='h' && f1==false)
    	{
            f1=true;
            continue;
        }
    	if(s[i]=='e' && f1==true && f2==false)
    	{
            f2=true;
            continue;
        }
    	if(s[i]=='l' && f2==true && f3==false)
    	{
            f3=true;
            continue;
        }
    	if(s[i]=='l' && f3==true && f4==false)
    	{
            f4=true;
            continue;
        }
    	if(s[i]=='o' && f4==true && f5==false)
    	{
            f5=true;
            continue;
        }
    }

    if(f5==true)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;

    return 0;
}