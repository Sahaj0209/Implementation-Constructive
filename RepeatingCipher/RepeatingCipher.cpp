#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int iterated=1;
    string res="";
    res+=s[0];
    int level = 1;
    int i=1;
    for(iterated;iterated<n;iterated++){
        res+=s[iterated];
        iterated=iterated+level;
        i=i++;
        level++;
    }
    cout<<res<<endl;
    return 0;
}
//1,1+2,1+2+3,