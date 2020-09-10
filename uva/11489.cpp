#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d", &i)
#define sl(i) scanf("%lld", &i)
#define sf(i) scanf("%lf", &i)
#define pb(x) push_back(x)

#define fr(a, b) for (i = a; i < b; i++)

#define pi 2 * acos(0.0)

int main()
{
	ll i, j, T, k = 1, n, m, count = 0;
	string s;

	sl(T);

	while (T--)
	{
		cout << "Case " << k++ << ": ";
		count = 0;
		bool S = true;
		cin >> s;
		ll ln = s.size();

		if (ln == 1)
			S = true;
		else if (ln == 2)
			S = false;
		else
		{
			for (i = 0; i < ln; i++)
			{
				count += (s[i] - '0');
			}

			//cout<<count<<endl;

			for (i = 0; i < ln; i++)
			{
				if (i % 2 == 0)
				{
					for (j = 0; j < ln; j++)
					{
						//cout<<count<<endl;
						if (s[j] != 'n')
						{
							//cout<<count<<endl;
							if ((count - (s[j] - '0')) % 3 == 0)
							{
								cout << 1 << endl;
								S = true;
								s[j] = 'n';
								count = count - (s[j] - '0');
								break;
							}
						}
					}

					if (j == ln)
					{
						//cout<<j<<endl;
						S = false;
						goto result;
					}
				}
				else
				{
					for (j = 0; j < ln; j++)
					{
						//cout<<count<<endl;
						if (s[j] != 'n')
						{
							//cout<<count<<endl;
							if ((count - (s[j] - '0')) % 3 == 0)
							{
								cout << 0 << endl;
								S = false;
								s[j] = 'n';
								count = count - (s[j] - '0');
								break;
							}
						}
					}
					if (j == ln)
					{
						cout << j << endl;
						S = true;
						goto result;
					}
				}
			}
		}

	result:
		cout << (S ? "S\n" : "T\n");
	}

	return 0;
}