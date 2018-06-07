#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
int main(void)
{
	cout << "Hello! Enter please your number order. Enter the 12345 that to stop entered." << endl;
	int input = NULL;
	vector<int> num_order;
	//Input data for sorting
	while (true)
	{
		scanf_s("%d", &input);
		if (input != 12345)
		{
			num_order.push_back(input);
		}
		else
		{
			break;
		}
	}



	//Showing the vector before sorting
	cout << "Thank you for you entered. Your array: " << endl;
	for (auto i : num_order)
	{
		cout << i << " ";
	}
	cout << endl;

	//Body of insertion sort
	int j;
	int tmp = 0;
	for (int i = 1;  i < num_order.size(); i++)
	{
		j = i;
		while (j > 0)
		{
			if (num_order[j - 1] > num_order[j])
			{
				tmp = num_order[j];
				num_order[j] = num_order[j - 1];
				num_order[j - 1] = tmp;
				j--;
			}
			else break;
		}
	}


	//Swowing the vector after sorting. Checking of results. 
	cout << "Sort is ended. Your array: " << endl;
	for (auto i : num_order)
	{
		cout << i << " ";
	}
	cout << endl;
	//End of the program

	system("pause");
	return 0;

}
