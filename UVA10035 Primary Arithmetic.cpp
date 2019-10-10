#include <iostream>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b&&(a!=0 or b!=0)){
        int counter=0,carryout = 0;

        while(a!=0 || b!=0){
            if(a%10+b%10+carryout>=10){
                counter++;
                carryout=1;
            }
            else{carryout = 0;}

            a/=10;
            b/=10;
        }
        if (counter == 0){cout<<"No carry operation."<<endl;}
        else if (counter == 1){cout<<"1 carry operation."<<endl;}
        else {cout<<counter<<" carry operations."<<endl;}
    }


}
