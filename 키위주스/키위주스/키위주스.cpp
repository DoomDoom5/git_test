#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> thePouring(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId)
{

	for (int i = 0; i < fromId.size(); i++)
	{
		int sum = bottles[fromId[i]] + bottles[toId[i]];
		cout << "Sum : " << sum << endl;
		cout << "bottles[toId[i]] : " << bottles[toId[i]] << endl;
		cout << "bottles[fromId[i]] : " << bottles[fromId[i]] << endl << endl;

		bottles[toId[i]] = min(sum, capacities[toId[i]]);
		cout << "Sum : " << sum << endl;
		cout << "bottles[toId[i]] : " << bottles[toId[i]] << endl;
		cout << "bottles[fromId[i]] : " << bottles[fromId[i]] << endl << endl;

		bottles[fromId[i]] = sum - bottles[toId[i]];
		cout << "Sum : " << sum << endl;
		cout << "bottles[toId[i]] : " << bottles[toId[i]] << endl;
		cout << "bottles[fromId[i]] : " << bottles[fromId[i]] << endl << endl;
		
	}

	return bottles;

}

int main(int argc, const char* argv[]) {

	vector<int> capacities = { 40,20,30 };

	vector<int> bottles = { 33,18,0 };

	vector<int> fromId = {0,1};

	vector<int> toId = { 2,0 };

	vector<int> rst = thePouring(capacities, bottles, fromId, toId);

	for (int value : rst) 
	{
		cout  << value << endl;
	}

	return 0;

}
