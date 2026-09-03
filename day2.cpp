// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     cout<<a+b;
//     return 0;

// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int sum=0;
     while(count<=n){
        sum=sum+count;
        count++;
    }
    cout<< sum;
      return 0;

}
