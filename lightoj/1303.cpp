#include <iostream>
#include <cstdio>
using namespace std;

#define ll long long
#define sl(x) scanf("%lld",&x);

int main()
{
	ll T,k=1,ax,ay,bx,by,cx,cy,dx,dy;
	ll area;

	sl(T);

	while(T--)
	{
		sl(ax);
		sl(ay);
		sl(bx);
		sl(by);
		sl(cx);
		sl(cy);

		dx=ax+cx-bx;
		dy=ay+cy-by;

		area= ((ax*by + bx*cy + cx*dy + dx*ay)-(ay*bx + by*cx + cy*dx + dy*ax))/2;

		if(area<0) area=-area;

		printf("Case %lld: %lld %lld ",k++,dx,dy);
		cout<< area<<endl;
	}

	return 0;
}