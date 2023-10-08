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
    int a,b,c;
    cout<<"Give three integers as input : a,b,c"<<endl;
    cin>>a>>b>>c;
    if(a>b && c>d){
        cout<<"haha";
    }
    else if(a>b && c<d){
        cout<<"hehe";
    }
    else{
        cout<<"huhu";
    }

    //4th code
    int a;
    cout<<"enter integer a "<<endl;
    cin>>a;
    switch(a){
        case 1:
            cout<<"The value of a is 1 "<<endl;
            break;
        case 2:
            cout<<"The value of a is 2 "<<endl;
            break;
        case 3:
            cout<<"The value of a is 3 "<<endl;
        default:
            cout<<"default will be always printed";
    }
  return 0;
}
