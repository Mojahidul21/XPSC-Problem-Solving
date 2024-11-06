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

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;
    map<int,int>mono;
    map<int,set<int>>poly;
    int ser=1;
    while(q--){
        int qType;
        cin>>qType;
        if(qType==1){
            int m;
            cin>>m;
            mono[ser]=m;
            poly[m].insert(ser);
            ser++;
        }
        else if(qType==2){
            int serial=mono.begin()->first,money=mono.begin()->second;
            cout<<serial pss;
            mono.erase(serial);
            poly[money].erase(serial);
            if(poly[money].empty())poly.erase(money);
        }
        else{
            int serial=*poly.rbegin()->second.begin(),money=poly.rbegin()->first;
            cout<<serial pss;
            mono.erase(serial);
            poly[money].erase(serial);
            if(poly[money].empty())poly.erase(money);
        }
    }

    return 0;
}
