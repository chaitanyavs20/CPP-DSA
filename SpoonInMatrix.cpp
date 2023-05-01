//Link:-https://www.codechef.com/problems/SPOON
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r,c;
	    int flag=0;
	    cin>>r>>c;
	    int count=0;
	    char arr[100][100];
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>arr[i][j];
	        }
	    }
	    //for column
	    for(int j=0;j<c;j++){
	        for(int i=0;i<r-4;i++){
	            
	                if((arr[i][j]=='S'||arr[i][j]=='s')&&(arr[i+1][j]=='p'||arr[i+1][j]=='P')&&(arr[i+2][j]=='o'||arr[i+2][j]=='O')&&(arr[i+3][j]=='o'||arr[i+3][j]=='O')&&(arr[i+4][j]=='n'||arr[i+4][j]=='N')){
	                    flag=1;
                    break;
	            }
	        }
	        if(flag==1)break;
	    }
	    
	    //for row
	     for(int i=0;i<r;i++){
	        for(int j=0;j<c-4;j++){
	            
	                if((arr[i][j]=='S'||arr[i][j]=='s')&&(arr[i][j+1]=='p'||arr[i][j+1]=='P')&&(arr[i][j+2]=='o'||arr[i][j+2]=='O')&&(arr[i][j+3]=='o'||arr[i][j+3]=='O')&&(arr[i][j+4]=='n'||arr[i][j+4]=='N')){
	                     flag=1;
                    break;
	            }
	        }
	         if(flag==1)break;
	     }
	     if(flag==1){
	         cout<<"There is a spoon!"<<endl;
	     }
	     else{
	         cout<<"There is indeed no spoon!"<<endl;
	     }
	     
	}
	return 0;
}
