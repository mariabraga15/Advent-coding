#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<cstring>
#include <set>
using namespace std;
int main()
{
    ifstream in("shopping_list.txt");
    stringstream strStream;
    string line;
    bool ok;
    int i,j;
    while (getline(in, line))
    {
        strStream << line <<endl;
    }
    in.close();

    string str = strStream.str();
    i=0;
   
   for (size_t i = 0; i < str.size()-13; i++) {
    string sub;
    sub = str.substr(i, 14);  // Extract the 4-character substring
    set <char>unique_chars; 
    for (char c : sub) 
      unique_chars.insert(c);
  
        if(unique_chars.size()==sub.size()){
           cout<<i+14;
          break;}
 
   }
  return 0;
    }