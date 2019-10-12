#include <iostream>
#include <stack>

//�o�D�n�|stack���Ϊk @@"
using namespace std;

int main(){
    int n;
    stack<int> stk;
    while(cin>>n && n){
        int parity = 0;
        while(n){
            parity+=n%2;
            stk.push(n%2);
            n/=2;
        }
        cout<<"The parity of ";
        while(stk.size()){
            cout<<stk.top();
            stk.pop();
        }
        cout<<" is "<<parity<<" (mod 2)."<<endl;
    }





}
