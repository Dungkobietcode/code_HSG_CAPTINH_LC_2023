#include <bits/stdc++.h>
#define ll long long
//code kiem tra so dep (Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại; đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch) 
using namespace std;
int ktdx(int a){
    string g = to_string(a);
    string d = to_string(a);
    reverse(d.begin(), d.end());
    return g==d;
}
int main(){
	ll n;
	cin>>n;
	int g=0,c=n%10;
	n/=10;
	while(n>10){
            g=g*10+n%10;
            n/=10;
	}
    if(ktdx(g)&&((c==2*n)||(n==2*c))){
            cout<<"Y";
    } else cout<<"N";

    return 0;
}
