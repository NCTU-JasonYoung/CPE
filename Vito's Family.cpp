#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,r,s; //n=����� r=�F�~�� s=�F�~���P
    cin>>n; //��J����Ӽ�
    while (n!=0){
        cin>>r; //��J�F�~�Ӽ�
        int a[r-1];//��F�~���P��Jarray a
        for(int i=0;i<=r-1;i++){
            cin>>a[i];
        }

        sort(a,a+r); //�ƧǾF�~���P
        int mid = a[(r-1)/2]; //��X�����
        int sum = 0;
        for(int i=0;i<=r-1;i++){
            sum += abs(a[i]-mid); //��F�~�줤�����`�M
        }
        cout<<sum<<endl;
        n--;
    }
    return 0;

}
