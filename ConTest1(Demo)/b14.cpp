#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

typedef struct data
{
	int value;
	int numOfAppear;
	int index;
}Data;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		unordered_map<int, Data*> dataMap;

		for (int i = 0; i < n; i++)
		{

			int val;
			cin >> val;

			unordered_map<int, Data*>::iterator ite = dataMap.find(val);
			if (ite == dataMap.end())
			{
				dataMap[val] = new Data{ val,1,i };
			}
			else
			{
				ite->second->numOfAppear++;
			}
		}

		vector<Data*> dataList;
		dataList.reserve(dataMap.size());

		for (auto kv : dataMap)
		{
			dataList.push_back(kv.second);
		}

		sort(dataList.begin(), dataList.end(), 
			[](const Data* d1, const Data* d2)
			{
				if (d1->numOfAppear != d2->numOfAppear)
				{
					return d1->numOfAppear > d2->numOfAppear;
				}
				else
				{
					return d1->index < d2->index;
				}
			});

		for (int i = 0; i < dataList.size(); i++)
		{
			for (int j = 0; j < dataList[i]->numOfAppear; j++)
				cout << dataList[i]->value << " ";
		}

		cout << endl;
		

		for (auto d : dataList)
			delete d;
	}

	return 0;
}








