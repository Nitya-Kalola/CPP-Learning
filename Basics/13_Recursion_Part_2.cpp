#include<iostream>
using namespace std;

void Array_reverse(int a[], int b, int c){
    
    if(b>=c) return;
    swap(a[b],a[c]);
    Array_reverse(a, b + 1, c - 1);
    
}

int size;

void Array_reverse_1(int a[], int b){
    
    //int size = sizeof(a)/sizeof(a[0]); //Don't use this formula inside the function... cause When you pass int a[] to a function, it decays to a pointer (int* a). So:

    //sizeof(a) gives the size of a pointer (usually 4 or 8 bytes),

    //sizeof(a[0]) gives size of one element (4 bytes for int),

    //So size becomes 4 / 4 = 1 or 8 / 4 = 2, which is wrong!
    
    //Instead use the Global variable.
    
    if(b>=size/2) return;
    swap(a[b],a[size-b-1]);
    Array_reverse_1(a,b+1);
    
}

bool String_Palindrome(string a, int b, int c){
    
    if(b>=c) return true;
    if(a[b]!=a[c-1]) return false;
    return String_Palindrome(a,b+1,c-1);
    
}

int Fibonacci_Number(int n){
    
    if(n<=1) return n;
    return Fibonacci_Number(n-1)+Fibonacci_Number(n-2);
    
}

int main(){
    
    int array[] = {1,2,3};
    size = sizeof(array)/sizeof(array[0]);
    Array_reverse(array, 0, size-1);
    for (int i = 0; i <= size-1; i++) {
        cout << array[i] << " ";
    }cout<<endl<<endl;
    
    Array_reverse_1(array,0);
    for (int i = 0; i <= size-1; i++) {
        cout << array[i] << " ";
    }cout<<endl;
    cout<<endl;
    
    string s = "KHNHK";
    
    if(String_Palindrome(s, 0, s.size())) cout<<"Palindrome";
    else cout<<"Not Palindrome";
    
    cout<<endl;
    cout<<endl;
    
    int n = 6;
    
    cout<<Fibonacci_Number(n)<<endl<<endl;
    
    for(int i = 0;i<n;i++){
        cout<<Fibonacci_Number(i)<<" ";
    }
    
    return 0;
    
}