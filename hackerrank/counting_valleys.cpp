#include <iostream>
using namespace std;

int main(){
    int count, previous, current, n;
    char c;
    count = previous = current = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'U')
        {
            current++;
        }else if (c == 'D')
        {
            current--;
        }
        
        if (previous == 0 && current < 0)
        {
            count++;
        }
        
        
        previous = current;
    }
    
    cout<< count;

    return 0;
}