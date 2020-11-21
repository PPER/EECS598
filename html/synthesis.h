#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include "CharsetConverter.h"
#include "Uri.h"
#include "ParserDom.h"
#include "utils.h"

using namespace std;
using namespace htmlcxx;

#ifndef SYNTHESIS
#define SYNTHESIS
enum DSL { Filter, Disj, AllNodes, ChildrenOf, DescendantsOf, RightSiblingsOf, 
            Tag, Class, NthChild, NthLastChild, Conjunction, CheckAttrList
         };
class Program{
    public:
        DSL syntax;
        Program* frag1;
        Program* frag2;
        string tag;
        string text;
        string classname;
};
#endif

