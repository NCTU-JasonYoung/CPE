#include <iostream>
using namespace std;

int main(){
    int init_cola,total_cola=0,empty_bottle=0;

    while(cin>>init_cola){
        total_cola+=init_cola;
        empty_bottle+=init_cola;

        while(empty_bottle>=3){
            total_cola+=empty_bottle/3;
            empty_bottle=empty_bottle/3+empty_bottle%3;
        }

        if(empty_bottle==2){total_cola+=1;}

        cout<<total_cola<<endl;
        total_cola=0;
        empty_bottle=0;
    }

}

