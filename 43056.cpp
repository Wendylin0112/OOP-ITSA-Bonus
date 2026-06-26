#include<iostream>
using namespace std;
// 程式設計類型 > 新手入門專區 > 01 基本指令使用
// https://etutor2.itsa.org.tw/mod/topics/view.php?id=43056
int main(){
    string input;
    cin>>input;
    for(int i=3;i>=0;i--){
        cout<<input[i];
        if(i!=0){
            cout<<",";
        }
    }
    cout<<endl;
    return 0;
}