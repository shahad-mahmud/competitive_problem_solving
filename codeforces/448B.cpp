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

#define pi  2*acos(0.0)

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s1,s2;
    ll num1[30],num2[30];

    cin>>s1>>s2;

    for(i=0;i<26;i++)
    {
    	num1[i]=0;
    	num2[i]=0;
    }

    //sort(s1.begin(),s1.end());
    //sort(s2.begin(),s2.end());
    ll ln1=s1.size();
    ll ln2=s2.size();

    for(i=0;i<ln1;i++)
    	num1[s1[i]-'a']++;
    for(i=0;i<ln2;i++)
    	num2[s2[i]-'a']++;

    for(i=0;i<26;i++)
    {
    	if(num2[i]>num1[i] or ln2>ln1)
    	{
    		cout<<"need tree\n";
    		return 0;
    	}
    }

    if(ln1==ln2)
    {
    	cout<<"array\n";
    	return 0;
    }

    j=0;
    for(i=0;i<ln1;i++)
    {
    	if(s1[i]==s2[j])
    		j++;
    }

    if(j==ln2)
    {
    	cout<<"automaton\n";
    	return 0;
    }

    cout<<"both\n";


    return 0;
}