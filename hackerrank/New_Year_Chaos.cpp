#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int arr[100005];

void swap_items(int i, int f){
    int temp = arr[i];
    arr[i] = arr[f];
    arr[f] = temp;
}

int main(){
    int t, n, a, count;

    cin >> t;

    while (t)
    {
        count = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            
        }

        for (int i = n; i > 0; i--)
        {
            if (arr[i] != i)
            {
                if((i-1 > 0) && i == arr[i-1]){
                    count++;
                    swap_items(i, i-1);
                }else if ((i-2 > 0) && i == arr[i-2])
                {
                    count+=2;
                    swap_items(i-1, i-2);
                    swap_items(i, i-1);
                }else{
                    count = -9999999;
                }
                
            }
        }
        

        if (count >= 0)
        {
            printf("%d\n", count);
        }else{
            printf("Too chaotic\n");
        }
        
        t--;
    }
    
    return 0;
}