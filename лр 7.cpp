#include <bits/stdc++.h>

using namespace std;

int main()
{ double i,s,S,x;
cin>>x;
S=1;
for(i=1;i<=10;i++)
{
    s=i*x/(i+x);
    S=S*s;


}

    cout << S;
    return 0;
}
