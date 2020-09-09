#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

bool mark[10009];
long long value[10009];

int a, b, c, d, e, f;
int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(mark[n]==true)
    	return value[n]% 10000007;
    mark[n]=true;
    return value[n]=( fn(n-1) % 10000007+ fn(n-2)% 10000007 + fn(n-3)% 10000007 + fn(n-4)% 10000007 + fn(n-5)% 10000007 + fn(n-6)% 10000007 )% 10000007;
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
    	memset(mark,false,10009);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}