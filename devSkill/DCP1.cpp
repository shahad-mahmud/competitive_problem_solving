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
    string num1,num2,rslt;
    char s[109];

    //cout<<1;

    while(scanf("%s",s)==1)
    {
    	//cout<<s;
    	ll n1,n2,carry=0,ln1,ln2,sum;

    	ln1=strlen(s);
    	
    	for(i=0;s[i]!=',';i++)
    		num1+=s[i];
    	++i;
    	for(;i<ln1;i++)
    		num2+=s[i];

    	ln1=num1.length();
    	ln2=num2.length();

    	//cout<<num1<<endl<<num2;

    	if(ln1>ln2)
    		for(i=ln2;i<ln1;i++)
    			num2+='0';
    	else
    		for(i=ln1;i<ln2;i++)
    			num1+='0';

    	ln1=num1.length();
    	ln2=num2.length();

    	num1+='0';
    	num2+='0';

    	for(i=0;i<ln1;i++)
    	{
    		n1= num1[i]-'0';
    		n2= num2[i]-'0';

    		sum= n1+n2+carry;

    		rslt+=(sum%10)+'0';
    		carry=sum/10;
    	}

    	if(carry)
    		rslt+=carry+ '0';

    	//reverse(rslt.begin(),rslt.end());

    	ln2=rslt.length();
    	//cout<<ln2;
    	for(i=0;i<ln2 && rslt[i]== '0';i++);
    	for(;i<ln2;i++) 
    	cout<<rslt[i];
    	cout<<endl;

    	num1.clear(),num2.clear(),rslt.clear();
    	strcpy(s,"");
    }

    return 0;
}