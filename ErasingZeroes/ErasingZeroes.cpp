#include <bits/stdc++.h>
using namespace std;
int findLastOccur(string s){
    for(int i =s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            return i;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zeroCnt=0;
        int flag = 0;
        for(int i=0;i<s.size();i++){
            if(i>=findLastOccur(s)) break;
            else if(s[i]=='1') flag = 1;
            else if(flag==1 && s[i]=='0') zeroCnt++;
            else if(flag==1 && s[i]=='1') flag=0;
        }
        cout<<zeroCnt<<endl;
    }
    return 0;
}