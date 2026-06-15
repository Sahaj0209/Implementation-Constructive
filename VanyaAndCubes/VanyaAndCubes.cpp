#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    int level = 0;
    int cubesReq=1;
    while(cubesReq<=i){
        level=level+1;
        i=i-cubesReq;
        cubesReq=cubesReq+level;
    }
    cout<<level<<endl;
    return 0;
}