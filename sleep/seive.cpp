#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//****************start of function & other things for seive****************************
#define max 100

vector <long> prime;
bool mark[max]={false};

int seive()
{
    prime.push_back(2);
    for(long i=3;i<max;i=i+2)
    {
        if(mark[i]==false)
        {
            prime.push_back(i);
            for(int j=i*i;j<max;j+=(i+i))
                mark[j]=true;
        }
    }

    return 0;
}
//*********************************end of seive*****************************************

int main()
{
    seive();

    int ln= prime.size();

    for(int i=0;i<ln;i++)
        cout << prime[i] << " ";

    return 0;
}
