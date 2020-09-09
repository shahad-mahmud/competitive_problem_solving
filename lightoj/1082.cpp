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

#define fr(a,b) for(i=a;i<=b;i++)

#define pi  2*acos(0.0)

//*************segmented tree*************
#define mx 100001
ll arr[mx];
ll tree[mx * 3];

void creat(ll node, ll b, ll e)
{
	if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    creat(Left, b, mid);
    creat(Right, mid + 1, e);
    //if(tree[])
    tree[node] = (tree[Left] < tree[Right]? tree[Left]:tree[Right]);
}

ll query(ll node, ll b, ll e, ll i, int j)
{
    if (i > e || j < b)
        return mx+5;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1<p2?p1:p2;
}

//*************segmented tree*************
int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    sl(T);

    while(T--)
    {
        printf("Case: %lld\n",k++);
        sl(n);
        ll q;
        sl(q);

        fr(1,n)
        {
            sl(arr[i]);
        }

        creat(1,1,n);

        while(q--)
        {
            ll N,M;
            sl(N); sl(M);

            printf("%lld\n",query(1,1,n,N,M));
        }
    }

    return 0;
}