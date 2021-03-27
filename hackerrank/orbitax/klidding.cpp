#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define sci(x) scanf("%d", &x)

int main(){
    long long int n, sum = 0;

    cin >> n;

    if(n>0){
        sum = n * (n + 1) / 2;
    }else if( n < 0){
        for(long long i = 1; i >=n ; i--){
            sum += i;
        }
    }else{
        sum = 1;
    }

    cout << sum << endl;

    return 0;
}