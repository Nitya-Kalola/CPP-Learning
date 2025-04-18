#include <iostream>
#include<map>
using namespace std;

int Hashing(int array[], int s, int k){//By using Normal For Loop of time complexity O(N*N).
    int counter = 0;                   // for single number.
    for(int i = 0;i<s;i++){
        if(array[i]==k) counter++;
    }
    return counter;
}

void Hashing_1(int a[], int b[], int c){//Less Time Complexity
    
    for(int i = 0;i<c;i++){
        a[b[i]]++;
    }
}

int Char_Hash(string s, int n, char c){ // Character Hashing for single character
    int counter = 0;                    // Only for small characters
    for(int i = 0;i<n;i++){
        if(c == s[i]) counter++;
    }
    return counter;
}

void Char_Hash_1(int a[], string s, int n){// It is for Small Characters only
    
    for(int i = 0;i<n;i++){
        a[int(s[i])-96]++;// here we can use char-'a' instead of int(s[i])-96 if we want to indexing from 0.
    }
}

int main(){
    int array[] = {1,2,3,1,4,3,5,4,6,2};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<Hashing(array, size, 3)<<endl<<endl;
    
    int n = 13;
    int Hash_Array[n] = {0};//If we declare hash globally we don't require to initialized with zero... cause it already assign them to 0.
    //Hash Array in int main can goes to 10^6 and globally it can goes upto 10^7.
    //If array of data type bool can goes inside the main function is 10^7 and globally upto 10^8.
    
    Hashing_1(Hash_Array, array, size);
    for(int i = 0; i<n; i++){
        if(Hash_Array[i]!=0) cout<<i<<" => "<<Hash_Array[i]<<endl; //Gives Frequencies
    }
    
    cout<<endl;
    
    string s = "nyitinya";
    cout<<Char_Hash(s,s.size(),'f')<<endl<<endl;
    
    int n1 = 27;
    int Char_Hash_Array[n1] = {0};
    Char_Hash_1(Char_Hash_Array, s, s.size());
    for(int i = 0;i<n1;i++){
        if(Char_Hash_Array[i]!=0) cout<<char(i+96)<<" => "<<Char_Hash_Array[i]<<endl;
    }
    cout<<endl;
    
    map<int, int> mpp;
    
    for(int i = 0;i<size;i++){
        mpp[array[i]]++;//Solves the problem of Hash of storing 10^6 in main function. As it can store only presented value and its freuency.
    }
    
    for(auto a:mpp){
        cout<<a.first<<" => "<<a.second<<endl;
    }
    
    return 0;
}