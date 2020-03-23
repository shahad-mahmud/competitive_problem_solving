#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, count = 0;
    int res[105];
    for (int i = 0; i < 105; i++)
    {
        res[i] = 0;
    }
    
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        res[arr[i]]++;
    }

    for (int i = 0; i < 105; i++)
    {
        count += res[i]/2;
    }

    cout<<count<<endl;
    
    return 0;
}