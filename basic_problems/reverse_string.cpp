#include <iostream>
using namespace std;

void swap(char *a, char *b){
    char temp = *a;

    *a = *b;
    *b = temp;
}

void reverse(string &s){
    int len = s.size();

    for(int i = 0; i < len / 2; i++)
        swap(s[i], s[len - 1 - i]);
}

int main(){
    string s;

    while(cin >> s){
        reverse(s);
        cout << s << endl;
    }
    return 0;
}