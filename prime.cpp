#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int i=2;
   while(i<=n-1){
    if(n%i==0){
        cout<<"number is non prime";
        break;
    }
    i++;
   }
   if(i>n-1){
    cout<<"number is prime";
   }
   return 0;
   

}