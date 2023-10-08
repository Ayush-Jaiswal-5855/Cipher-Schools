#include<iostream>
using namespace std;
int main(){
    //1st code
    float a,b;
    cout<<"Give 2 floating point numbers as input"<<endl;
    cin>>a>>b;
    if(a>0.01 && b>a){
        cout<<"The condition in if statement is coorect";
    }
    else{
        cout<<"The condition is false ";
    }

    //2nd code
    int marks;
    cout<<"Student, please enter the marks to calculate the grade : ";
    cin>>marks;
    if(marks>90){
        cout<<"A";
    }
    else if(marks>80){
        cout<<"B";
    }
    else if(marks>70){
        cout<<"C";
    }
    else{
        cout<<"Pass";
    }

    //3rd code
  return 0;
}
