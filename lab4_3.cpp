#include<iostream>
using namespace std;
int x,n=2;

int findDivisor(int x){
    while(n!=1){
        if(x%n==0){
            return n;
            n=1;
        }
        else
        {
            {n++;}
        }
        
    }
}

main(){
    p1:
cout<<"Enter integer : ";
cin>>x;
if(x<2){
    cout<<"Please enter more than 1 !!!!"<<"\n";
    goto p1;
}
cout<<findDivisor(x);
}
