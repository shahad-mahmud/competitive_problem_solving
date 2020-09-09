#include <bits/stdc++.h>
#define loop(I, N) for (int I = 0; I < (N); ++I)
using namespace std;
int a[30];
int main()
{
    int m;
    string s;
    cin>>m>>s;
    loop(i,s.size()) a[s[i]-'a']++;
    for(int i=0;i<26;i++) if(a[i]%m) {cout<<-1;return 0;}
    for(int k=0;k<m;k++) 
    	for(int i=0;i<26;i++) 
    		for(int j=0;j<a[i]/m;j++) 
    			cout<<(char)(i+'a');
}