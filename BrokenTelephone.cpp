/*Chef is judging a game called "Broken telephone". There are total N players taking part in the game. They are all sitting in a line. In the start of the game, 
first player is given a secret message written on a sheet of paper. Then they keep sending the message by whispering it to the player sitting immediate right to
one and so on until it reaches the last person.Finally, the message received by the last player is compared with the message said by first player. If these messages 
aren't equal, there is someone who has misheard the message or whispered it wrongly to the next player. If messages is equal, then the players win and receive a 
tasty chocolate.Note that first player receives the message on a sheet of paper, thus he cannot mishear it.As Chef wants to be sure that every player has fulfilled his
/ her role in the game, so he asks everyone to state their received messages after the end of the game. You are given an array A of N integers denoting messages 
received by each person.Please help Chef to find the number of players that could mishear the message or whisper it wrongly.
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	    int count=0;
	    if(arr[0]!=arr[1]){
	        count++;
	    }
	    for(int i=1;i<n-1;i++){
	        if(arr[i-1]!=arr[i+1] || arr[i-1]!=arr[i]){
	            count++;
	        }
	    }
	    if(arr[n-2]!=arr[n-1]){
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
