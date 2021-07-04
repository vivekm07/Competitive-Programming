// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        if(size==1)
            return a[0];
        int count=0;
        int majElemnt=a[0];
        for(int i=0;i<size;i++){
            if(count==0)
                majElemnt=a[i];
            if(a[i]==majElemnt)
                count++;
            else
                count--;
        }
        count = 0;
        for(int i=0;i<size;i++) {
            if(a[i] == majElemnt) {
                count++;
            }
        }
        if(count>size/2)
            return majElemnt;
        else
            return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
  