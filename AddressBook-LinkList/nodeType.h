#ifndef NODETYPE_H_INCLUDED
#define NODETYPE_H_INCLUDED
template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
};


#endif // NODETYPE_H_INCLUDED
