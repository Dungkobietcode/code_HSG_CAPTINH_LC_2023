#include <bits/stdc++.h>
using namespace std;
int so_dao(int n){
    string goc = to_string(n);
    string s = to_string(n);
    reverse(s.begin(), s.end());
    if(goc==s){
        return 1;
    }
    return 0;
}
int ktnt(int m){
    int dem=0;
    for(int i=2;i<=sqrt(m);i++){
        if(m%i==0)
            dem++;
    }
    if(dem==0){
        return 1;
    }else{
    return 0;
    }
}
int dem_uoc(int a){
    int dem=0;
    for(int i=1;i<=a;i++){
        if(a%i==0 && ktnt(i)){
            dem++;
        }
    }
    return dem>=3;
}
int main(){
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    int n,k,count1=0;
    cin>>n>>k;
    for(int i=n;i<=k;i++){
        if(dem_uoc(n) && so_dao(n)){
            count1++;
        }
    }
    cout<<count1;
    return 0;
}
