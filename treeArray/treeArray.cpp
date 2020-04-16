#include <iostream>
#include <queue>
using namespace std;



int main() {
	vector<float> tree;
	int root=0;
	int lenght=0;

	cout << "Enter a number of nodes\n";
	cin >> lenght;
	lenght++;
	cout << "Enter a root of tree\n";
	cin >> root; 

	tree.resize(lenght);

	int parent, son; 

	for (size_t i = 0; i < lenght-2; i++)
	{
		cout << "enter parent node\n";
		cin >> parent;
		cout << "enter son node\n";
		cin >> son; 

		tree.at(son) = parent; 
	}

	cout << "input done\n";

	for (size_t i = 1; i < lenght; i++)
	{
		cout << "node " << i << " has sons: ";
		for (size_t j = 0; j < lenght; j++)
		{
			if (tree.at(j) == i) cout << j << " ";
		}
		cout << "\n";
	}
}

