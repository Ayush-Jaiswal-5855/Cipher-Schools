#include<iostream>
using namespace std;
int main(){
    
    //1st code
    int password;
    cout<<"Enter the password: "<<endl;
    cin>>password;
    while(password<999999){
        cout<<"The password does not meet the required conditions, Please enter the password again"<<endl;
        cin>>password;
    }
    cout<<"The user has now entered a correct password"<<endl;
    return 0;

    //2nd code
    int password;
    do{
        cin>>password;
    }
    while(password<999999);
    return 0;

    //3rd code
    int password;
    int count=0;
    while(1){
        cout<<"chocolates "<<endl;
        count++;
        if(count>100) break;
    }
	retun 0;

    //4th code
    int i;
    for(i=0;  ;i++){
        cout<<i<<" ";
        if(i>100) break;
    }
    return 0;
}
