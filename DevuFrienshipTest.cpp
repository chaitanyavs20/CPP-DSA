/*Devu has n weird friends. Its his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on dith day.
Devu despite being as rich as Gatsby, is quite frugal and can give at most one grand party daily. Also, he wants to invite only one person in a party. So he just wonders what is the maximum number of friendships he can save. Please help Devu in this tough task !!
*/

//My solution
#include <set>
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
    set<int> s;
	for(int i=0;i<n;i++){
	     cin>>arr[i];
	     s.insert(arr[i]);  //Only unique no. are inswerted in set so redundant no. are automatically removed
	}
	
	cout<<s.size()<<endl;
	}
	return 0;
}

//Effecient solution
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,n,i;
	cin>>T;
	while(T--)
	{
	    cin>>n;
	    int A[n];
	    for(i=0;i<n;i++)
	        cin>>A[i];
	    
	    sort(A,A+n);  //Array is sorted
	    int c=n;
	    for(i=1;i<n;i++)
	    {
	        if(A[i]==A[i-1]) //If adjacent no. are same then reduce no. of saved friendships which is set to max i.e. n
	            c--;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
