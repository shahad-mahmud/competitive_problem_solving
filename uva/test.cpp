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

#define pi  2*acos(0.0)

class comp
{
public:
    bool operator() (ll a, ll b)
    {
        return a>b;
    }
};

priority_queue<ll, vector<ll>, comp > pq;

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    pq.push(10);
    pq.push(50);
    pq.push(500);
    pq.push(5);
    pq.push(1000);
    pq.push(2);

    for(i=0;!pq.empty();i++)
    {
    	cout<< pq.top() << " " << pq.size()<<endl;
    	pq.pop();
    }

    return 0;
}
