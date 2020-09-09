#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
double find_c(double x, double y, double d)
{
 	double a = sqrt(x*x-d*d);
 	double b = sqrt(y*y-d*d);
 	return (a*b)/(a+b);
}
int main()
{
	double x, y, c;
	int w=1;
	int T;
	cin>>T;
	while(T--)
	{
	 	cin>>x>>y>>c;
		double low=0, mid=0, calculated_c=0;
	 	double high = min(x, y);
		for(int k=0;k<200;k++)
	 	{
	 		mid=(low+high)/2;
	 		calculated_c=find_c(x, y, mid);
	 		if(calculated_c>c)
	 			low = mid;
	 		else
	 			high = mid;
	 	}
	 	printf("Case %d: %.10f\n",w++,mid);
	}
 	return 0;
}
