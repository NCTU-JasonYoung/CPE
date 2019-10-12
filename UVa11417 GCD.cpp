#include <iostream>
using namespace std;



int GCD(int p,int q){
    int max_gcd=0;
    for(int i=1;i<=p;i++){
        if(p%i==0 && q%i==0 && i>=max_gcd){max_gcd=i;}
    }
    return max_gcd;

}


int main(){
    int N;
    while(cin>>N && N!=0){
        int G=0;
        int i,j;
        for(i=1;i<N;i++){
            for(j=i+1;j<=N;j++){
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }
}

