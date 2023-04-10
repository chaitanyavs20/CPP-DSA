/*You are participating in a contest which has 11 problems (numbered 1 through 11). The first eight problems (i.e. problems 1,2,…,8) are scorable,while the last three problems 
(9, 10 and 11) are non-scorable ― this means that any submissions you make on any of these problems do not affect your total score.Your total score is the sum of your best scores
for all scorable problems. That is, for each scorable problem, you look at the scores of all submissions you made on that problem and take the maximum of these scores (or
0 if you didn't make any submissions on that problem); the total score is the sum of the maximum scores you took. You know the results of all submissions you made. Calculate your total score.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int arr[11]={0};
	    int n;
	    int score=0;
	    cin>>n;
	    
	    for(int i=0;i<n;i++){
	        int a,b;
	        cin>>a>>b;
	        if(b>arr[a]&&a<9){
	            arr[a]=b;
	        }
	    }
	    for(int i=0;i<9;i++){
	        score+=arr[i];
	    }
	    cout<<score<<endl;
	}
	return 0;
}

