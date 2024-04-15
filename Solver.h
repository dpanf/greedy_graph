#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <list>
#include <algorithm>
#include <set>
#include "Parser.h"
#ifndef SOLVER_H
#define SOLVER_H

using namespace std;

typedef pair<int,int> v_deg;

class Solver
{
    public:
        Solver(int m,int n);

        void colour(int it);
        void solve(Parser *par,int n,int m);
        bool is_empty_col();

        vector<int> res;
        vector<v_deg> deg;
        vector<list<int>> lst;
    protected:

    private:
        Parser *par;
};

#endif // SOLVER_H
