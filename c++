class Solution{
public:
	static bool cmp( string& p, string& q){ 
	    return (p+q>q+p);
	}
	string printLargest(int n, vector<string> &arr) {
	    sort(arr.begin(), arr.end(), cmp);
	    string res="";
	    for(int i=0;i<n;i++) res+=arr[i];
	    return res;
	}
};
