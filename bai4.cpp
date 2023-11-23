#include <bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    string x,y="";
    cin>>x;
    int i=0;
    while(i<x.size()){
        y+=x[i];
        i++;
        y=x[i]+y;
        i++;
    }
    if(x.size()%2!=0){
        reverse(y.begin(),y.end());
    }
    cout<<y;
    return 0;
}
