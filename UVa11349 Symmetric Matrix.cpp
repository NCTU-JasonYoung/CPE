#include <iostream>
using namespace std;
//�o�D���I���A�p�Ӹ`�ܦh�C�Ĥ@�ӲӸ`�OInput data N=x�o��input�O�|��]�tN=�]��@input ���S���|�Ψ�C�]���ک�useless�r���}�C�Ӧs��A�䤤�̭��n���}�C�j�px�ګh�O��bn�ܼ�
//�ĤG�ӲӸ`�O�}�C���e�ܤj�n��long long int�s
//�ĤT�ӲӸ`�O�}�C���e���]�t�t�� �]���n���@��neg_flag�����}�C�O�_�X�{�t���C
//�ĥ|�ӲӸ`�O����|������J�]��������N�ϥ�break�A�n����Ӱ}�C����J������~��break
//�Ĥ��I�O�o�D����ٯx�}�M�ڭ̼ƾǤW�ҾǪ��w�q���P�C
int main(){
    int c,n;
    cin>>c;
    bool flag,neg_flag;
    int case_num = 0;
    char useless[3];
    while(c--){
        case_num++;
		neg_flag=0;
        flag = 0;
        cin>>useless[0]>>useless[1]>>n;
        long long int arr[n][n];

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(arr[i][j]<0){
                	neg_flag=1;
                	}

            }

        }
        if(neg_flag!=1){
	        for(int i=0;i<n;i++){
	            for(int j=i;j<n;j++){
	                if(arr[i][j]!=arr[n-i-1][n-j-1]){
	                    flag = 1;
	                    break;


	                }

	            }
	            if (flag==1){break;}

	        }
	    }
        if(flag==1||neg_flag==1){cout<<"Test #"<<case_num<<": Non-symmetric."<<endl;}//����٩Ϊ̦��t��

        else{cout<<"Test #"<<case_num<<": Symmetric."<<endl;}


    }
}

