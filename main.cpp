#include <stdio.h>
#include <iostream>
using namespace std;
void names();
void totavg();
int main()
{
    names();
 
}
void names()
{
   for(int i=0;i<=6;i++){
        cout<<"          "<<"Day "<<i+1;
   }
    cout<<endl;
    string nam[5]={"Jason", "Ravi", "Sheila", "Ankit", "Samantha"};
    for(int i=0;i<=4;i++){
        cout<<nam[i]<<endl;
        cout<<endl;
   }
   int sum ;
   float avg;
   int arr[5][7];
   for(int i=0;i<=4;i++){
         sum=0;
       cout<<"Enter your scores "<<nam[i]<<endl;
       for(int j=0;j<=6;j++){
           cout<<"Day "<<j+1<<": ";
           cin>>arr[i][j];
           sum=sum+arr[i][j];
       }
       avg=sum/7.0;
       cout<<"Sum is "<<sum<<endl;
       cout<<"average is "<<avg<<endl;
   }
   cout<<endl;
   
    }

