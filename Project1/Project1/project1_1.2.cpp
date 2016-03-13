//Trevaughn
#include <iostream>
#include <fstream>
#include<algorithm>
#include<string>
#include <vector>
using namespace std;

ifstream sample("Words.txt");

int main(){
	
	int n;
	cin >> n;
	vector<string> list;
	
	getline(sample, list);
	
	for(int C = 1; C <= n; C++){
	    getline(sample, list);
	    reverse(list.begin(), list.end());
	}
	
	// print out content:
  	cout << "Vector contains: ";
  	for (vector<string>::iterator it = list.begin(); it != list.end(); it++)
   	cout << ' ' << *it;
   	cout << '\n';


	
sample.close();	
	
return 0;

}
