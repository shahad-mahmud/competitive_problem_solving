#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include<bits/stdc++.h> 
using namespace std;

int minimum_swaps(int arr[], int n) 
{ 
    pair<int, int> arrPos[n]; 
    for (int i = 0; i < n; i++) 
    { 
        arrPos[i].first = arr[i]; 
        arrPos[i].second = i; 
    } 

    sort(arrPos, arrPos + n); 
    vector<bool> vis(n, false); 
    int ans = 0; 

    for (int i = 0; i < n; i++) 
    { 
 
        if (vis[i] || arrPos[i].second == i) 
            continue; 
        int cycle_size = 0; 
        int j = i; 
        while (!vis[j]) 
        { 
            vis[j] = 1;  
            j = arrPos[j].second; 
            cycle_size++; 
        }  
        if (cycle_size > 0) 
        { 
            ans += (cycle_size - 1); 
        } 
    } 
    return ans; 
} 

int main(){
    int n;
    int arr[100005];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << minimum_swaps(arr, n) << endl;
    
    

    return 0;
}