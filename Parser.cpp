#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <list>
#include "Parser.h"

using namespace std;

typedef pair<int,int> edge;

Parser(string str)
{
    filename = str;
    f_in.open(filename);
    string str1;
    getline(f_in,str1,' ');
    n=stoi(str1);
    getline(f_in,str1,'\n');
    m=stoi(str1);
    for(int i=0;i<m;i++){
        edge a;
        getline(f_in,str1,' ');
        a.first = stoi(str1);
        getline(f_in,str1,'\n');
        a.second = stoi(str1);
        edges.push_back(a);
    }
}

~Parser()
{
    n=0;
    m=0;
    filename.clear();
    f_in.close();
}

int get_n()
{
    return n;
}

int get_m()
{
    return m;
}
