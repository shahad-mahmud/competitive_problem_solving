#include <stdio.h>
using namespace std;

int mat[6][6];

int calculate_hour_glass_value(int x, int y){
    int sum = 0;
    sum += mat[x][y];
    sum += mat[x][y+1];
    sum += mat[x][y+2];
    sum += mat[x+1][y+1];
    sum += mat[x+2][y];
    sum += mat[x+2][y+1];
    sum += mat[x+2][y+2];

    return sum;
}

void print_hour_glass(int x, int y){
    printf("%d %d %d\n  %d  \n%d %d %d\n", mat[x][y], mat[x][y+1], mat[x][y+2], mat[x+1][y+1], mat[x+2][y], mat[x+2][y+1], mat[x+2][y+2]);
}

int main(){
    int max_v = -123456, mx, my;
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int temp = calculate_hour_glass_value(i, j);
            if (temp > max_v)
            {
                max_v = temp;
                mx = i;
                my = j;
            }
            
        }
        
    }
    
    printf("%d\n", max_v);
    // print_hour_glass(mx, my);

    return 0;
}