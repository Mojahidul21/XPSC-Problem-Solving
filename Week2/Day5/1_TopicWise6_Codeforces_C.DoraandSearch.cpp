#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
#define dnl cout<<'\n';                 // dnl - detached new line
#define pss <<" "                       // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no

#define lli long long int               // lli - long long int
#define con const int c=1e              // con - constant
#define imx INT_MAX;                    // imx - INT_MAX
#define imn INT_MIN;                    // imn - INT_MIN

#define ivi for(int i=0;i<n;i++){       // ivi - index_wise vector input

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        ivi cin>>v[i];}

        int l=0,r=n-1,mn=1,mx=n;
        while(true){
            if(mn<v[l]&&v[l]<mx&&mn<v[r]&&v[r]<mx){
                cout<<l+1 pss<<r+1 enl
                break;
            }

            while(r-l>2){
                if(v[l]==mn)l++,mn++;
                else if(v[l]==mx)l++,mx--;
                else break;
            }

            while(r-l>2){
                if(v[r]==mn)r--,mn++;
                else if(v[r]==mx)r--,mx--;
                else break;
            }

            if(r-l<=2){
                cout<<-1 enl
                break;
            }
        }
    }

    return 0;
}
