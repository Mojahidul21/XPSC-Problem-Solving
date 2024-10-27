#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(ceil(a/c)*c>b)cout<<-1;
    else cout<<(int)ceil(a/c)*c;

    return 0;
}
