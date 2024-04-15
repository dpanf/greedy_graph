#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <list>
#include <set>
#include <algorithm>
#include "Solver.h"
#include "Parser.h"

using namespace std;

int main()
{

    Parser p("gc_4_1");
    int n=p.get_n(),m=p.get_m();
    Solver s(m,n);
    s.solve(&p,n,m);
    return 0;
}
