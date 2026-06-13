#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        int num = s[i] - '0';
        if(num >= 5 && !(i == 0 && num == 9))
            num = 9 - num;
        s[i] = char(num + '0');
    }
    cout << s << endl;
    return 0;
}