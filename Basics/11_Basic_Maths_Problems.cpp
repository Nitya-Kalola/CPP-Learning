#include<iostream>
#include<cmath>//Used to use the pow() function.
#include<algorithm>//to use max_element()

using namespace std;

void Count_Number_1(){//I tried it first without any reference.
    int n;
    
    int k = 1;
    while(k!=2){
    
    cout<<"Enter the Number : ";
    cin>>n;
    
    int a = 0;
    
    if(n!=0){
        for(int i = 1;i<=n;i*=10){
        a++;
    }
    
    cout<<"The No. of Digits in "<<n<<" is "<<a<<"."<<endl<<endl;
    
    }else{
        cout<<"The No. of Digits in "<<n<<" is 1."<<"."<<endl<<endl;
    }
    
    cout<<"Enter...\n1. Continue\n2. Exit\n";
    cin>>k;
    cout<<endl;
    }
    
}

void Count_Number(){
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    
    int k = n;
    
    int counter = 0;
    
    while(k>0){
        // int b = n%10;
        k/=10;
        counter++;
    }
    cout<<"\nThe Number "<<n<<" has "<<counter<<" digits."<<endl;
}

void Reverse_Number(){
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    
    int k = n;
    
    int counter = 0;
    
    cout<<"Reverse of "<<n<<" is ";
    
    while(k>0){
        cout<<k%10;//This process called as Extraction of Digit.
        k/=10;
    }
    
    cout<<"."<<endl;
}

void Palindrome(){
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    
    int k = n;
    int l = n;
    
    int a = 0;
    int b;
    int c;
    int d = 0;
    
    while(k>0){
        k/=10;
        a++;
    }
    while(l>0){
            b = l%10;
            l/=10;
            a--;
            int m = pow(10, a);
            c = b*m;
            d = c + d;
    } //My Own Logic
    
    
    if(n==d){
        cout<<"The Number "<<n<<" is Palindrome.";
    }else{
        cout<<"the Number "<<n<<" is not Palindrome.";
    }
    
    /*
        The code written above is little Complex, we can use instead, which is less complex.
        
        int original = n;
        int reversed = 0;
    
        while(n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
    
        if(original == reversed) {
            cout << "The Number " << original << " is Palindrome.";
        } else {
            cout << "The Number " << original << " is not Palindrome.";
        }
    
    */
    
    
}

void GCD(){//My Own Logic
    
    //Greatest Common Divisor/HCF(Highest Common Factor)
    
    int j = 0;
    int k = 0;
    int l = 0;
    
    cout<<"Enter Number N1 : ";
    int n1;
    cin>>n1;
    
    int a[50];
    
    cout<<"Factors of N1 : ";
    for (int i = 1;i<=n1;i++){
        if(n1%i==0){
            cout<<i<<" ";
            
            a[j] = i;
            j++;
        }
        
    }
    cout<<endl;
    
    cout<<"Enter Number N2 : ";
    int n2;
    cin>>n2;
    
    int b[50];
    
    cout<<"Factor of N2 : ";
    for (int i = 1;i<=n2;i++){
        if(n2%i==0){
            cout<<i<<" ";
            
            b[k] = i;
            k++;
        }
        
    }
    
    cout<<endl;
    
    cout<<endl;
        
    int c[50];
    
    cout<<"Common Factors of "<<n1<<" & "<<n2<<" is ";
    
    for(int i = 0;i<j;i++){
        for(int j = 0;j<k;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                c[l] = a[i];
                l++;
            }
        }
    }cout<<endl<<endl;
    
    
    
    cout<<"Greatest Common Diviser of "<<n1<<" & "<<n2<<" is "<<*max_element(c,c+l)<<endl;
  
// Euclidean Algorithm

// int a,b;
// cin>>a>>b;
//     while(b != 0) { //This is the Best approach to solve it.
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     cout<<a;

// It can be also written as below,

/*while(a > 0 && b > 0) {
        if(a > b) {
           a = a % b;
        }else {
            b = b % a; 
        }
    }
    if(a == 0) {
        return b;
    }
    return a;*/
 }


void Armstrong_No(){//If I pass 153 so the no. of digit in this is 3 so if 1^3 + 5^3 + 3^3 = 153. The no. is Armstrong.
    
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    
    int k = n;
    
    int j = n;
    
    int counter = 0;    
    
    while(n>0){
        n = n/10;
        counter++;
    }
    
    int a;
    int b = 0;
    
    while(k>0){
        a = k%10;
        b = pow(a,counter) + b;
        k/=10;
    }
    
    cout<<endl;
    
    if(j==b){
        cout<<"The Number "<<j<<" is Armstrong.";
    }else{
        cout<<"The Number "<<j<<" is not Armstrong.";
    }
    
}

void Divisor(){
    
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    
    cout<<"All Divisors of "<<n<<" is ";
    
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            if(i==n){
                cout<<i;
            }else{
                cout<<i<<" ";
            }
        }
    }cout<<".";
}

void Prime_No(){
    //My own code
    
    cout<<"Enter the Numner : ";
    int n;
    cin>>n;
    
    // cout<<endl;
    
    // int a[50];
    // int j = 0;
    
    // for(int i = 1;i<=n;i++){
    //     if(n%i==0){
    //         a[j] = i;
    //         j++;
    //     }
    // }
    // if(a[0]==1 && a[1]==n){
    //     cout<<n<<" is a Prime Number.";
    // }else{
    //     cout<<n<<" is not a Prime Number.";
    // }
    
    //or 
    
    // int counter = 0;
    // for(int i = 1;i<=n;i++){
    //     if(n%i==0){
    //         counter++;
    //     }
    // }
    
    // if(counter==2){
    //     cout<<n<<" is Prime.";
    // }else{
    //     cout<<n<<" is not Prime.";
    // }
    
    //or
    
    int counter = 0;
    for(int i = 1;i*i<=n;i++){
        if(n%i==0){
            counter++;
            if(i!=n/i){
                counter++;
            }
        }
    }
    
    if(counter==2){
        cout<<n<<" is Prime.";
    }else{
        cout<<n<<" is not Prime.";
    }
    // This is the best way to do this
}

void Divisor_1(){//Optimized version
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    
    for(int i = 1;i<=sqrt(n);i++){//here instead of using i<=sqrt(n) use i*i<=n... cause calling a function is lil time consuming.
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
            cout<<n/i<<" ";}
        }
    }
}

int main(){
    // Count_Number_1();
    // Count_Number();
    // Reverse_Number();
    // Palindrome();
    // GCD();
    // gcd(5,10);
    // Armstrong_No();
    // Divisor();
    Prime_No();
    // Divisor_1();//Optimized version
    
    return 0;
}