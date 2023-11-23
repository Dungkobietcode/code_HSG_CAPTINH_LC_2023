#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("bai3.inp", "r",stdin);
    freopen("bai3.out", "w",stdout);
    int n,k,dem=0;
    cin>>n>>k;
    int a[n];
    int b[n]= {0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        b[i]=count(a,a+i,k-a[i]);
    }
    for(int i=1;i<n;i++){
        dem+=b[i];
    }
    cout<<dem;
    return 0;
}
