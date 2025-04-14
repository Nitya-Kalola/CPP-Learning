// Note: We can write multiline comments using /*Comment*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //If...Else
    //Write Program a program that take inputs as an age... that tells you are adult or not.
    
    int a;
    cout<<"What is Your Age? Type Here : ";
    cin>>a;
    
    if(a<=122 && a>=0){
        if(a<18){
            cout<<"You are Minor... Your age is less than the 18."<<endl;
        }
        else{
            cout<<"You are an Adult... Your age is more than 18."<<endl;
        }
    }else{
        cout<<"Please Enter the Valid Age.";
    }
    
    cout<<endl;
    
    // Grading System:-
    // Below 25: F
    // 25 to 44: E
    // 45 to 49: D
    // 50 to 59: C
    // 60 to 79: B
    // 80 to 100: A
    
    // Take Input From Students and show them what Grade they get.
    
    float Marks;
    cout<<"Enter Your Marks : ";
    cin>>Marks;
    cout<<"Grade : ";
    if(Marks<=100 && Marks>=0){
        if(Marks<25){
            cout<<"F"<<endl;
        }else if(Marks<45){
            cout<<"E"<<endl;
        }else if(Marks<50){
            cout<<"D"<<endl;
        }else if(Marks<60){
            cout<<"C"<<endl;
        }else if(Marks<80){
            cout<<"B"<<endl;
        }else if(Marks<=100){
            cout<<"A"<<endl;
        }
    }else{
        cout<<"Please Enter Valid Marks.";
    }
    
    cout<<endl;
    
    /* Take age from user and take decision accordingly...
    if age<18 => "Not Eligible for the Job."
    if age>=18 => "Eligible for the Job."
    if age<=57 and age>=55 => "Eligible for the Job. But Retirement coming Soon."
    if age>57 => "Retirement Time."
    */
    
    //Nested If...Else
    
    int age;
    
    cout<<"Enter Your age : ";
    cin>>age;
    
    if(age<18){
        cout<<"Not Eligible for the Job."<<endl;
    }else if(age<=57){
        cout<<"Eligible for the Job."<<endl;
        if(age>=55){
            cout<<"But Retirement coming soon."<<endl;
        }
    }else{
        cout<<"Retirement Time.";
    }
    
    return 0;
}
