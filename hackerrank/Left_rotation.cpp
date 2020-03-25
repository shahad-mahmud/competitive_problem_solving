#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    int arr[100005], n, d;

    cin >>n>>d;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    for (int i = d; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < d; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}