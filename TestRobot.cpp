/*Chef has bought a new robot, which will be used for delivering dishes to his customers. He started testing the robot by letting it move on a line.Initially, the robot is placed at the coordinate 
x=X. Then, it should execute a sequence of N commands, described by a string S with length N. Each character of this string is either 'L' or 'R', denoting that the robot should walk one step to the left (decreasing x by 1) or to the right (increasing x by 1), respectively.
How many distinct points are visited by the robot when it has executed all the commands? A point p is visited by the robot if p is an integer and the robot's position before or after executing some command is x=p.
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long int x;
	    cin>>n;
	    cin>>x;
	    
	    string str;
	    cin>>str;
	    
	    set<int> s;
	    s.insert(x);
	    
	    for(int i=0;i<n;i++){
	        if(str[i]=='L'){
	            x--;
	            s.insert(x);
	        }
	        else{
	            x++;
	            s.insert(x);
	        }
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}
