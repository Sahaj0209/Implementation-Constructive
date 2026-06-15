#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        while(max(a,b)<=c){
            if(a<b) a+=b;
            else b+=a;
            cnt++;                       
        }
        cout<<cnt<<endl;
    }
    return 0;
}