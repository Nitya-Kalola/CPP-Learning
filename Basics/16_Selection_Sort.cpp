#include<iostream>
#include<algorithm>
using namespace std;

// void Selection_Sort(int array[], int size){ // My own logic... It sorts the array but it has the issue... that it doesn't follow the selection sort Approach... and it has also more time complexity of O(n^3).
    
//     for(int i = 0; i<size; i++){
//         for(int j = i; j<size;j++){
//             if(array[j]==*min_element(&array[i],&array[size])){
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
    
// }

void Selection_Sort(int array[], int size){ // This code is optimized than the above code. But not Follows the Selection Sort Approach. Even it has the O(n^2) Time Complexity.
    
    for(int i = 0; i<size; i++){
        int a = *min_element(&array[i],&array[size]);
        for(int j = i; j<size;j++){
            if(array[j]==a){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
}

void Selection_Sort1(int array[], int size){ // Selection Sort is a sorting algorithm that repeatedly finds the smallest element from the unsorted part of the array and swaps it with the element at the current position.

    for(int i = 0; i<size - 1;i++){
        int min_index = i;
        
        for(int j = i + 1; j<size; j++){
            if(array[j]<array[min_index]){
                min_index = j;
            }    
        }
        
        if(min_index!=i){
            //Swapping Two Numbers
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }
}

int main(){
    int array[] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
    int size = sizeof(array)/sizeof(array[0]);
    // Selection_Sort(array,size);
    Selection_Sort1(array,size);
    for(int a : array){
        cout<<a<<" ";
    }
    return 0;
}