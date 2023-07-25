//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    int n=str.size();
    int mid=ceil(n/2);
    int st=0, end=n-1;
    while(st<=mid && end>=mid)
    {
        int t=0;
        t=str[st];
        str[st]=str[end];
        str[end]=t;
        st++;
        end--;
    }
    return str;
  //Your code here
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends