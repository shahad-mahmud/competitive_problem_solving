#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    long n, len, div, no_a=0, rem, count = 0;

    cin >> s;
    cin >> n;

    len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
        {
            no_a++;
        }
        
    }
    
    div = n / len;
    count += div * no_a;
    rem = n - div * len;

    for (int i = 0; i < rem; i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
        
    }

    cout << count;

    return 0;
}