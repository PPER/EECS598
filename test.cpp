#include "./html/ParserDom.h"
#include<iostream>
using namespace std;
using namespace htmlcxx;

int main(){
  //Parse some html code
  string html = "<html><body>hey</body></html>";
  HTML::ParserDom parser;
  tree<HTML::Node> dom = parser.parseTree(html);
  
  //Print whole DOM tree
  cout << dom << endl;
  
  //Dump all links in the tree
  tree<HTML::Node>::iterator it = dom.begin();
  tree<HTML::Node>::iterator end = dom.end();
  for (; it != end; ++it)
  {
     if (strcasecmp(it->tagName().c_str(), "A") == 0)
     {
       it->parseAttributes();
       cout << it->attribute("href").second << endl;
     }
  }
  
  //Dump all text of the document
  it = dom.begin();
  end = dom.end();
  for (; it != end; ++it)
  {
    if ((!it->isTag()) && (!it->isComment()))
    {
      cout << it->text();
    }
  }
  cout << endl;
}