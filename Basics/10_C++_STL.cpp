#include <bits/stdc++.h>
using namespace std;

void Pairs(){
    
    //pair Comes under Utility Library.
    
    pair<int, int> p = {1,2}; //pairs stores two value... The First Value and then Second Value
    
    cout<<"The First Element in Pair p is "<<p.first<<" & Second Element is "<<p.second<<endl<<endl;
    
    //Nested Pairs
    
    pair<int, pair<int, int>> p1 = {1, {1, 2}};
    
    cout<<"p1's First Element : "<<p1.first<<endl;
    cout<<"p1's Second's First Element: "<<p1.second.first<<endl;
    cout<<"p1's Second's Second Element: "<<p1.second.second<<endl;
    
    cout<<endl;
    
    //Array as Data type
    
    pair<int, int> arr[] = {{1,2},{23,12},{1424,2343},{2341,5243},{23423,253434}} ;
    
    cout<<arr[3].second;
}

void Vector(){
    
    //vector comes under Container Library.
    //vector solves the issue of an array, which is the size of an array is fixed once its declared... but in vector we can modify the size of a vector.(Vector is Dynamic in nature.)
    
    vector<int> v;
    
    v.push_back(2); // Initially v is empty container... when we use push_back(i)... it adds an i to the end of a vector.
    v.emplace_back(2); // emplace_back is faster than the push_back.
    
    vector<pair<int, int>> v1; // Here we used the pair as a Data Type.
    
    v1.push_back({1, 2}); // Here it needs to make a pair and then pushback to it... which is slower.
    v1.emplace_back(1,2); // Here it directly stores an pair without need of {}.
    
    vector<int> v3(5,100); // here 5 is size of a vector and it stores 5 100s like... {100, 100, 100, 100, 100}.
    
    vector<int> v4(5); // here 5 is size of a vector and it stores 5 0s as a default values like... {0, 0, 0, 0, 0}.
    
    vector<int> v5(v3); //Here it makes a copy of v3 which is v3 = {100, 100, 100, 100, 100} like v5 = {100, 100, 100, 100, 100}.

    vector<int> a = {43,234,523,3464}; //declaration
    a.push_back(43245);
    
    cout<<a[4]<<endl; // Accessing using array like a[i].
    
    
    vector<int>::iterator it = a.begin();// Here a.begin() will take the Address of the first element in a.
                                         // An iterator is like a pointer that allows you to traverse (move through) the elements of a vector.
    
    cout<<*(it)<<endl; //*it dereferences the iterator — it gives you the value stored at that position.
    
    it++;
    cout<<*(it)<<endl;
    
    it+=2;
    cout<<*(it)<<endl;
    
    it++;
    cout<<*it<<endl;
    
    cout<<*(a.end())<<endl;// In a.end(), end means the Address of the element that is next to the vector a's last element.
    cout<<*(a.end()-1)<<endl;// So here if a.end() points to the next element of the last element of the vector a, a.end()-1 should points to Last element of the vector a. 
    
    cout<<*(a.rend())<<endl; // Not so Important.

    /*rend() stands for reverse end.
    
    It returns an iterator to the position before the first element in reverse order.
    
    Explaination : it reverse the elements of vector a... from a = {43,234,523,3464,43245} to a = {43245,3464,523,234,43}.
    
    Means a.rend()-1 => 43*/

    cout<<*(a.rend()-1)<<endl; // Not so Important.
    
    cout<<*(a.rbegin())<<endl; // Not so Important.
                               // rbegin means it points to last point.
                               // It first converts the a = {43,234,523,3464,43245} to a = {43245,3464,523,234,43}.. so begin is 43245.
    cout<<*(a.rbegin()+1)<<endl; //Not so Important.
    
    cout<<a.back()<<endl;//here a.back() means the element at the last in vector a.
    
    for(vector<int>::iterator it = a.begin(); it<a.end(); it++){ //here we can use it!=a.end() instead of it<a.end(), but it!=a.end() will be safe for all STL Containers.
        cout<<*it<<" ";
    }
    cout<<endl;
    
    //auto is equal to vector<int>::iterator
    
    for(auto it = a.begin();it != a.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    //for each
    
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
    
    //Erase
    
    a.erase(a.begin()+1);
    
     for(auto it : a){
        cout<<it<<" ";
    }cout<<endl;
    
    a.erase(a.begin()+1,a.end()-1);//Here it exclude the a.end()-1 element and include the element located before that.
    
    for(auto it:a){
        cout<<it<<" ";
    }cout<<endl;
    
    a.erase(a.end()-1);
    
    for(auto it : a){
        cout<<it<<" ";
    }cout<<endl;
    
    //Insert Function
    
    vector<int>x(2,100);
    
    for(auto a:x){
        cout<<a<<" ";
    }cout<<endl;
    
    x.insert(x.begin(),50);
    
    for(auto a:x){
        cout<<a<<" ";
    }cout<<endl;
    
    x.insert(x.begin()+1,5,36);
    
    for(auto a:x){
        cout<<a<<" ";
    }cout<<endl;
    
    //copy
    
    vector<int> copy(3,45);
    x.insert(x.begin()+1,copy.begin(),copy.end());
    
    for(auto a:x){
        cout<<a<<" ";
    }cout<<endl;
    
    //size
    cout<<x.size()<<endl;
    
    x.pop_back();//Removes the last element from vector.
    
    for(auto a:x){
        cout<<a<<" ";
    }cout<<endl;
    
    a.swap(x);
    
    for(auto x:a){
        cout<<x<<" ";
    }cout<<endl;
    
    for(auto a:x){
        cout<<a<<" ";
    }cout<<endl;
    
    a.clear();//erases the entire vectors
    cout<<a.size()<<endl;
    
    cout<<a.empty()<<endl;//Returns 0(False) if it is not Empty & 1(True) if it is Empty.
}

void List(){
    list<int> l;
    
    l.push_back(2); //add 2 at last of the list l
    l.push_back(3);
    
    for (auto a:l){
        cout<<a<<" ";
    }cout<<endl;
    
    cout<<l.size()<<endl;// give no. of elements present in list l
    
    l.pop_back();//remove last element from list l
    
    for(auto a:l){
        cout<<a<<" ";
    }cout<<endl;
    
    l.push_front(5);//add 5 at first position of list l.
    l.push_front(53);
    l.push_front(4234);
    
    for(auto a:l){
        cout<<a<<" ";
    }cout<<endl;
    
    l.pop_front();//removes first element
    
    for(auto a:l){
        cout<<a<<" ";
    }cout<<endl;
    
    cout<<l.front()<<endl;//returns first element
    cout<<l.back()<<endl;//returns last element
    
    cout<<*l.begin()<<endl;// Iterators to start/end
    cout<<*l.end()<<endl;
    
    l.sort(); // Sorts the list. The sort is permanently stored.
    for(auto a:l){
        cout<<a<<" ";
    }cout<<endl;
    
    l.reverse();// Reverses the list
    for(auto a:l){
        cout<<a<<" ";
    }cout<<endl;
    
    cout<<l.empty()<<endl;// Checks if list is empty...0 => False,1 => True
    
    l.insert(l.begin(),45);// insert(pos, val)	=> Inserts val before pos.
    for(auto a:l){
        cout<<a<<" ";
    }cout<<endl;
    
    l.erase(l.begin()); //erase(pos) => Removes element at pos
    for(auto a:l){
        cout<<a<<" ";
    }cout<<endl;
    
    l.clear();// Removes all elements
    cout<<l.empty()<<endl;
    
    l.emplace_front(23423);
    l.emplace_front(1244);
    l.emplace_back(4262);
    
    for(auto p:l){
        cout<<p<<" ";
    }cout<<endl;
}

void Deque(){
    
    deque<int> dq = {42,1235623,13223523,353,23523,242};
    
    for(auto i:dq){
        cout<<i<<" ";
    }cout<<endl;
    
    //Remaining all functions are same as given in vector and list.
}

void Stack(){
    
    stack<int> s;// It follows the LIFO(Last In  First Out).
    
    s.push(133);// 133(top)
    s.push(5234);// 5234(top) 133
    s.push(3453);//3453(top) 5234 133
    s.emplace(642);// 642(top) 3453 5234 133
                    // Constructs and inserts element at top (like push)
    
    // It doesn't support Iteration...For loop
    // Here we can't access the elements randomly like in vector list or deque.
    
    cout<<s.top()<<endl; // Returns the top element
    
    s.pop();
    
    cout<<s.top()<<endl;
    
    cout<<"Is Empty? "<<(s.empty() ? "Yes" : "No")<<endl;
    
    cout<<"Size of stack s : "<<s.size()<<endl; // Returns number of elements in stack
    
    stack<int> temp = s;
    
    while(!temp.empty()){// to print all elements of stack
        cout<<temp.top()<<" ";
        temp.pop();
    }cout<<endl;
    
    stack<int> s1;
    
    s1.push(42352);
    s1.push(6343);
    s1.push(2356);
    s1.push(632);
    
    s.swap(s1);// Swaps contents with another stack s1
    
    cout<<s.top()<<endl;
    cout<<s1.top()<<endl;
    
}

void Queue(){
    
    queue<int> q; //It follows FIFO(First In First Out).
    
    q.push(53);//53(front)
    q.push(634);//53(front) 634
    q.push(2635);//53(front) 634 2635 
    q.push(523);//53(front) 634 2635 523 
    
    cout<<q.front()<<endl;//53
    
    q.pop();//634(front) 2635 523
    
    cout<<q.front()<<endl;//634
    
    q.pop();//2635(front) 523
    
    cout<<q.front()<<endl;//2635
    
    //size swap empty same as in stack
}

void Priority_Queue(){
    
    priority_queue<int> pq;//A priority queue is a special type of queue in which the highest (or lowest) priority element is always at the front/top. It uses a heap internally.
                           //By default, it is a max-heap → highest element comes first.
    
    //Maximum Heap                       
    pq.push(452323);// 452323(front/top)
    pq.push(145);// 452323(front/top) 145
    pq.push(536);// 452323(front/top) 536 145
    pq.push(5636);// 452323(front/top) 5636 536 145
    pq.push(633);// 452323(front/top) 5636 633 536 145
    
    cout<<pq.top()<<endl;//452323
    
    pq.pop();//5636(front/top) 633 536 145
    
    cout<<pq.top() <<endl;//5636
    
    //size swap empty same as in other
    
    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;//Minimum value at front.
    
    pq1.push(622);//622(front/top)
    pq1.push(326);//326(front/top) 622
    pq1.push(52323);//326(front/top) 622 52323
    pq1.push(62);//62(front/top) 326 622 52323
    
    cout<<pq1.top()<<endl;//62
    
    pq1.pop();//326(front/top) 622 52323
    
    cout<<pq1.top()<<endl;//326
    
}

void Set(){
    
    set<int> s;
    
    s.insert(2353);
    s.insert(74);
    s.insert(62);
    s.insert(73422353);
    
    for(auto a:s){
        cout<<a<<" ";
    }cout<<endl;
    
    s.erase(2353);//Deletes element 2353

    
    for(auto a:s){
        cout<<a<<" ";
    }cout<<endl;
    
    cout<<*s.find(74)<<endl;//Returns iterator to 74, or end() if not found
    
    cout<<s.count(74)<<endl;//Returns 1 if 74 is present, else 0
    
    s.erase(s.find(74));
    
    for(auto a:s){
        cout<<a<<" ";
    }cout<<endl;
    
    s.insert(432);
    s.insert(722);
    s.insert(53);
    
    for(auto a:s){
        cout<<a<<" ";
    }cout<<endl;
    
    s.erase(s.find(62),s.find(722));
    
    for(auto a:s){
        cout<<a<<" ";
    }cout<<endl;
    
    cout<<*s.lower_bound(53)<<endl;
    /*Returns an iterator to the first element that is ≥ 53.

    If 53 exists → returns iterator to 53.

    If 53 doesn’t exist → returns the next greater element.*/
    
    cout<<*s.upper_bound(53)<<endl;
    
    /*Returns an **iterator to the first element that is > 53.

    Skips 53 even if it exists.*/
}

void Multiset(){
    
    multiset<int> ms; //A multiset is just like a set, but it allows duplicate values and still keeps all elements sorted.
    
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(3);
    ms.insert(1);
    
    for(auto a:ms){
        cout<<a<<" ";
    }cout<<endl;
    
    ms.erase(2);//Erases all occurrences of 2.
    
    for(auto a:ms){
        cout<<a<<" ";
    }cout<<endl;
    
    ms.erase(ms.find(1));//Erase first occurrence of 1.
    
    for(auto a:ms){
        cout<<a<<" ";
    }cout<<endl;
    
    ms.insert(23);
    ms.insert(523);
    ms.insert(23);
    ms.insert(523);
    ms.insert(53);
    
    for(auto a:ms){
        cout<<a<<" ";
    }cout<<endl;
    
    cout<<ms.count(23)<<endl;// Returns number of occurrences of 23.
    
    ms.erase(ms.lower_bound(23), ms.upper_bound(23));
    
    for(auto a:ms){
        cout<<a<<" ";
    }cout<<endl;
    
    //All other functions are same as in the set.
    
}

void Unordered_Set(){
    
    unordered_set<int> us;
    //unordered_set is an unordered collection of unique elements implemented using a hash table.
    //It doesn't support lower_bound & upper_bound.
    
    /*
    Function	    Description	                        Avg. Time Complexity
    insert(x)	    Inserts x if not present	        O(1)
    erase(x)	    Erases x	                        O(1)
    find(x)	        Returns iterator to x, or end()	    O(1)
    count(x)	    Returns 1 if x is present, else 0	O(1)
    size(), empty()	Number of elements / is empty	    O(1)
    clear()	        Removes all elements	            O(n)
    Iteration	    In undefined/random order	        O(n)*/
}

void Map(){
    
    map<int, int> m;// A map is an ordered associative container that stores elements in key-value pairs, with unique keys and automatic sorting by key.
    map<int, pair<int, int>> m1;
    map<pair<int, int>, int> m2;
    
    m[1] = 2;// Inserts or updates the value for key = 1
    m.emplace(3, 4);
    m.insert({5, 6});
    
    for(auto a:m){
        cout<<"Key : "<<a.first<<" Value : "<<a.second<<endl;
    }
    
    cout<<m.at(1)<<endl;// Access value; throws if key not found
    cout<<m.at(5)<<endl;
    
    m2.insert({{1,2},5});
    m2.insert({{53,23},5235});
    m2[{42,532}] = 52;
    m2.emplace(make_pair(423,532),534);
    
    cout<<m2.at({1,2})<<endl;
    
    auto it = m.lower_bound(1);
    cout<<it->first<<" "<<it->second<<endl;
    
    auto it1 = m.upper_bound(2);
    cout<<it1->first<<" "<<it1->second<<endl;
    
    cout<<"Elements of Map m is "<<endl;
    for(auto it = m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    cout<<"Elements of Map m1 is "<<endl;
    for(auto it = m2.begin();it!=m2.end();it++){
        cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
    }
    
}

void Multi_Map(){
    
    //A multimap is just like map, but it allows duplicate keys.
    
    multimap<int, string> mm;

    mm.insert({1, "apple"});
    mm.insert({2, "banana"});
    mm.insert({1, "apricot"});  // duplicate key allowed

    for (auto it : mm) {
        cout << it.first << " : " << it.second << endl;
    }
}

void Unordered_Map(){
    
    //An unordered_map is a hash table-based associative container that stores key-value pairs with unique keys, just like map, but without any ordering.
    
    unordered_map<string, int> umap;

    umap["apple"] = 10;
    umap["banana"] = 20;
    umap["apple"] = 15;  // updates value
    
    for (auto it : umap) {
        cout << it.first << " : "<< it.second << endl;
    }
}

bool comp(pair<int, int> p1, pair<int, int> p2){//My way Sort
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //Second is same
    if(p1.first>p2.first) return true;
    return false;
}

void Algorithms(){
    
    int arr[5] = {432,32532,53223,2,5};
    
    cout<<arr[3]<<endl;
    
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr + n);
    /*
    arr is a pointer to the first element

    arr + n is a pointer to one past the last element
    */
    
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int> v = {53234,4532,3,32,444,32};
    
    for(auto i : v){
        cout<<i<<" ";
    }cout<<endl;
    
    // sort(v.begin(),v.end());
    sort(v.begin()+1,v.end()-3);
    
    for(auto i : v){
        cout<<i<<" ";
    }cout<<endl;
    
    sort(arr,arr+n,greater<int>());
    /*
    sort(start, end, comparator)

    greater<int>() is a function object from <functional> that sorts in descending order
    */

    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
    
    pair<int, int> p[] = {{1,2},{2,1},{4,1}};
    
    int n1 = sizeof(p)/sizeof(p[0]);
    
    /*
    sort it according to second element if second element 
    is same, then sort it according to first element but in descending order.
    */
    
    sort(p, p+n1, comp);
    
    for(auto a : p){
        cout<<a.first<<" : "<<a.second<<"     ";
    }cout<<endl;
    
    int a = 7;//in binary => 0111
    cout<<__builtin_popcount(a)<<endl;// __builtin_popcount(x) is a GCC/Clang built-in function that returns the number of 1's (set bits) in the binary representation of an integer x.
    
    long long b = 235342353634346346;
    cout<<__builtin_popcountll(b)<<endl;// __builtin_popcountll(x) counts the number of set bits (1's) in the binary representation of a long long integer (64-bit).
    
    cout<<endl;
    
    //next_permutation rearranges elements in the next lexicographically greater order.

    string s = "123";
    
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    
    cout<<endl;
    
    string s1 = "231";//if s is begin with 231 then it only shows the 312 and 321. to solve this use sort
    
    do{
        cout<<s1<<endl;
    }while(next_permutation(s1.begin(),s1.end()));
    
    cout<<endl;
    
    string s2 = "231";
    
    sort(s2.begin(),s2.end());
    
    do{
        cout<<s2<<endl;
    }while(next_permutation(s2.begin(),s2.end()));
    
    cout<<endl;
    
    cout<<*max_element(arr,arr+n)<<endl<<endl;// Returns iterator to largest element in range
    
    cout<<*min_element(arr,arr+n)<<endl;// Returns iterator to smallest element in range
}

int main(){
    // Pairs();
    // Vector();
    // List();
    // Deque();
    // Stack();
    // Queue();
    // Priority_Queue();
    // Set();
    // Multiset();
    // Unordered_Set();
    // Map();
    // Multi_Map();
    // Unordered_Map();
    // Algorithms();
    return 0;
}