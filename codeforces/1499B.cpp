#include <iostream>
using namespace std;

int main(){
    int t;
    string s;

    cin>>t;

    while(t--){
        cin >> s;

        int pos_1 = s.find("11");
        int pos_0 = s.rfind("00");

        if(pos_1 != -1 and pos_0 != -1 and pos_1 < pos_0){
            cout << "NO" <<endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}