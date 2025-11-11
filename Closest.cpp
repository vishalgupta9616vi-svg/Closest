#include<iostream>
using namespace std;
int nearest(int a,int b){
if(a>b){
    return 2;
}
else if(a==b){
    return 0;
}
else{
    return 1;
}
}
int main(){
    int x,y,z;
    cout<< "Enter the integer"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    int a = z-x;
    int b = z-y;
    if(a<0){
        a=-a;
    }
    if(b<0){
        b=-b;
    }
    int ans = nearest(a,b);
    if(ans==1)
     cout<<"Person 1 arrives first";
     else if(ans==2)
     cout<<"Person 2 arrives first";
     else
     {
        cout<<"Both arrives at same time";
     }
}