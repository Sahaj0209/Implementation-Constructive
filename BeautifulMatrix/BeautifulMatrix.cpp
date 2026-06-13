#include <bits/stdc++.h>
using namespace std;
int main(){
    int t[5][5];
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>t[i][j];
            if(t[i][j]==1){
                a=abs(i-2);
                b=abs(j-2);
                break;
            }
        }
    }
    cout<<(a+b)<<endl;
    return 0;
}