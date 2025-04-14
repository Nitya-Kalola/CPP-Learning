// Note: We can write multiline comments using /*Comment*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Switch
    /*
    Take a Number and a Day for that... 
    like 1 for Monday
    2 for Tuesday...
    and 7 for Sunday.
    */
    
    int day;
    cin>>day;
    
    switch(day){
        case 1: cout<<"Monday"<<endl;
            break;
        case 2: cout<<"Tuesday"<<endl;
            break;
        case 3: cout<<"Wednesday"<<endl;
            break;
        case 4: cout<<"Thursday"<<endl;
            break;
        case 5: cout<<"Friday"<<endl;
            break;
        case 6: cout<<"Saturday"<<endl;
            break;
        case 7: cout<<"Sunday"<<endl;
            break;
        default: cout<<"Invalid"<<endl;
        break;
        cout<<"Check inside Switch case.";
        
    }
    cout<<"Check Outside";
    return 0;
}