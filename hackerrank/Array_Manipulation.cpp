#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    vector <pair<long, long>> v;

    long n, m, a, b, k;

    cin>>n>>m;

    for (long i = 0; i < m; i++)
    {
        cin>>a>>b>>k;
        v.push_back(make_pair(a, k));
        v.push_back(make_pair(b+1, -k));
    }

    long mx = -5, sum = 0;

    sort(v.begin(), v.end());

    for (long i = 0; i < v.size(); i++)
    {
        sum += v[i].second;
        mx = max(mx, sum);
    }

    cout << mx << endl;
    
    

    return 0;
}