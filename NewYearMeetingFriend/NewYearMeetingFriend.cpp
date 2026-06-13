#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v ={a,b,c};
    sort(v.begin(),v.end());
    int med = v[1];
    int dist = abs(a-med)+abs(b-med)+abs(c-med);
    cout<<dist<<endl;
    return 0;
}