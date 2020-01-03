#include<iostream>
#include<cmath>

using namespace std;
double u,a,t,s;
//Write function findDistance() here
double findDistance(double u,double a,double t){
  double s=(u*t)+(0.5)*a*pow(t,2);
  return s;
}


int main(){

  //Calling findDistance() using test cases
  cout<<"u : ";
  cin>>u;
  cout<<"a : ";
  cin>>a;
  cout<<"t : ";
  cin>>t;
  cout<<findDistance(u,a,t);

  return 0;
}
