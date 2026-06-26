#include<iostream>
using namespace std;
// 程式設計類型 > 新手入門專區 > 01 基本指令使用
// https://etutor2.itsa.org.tw/mod/topics/view.php?id=43059
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}