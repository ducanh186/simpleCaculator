#include <iostream>
#include <stdio.h>
#include <stdint.h>
using  namespace std;
int BasicCalculation(int a, int b, char op){
    int result;
    switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b == 0){
                cout <<"ERROR: Divide by zero"<<endl;
                result = 0;
            }else{
                result = a / b;
            }
            break;
        default:
            result = 0;
            cout <<"ERROR: Invalid operation"<<endl;
    }
    return result;
}
int findGCD(int a,int b){
    if (b>a)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;

}
using namespace std;
int main(){
               cout <<"\nSIMPLE CACULATOR"<<endl;
               cout <<"1. Basic Calculation"<<endl;
               cout <<"2. GCD"<<endl;
               cout <<"3. Exit"<<endl;             
               int option;
               
               while (option != 3)
               {cout <<"Select option [1-3]:";
               
                cin >> option;
                cout <<"Option is: ";
               int a,b;
               int result;
               switch(option){
                   case 1:
                       cout <<"Basic Calculation"<<endl;
                       cout <<"Enter operation (+,-,*,/): ";
                       char op;
                       cin>>op;
                       cout <<"Enter first number: ";
                       cin>>a;
                       cout <<"Enter second number: ";
                       cin>>b;                      
                       result = BasicCalculation(a,b,op);
                       cout <<"Result: "<<result<<endl;
                       break;
                   case 2:
                       cout <<"GCD"<<endl;
                       cout <<"Enter first number: ";
                       cin>>a;
                       cout <<"Enter second number: ";
                       cin>>b;
                       result = findGCD(a,b);
                       cout <<"Result: "<<result<<endl;
                       break;
                   case 3:
                       cout <<"Exit"<<endl;
                       break;
                   default:
                       cout <<"Invalid option"<<endl;
               }
               }
               return 0;
}


