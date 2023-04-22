/*On a sunny day, Akbar and Birbal were taking a leisurely walk in palace gardens. Suddenly, Akbar noticed a bunch of sticks on the ground and decided to test Birbal's wits.
There are N stick holders with negligible size (numbered 1 through N) in a row on the ground. Akbar places all the sticks in them vertically; for each valid i, the
initial height of the stick in the i-th holder is A i. Birbal has a stick cutter and his task is to completely cut all these sticks, i.e. reduce the heights of all sticks
to 0. He may perform zero or more operations; in each operation, he should do the following:Choose an integer H and fix the cutter at the height H above the ground.The 
cutter moves from the 1-st to the N-th stick holder. Whenever it encounters a stick whose current height is greater than H, it cuts this stick down to height H (i.e. for 
a stick with height ℎ>H, it removes its upper part with length ℎ−H).All the upper parts of sticks that are cut in one operation must have equal lengths. Otherwise, the 
operation may not be performed.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int cases;
	cin >> cases;
	
	for (int i = 0; i < cases; i++) {
	    int length;
	    cin >> length;
	    
	    int arr[length];
	    
	    int max = 0;
	    
	    int count = 0;
	    
	    for (int j = 0; j < length; j++) {
	        int x;
	        cin >> x;
	        
	        arr[j] = x;
	    }
	    
	    sort(arr, arr + length);
	    
	    for (int k = 0; k < length; k++) {
	        if (arr[k] > max) {
	            count++;
	            max = arr[k];
	        }
	    }
	    
	    cout << count << endl;
	}
	
	return 0;
}
