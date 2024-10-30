#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
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
    vector<string>arr[q];
    int cnt=0;
    for(int i=1;i<=q;i++){  // if while(q--){} is used here then value of q is changed and cannot be used as its initial value
        string a,b;
        cin>>a>>b;
        for(int j=0;;j++){
            if(arr[j].empty()){
                arr[j].push_back(a),arr[j].push_back(b);
                cnt++;
                break;
            }
            else if(!arr[j].empty()&&arr[j].back()==a){
                arr[j].push_back(b);
                break;
            }
        }
    }
    cout<<cnt;
    for(int i=0;i<cnt;i++)snl<<arr[i].front()pss<<arr[i].back();

    return 0;
}
