#include <iostream>
using namespace std;
//這題有點難，小細節很多。第一個細節是Input data N=x這個input是會把包含N=也當作input 但又不會用到。因此我放useless字元陣列來存放，其中最重要的陣列大小x我則是放在n變數
//第二個細節是陣列內容很大要用long long int存
//第三個細節是陣列內容不包含負號 因此要有一個neg_flag紀錄陣列是否出現負號。
//第四個細節是測資會全部輸入因此不能任意使用break，要等整個陣列都輸入完成後才能break
//第五點是這題的對稱矩陣和我們數學上所學的定義不同。
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
        if(flag==1||neg_flag==1){cout<<"Test #"<<case_num<<": Non-symmetric."<<endl;}//不對稱或者有負數

        else{cout<<"Test #"<<case_num<<": Symmetric."<<endl;}


    }
}

