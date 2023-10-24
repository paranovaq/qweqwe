#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long long a,b,c;
    cout<<"¬ведите a:"<<endl;
    cin>>a;
    cout<<"¬ведите b:"<<endl;
    cin>>b;
    cout<<"¬ведите c:"<<endl;
    cin>>c;
   if(a == b && b == c && a == c) cout<<"3"<<endl;
   else
   if (a != b &&  b != c && c != a ) cout<<"1";
   else cout<<"2"<<endl;


    return 0;
}
