#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1,n2;
    char op;
    cout<<"Enter a First Number:";
    cin>>n1;
    cout<<"Enter Operator (+,-,/,*) :";
    cin>>op;
    cout<<"Enter a Second Number:";
    cin>>n2;
    if (op=='+')
    {
        cout<<"Addition:"<<n1+n2;
    }
    else if (op == '-')
    {
        cout<<"Substration:"<<n1-n2;
    }
    else if(op =='*')
    {
        cout<<"Multiplication:"<<n1*n2;
    }
    else if(op == '/'){
        if(n2 <= 0){
            cout<<"The Second Number can't be zero or less than 0";
        }
        else{

            cout<<"Division:"<<n1/n2;
        }
    }
    else{
        cout<<"Invalid choice";
    }
    
    
    return 0;
}