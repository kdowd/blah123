// blah123.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void test(vector<pair<int, int> > &xxx) {
	//xxx[4]. = 99;
}

int main()
{
	// PPPPPPPPPPPPPPPPPPP
 
	std::vector<pair<int, int> > pairs = { {4, 2}, {1, 4}, {5, 6}, make_pair(10, 20) };

	std::vector<pair<string, int> > patest = { {"bb", 2}, {"gg", 4}, {"aa", 6}, make_pair("cc", 20)};

	pairs.emplace_back(7, 8);
	pairs.emplace_back(make_pair(10, 20));
	sort(patest.begin(), patest.end());


	 

	test(pairs);

	for (auto i : patest) {
		cout << i.first << "\n";
	}
	 

	cin.get();
}
