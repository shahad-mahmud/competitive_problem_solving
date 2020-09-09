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

struct key_board{
	char left;
	char right;
} keys[200];

int main()
{
    ll i,j,T,k=1,n,m,count=0;

    keys['q'].left='w';	keys['w'].right='q';
    keys['w'].left='e';	keys['e'].right='w';
    keys['e'].left='r';	keys['r'].right='e';
    keys['r'].left='t';	keys['t'].right='r';
    keys['t'].left='y';	keys['y'].right='t';
    keys['y'].left='u';	keys['u'].right='y';
    keys['u'].left='i';	keys['i'].right='u';
    keys['i'].left='o';	keys['o'].right='i';
    keys['o'].left='p';	keys['p'].right='o';
    keys['a'].left='s';	keys['s'].right='a';
    keys['s'].left='d';	keys['d'].right='s';
    keys['d'].left='f';	keys['f'].right='d';
    keys['f'].left='g';	keys['g'].right='f';
    keys['g'].left='h';	keys['h'].right='g';
    keys['h'].left='j';	keys['j'].right='h';
    keys['j'].left='k';	keys['k'].right='j';
    keys['k'].left='l';	keys['l'].right='k';
    keys['l'].left=';';	keys[';'].right='l';
    keys['z'].left='x';	keys['x'].right='z';
    					keys['c'].right='x';
    					keys['v'].right='c';
    keys['x'].left='c';	keys['b'].right='v';
    keys['c'].left='v';	keys['n'].right='b';
    keys['v'].left='b';	keys['m'].right='n';
    keys['b'].left='n';	keys[','].right='m';
    keys['n'].left='m';	keys['.'].right=',';
    keys['m'].left=',';	keys['/'].right='.';
    keys[','].left='.';	//keys[].right='';
    keys['.'].left='/';	//keys[].right='';

	char c;
	string s;

	cin>>c;
	cin>>s;

	ll ln=s.size();

	if(c=='R')
		for(i=0;i<ln;i++)
			cout<< keys[s[i]].right;
	else
		for(i=0;i<ln;i++)
			cout<< keys[s[i]].left;


    return 0;
}
