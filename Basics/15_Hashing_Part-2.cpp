#include <iostream>
#include<unordered_map>
#include<map>
using namespace std;

void Highest_Frequency(map<int, int> &a,int b[], int c){
    
    for(int i = 0;i<c;i++){
        a[b[i]]++;
    }
    int l = 0;
    for(auto i:a){
        if(l<i.second){
        l = i.second;}
    }
    
    bool PrintedSmallest = false; //Flag to print only once(Smaller One)
    
    for(auto i:a){
        if(i.second==l && !PrintedSmallest){
            cout<<"Highest Frequency with Smaller Key : Number = "<<i.first<<" => Frequency = "<<i.second;
            PrintedSmallest = true;
        }
    }cout<<endl<<endl;
    
    bool PrintedSmallest1 = false;
    for(auto it = a.rbegin();it!=a.rend();it++){
        if(it->second==l && !PrintedSmallest1){
            cout<<"Highest Frequency with Larger Key : Number = "<<it->first<<" => Frequency = "<<it->second;
            PrintedSmallest1 = true;
        }
    }
    
    int k = l;
    for(auto i:a){
        if(k>i.second){
            k=i.second;
        }
    }
    
    cout<<endl<<endl;
    
    bool PrintedSmallest_1 = false; // Flag to Print Smallest No. from Numbers having same lowest frequency.
    
    for(auto i:a){
        if(k==i.second && !PrintedSmallest_1){
            cout<<"Lowest Frequency with Smaller Number : Number = "<<i.first<<" => Frequency = "<<i.second;
            PrintedSmallest_1 = true;
        }
    }
    
    cout<<endl<<endl;
    
    bool PrintedSmallest_2 = false;
    
    for (auto it = a.rbegin(); it!=a.rend(); it++){
        if(k==it->second && !PrintedSmallest_2){
            cout<<"Lowest Frequency with Larger Number : Number = "<<it->first<<" => Frequency = "<<it->second;
            PrintedSmallest_2 = true;
        }
    }
    
}

int main(){
    int array[] = {6,7,3,1,6,1,5,7,5,7,1,5,3,1,7,3,4,4};
    int size = sizeof(array)/sizeof(array[0]);
    
    
    //map will take O(log n);
    //In map the key can be of STL Data Type like pair, vector, stack, etc.
    
    unordered_map<int, int> mpp;// Here key only can be int, float, double, etc... excluding STL data types like pair<int, int>,etc.
                                // For best and average case the time complexity is O(1) which is best. in worst case it is O(n). so at that time switch to map.
                                // Prefer first unordered_map and then map if it gives O(n).
                                
                                // Why Worst case happens in unordered_map. => Due to collisions.
                            
                                // Methods to solve the Hashing...(Not Important for Interview) ✅ Division Method → Simple modulo

                                //✅ Mid Square Method → Square and extract middle digits

                                //✅ Folding Method → Split and add parts of the key

        if(size!=0){
            for(int i = 0;i<size;i++){
                mpp[array[i]]++;//Solves the problem of Hash of storing 10^6 in main function. As it can store only presented value and its frequency.
            }
            
            for(auto a:mpp){
                cout<<a.first<<" => "<<a.second<<endl;
            }
            
            cout<<endl;
            
            map<int, int> mpp1;
            Highest_Frequency(mpp1, array, size);
            
            cout<<endl<<endl;
        }
        else{
            cout<<"Array is Empty.";
        }
    
    
    return 0;
}