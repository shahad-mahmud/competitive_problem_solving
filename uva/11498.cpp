#include <iostream>
using namespace std;

#define ll long long
#define sl(x) scanf("%lld",&x)

int main()
{
	ll T, ox,oy,x,y;

	while(1)
	{
		sl(T);
		if(T==0)
			break;
		sl(ox);
		sl(oy);

		for(int l=0;l<T;l++)
		{
			sl(x);
			sl(y);

			if(x==ox || y== oy)
				printf("divisa\n");
			else if(x>=ox && y>=oy)
				printf("NE\n");
			else if(x<=ox && y>=oy)
				printf("NO\n");
			else if(x<=ox && y<=oy)
				printf("SO\n");
			else if(x>=ox && y<=oy)
				printf("SE\n");
		}
	}

	return 0;
}