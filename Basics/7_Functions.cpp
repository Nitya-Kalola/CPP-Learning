#include<iostream>
using namespace std;
    //Function :-
    //void => Which Doesn't Returns Anything.
    //return =>
    //parameterised
    //non parameterised

void Heyy(string Name){
    cout<<"Hello "<<Name<<endl;
} // Void Function

int sum(int Num1,int Num2){
    return Num1 + Num2;
} // Return Function
//Here int can be any type of Data Type... i.e., float, double, long, array, etc.

int Max(int Num1, int Num2){
    if(Num1<Num2) return Num2;
    else return Num1;
    //If Both Condition will not satisfy then it returns the garbage value... so to avoid it... use return Lastly.
    return 0;
} //Return Function

int Min(int Num1, int Num2){
    if(Num1<Num2) return Num1;
    else return Num2;
} //Return Function

void doSomething(int Number){
    cout<<Number<<endl;
    Number += 5;
    cout<<Number<<endl;
    Number += 5;
    cout<<Number<<endl;
}

void ChangeName(string &name){ //If I use "&" before the Parameter... it considered as "Pass by Reference" means The actual Value will be Changed.
    name[0] = 'P';
    cout<<name<<endl;
}

void arr_cng(int arr[], int n){ //Here array is always taken as a Reference.
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[0] = 100;
    cout<<"Inside the Function value of arr[0] : "<<arr[0]<<endl;
}

int main(){
    string Name1;
    cin>>Name1;
    Heyy(Name1);
    
    string Name2;
    Name2 = "Raj";
    Heyy(Name2);
    
    //Take 2 Numbers and Prints its sum. Using Function.
    
    int A,B;
    cin>>A>>B;
    int C = sum(A,B); //We have to store it to C, because the function returns the Sumation & it should be stored.
    cout<<C<<endl;
    
    int minimum = min(A,B);
    cout<<minimum<<endl;
    
    int maximum = max(A,B);
    cout<<maximum<<"\n";
    
    int Q = Max(A,B); //Return Function
    cout<<Q<<endl;
    
    int Y = Min(A,B); //Return Function
    cout<<Y<<endl;
    
    int num = 5;
    doSomething(num);
    cout<<num<<endl; //Output : 5, Because while passing the value of num to doSomething(),It sends a Copy...Not Actual Value...Callled as "Pass by Value"
    
    string Name = "Nitya";
    ChangeName(Name);
    cout<<Name<<endl; //Output : Pitya, as it changes the Actual value, because we used the "&" while passing the parameter. => Pass By Reference.
    
    int arr[5] = {212, 123124, 3421, 324, 23412};
    arr_cng(arr,5);
    cout<<"Outside the Function value of arr[0] : "<<arr[0]<<endl;
    
    return 0;
}