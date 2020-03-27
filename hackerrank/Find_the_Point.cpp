#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    int px, py, qx, qy, n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> px >> py >> qx >>qy;
        cout << qx+qx-px << " " << qy+qy-py << "\n";
    }
    

    return 0;
}