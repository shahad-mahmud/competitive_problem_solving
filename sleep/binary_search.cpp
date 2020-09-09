#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//****************************start of binary search******************************
long bin_src(long n)
{
    int mid,low=0,high=ln-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(prime[mid]==n)
            return mid;
        if(prime[mid]>n)
            high=mid-1;
        else if(prime[mid]<n)
            low=mid+1;
    }

    return -1;
}
//****************************end of binary search*********************************

int main()
{


    return 0;
}
