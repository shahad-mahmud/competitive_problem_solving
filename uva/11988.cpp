#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define pi  2*acos(0.0)

list<char> l;
list<char> :: iterator it;

int main()
{
    ll i,T,k=1,n,m,count=0;
    char x;
    char txt[100009];

    while((scanf("%s",txt))!=EOF)
    {
        //l.clear();
        //cin>> txt;
        ll ln= strlen(txt);
        i=0;
        it= l.begin();
        for(i=0;i<ln;i++)
        {
            if(txt[i]!= '[' && txt[i]!= ']')
            {
                x=txt[i];
                l.insert(it, x);
            }
            else if(txt[i]== '[')
            {
                it=l.begin();
            }
            else if(txt[i] == ']')
            {
                it=l.end();
            }
        }

        ln=l.size();

        for (it=l.begin(); it!=l.end(); ++it)
            cout<<*it;
        cout<<endl;
        l.clear();

    }

    return 0;
}
