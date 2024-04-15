#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <list>
#include <algorithm>
#ifndef PARSER_H
#define PARSER_H
#include <cmath>

using namespace std;

typedef pair<int,int> edge;

class Parser
{
    public:
        Parser(string str);
        ~Parser();

        vector<edge> edges;
        int get_n();
        int get_m();
    protected:

    private:
        int m, n;
        string filename;
        fstream f_in;
};

#endif // PARSER_H
