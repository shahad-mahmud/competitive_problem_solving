#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

int a[605];
int count = 0;

void swap(int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    count++;
}

int main(){
    int n;
    

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(j, j + 1);
            }
        }
        
    }


    printf("Array is sorted in %d swaps.\nFirst Element: %d\nLast Element: %d\n", count, a[0], a[n-1]);

    return 0;
}