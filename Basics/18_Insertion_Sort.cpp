#include<iostream>
#include<algorithm>
using namespace std;

void Insertion_Sort(int array[], int size){ // My Own Logic
    
    for(int i = 1; i < size; i++){
        int a = i;
        for(int j = i - 1; j >= 0; j--){
            if(array[a]<array[j]){
                swap(array[a],array[j]);
                a--;
            }
        }
    }
    
}

void Insertion_Sort1(int array[], int size){
    
    for(int i = 1; i < size; i++){
        int key = array[i];
        int j;
        
        for(j = i - 1; j >= 0; j--){
            if(array[j]>key){
                array[j + 1] = array[j];
            }
            else{
                break;
            }
        }
        
        array[j + 1] = key;
        
    }
}

int main(){
    int array[] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
    int size = sizeof(array)/sizeof(array[0]);

    // Insertion_Sort(array, size);
    Insertion_Sort1(array, size);
    for(int a : array){
        cout<<a<<" ";
    }
    return 0;
}