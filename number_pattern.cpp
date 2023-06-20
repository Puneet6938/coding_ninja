#include <bits/stdc++.h> 
vector<string> numberPattern(int n)
{
	//type your code here
	vector<string> ans;

	for(int i=1;i<=n;i++){
		string x;
		for(int j=i;j<2*i;j++){
			x+= to_string(j);
		}
		ans.push_back(x);
	}
	return ans;
}
