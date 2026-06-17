#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int cnt=0;
    cin>>a>>b;
    int quo = b/a;
    bool flag = true;
    if(b%a!=0) cout<<-1<<endl;
    else if(a==b) cout<<0<<endl;
    else {
        while(quo>1){
            if(quo%3==0){
                quo=quo/3;
                cnt++;
            } else if(quo%2==0){
                quo=quo/2;
                cnt++;
            } else if(quo%3!=0 && quo%2!=0 && quo!=0) {
                flag = false;
                break;
            }
        }
        if(flag) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}