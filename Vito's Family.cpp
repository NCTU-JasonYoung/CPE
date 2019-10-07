#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,r,s; //n=代戈计 r=綟﹡计 s=綟﹡礟
    cin>>n; //块代戈计
    while (n!=0){
        cin>>r; //块綟﹡计
        int a[r-1];//р綟﹡礟array a
        for(int i=0;i<=r-1;i++){
            cin>>a[i];
        }

        sort(a,a+r); //逼綟﹡礟
        int mid = a[(r-1)/2]; //тい计
        int sum = 0;
        for(int i=0;i<=r-1;i++){
            sum += abs(a[i]-mid); //衡綟﹡い计羆㎝
        }
        cout<<sum<<endl;
        n--;
    }
    return 0;

}
