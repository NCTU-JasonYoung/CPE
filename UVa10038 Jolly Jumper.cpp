#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    bool flag=0;//�]�@��FLAG �p�GFLAG=0 ==>JOLLY �Ϥ�
    while(cin>>n){
    	flag=0;
        int arr[n],arrABS[n-1],jolly[n-1]; //�o�D�ڥΤT�Ӱ}�C�ӸѨM�A�@�ӬO��J���ꪺ�}�Carr;�@�ӬOk�Mk+1�����t�Z����Ȥ��}�CarrABS,�̫�@�ӫh�O�s��1~n-1���}�Cjolly

        for(int i=0;i<n;i++){//������J�}�C
            cin>>arr[i];


        }
        for(int i=0;i<n-1;i++){//��jolly�}�C�˺�1~n-1
            jolly[i]=i+1;

        }
        for(int i=0;i<n-1;i++){ //��X���}�Carr��k�Mk+1�������t�Z������Ȩé�JarrABS
            arrABS[i]=abs(arr[i]-arr[i+1]);

        }

        for(int i=0;i<n-1;i++){ //���arrABS�Mjolly�������e���S���@�ˡA�p�G�@�˴N��jolly�����ӭȲM�Ŭ�0
            for(int j=0;j<n-1;j++){
                if(arrABS[i]==jolly[j]){jolly[j]=0;}
            }
        }
        for(int i=0;i<n-1;i++){ //�p�Gjolly���Ҧ��ȳ��k0�A���N�N��o��loop�O��jolly!
            if(jolly[i]!=0){
                flag=1;
                break;
            }
        }
        if(flag==0){cout<<"Jolly"<<endl;}
        else{cout<<"Not jolly"<<endl;}
    }

}
