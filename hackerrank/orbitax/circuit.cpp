#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <cstdio>
using namespace std;

#define sci(x) scanf("%d", &x)

int main(){
    int n;
    string str;
    char st[5005];
    stack<char> s;

    sci(n);
    // cin >> str;
    // cout << str << endl;

    scanf("%[ ^\n]s", st);
    cout << str;

    // for(int i = 0; i < n; i++){
    //     if(str[i] !=' ' && str[i] != ','){
    //         cout << str[i] << endl;
    //         if(str[i] != ']'){
    //             s.push(str[i]);
    //         }
    //         else if(str[i] == ']'){
    //             bool n1 = NULL, n2 = NULL;
    //             char op;
    //             char s_char = s.top();
    //             s.pop();
    //             while(s_char != '['){
    //                 if((s_char == '0' || s_char == '1') && n1 == NULL){
    //                     n1 = (bool)s_char;
    //                 }

    //                 if((s_char == '0' || s_char == '1') && n2 == NULL){
    //                     n2 = (bool)s_char;
    //                 }

    //                 if(s_char == '!' || s_char == '&' || s_char == '|'){
    //                     op = s_char;
    //                 }
    //             }

    //             cout << n1 << " " << n2 << " " << op << endl;
    //         }
    //     }
    // }

    return 0;
}