#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
cin>>n;
i=n/10;
        if(n%10==9)i++;
cout<<i<<endl;
}
return 0;
}
