#include<iostream>
using namespace std;

void tower(int n,char beg,char aux,char end)
{
    if(n<=0){
        cout<<"entre the valid disc "<<endl;
    }
    else if(n==1){
        cout<<"move your disc from "<<beg<<"to"<<end<<endl;
    }
    else{
        tower(n-1,beg,end,aux);        
        tower(1,beg,aux,end);        
        tower(n-1,aux,beg,end); 
    }       
}

int  main(){
    int n;
    char a,b,c;
    cout<<"Enter the number of disc : ";
    cin>>n;

    tower(n,'a','b','c');
    return 0;
}