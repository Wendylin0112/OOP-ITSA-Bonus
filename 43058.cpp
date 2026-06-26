#include<iostream>
using namespace std;
// 程式設計類型 > 新手入門專區 > 01 基本指令使用
// https://etutor2.itsa.org.tw/mod/topics/view.php?id=43058
int main(){
    string input;
    cin>>input;
    for(int i=0;i<5;i++){
        for(int j=0;j<input[i]-'0';j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}