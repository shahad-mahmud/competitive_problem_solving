#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> heights;

int findLargestSubarray(
    vector<long long>& arr,
    int N, int K)
{
 
    // Sort the array
    sort(arr.begin(), arr.end());
 
    int value1 = arr[0], value2 = 0;
    int index1, index2, i, MAX;
    index1 = index2 = 0;
    i = 0, MAX = 0;
 
    // Loop which will terminate
    // when no further elements
    // can be included in the subarray
 
    while (index2 != N) {
 
        // first value such that
        // arr[index2] - arr[index1] > K
        value2 = value1 + (K + 1);
 
        // calculate its index using lower_bound
        index2 = lower_bound(arr.begin(),
                             arr.end(), value2)
                 - arr.begin();
 
        // index2- index1 will give
        // the accurate length
        // of suarray then compare
        // for MAX length and store
        // in MAX variable
        MAX = max(MAX, (index2 - index1));
 
        // change the index1
        // to next greater element
        // than previous one
        // and recalculate the value1
        index1
            = lower_bound(
                  arr.begin(),
                  arr.end(), arr[index1] + 1)
              - arr.begin();
        value1 = arr[index1];
    }
 
    // finally return answer MAX
    return MAX;
}

int longestSegment(long long n, long long k){
    // sort(heights.begin(), heights.end());

    int length = 0, i1, i2;
    int h1 = heights[0], h2 = 0;
    i1 = i2 = 0;

    while(i2 != n){
        h2 = h1 + k + 1;

        i2 = lower_bound(heights.begin(), heights.end(), h2) - heights.begin();

        length = max(length, (i2 - i1));

        i1 = lower_bound(heights.begin(), heights.end(), heights[i1] + 1) - heights.begin();
        h1 = heights[i1];
    }

    return length;
}

int main(){
    long long n, k, h;

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        scanf("%lld", &h);
        heights.push_back(h);
    }

    cout << longestSegment(n, k) << endl;

    cout << findLargestSubarray(heights, n, k) << endl;

    return 0;
}