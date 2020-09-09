#include <iostream>
using namespace std;

int main()
{
	long long a,b,n;

	cin>>n;

	while(n--)
	{
		cin>>a>>b;
		if(a>b)
		{
			cout<< ">\n";
		}
		else if(a<b)
			cout<< "<\n";
		else
			cout<< "=\n";
	}

	return 0;
}
