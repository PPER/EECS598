# DSL for HTML node selection
Node[]      f :=    Filter(p, s) | Disj(f , ..., f )
Node[]      s :=    AllNodes() | ChildrenOf(f )
                    | DescendantsOf(f ) | RightSiblingsOf(f )
Node→Bool   p :=    Tag(t) | Class(t) 
                    | NthChild(k) | NthLastChild(k)
                    | Conjunction(p, p)
                    | CheckAttrList(al, al)
(string,string) list    al
DomTree inp     string t        int k

# DSL for HTML node selection in paper
Node[]      f :=    Filter(p, s) | Disj(f , ..., f )
Node[]      s :=    AllNodes() | ChildrenOf(f )
                    | DescendantsOf(f ) | RightSiblingsOf(f )
Node→Bool   p :=    Tag(t) | Class(t) | Id(t) | ItemProp(t)
                    | NthChild(k) | NthLastChild(k)
                    | IdSub(t) | Style(t, t) | Attr(t, t)
                    | Conjunction(p, p)
DomTree inp     string t        int k