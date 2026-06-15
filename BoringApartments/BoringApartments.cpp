#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int add = 10;
        int size = log10(a)+1;
        int rem = a%10;
        int ans = (size*(size+1)/2)+(rem-1)*add;
        cout<<ans<<endl;
    }
    return 0;
}