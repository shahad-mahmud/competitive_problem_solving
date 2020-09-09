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
#define pb(x) push_back(x)

#define fr(a,b) for(i=a;i<b;i++)

#define pi  2*acos(0.0)

#define mx 10001
ll arr[mx];
ll tree[mx * 3];

void creat(ll node, ll b, ll e)
{
	if(b==e)
	{
        if(arr[b]%3==0)
            tree[node]=1;
        else
            tree[node]=0;
		return;
	}

	ll left=node*2;
	ll right=node*2 + 1;
	ll mid=(b+e)/2;

	creat(left,b,mid);
	creat(right,mid+1,e);

	tree[node]=tree[left]+tree[right];
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}

void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) 
    {
        if(newvalue%3==0)
            tree[node]+=1;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    ll i,j,T,k=1,n,q,m,count=0;
    string s;

    
    while(scanf("%lld%lld",&n,&q)==2)
    {   
        for(i=0;i<n;i++)
            arr[i]=0;

        creat(0,0,n-1);

        while(q--)
        {
            ll a,b,c;
            scanf("%lld%lld%lld",&a,&b,&c);
            if(a==1)
            {
                cout<<query(0,1,n-1,b,c)<<endl;
            }
            else
            {
                for(i=b;i<=c;i++)
                {
                    arr[i]++;
                    update(1,b,c,i,arr[i]);
                }
            }
        }
    }

    return 0;
}