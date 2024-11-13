#include<bits/stdc++.h>

#define snl cout<<'\n'                      // snl - staring new line
#define enl <<'\n';                         // enl - ending new line
#define dnl cout<<'\n';                     // dnl - detached new line
#define pss <<" "                           // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";        // pyn - print yes no

#define lli long long int                   // lli - long long int
#define con const int c=1e                  // con - constant
#define imx INT_MAX;                        // imx - INT_MAX
#define imn INT_MIN;                        // imn - INT_MIN

#define vin for(int i=0;i<n;i++)cin>>v[i];  // vin - vector input

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        deque<char>dq;
        cin>>n;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            dq.push_back(c);
        }
        while(!(dq.size()<2||dq.front()==dq.back()))dq.pop_front(),dq.pop_back();
        cout<<dq.size()enl
    }

    return 0;
}
