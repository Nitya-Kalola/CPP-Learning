#include<iostream>
using namespace std;
int main(){
    
    //For Loop
    cout<<"For Loop : "<<endl;
    
    for(int i = 1;i<=20;i++){
        if(i%2==0){
            cout<<i<<" is Even."<<endl;
            
        }else{
            cout<<i<<" is Odd."<<endl;
        }
    }
    
    
    //Print From 1 to 5 using While Loop.
    cout<<"While Loop : "<<endl;
    
    int i=2;
    while(i<=5){
        cout<<i<<endl;
        i++;
    }
    
    //Do...while
    
    do{
        cout<<i<<endl;
        i++;
    }while(i<=7);
    
    return 0;
    
}