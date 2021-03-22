#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long dis[500005];
    long long q, t, n;

    // for(int i = 0, j = 5000005; i != j; i++, j-- ){
    //     dis[i] = dis[j] = 0;
    // }

    cin >> q;
    
    while(q--){
    	scanf("%lld %lld", &t, &n);
    	
    	if(t ==1){
    		dis[n] = min(dis[n-1], dis[n+1]) + 1;
    	}else if(t ==2){
    		printf("%lld\n", dis[n]);
    	}
    }

    return 0;
}