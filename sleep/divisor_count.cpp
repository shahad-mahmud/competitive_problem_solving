#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)

//***first primes will be arrayed
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
            for(int j=i+i+i;j<max;j+=(i+i))
                mark[j]=true;
        }
    }

    return 0;
}
//***************divisor count***************
int count_div(long n)
{
    int divisor = 1;
    for (int i = 0; n >= prime[i]; i++)
    {
        if (n % prime[i] == 0)
        {
            int cnt = 1;
            while (n % prime[i] == 0)
            {
                n /= prime[i];
                cnt++;
            }
            divisor *= cnt;
        }
  }
  return divisor;
}
//*************divisor count*******************

int main()
{
    seive();
    cout << count_div(2);

    return 0;
}

