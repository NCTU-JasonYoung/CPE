#include <iostream>
using namespace std;

int main(){
    int a,b,c; //a=number of test case b=month c=day
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char week[7][10]={"Sunday","Monday","Tuesday","Wednsday","Thursday","Friday","Saturday"};
    cin>>a;
    while(a--){
        cin>>b>>c;
        int sum_of_day=0;
        for(int i=1;i<b;i++){
            sum_of_day +=month[i-1];
        }

        sum_of_day+=c;
        cout<<week[(sum_of_day+5)%7]<<endl;

    }




}
