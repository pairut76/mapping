//Pairut Dumkuengthanant
//64856070


#include <iostream>
using namespace std;
#include <vector>
#include <iomanip>
#include <iterator>
#include <algorithm>
#include <initializer_list>
#include <utility>
#include <string>
#include <list>
#include <fstream>
#include <map>
#include <set>
#include <deque>

#include "setlist.h"

int main()
{
	multiset<int>odd;
	multiset<int>even;

	ifstream file_num("rand_numbers.txt");
	
	ofstream odd_file;
	ofstream even_file;
	odd_file.open("odd.txt");
	even_file.open("even.txt");
	for_each(istream_iterator<int>(file_num), istream_iterator<int>(),[&](int x)
	{
		if(x%2==0){
			even.insert(x);
			//cout<<x<<endl;
		}
		if(x%2==1 || x%2==-1){
			odd.insert(x);
			//cout<<x<<endl;
		}
	});
	for_each(odd.begin(), odd.end(),[&](int o){
		odd_file<<o<<endl;
		cout<<o<<endl;
	});

	for_each(even.begin(), even.end(),[&](int e){
		even_file<<e<<endl;
		cout<<e<<endl;
	});

	file_num.close();
	odd_file.close();
	even_file.close();
	return 0;
}






