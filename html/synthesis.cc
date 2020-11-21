#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include "CharsetConverter.h"
#include "Uri.h"
#include "ParserDom.h"
#include "utils.h"
#include "Node.h"
#include "tree.h"
#include "synthesis.h"

using namespace std;
using namespace htmlcxx;
using namespace HTML;
using namespace kp;
typedef tree_node_<Node> tree_node;
tree_node* locate(tree<Node> &tr, const std::string &text){
	tree<HTML::Node>::pre_order_iterator it = tr.begin();
	tree<HTML::Node>::pre_order_iterator end = tr.end();

	while ( it != end ) 
	{
        if (it->checkText(text)) return it.node;
		++it;
	}
	return nullptr;
}
DSL bottom_up(tree<Node> &tr, vector<string> &examples){
    vector<DSL> programs;
    if(is_common_tag)programs.push()
}
int main() {
    cerr << "Parsing some html... ";
    tree<HTML::Node> tr;
    string html = "<head></head><body>\n\n\n\n<center>\n<table width=\"600\">\n<tbody><tr>\n<td width=\"120\"><a href=\"/index.html\"><img src=\"/adt-SUA/images/ADT_LOGO.gif\" alt=\"adt logo\" align=\"middle\" border=\"0\"></a></td>\n<td width=\"480\"><font size=\"+2\" face=\"helvetica,arial\"><b>Australian Digital Theses Program<br></b></font></td>\n</tr>\n</tbody></table>\n</center>\n<center>\n</center>\n</body>";
    vector<string> examples;
    HTML::ParserDom parser;
    parser.parse(html);
    tr = parser.getTree();
    cerr<<tr;
    //tree<HTML::Node> tr_sub = tree(locate(tr, "Australian Digital Theses Program"));
    //cerr <<"\n -------------------------------\n";
    //cerr << tr_sub;
    tree<HTML::Node>::iterator_base const par = locate(tr, "Australian Digital Theses Program")->parent;
    //tree<HTML::Node> tr_par = tree(par);
    cerr <<"\n -------------------------------\n";
    cerr << par;
    return true;
}