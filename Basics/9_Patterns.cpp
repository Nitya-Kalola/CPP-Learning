#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Pattern_1() {
	cout<<"Input : ";
	int N;
	cin>>N;

	for(int i = 1; i<=N; i++) { //No. of Rows
		for(int j = 1; j<=N; j++) { // Stars "*"
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Pattern_2() {
	cout<<"Input : ";
	int N;
	cin>>N;

	for(int i = 1; i<=N; i++) {
		for(int j = 1; j<=i; j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Pattern_3() {
	cout<<"Input : ";
	int N;
	cin>>N;

	for(int i = 1; i<=N; i++) {
		for(int j = 1; j<=i; j++) {
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Pattern_4() {
	cout<<"Input : ";
	int N;
	cin>>N;

	for(int i = 1; i<=N; i++) {
		for(int j = 1; j<=i; j++) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Pattern_5() {
	cout<<"Input : ";
	int N;
	cin>>N;

	for(int i = N; i>=1; i--) {
		for(int j = i; j>=1; j--) {
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Pattern_6() {
	cout<<"Input : ";
	int N;
	cin>>N;

	for(int i = N; i>=1; i--) {
		for(int j = 1; j<=i; j++) {
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Pattern_7() {
	cout<<"Input : ";
	int N;
	cin>>N;

	for(int i = 1; i<=N; i++) { //No. of Rows

		for(int j = i; j<N; j++) { //Spaces
			cout<<" ";
		}
		for(int k = 1; k<2*i; k++) { //Stars "*"
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
}


void Pattern_8() {
	cout<<"Input : ";
	int N;
	cin>>N;

	cout<<endl;

	for(int i = N; i>=1; i--) { //Rows

		for(int j = i; j<N; j++) {
			cout<<" ";
		}
		for(int k = 1; k<2*i; k++) {
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Pattern_9() {
	cout<<"Input : ";
	int N;
	cin>>N;

	cout<<endl;

	for(int i = 1; i<=N; i++) { //Rows

		for(int j = i; j<N; j++) { //Spaces
			cout<<" ";
		}
		for(int k = 1; k<2*i; k++) { //Stars "*"
			cout<<"*";
		}
		cout<<endl;
	}

	for(int i = N; i>=1; i--) { //Rows
		for(int j = i; j<N; j++) { //Spaces
			cout<<" ";
		}
		for(int k = 1; k<2*i; k++) {
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Pattern_10() {
	cout<<"Input : ";
	int N;
	cin>>N;

	cout<<endl;

	for(int i = 1; i<=N; i++) { //Rows
		for(int j = 1; j<=i; j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i = N-1; i>=1; i--) {
		for(int j = i; j>=1; j--) {
			cout<<"* ";
		}
		cout<<endl;
	}
}


void Pattern_11() {
	cout<<"Input : ";
	int N;
	cin>>N;

	cout<<endl;

	for(int i = 1; i<=N; i++) {
		for(int j = 1; j<=i; j++) {
			if((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0)) {
				cout<<"1 ";
			} else {
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}

void Pattern_12() {
	cout<<"Input : ";
	int N;
	cin>>N;

	cout<<endl;

	for(int i = 1; i<=N; i++) {
		for(int j = 1; j<=i; j++) {
			cout<<j<<" ";
		}
		for(int k = 1; k<=2*(N-i); k++) {
			cout<<" "<<" ";
		}
		for(int l = i; l>=1; l--) {
			cout<<l<<" ";
		}
		cout<<endl;
	}
}

void Pattern_13() {
	cout<<"Input : ";
	int N;
	cin>>N;

	cout<<endl;

	int a = 1;

	for(int i = 1; i<=N; i++) {
		for(int j = 1; j<=i; j++) {
			cout<<a<<" ";
			a++;
		}
		cout<<endl;
	}
}

void Pattern_14() {
	cout<<"Input : ";
	int N;
	cin>>N;

	cout<<endl;

	for(int i = 1; i<=N; i++) {
		for(int j = 1; j<=i; j++) {
			cout<<char(j+64)<<" ";
		}
		cout<<endl;
	}
}

void Pattern_15() {
	cout<<"Input : ";
	int N;
	cin>>N;

	cout<<endl;

	for(int i = N; i>=1; i--) {
		for(int j = 1; j<=i; j++) {
			cout<<char(j+64)<<" ";
		}
		cout<<endl;
	}
}

void Pattern_16()
{
	cout << "Input : ";
	int N;
	cin >> N;

	cout << "\n";

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << char(i + 64) << " ";
		}
		cout << endl;
	}
}

void Pattern_17()
{
	cout << "Input : ";
	int N;
	cin >> N;

	cout << "\n";

	for (int i = 1; i <= N; i++)
	{	//Rows
		for (int j = i; j < N; j++)
		{	//Spaces
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{	//Left Characters
			cout << char(k + 64);
		}
		for (int l = i-1; l>=1; l--) { //Right Character
			cout<<char(l + 64);
		}
		cout << endl;
	}
}

void Pattern_18() {
	cout << "Input : ";
	int N;
	cin >> N;

	cout<<endl;

	for(int i = N; i>=1; i--) {
		for(int j = i; j<=N; j++) {
			cout<<char(j+64)<<" ";
		}
		cout<<endl;
	}
}

void Pattern_19() {
	cout << "Input : ";
	int N;
	cin >> N;

	cout<<endl;

	for(int i = 1; i<=N; i++) { //Rows

		for(int m = N; m>=i; m--) { //Left Upper Side Stars
			cout<<"*";
		}
		for(int n = 2*(N-i); n<2*(N-1); n++) { //Upper Spaces    //Here If We replace i for N we get the line like 1) for(int n = 2*(i-i);n<2*(i-1);n++) 2) for(int n = 2*(0);n<2*(i-1);n++) 3) for(int n = 0;n<2*(i-1);n++) / for(int n = 1;n<=2*(i-1);n++)     // using "for(int n = 1;n<=2*(i-1);n++)" can be More Easy.
			cout<<" ";
		}
		for(int o = i; o<=N; o++) { //Right Upper Side Stars
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int i = 1; i<=N; i++) { //Rows

		for(int j = 1; j<=i; j++) { //Left Lower Side Stars
			cout<<"*";
		}
		for(int k = 1; k<=2*(N-i); k++) { //Lower Spaces
			cout<<" ";
		}
		for(int l = i; l>=1; l--) { //Right Lower Side Stars
			cout<<"*";
		}
		cout<<endl;
	}
}

void Pattern_20(){
    cout<<"Input : ";
    int N;
    cin>>N;
    
    cout<<endl;
    
    for(int i = 1;i<=N;i++){//Rows
        for(int j = 1;j<=i;j++){//Upper Left Side Stars
            cout<<char(64+j); //Here we can replace the "*" for char(64+j)
        }
        for(int k = 1;k<=2*(N-i);k++){//Upper Spaces
            cout<<" ";
        }
        for(int l = i;l>=1;l--){//Upper Right Side Stars
            cout<<char(64+l); //Here we can replace the "*" for char(64+l)
        }
        cout<<endl;
    }
    
    for(int i = 1;i<=N;i++){//Rows
        for(int j = 1;j<=N-i;j++){//Lower Left Side Stars
            cout<<char(64+j); //Here we can replace the "*" for char(64+j)
        }
        for(int k = 1;k<=2*(i);k++){//Lower Spaces
            cout<<" ";
        }
        for(int l = N-i;l>=1;l--){//Lower Right Side Stars
            cout<<char(64+l); //Here we can replace the "*" for char(64+l)
        }
        cout<<endl;
    }
    
}

void Pattern_21(){
    cout<<"Input : ";
    int N;
    cin>>N;
    
    cout<<endl;
    
    for(int i = 1;i<=N;i++){//Rows
        for(int j = 1;j<=N;j++){//Stars
            if((i==1 || i==N) || (j==1 || j==N)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}

void Pattern_22(){
    cout<<"Input : ";
    int N;
    cin>>N;
    int A = N;
    int B = 2*N-1;
    int C = 1;
    cout<<endl;
    
    for(int i = 0;i<2*N-1;i++){//Rows
        for(int j = 0;j<2*N-1;j++){//Numbers
            int top = i;
            int left = j;
            int right = (2*N-1)-1-j;
            int bottom = (2*N-1)-1-i;
            
            int Value = min({top,left,right,bottom});
            cout<<N-Value<<" ";
        }
        cout<<endl;
    }
}

void Patterns() {

	cout<<"Patterns : "<<endl<<endl<<"1. Pattern 1\n2. Pattern 2\n3. Pattern 3\n4. Pattern 4\n5. Pattern 5\n6. Pattern 6\n7. Pattern 7\n8. Pattern 8\n9. Pattern 9\n10. Pattern 10\n11. Pattern 11\n12. Pattern 12\n13. Pattern 13\n14. Pattern 14\n15. Pattern 15\n16. Pattern 16\n17. Pattern 17\n18. Pattern 18\n19. Pattern 19\n20. Pattern 20\n21. Pattern 21\n22. Pattern 22\n"<<endl;
	cout<<"Enter the Number corresponding to the Pattern : ";
	int A;
	cin>>A;

	cout<<endl;

	switch(A) {
	case 1:
		Pattern_1();
		break;

	case 2:
		Pattern_2();
		break;

	case 3:
		Pattern_3();
		break;

	case 4:
		Pattern_4();
		break;

	case 5:
		Pattern_5();
		break;

	case 6:
		Pattern_6();
		break;

	case 7:
		Pattern_7();
		break;

	case 8:
		Pattern_8();
		break;

	case 9:
		Pattern_9();
		break;

	case 10:
		Pattern_10();
		break;

	case 11:
		Pattern_11();
		break;

	case 12:
		Pattern_12();
		break;

	case 13:
		Pattern_13();
		break;

	case 14:
		Pattern_14();
		break;

	case 15:
		Pattern_15();
		break;

	case 16:
		Pattern_16();
		break;

	case 17:
		Pattern_17();
		break;

	case 18:
		Pattern_18();
		break;

	case 19:
		Pattern_19();
		break;

	case 20:
	    Pattern_20();
	    break;

	case 21:
	    Pattern_21();
	    break;

	case 22:
	    Pattern_22();
	    break;


	default:
		cout<<"Enter Valid Number.";
		break;
	}

}

int main() {
	Patterns();
	return 0;
}