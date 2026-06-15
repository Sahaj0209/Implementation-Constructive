#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    int height = 0;
    int level = 1;
    while(i>=0){
        int cubesReq=level*(level+1)/2;
        if(i<cubesReq) break;
        i=i-cubesReq;
        level++;
        height++;
    }
    cout<<height<<endl;
    return 0;
}