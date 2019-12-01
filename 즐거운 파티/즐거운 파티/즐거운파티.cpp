#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int BestInvitation(vector<string> frist, vector<string> second)
{
	int ans = 0;
	for (int i = 0; i < frist.size(); ++i)
	{
		int f = 0;
		int s = 0;

		for (int j = 0; j < frist.size(); ++j)
		{
			if (frist[i] == frist[j]) f++;
			if (frist[i] == second[j]) f++;
			if (second[i] == second[j]) s++;
			if (second[i] == frist[j]) s++;

		}
		ans = max(f, ans);
		ans = max(s, ans);
	}
	return ans;
}

int main()
{
	
	vector<string> frist = {"as", "bs" , "cs", "ds"};
	vector<string> second = { "bs", "ds" , "es", "as" };

	int rst = BestInvitation(frist, second);
	cout << rst << endl;

}