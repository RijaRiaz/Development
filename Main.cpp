
#include <iostream>
using namespace std;
void menu();
void First_class();
void Business_class();
void Economy_class();

int main(){
    menu();
    
}

void menu(){
    cout<<"Consider the following choice:"<<endl;
    cout<<"1- First Class"<<endl;
    cout<<"2- Business Class"<<endl;
    cout<<"3- Economy Class"<<endl;
    int select;
    cout<<"enter choice"<<endl;
    cin>>select;
    switch(select){
        case 1:
        First_class();
        break;
        case 2:
        Business_class();
        break;
        case 3:
        Economy_class();
        break;
    }
}

void First_class(){
    char j='A';
    for (int i=0;i<=5;i++)
    {
        cout<<"          "<<j;
        j++;
    }
    cout<<endl;
    char arr[2][6];
    for (int i=0;i<=1;i++)
    {
        cout<<"Row "<<i+1;
        for(int j=0;j<=5;j++)
        {
        arr[i][j]='*';
        cout<<"     "<<arr[i][j]<<"     ";
        }
        cout<<endl;
    }
    cout<<"Select the desired row (1/2)"<<endl;
    int r;
    cin>>r;
    cout<<"Select the desired column (1-6)"<<endl;
    int c;
    cin>>c;
        char y='A';
    for (int i=0;i<=5;i++)
    {
        cout<<"          "<<y;
        y++;
    }
    cout<<endl;
     for (int i=0;i<=1;i++)
    {
        cout<<"Row "<<i+1;
        for(int j=0;j<=5;j++)
        {
          arr[i][j]='*';
          arr[r-1][c-1]='X';
        cout<<"     "<<arr[i][j]<<"     ";
       }
        cout<<endl;
    }
}

void Business_class(){
      char j='A';
    for (int i=0;i<=5;i++)
    {
        cout<<"          "<<j;
        j++;
    }
    cout<<endl;
    char arr[5][6];
    for (int i=0;i<=4;i++)
    {
        cout<<"Row "<<i+3;
        for(int j=0;j<=5;j++)
        {
        arr[i][j]='*';
        cout<<"     "<<arr[i][j]<<"     ";
        }
        cout<<endl;
    }
    cout<<"Select the desired row (3-7)"<<endl;
    int r;
    cin>>r;
    cout<<"Select the desired column (1-6)"<<endl;
    int c;
    cin>>c;
        char y='A';
    for (int i=0;i<=5;i++)
    {
        cout<<"          "<<y;
        y++;
    }
    cout<<endl;
     for (int i=0;i<=4;i++)
    {
        cout<<"Row "<<i+3;
        for(int j=0;j<=5;j++)
        {
          arr[i][j]='*';
          arr[r-3][c-1]='X';
        cout<<"     "<<arr[i][j]<<"     ";
       }
        cout<<endl;
    }
}

void Economy_class(){
      char j='A';
    for (int i=0;i<=5;i++)
    {
        cout<<"          "<<j;
        j++;
    }
    cout<<endl;
    char arr[6][6];
    for (int i=0;i<=5;i++)
    {
        cout<<"Row "<<i+8;
        if (i+8>9)
        { 
             for(int j=0;j<=5;j++)
        {
        arr[i][j]='*';
        cout<<"    "<<arr[i][j]<<"      ";
        }
        cout<<endl; }
        else
        {
        for(int j=0;j<=5;j++)
        {
        arr[i][j]='*';
        cout<<"     "<<arr[i][j]<<"     ";
        }
        cout<<endl;
    }}
    cout<<"Select the desired row (8-13)"<<endl;
    int r;
    cin>>r;
    cout<<"Select the desired column (1-6)"<<endl;
    int c;
    cin>>c;
    char y='A';
    for (int i=0;i<=5;i++)
    {
        cout<<"          "<<y;
        y++;
    }
    cout<<endl;
    for (int i=0;i<=5;i++)
    {
        cout<<"Row "<<i+8;
        if (i+8>9)
        { 
             for(int j=0;j<=5;j++)
        {
        arr[i][j]='*';
        cout<<"    "<<arr[i][j]<<"      ";
        }
        cout<<endl; }
        else
        {
        for(int j=0;j<=5;j++)
        {
        arr[i][j]='*';
        arr[r-8][c-1]='X';
        cout<<"     "<<arr[i][j]<<"     ";
        }
        cout<<endl;
    }}
}
