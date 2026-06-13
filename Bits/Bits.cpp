#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int X =0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[1]=='+') X=X+1;
        else if(s[1]=='-') X=X-1;
    }
    cout<<X<<endl;
    return 0;
}