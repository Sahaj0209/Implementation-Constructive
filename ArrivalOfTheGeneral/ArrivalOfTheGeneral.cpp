#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int min = INT_MAX;
    int minIdx,maxIdx,cost1,cost2;
    int max = INT_MIN;
    for(int i =0;i<t;i++){
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
            maxIdx=i;
        }
        if(min>=arr[i]){
            min = arr[i];
            minIdx=i;
        }
    }
    int ans = maxIdx+(t-1-minIdx);
    if(maxIdx>minIdx) ans--;
    cout<<ans<<endl;
    return 0;
}