#include <iostream>
using namespace std;

void find_duplicates(int arr[], int len){
    for(int i=0; i < len; i ++){
        for (int j = i +1; j < len; j++){
            if(arr[i] == arr[j]){
                cout << arr[j] << " ";
            }
        }
    }
}

int main(){
    int a[] = {5, 6, 7, 8,9,0,4,45,7,8};

    find_duplicates(a, sizeof(a) / sizeof(a[0]));

    return 0;
}