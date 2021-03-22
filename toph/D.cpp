#include <iostream>
#include <cmath>
using namespace std;

long long int f(long long int x){
    long long int s = 0;

    while(x > 0){
        long long int digit = x % 10;
        s+= digit * digit;
        x /= 10;
    }

    return s;
}

int main(){
    long long int n;
    long long int sum_num[2000];
    long long int temp_sum = 0;

    for(int i = 0; i< 2000; i++){
        sum_num[i] = 0;
    }

    cin >> n;
    // cout << n <<endl;

    temp_sum = n;

    while(1){
        temp_sum = f(temp_sum);
        sum_num[temp_sum]++;

        // cout << temp_sum << endl;
        if(temp_sum == 1){
            printf("NO CYCLE\n");
            break;
        }

        if(temp_sum == n){
            printf("FULL CYCLE\n");
            break;
        }

        if(sum_num[temp_sum] > 2){
                printf("PARTIAL CYCLE\n");
            break;
        }
    }

    return 0;
}