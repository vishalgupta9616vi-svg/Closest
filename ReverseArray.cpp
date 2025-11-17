#include<iostream>
#include<vector>
using namespace std;
void brr(vector<int> &arr){
    cout<<"Input of array";
 int x;
 while(true){
    cin>>x;
    if(x==-1) break;
    arr.push_back(x);
 }
    int n = arr.size();
    for(int i=0;i<arr.size()/2;i++){
        if(arr[i]!=arr[n-i-1]){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
 for(int i=0;i<arr.size();i++){
        cout<<arr[i] << " ";
    }
}
int main(){
    vector<int> arr;
    brr(arr);
    
    
    return 0;
    
}