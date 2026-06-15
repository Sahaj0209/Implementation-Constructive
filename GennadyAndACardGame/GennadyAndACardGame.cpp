#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    char chOne = a[0];
    char chTwo = a[1];
    string arr[5];
    set<char> set1;
    set<char> set2;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        char ch1 = arr[i][0];
        char ch2 = arr[i][1];
        set1.insert(ch1);
        set2.insert(ch2);
    }
    if((set1.find(chOne)!=set1.end())||(set2.find(chTwo)!=set2.end())) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}