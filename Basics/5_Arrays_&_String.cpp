#include<iostream>
using namespace std;
int main(){
    //1D Array
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3] += 10;
    arr[1] = 23;
    cout<<arr[3]<<endl;
    cout<<arr[1]<<endl;
    
    //2D Array
    int arr1[2][2];
    arr1[1][0] = 21;
    cout<<arr1[1][0]<<endl;
    cout<<arr1[0][0]<<endl;//Store Garbage value Automatically
    
    string s = "Nitya";
    cout<<s[2]<<endl;
    cout<<s.size()<<endl;
    //Last Index value
    cout<<s[s.size() - 1]<<endl;
    s[s.size() - 1] = 'o';
    cout<<s[s.size() - 1]<<endl;
    cout<<s;
    
    return 0;
}