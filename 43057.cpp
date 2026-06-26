#include<iostream>
#include<map>
using namespace std;
// 程式設計類型 > 新手入門專區 > 01 基本指令使用
// https://etutor2.itsa.org.tw/mod/topics/view.php?id=43057
int main(){
    map<string, string> table;

    table["dog"] = "狗";
    table["狗"] = "dog";
    table["cat"] = "貓";
    table["貓"] = "cat";
    table["duck"] = "鴨";
    table["鴨"] = "duck";
    table["cow"] = "牛";
    table["牛"] = "cow";
    table["fox"] = "狐";
    table["狐"] = "fox";
    string input;
    cin>>input;
    if(table.find(input) != table.end()){
        cout<<table[input]<<endl;
    }
    return 0;
}