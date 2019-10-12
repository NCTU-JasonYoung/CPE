#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main(){
    char n[1001]={""};
    int sum_1=0,sum_2=0;
    while(cin>>n){
        if(strlen(n)==1 && n[0]=='0'){
            break;}

        for(int i=0;i<strlen(n);i+=2){
            sum_1+=n[i]-'0';
            }
        for(int i=1;i<strlen(n);i+=2){
            sum_2+=n[i]-'0';
            }

        if((sum_1-sum_2)%11==0){cout<<n<<" is a multiple of 11."<<endl;}
        else{cout<<n<<" is not a multiple of 11."<<endl;}
        sum_1=0;
        sum_2=0;


    }
}

