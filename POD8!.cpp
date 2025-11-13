#include<iostream>
#include<string>
using namespace std;
string prefix(string text1,string text2,string text3){
    string word;
for(int i=0;i<text1.length();i++){
            if(text1[i]==text2[i]&&text2[i]==text3[i]){
                word.push_back(text1[i]);
            }
}
if(word.length()>0){
    return word;
}
else{
    return "no";
}

}
 
int main(){
    string text1,text2,text3;
    cin >> text1 >> text2 >> text3;
    string ans = prefix(text1,text2,text3);
    cout<< ans;
    return 0;
} 