#include <bits/stdc++.h>
using namespace std;
bool capsLock(string s){
    for(int i=1;i<s.size();i++){
        if(s[i]>95){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    if(capsLock(s)){
        for(int i=0;i<s.size();i++){
            if(s[i]>95) s[i]=toupper(s[i]);
            else if(s[i]<95) s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}