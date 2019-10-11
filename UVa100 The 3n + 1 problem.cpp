#include <iostream>
using namespace std;

int main(){
    int a,b;
    while (cin>>a>>b){
        cout<<a<<" "<<b<<" ";
        int temp;
        if(a>b){temp=a,a=b,b=temp;}
        int max_len=0;
        int length,n;
        for(int i=a;i<=b;i++){
            length = 1;
            n=i;
            while (n!=1){
                if(n%2==0){n/=2;}
                else{n=n*3+1;}
                length +=1;


            }

            if(length>max_len){max_len=length;}
        }
         cout<<max_len<<endl;
    }





}
