#include<bits/stdc++.h>
using namespace std;
int digtnum(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;

}
int numdigit(int n){
    int arr[10];
    int count=0;
    while (n>0)
    {
        arr[count]=n%10;
        count++;
        n/=10;
    }
    return count;  
}

int main(){
    int n;
    cin>>n;
    cout<<numdigit(n);
    return 0;


    
    }   
    


