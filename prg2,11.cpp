#include<iostream>
using namespace std;
int area(int side){

    return side*side;

}
int area(double L, double B){

    return L*B;
}
int area(int Height,int base){
    
    return 0.5*Height*base;
}

int main(){
    int side;
    cout<<"enter the side of a square"<<endl;
    cin>>side;
   cout<<"area of square"<<area(side)<<endl;


  int L , B ;
    cout<<"enter the Length and Breadth of the rectangle"<<endl;
    cin>> L >> B ;
  cout<<"area of rectangle"<<area(L,B)<<endl;


 int Height , Base;
    cout<<"enter the Height and Base of the triangle"<<endl;
    cin>> Height >> Base ;
  cout<<"area of triangle"<<area(Height,Base)<<endl;

}
