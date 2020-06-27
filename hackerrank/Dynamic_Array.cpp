#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

#define si(x) scanf("%d", &x)

int main(){
    vector<vector<int>> v;
    int q1, q2, q3;
    int n, q, la=0;

    si(n), si(q);

    for(int i = 0; i < q; i++){
        si(q1), si(q2), si(q3);

        if(q1 == 1){
            int index = (q2 ^ la) % n;
            v[n].push_back(q3);
        }else if(q1 == 2){
            int index = (q2 ^ la) % n;
            int size = v[n].size();
            int index1 = q3 % size;
            la = v[n][index1];
            printf("%d\n", la);
        }
    }


    return 0;
}