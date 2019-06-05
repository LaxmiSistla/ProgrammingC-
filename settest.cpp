#include <iostream>
#include <set>


using namespace std;


int main()
{
	set<int> s;
	set<int>::iterator its;

	s.insert(3);
	s.insert(4);
	s.insert(7);
	s.insert(9);

	for(auto &its : s)
		cout << its  << " ";
	cout << endl;

	its = s.lower_bound(7);
	if(its != s.end())
	{
		cout << "lower bound of 7 = " << *its << endl;
	}
	its = s.upper_bound(7);
	if(its != s.end())
	{
		cout << "upper bound of 7 = " << *its << endl;
	}

	
	its = s.lower_bound(4);
	if(its != s.end())
	{
		cout << "lower bound of 4 = " << *its << endl;
	}
	its = s.upper_bound(4);
	if(its != s.end())
	{
		cout << "upper bound of 4 = " << *its << endl;
	}

	its = s.lower_bound(3);
	if(its != s.end())
	{
		cout << "lower bound of 3 = " << *its << endl;
	}
	its = s.upper_bound(3);
	if(its != s.end())
	{
		cout << "upper bound of 3 = " << *its << endl;
	}

	its = s.lower_bound(2);
	if(its != s.end())
	{
		cout << "lower bound of 2 = " << *its << endl;
	}
	its = s.upper_bound(2);
	if(its != s.end())
	{
		cout << "upper bound of 2 = " << *its << endl;
	}

	
	its = s.lower_bound(9);
	if(its != s.end())
	{
		cout << "lower bound of 9 = " << *its << endl;
	}
	its = s.upper_bound(9);
	if(its != s.end())
	{
		cout << "upper bound of 9 = " << *its << endl;
	}

	return 0;
}
