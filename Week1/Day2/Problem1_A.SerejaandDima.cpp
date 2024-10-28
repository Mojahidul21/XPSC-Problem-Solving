#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    list<int>lst;
    for(int i=1;i<=n;i++){
        int val;
        cin>>val;
        lst.push_back(val);
    }

    int sumS=0,sumD=0;
    for(int i=1;!lst.empty();i++){
        if(i%2){
            if(lst.front()>lst.back()){
                sumS+=lst.front();
                lst.pop_front();
            }
            else{
                sumS+=lst.back();
                lst.pop_back();
            }
        }
        else{
            if(lst.front()>lst.back()){
                sumD+=lst.front();
                lst.pop_front();
            }
            else{
                sumD+=lst.back();
                lst.pop_back();
            }
        }
    }
    cout<<sumS<<" "<<sumD;


    return 0;
}
