/*
3 Sum
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = VAL? Find all unique triplets in the array which give the sum equals to val.

Note: The solution set must not contain duplicate triplets.

Example: Given array nums = [-1, 0, 1, 2, -1, -4], val =0

A solution set is: [ [-1, 0, 1], [-1, -1, 2] ]
*/

// Two pointer method

int main(){
int n;
    cout<<"Size of array1"<<endl;
    cin>>n;
    int val;
    cout<<"Enter value:"<<endl;
    cin>>val;

    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(i!=0 && arr[i]==arr[i-1])continue; //Avoid duplicate
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(j!=i+1 && arr[j]==arr[j-1]){
               j++;
            } //Avoid duplicate
            else if(arr[i] + arr[j] + arr[k]== val){
               cout<<arr[i]<<"\t"<<arr[j]<<"\t"<<arr[k]<<"\t"<<endl;
               j++;
            }
            else if(arr[i] + arr[j] + arr[k] < val){
                j++;
            }
            else{
                k--;
            }
        }
    }
 }
