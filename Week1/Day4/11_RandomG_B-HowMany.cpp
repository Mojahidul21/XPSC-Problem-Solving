#include<bits/stdc++.h>

#define pnl <<'\n';                     // pnl - print new line
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no
#define lli long long int               // lli - long long int
#define con const int c=1e              // con - constant
#define imx INT_MAX;                    // imx - INT_MAX
#define imn INT_MIN;                    // imn - INT_MIN

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s,t;
    cin>>s>>t;
    int cnt=0;
    for(int a=0;a-s<=0;a++){
        for(int b=0;a+b-s<=0;b++){
            for(int c=0;a+b+c-s<=0;c++){
                if(a*b*c-t<=0)cnt++;
            }
        }
    }
    cout<<cnt;

    return 0;
}
