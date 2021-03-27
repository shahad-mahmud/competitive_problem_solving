#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int max_value(int values[], int pos, int len, int sum, int remaining){
    if(remaining <= 0 || pos >= len){
        return sum;
    }

    int not_taking = max_value(values, pos + 1, len, sum, remaining);
    int taking = max_value(values, pos + 1, len, sum + values[pos], --remaining);
    return max(not_taking, taking);
}

int main(){
    int n, m, nums[105];

    cin >> n;

    while(n--){
        int sum = 0;
        cin >> m;
        for(int i = 0; i <m; i++){
            cin >> nums[i];
            sum += nums[i];
        }

        cout << max_value(nums, 0, m, 0, sum / 2) << endl;
    }

    return 0;
}