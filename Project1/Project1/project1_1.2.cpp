//Trevaughn McGregor
#include <iostream>     
#include <algorithm>   
#include <vector>    
#include <string>   
using namespace std;
int main () {

vector<string> Words;
string input;
 
    for(int i = 0; i < Words.size(); ++){
       getline(cin,input);
		Words.push_back(input);    
        reverse(Words.begin(),Words.end());
}
  // print out content:
    cout << "Words contains:";
   for (vector<string>::iterator it=Words.begin(); it!=Words.end(); ++it)
    cout << ' ' << *it;
    cout << '\n';

  return 0;
}
