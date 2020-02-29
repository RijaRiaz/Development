#include <stdio.h>
#include<iostream>
using namespace std;
void getdata();
bool isleapyear(int);
int getcenturyvalue(int);
int getyearvalue(int);
int getmonthvalue(string,int);
int day(int);
int main()
{
    int date, year;
    string month;
    cout<<"Enter the date please: ";
    cin>>date;
    cout<<"Enter the month please: ";
    cin>>month;
    cout<<"Enter the year please: ";
    cin>>year;
    cout<<"The complete date entered by the user is: "<<month<<" "<<date<<", "<<year<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;
    isleapyear(year);
    getcenturyvalue(year);
    getyearvalue(year);
    getmonthvalue(month,year);
     int century=getcenturyvalue(year);
      int mont=getmonthvalue(month,year);
      int year1=getyearvalue(year);
    int sum=date+century+mont+year1;
    int x=sum%7;
    cout<<"The number of day is: "<<x<<endl;
     day(x);
}
bool isleapyear(int year){
    cout<<boolalpha;
    bool leap=true;
    cout<<"Checking Leap year"<<endl;
   if ((year%400==0 || year%4==0)&(year%100!=0))
       {
   leap=true;
   cout<<leap<<endl;
   }
   else{
      leap=false;
      cout<<leap<<endl;
       }
    return leap;
    cout<<"----------------------------------------------------------------------------------"<<endl;
}
int getcenturyvalue(int year){
    cout<<"Calculating century value: "<<endl;
    int t=year/100;
    cout<<"first 2 digits of year are: "<<t<<endl;
    double rem=t%4;
    cout<<"The remainder is: "<<rem<<endl;
    double result=(3-rem)*2;
    cout<<"The final result of century module is: "<<result<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;
    return result;
}


int getyearvalue(int year){
    int t=year%100;
    cout<<"Last two digits are: "<<t<<endl;
    double div=t/4;
    cout<<"The result of division comes: "<<div<<endl;
    double result=t+div;
    cout<<"The final result of year module is: "<<result<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;
    return result;
    
}
int getmonthvalue(string month, int year){
   if(month=="January"){
       bool check= isleapyear(year);
    if (check==1) {
        return 6;
    }
    else{
        return 0;
    }
   }
      if(month=="February"){
       bool check= isleapyear(year);
    if (check==1) {
        return 2;
    }
    else{
        return 3;
    }
   }
      if(month=="March"){
       return 3;
    }
      if(month=="April"){
       return 6;
    }
      if(month=="May"){
       return 1;
    }
      if(month=="June"){
       return 4;
    }
      if(month=="July"){
       return 6;
    }
      if(month=="August"){
       return 2;
    }
      if(month=="September"){
       return 5;
    }
      if(month=="October"){
       return 0;
    }
      if(month=="November"){
       return 3;
    }
      if(month=="December"){
       return 5;
      }}
    int day(int x){
        if (x==0){
            cout<<"corresponding day is Sunday"<<endl;
        }
         if (x==1){
            cout<<"corresponding day is Monday"<<endl;
        }
         if (x==2){
            cout<<"corresponding day is Tuesday"<<endl;
        }
         if (x==3){
            cout<<"corresponding day is Wednesday"<<endl;
        }
                 if (x==4){
            cout<<"corresponding day is Thursday"<<endl;
        }
                if (x==5){
            cout<<"corresponding day is Friday"<<endl;
        }   
                 if (x==6){
            cout<<"corresponding day is Saturday"<<endl;
        }

    }
    
   
 
