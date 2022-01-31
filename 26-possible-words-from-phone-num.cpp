// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> num_alpha = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void helper(int a[], int N, string curr, int idx, vector <string> &vec)
    {
        if (idx == N)
        {
            vec.push_back(curr);
            return;
        }
        int cur_digit = a[idx];
        int num_alpha_len = num_alpha[cur_digit].size();

        for (int i = 0; i<num_alpha_len; i++)
        {
            helper(a, N, curr+num_alpha[cur_digit][i], idx+1, vec);
        }
    }

    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> res = {};
        helper(a, N, "", 0, res);
        return res;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends
