#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Integer Data Type
    int a = 21;//from -10^9 to 10^9
    long b = 1223;//from -10^12 to 10^12
    long long c = -42352352345;//from -10^18 to 10^18
    cout<<a<<endl<<b<<endl<<c<<"\n";
    
    //Float, Double
    float g = 3423.23423;
    float i = 543;
    cout<<g<<endl;
    cout<<i<<endl;
    
    //String and getline
    string str1;
    str1 = "Hey Worls";
    cout<<str1<<endl;
    
    string str2;
    cin>>str2; //cin read untill the space.
    cout<<str2<<endl;
    // input:"Hello World" Output:"Hello" Buffer:" World\n"
    
    // to solve the issue of the Input buffer in getline... use cin.ignore() after cin to clear the input buffer.
    
    string str3;
    getline(cin,str3); //getline() read buffer untill the \n(end of the line) if any, otherwise it take input from the cin inside the getline function... 
    cout<<str3<<endl;
    cout<<str3<<endl;
    
    //char
    char Q = 'p';
    cout<<Q;
    
    char t;
    cin>>t;//if we write more than one character.. then it takes only first character
    cout<<t;
    
    return 0;
}
