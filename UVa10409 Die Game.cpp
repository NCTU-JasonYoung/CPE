#include <iostream>
#include <string>
using namespace std;

int main(){
    int e,w,n,s,u,d,c; //e=east w=west n=north s=south u=up d=down c=how many time to roll the dice
    string str;//use string to make the roll
    while(cin>>c && c!=0){ //if c=0 break
        int e=4,w=3,n=2,s=5,u=1,d=6,temp;
        while(c--){
            cin>>str;
            if(str=="north"){temp=u;u=s;s=d;d=n;n=temp;}
            if(str=="south"){temp=u;u=n;n=d;d=s;s=temp;}
            if(str=="west") {temp=u;u=e;e=d;d=w;w=temp;}
            if(str=="east") {temp=u;u=w;w=d;d=e;e=temp;}

        }
        cout<<u<<endl;


    }


}
