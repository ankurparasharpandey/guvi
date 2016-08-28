#include<bits/stdc++.h>
using namespace std;
string commonPrefixUtil(string str1, string str2)
{
	string result;
	int n1 = str1.length(), n2 = str2.length();
	for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
	{
		if (str1[i] != str2[j])
			break;
		result.push_back(str1[i]);
	}

	return (result);
}

string commonPrefix (string arr[], int n)
{
	string prefix = arr[0];

	for (int i=1; i<=n-1; i++)
		prefix = commonPrefixUtil(prefix, arr[i]);

	return (prefix);
}
int main()
{
	string arr[] = {"priyankamyonlylove", "priya","priyahugar", "priyankahugar"};
	int n = sizeof(arr) / sizeof(arr[0]);

	string ans = commonPrefix(arr, n);

	if (ans.length())
		printf ("The longest common prefix is - %s",
				ans.c_str());
	else
		printf("There is no common prefix");

	return (0);
}
