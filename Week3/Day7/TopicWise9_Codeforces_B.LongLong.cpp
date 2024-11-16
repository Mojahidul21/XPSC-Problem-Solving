#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
#define dnl cout<<'\n';                 // dnl - detached new line
#define pss <<" "                       // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no
#define ll  long long                   // ll  - long long int
#define con const int c=1e              // con - constant
#define imx INT_MAX;                    // imx - INT_MAX
#define imn INT_MIN;                    // imn - INT_MIN

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        bool pw=0,nw=0;
        // pw - positive window
        // pw 1 - a new positive window is started
        // nw - negative window
        // nw 1 - a new negative window is started

        ll sum=0;
        // maximum possible sum

        int cp=0,cn=0;
        // cp - count positive window
        // cn - count negative window

        while(n--){
            ll x;
            cin>>x;

            if(!x)continue;

            if(!pw&&!nw&&x>0)pw=1,sum+=x,cp++;
            else if(!pw&&!nw)nw=1,sum+=-x,cn++;
            else if(pw&&x>0)sum+=x;
            else if(pw)pw=0,nw=1,sum+=-x,cn++;
            else if(nw&&x>0)pw=1,nw=0,sum+=x,cp++;
            else sum+=-x;
        }
        cout<<sum pss<<(cp<cn?++cp:cn)enl
    }

    return 0;
}
