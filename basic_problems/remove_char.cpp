#include <iostream>
using namespace std;

string remove_char(string &s, int pos){
    int len = s.length();
    return s.substr(0, pos) + s.substr(pos, len  - 1- pos);
}

int main(){
    string s;

    cin >> s;

    cout << remove_char(s, 3);

    return 0;
}