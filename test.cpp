#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

int points[100005][3];

int max_happiness(int day_count, int total_day){
    if(day_count == total_day)
        return 0;

    int happiness_with_a = points[day_count][0] + max_happiness(day_count + 1, total_day);
    int happiness_with_b = points[day_count][1] + max_happiness(day_count + 1, total_day);
    int happiness_with_c = points[day_count][2] + max_happiness(day_count + 1, total_day);

    return max(happiness_with_a, max(happiness_with_b, happiness_with_c));
}

int main(){
    int n; 

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> points[i][0] >> points[i][1] >> points[i][2];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << points[i][j] << " ";
        }

        cout << endl;
        
    }
    

    cout << max_happiness(0, n);
    

    return 0;
}