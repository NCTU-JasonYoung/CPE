#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    int c,n_size; //c=number of case, n_size = size of sequence.
    cin>>c;
    while(c--){
        cin>>n_size;
        int arrA[n_size];
        for(int i=0;i<n_size;i++){
            cin>>arrA[i]; //input the data for arrayA
        }
        int arrB[n_size];

        memcpy(arrB,arrA,sizeof(arrA));//initialize arrayB,and make it equal to arrayA

        for (int i=1;i<=1000;i++){ //Ducci sequence reaching zeros tuple or making a loop does not exceed "1,000."
            for(int i=0;i<n_size;i++){ //This loop is to find the next sequence
                if(i!=n_size-1){
                    arrB[i]=abs(arrA[i]-arrA[i+1]);}

                else{
                    arrB[i]=abs(arrA[i]-arrA[0]);}

            }
            memcpy(arrA,arrB,sizeof(arrA)); //copy the next sequence to arrayA to do the next loop.


        }
        int sum=0;
        for(int i=0;i<n_size;i++){
            sum+=arrA[i];}  //if sum of the sequence = 0  That means its a "ZERO".

        if(sum==0){cout<<"ZERO"<<endl;}
        else{cout<<"LOOP"<<endl;}


    }
}






