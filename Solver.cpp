#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <list>
#include <algorithm>
#include <set>
#include "Parser.h"
#include "Solver.h"

using namespace std;

Solver(int m,int n)
{
    int v,u,i;
    for(i=0; i<n; i++){
        lst.push_back({});
        res.push_back(0);
    }
    for(i=0;i<m;i++){
        lst[par->edges[i].second].push_back(par->edges[i].first);
        lst[par->edges[i].first].push_back(par->edges[i].second);
    }
    for(i=0;i<n;i++)
        deg.push_back({lst[i].size(),i});
    sort(deg.begin(),deg.end(),greater<v_deg>());
}

bool is_empty_col()
{
    for(int i=0;i<par->get_n();i++)
        if(res[i]==0)
            return true;
    return false;
}

void colour(int i){
    bool flag=true;
    set<int> a;
    int col=1;
    for(list<int>::iterator j=lst[i].begin();j!=lst[i].end();j++)
        if(res[*j])
            a.insert(res[*j]);
    flag=true;
    col=1;
    for(set<int>::iterator b=a.begin();b!=a.end()&&flag;b++){
        if(col!=*b)
            flag=false;
        else{
            flag=true;
            col++;
        }
    }
    res[i]=col;
}

solve(Parser *parser,int n,int m)
{
    int u=deg[0].second,k=1,j;
    res[u]=1;
    while(is_empty_col()){
        list<int> l=lst[u];
        if(!res[u])
            colour(u);
        for(list<int>::iterator i=l.begin();i!=l.end();i++)
            if(!res[*i])
                colour(*i);
        u=deg[k++].second;
    }
    for(j=0;j<n;j++)
        cout<<res[j]<< " ";
    cout<<endl;
}
