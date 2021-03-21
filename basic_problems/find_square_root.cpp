#include <stdio.h>
#include <iostream>
using namespace std;

double findSuareRoot(double num){
    double x = num;
    double y = 1.0;
    double accu = 0.00001;

    while(x - y > accu){
        x = (x + y)/2;
        y = num / x;
    }

    return x;
}

int main(){
    double given_num;

    while(cin>>given_num){
        cout << findSuareRoot(given_num) << endl;
    }

    return 0;
}