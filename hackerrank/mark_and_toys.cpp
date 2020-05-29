#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    long n, k, prices[100005], sum = 0, count = 0;

    scanf("%ld%ld", &n, &k);

    for (int i = 0; i < n; i++){
        scanf("%ld", &prices[i]);
    }

    sort(prices, prices+n);

    for (int i = 0; i < n; i++){
        sum += prices[i];
        if(sum <= k)
            count++;
    }

    cout << count << endl;
    

    return 0;
}