#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int clouds[105];
    int steps = 0;
    int current_pos = 0;

    for (int i = 0; i < 105; i++)
    {
        clouds[i]=1;
    }

    cin >>n;
    for (int i = 0; i < n; i++)
    {
        cin>>clouds[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (clouds[current_pos+2]!= 1)
        {
            current_pos+=2;
            steps++;
        }else if (clouds[current_pos+1]!= 1)
        {
            current_pos+=1;
            steps++;
        }
        
    }

    cout << steps<< endl;
    

    return 0;
}