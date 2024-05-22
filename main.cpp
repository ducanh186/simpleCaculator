#include <iostream>
#include <stdio.h>
#include <stdint.h>

using namespace std;
int main(){
               cout <<"\nSIMPLE CACULATOR"<<endl;
               cout <<"1. Basic Calculation"<<endl;
               cout <<"2. GCD"<<endl;
               cout <<"3. Exit"<<endl;             
               uint8_t option;
               cout <<"Select option [1-3]:";
               cin >> option;
               cout <<"Option is:";
               switch(1){
                   case 1:
                       cout <<"Basic Calculation"<<endl;
                       break;
                   case 2:
                       cout <<"GCD"<<endl;
                       break;
                   case 3:
                       cout <<"Exit"<<endl;
                       break;
                   default:
                       cout <<"Invalid option"<<endl;
               }
               return 0;
}


