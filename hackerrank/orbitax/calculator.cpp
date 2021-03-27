#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;

#define sci(x) scanf("%d", &x)
#define ll long long

ll calculate(string s){
    int len = s.length();

    stack<ll> nums;
    stack<char> oprtr;
    
    for(int i = 0; i< len; i++){
        if(s[i] != ' '){
            if(s[i] == '('){
                oprtr.push(s[i]);
            }
            else if(s[i] >= '0' and s[i] <= '9'){
                int val = s[i] - '0';
            }
        }
    }
}

int main(){


    return 0;
}