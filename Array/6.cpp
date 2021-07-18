// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


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


//User function Template for C++

string reverseWord(string str){
    
  //Your code here

// { The following declarations also work:
    // std::string rev = "";
    // char rev[10000];             // Not recommended.
    // char rev[1];
// }
  
  string rev = "";
  rev.resize(str.length());         // This line is mandatory, but is not mentioned in the answer provided by GFG.
  long j = 0;
  
  for(long i = str.length() - 1 ; i >= 0; i--) {
      rev[j] = str[i];
      j++;
  }
  
  return rev;
}
