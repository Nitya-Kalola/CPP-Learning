#include<iostream>
using namespace std;

/*

void f(int c = 0){
    if(c==3) // Base Condition => The Condition where the Recursion gets break. 
        return;
    
    cout<<c<<" ";
    
    f(c+1); // Recursion => Calling a Function within the same function until the Specific Condition met.
    
    // Recursion Tree => The term used to avoid the lengthy dry runs... we use the tree that shows us the working of recursive functions.
    
    // Stack Overflow => When funtion is calling inside a same function... so previous function is awaiting to be completed in stack... so if calling multiple function... that makes the memory full of awaited functions... so when it gets full it terminates the code.
    
}*/

int counter = 0;

void Name_Print_5_Times(string a){
    
    if(counter==5) return;
    
    cout<<counter+1<<". "<<a<<endl;
    
    counter++;
    
    Name_Print_5_Times(a);
    
}

void Printing_1_to_N(int a, int counter = 0){
    
    if(counter == a) return;
    
    cout<<counter+1<<endl;
    
    Printing_1_to_N(a, counter+1);
    
}

void Printing_N_to_1(int a){
    
    if(a == 0) return;
    
    cout<<a<<endl;
    
    Printing_N_to_1(a-1);
}

void Printing_1_to_N_Backtracking(int a){
    
    if(a == 0) return;
    
    Printing_1_to_N_Backtracking(a-1);
    
    cout<<a<<endl;
    
}

void Printing_N_to_1_Backtracking(int a,int counter = 0){
    
    if(a==counter) return;
    
    Printing_N_to_1_Backtracking(a,counter+1);
    
    cout<<counter+1<<endl;
}

void a(){ //Sum of First N Numbers
    
    cout<<"For Sum of First N Numbers, Enter N : ";
    int n;
    cin>>n;
    
    int a=0;
    
    for(int i = 1;i<=n;i++){
        a=a+i;
    }cout<<a;
    
}

void Parameterized_function(int i,int sum = 0){
    
    if(i<1){
        cout<<sum;
        return;
    }
    Parameterized_function(i-1,sum+i);
    
}

int Functional_Recursion(int n){
    
    if(n<1) return 0;
    return n+Functional_Recursion(n-1);
    
}

int Factorial(int n){
    if(n<2) return 1;
    return n*Factorial(n-1);
}

int main(){
    // f();
    // Name_Print_5_Times("Nitya");
    // Printing_1_to_N(10);//Here N is 10/
    // Printing_N_to_1(10);//Here 10 is N.
    // Printing_1_to_N_Backtracking(3);
    // Printing_N_to_1_Backtracking(3);
    // a();
    // Parameterized_function(3); // Focuses on passing values as parameters and does not return anything.
                                  // Useful when you want to carry a result through the parameters.
    cout<<Functional_Recursion(3)<<endl; // Focuses on returning values.
    cout<<Factorial(5)<<endl;
    return 0;
}