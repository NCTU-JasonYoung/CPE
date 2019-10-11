#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>c;
    while(c--){
        cin>>a>>b;
        if(a>b && (a+b)%2==0){
            cout<<(a+b)/2<<" "<<(a-b)/2<<endl;}
        else{cout<<"impossible"<<endl;}
        }
}


