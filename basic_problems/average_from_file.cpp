#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int line;
    int sum = 0;
    int line_count = 0;

    fstream file("ints.txt");

    while(file >> line){
        sum += line;
        line_count ++;
    }

    cout << "Sum: " << sum <<endl;

    return 0;
}