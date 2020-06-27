#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

#define ll long long
#define dl double
 
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)

int main(){
    string s;
    ll n;
    int f[15];
    bool mbreak = false;

    sl(n);
    cin >> s;
    for(int i=1; i<=9; i++)
        si(f[i]);

    for(ll i= 0; i<n; i++){
        int digit = s[i]-'0';
        int f_val = f[digit];
        if(digit < f_val){
            s[i] = f_val + '0';
            mbreak = true;
        }else if(digit > f_val && mbreak){
            break;
        }
    }

    cout << s << endl;

    return 0;
}