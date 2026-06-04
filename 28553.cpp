#include<iostream>
using namespace std;
// ITSA競賽題目專區>第74次競賽>Problem1.計算複利
int main(){
    long double r,sum=0.0;
    int n,p;
    cin>>r>>n>>p;
    for(int i=0;i<n;i++){
        sum+=p;
        sum *= (1.0+r);
    }
    cout<<(long long)sum<<endl;
    return 0;
}