#include <iostream>
#include <stack>
using namespace std;

string reverse_sentence(string sen){
    int sub_str_len = 0;
    int last_pos = 0;
    int len = sen.length();
    stack<string> stck;
    string res = "";

    for(int i = 0; i < len; i++){
        if(sen[i] == ' '){
            // cout << i - last_pos << " ";
            stck.push(sen.substr(last_pos, i - last_pos));
            last_pos = i + 1;
        }
    }
    stck.push(sen.substr(last_pos, len - 1));

    while (!stck.empty()){
        res += stck.top() + " ";
        stck.pop();
    }
    return res;
}

int main(){
    string s;

    getline(cin, s);

    cout << reverse_sentence(s);

    return 0;
}