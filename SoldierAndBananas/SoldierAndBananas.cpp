#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int totalCost = k*w*(w+1)/2;
    int borrow = totalCost - n;
    if(n>=totalCost) borrow = 0;
    cout<<borrow<<endl;
    return 0;
}