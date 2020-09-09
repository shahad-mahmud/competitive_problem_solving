#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

#define lim 10000000

vector <long> prime;
bool marked[lim+2]={false};

int isprime(void)
{
    long i,j;

    for(i=2;i<=lim+100;i++)
    {
        if(marked[i]==false)
        {
            prime.push_back(i);
            for(j=i+i;j<=lim;j+=i)
            {
                if(j%i==0)
                    marked[j]=true;
            }
        }
    }

    return 0;
}

int main()
{
    isprime();

    long T,i,j,N,cnt=0,a,b,k=1;
    scanf("%ld",&T);

    while(T--)
    {
        scanf("%ld",&N);
        a=N;
        cnt=0;
        for(i=0;prime[i]<=N/2;i++)
        {
            a=N-prime[i];
            for(j=i;prime[j]<=N;j++)
                if(a==prime[j])
                    cnt++;

        }

        cout << cnt;
    }


    return 0;
}
