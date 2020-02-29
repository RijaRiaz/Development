#include <stdio.h>
#include<iostream>
using namespace std;
void getdata();
void avghigh();
void avglow();
string days [12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
string temp[2]={"Highest","Lowest"};   
int arr[2][12];
int main()
{
    getdata();
    avghigh();
    avglow();
}
void getdata(){
    for(int i=0;i<=1;i++){
        cout<<"Enter the "<<temp[i]<<" temperature"<<endl;
        for(int j=0;j<=11;j++){
         cout<<days[j]<<" : ";
           cin>>arr[i][j];
        }   
    cout<<endl; 
    }
}
int sum;
double avgh;
void avghigh(){
      
          sum=0;
           for(int j=0;j<=11;j++){
            sum=sum+arr[0][j];
           }
           avgh=sum/12.0;
           cout<<"Average high temperature of the year is "<<avgh<<endl;
    }

double avgl;
void avglow(){
      
          sum=0;
           for(int j=0;j<=11;j++){
            sum=sum+arr[1][j];
           }
           avgh=sum/12.0;
           cout<<"Average low temperature of the year is "<<avgh<<endl;
    }
    
       
    


