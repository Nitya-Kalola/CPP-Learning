#include<iostream>
#include<algorithm>
using namespace std;

void Bubble_Sort(int array[], int size){
    
    for(int i = 0; i < size - 1; i++){
        
        bool swapped = false;
        
        for(int j = 0; j < size - 1 - i; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
    
}

int main(){
    int array[] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
    int size = sizeof(array)/sizeof(array[0]);
    
    Bubble_Sort(array, size);
    for(int a : array){
        cout<<a<<" ";
    }
    return 0;
}