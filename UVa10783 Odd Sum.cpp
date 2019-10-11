#include <iostream>
using namespace std;
int main(){
    int case_num;
    cin>>case_num;
    int c=0;
    while(case_num!=0){
        int a,b;
        cin>>a>>b;
        int sum=0;
        for (int i=a;i<=b;i++){
            if(i%2!=0){sum+=i;}
        }
        case_num -=1;
        c+=1;
        cout<<"Case "<<c<<": "<<sum<<endl;
    }

}
