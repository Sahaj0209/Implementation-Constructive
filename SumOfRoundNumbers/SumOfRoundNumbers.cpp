#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector <int> v;
        int a;
        cin>>a;
        int place = 1;
        while(a>0){
            int rem =a%10;
            if(rem!=0){
            int push = rem*place;
            v.push_back(push);
            }
            place = place*10;
            a=a/10;            
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}