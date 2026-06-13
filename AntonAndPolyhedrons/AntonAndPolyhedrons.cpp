#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int cnt =0;
    string str;
    for(int i =0;i<t;i++){
        cin>>str;
        if(str=="Tetrahedron") cnt +=4;
        else if(str=="Cube") cnt +=6;
        else if(str=="Octahedron") cnt +=8;
        else if(str=="Dodecahedron") cnt+=12;
        else if(str=="Icosahedron") cnt+=20;
    }
    cout<<cnt<<endl;
    return 0;
}
//Tetrahedron. Tetrahedron has 4 triangular faces.
//Cube. Cube has 6 square faces.
//Octahedron. Octahedron has 8 triangular faces.
//Dodecahedron. Dodecahedron has 12 pentagonal faces.
//Icosahedron. Icosahedron has 20 triangular faces.