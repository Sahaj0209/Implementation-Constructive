#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int> v(n);
    int cnt=1;
    int maxInc=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i!=0){
        if(v[i]>v[i-1]){
            cnt++;
        }
        else {
            cnt=1;
        }
        maxInc = max(cnt,maxInc);
    }
}
cout<<maxInc<<endl;
    return 0;
}