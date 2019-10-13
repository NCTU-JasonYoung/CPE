#include <iostream>
using namespace std;
//本題是問輸入一個數字 當這個數字以dec和hex表示轉換成二進位後會出現多少個一
int hex2dec(int n){  // a function making hex to dec. 這邊邏輯要好，第一次作答卡關很久
    int sum=0;
    int pow=1;
    while(n!=0){
        sum+=(n%10)*pow;
        n/=10;
        pow*=16;
    }

    return sum;

}


int main(){
    int c,n,temp;
    cin>>c;
    while(c--){
        while(cin>>n){
            int b1=0,b2=0;
            temp = n;
            while(temp!=0){
                b1+=temp%2;
                temp/=2;
            }

            int temp2=hex2dec(n);
            while(temp2!=0){
                b2+=temp2%2;
                temp2/=2;
            }
            cout<<b1<<" "<<b2<<endl;
        }

    }
}
