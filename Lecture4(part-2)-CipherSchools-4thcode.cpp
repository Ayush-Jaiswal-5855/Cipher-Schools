#include<iostream>
using namespace std;
int main(){
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
