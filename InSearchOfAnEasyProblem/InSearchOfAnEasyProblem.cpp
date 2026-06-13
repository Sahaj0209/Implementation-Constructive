#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string flag = "EASY";
    while(t--){
        int i;
        cin>>i;
        if(i==1){
            flag = "HARD";
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}