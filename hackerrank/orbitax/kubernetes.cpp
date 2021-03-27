#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define sci(x) scanf("%d", &x)
#define scll(x) scanf("%lld", &x)
#define ll long long

int main(){
    ll n, m, uti;
    int count = 0;
    bool takeAction = true;

    scll(n);
    scll(m);

    for(int i = 0; i<m; i++){
        scll(uti);

        if(uti > 70 && takeAction){
            if(n * 2 <= 200000000){
                n *= 2;
                count = 0;
                takeAction = false;
            }
        }
        if(uti < 25 && takeAction){
            if(n > 1){
                n = ceil(n / 2.0);
                count = 0;
                takeAction = false;
            }
        }

        if(!takeAction){
            if(count == 8){
                takeAction = true;
            }else{
                count++;
            }
        }
    }

    cout << n << endl;

    return 0;
}