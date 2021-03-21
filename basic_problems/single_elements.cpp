#include <iostream>
using namespace std;

void print_single(int arr[], int len){
    bool isSingle[len];

    for(int i=0; i < len; i ++){
        isSingle[i] = true;
    }

    for(int i=0; i < len; i ++){
        int j=0;
        for (j = i +1; j < len; j++){
            if(arr[i] == arr[j]){
                isSingle[i] = false;
                isSingle[j] = false;
            }
        }
    }

    for(int i=0; i < len; i ++){
        if(isSingle[i])
            cout << arr[i] << " ";
    }
}

int main(){
    int a[] = {5, 6, 7, 8,9,0,4,45,7,8};

    print_single(a, sizeof(a) / sizeof(a[0]));
    cout << endl;

    return 0;
}