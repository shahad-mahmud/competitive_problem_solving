#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n, k;
    int i;

    scanf("%lld%lld", &n, &k);

    for(i =0; i<k; i++){
        if(n%10 == 0){
            n /= 10;
            continue;
        }
        n--;
    }

    printf("%lld\n", n);

    return 0;
}