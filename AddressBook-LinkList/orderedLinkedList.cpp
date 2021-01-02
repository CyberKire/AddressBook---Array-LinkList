#include "orderedLinkedList.h"
template<class Type>
bool orderedLinkedList<Type>::search(const Type& searchItem) const
{
    bool found = false;
    nodeType<Type> *current;//this pointer is used to traverse the list

    current = linkedListType<Type>::first;// or this->first
    while(current != NULL && !found)
    {
        if(current->info >= searchItem)
            found = true;
        else
            current = current->link;
    }

    if(found)
        found = (current->info == searchItem);

    return found;
}
template<class Type>
void orderedLinkedList<Type>::insert(const Type& newItem)
{
    nodeType<Type> *current;
    nodeType<Type> *trailCurrent;
    nodeType<Type> *newNode;

    bool found;

    newNode = new nodeType<Type>;
    newNode->info = newItem;
    newNode->link = NULL;

    if(this->first == NULL)
    {
        this->first = newNode;
        this->last = newNode;
        this->count++;
    }
    else
    {
        current = this->first;
        found = false;

        while(current != NULL && !found)
        {
            if(current->info >= newItem)
                found = true;
            else
            {
                trailCurrent = current;
                current = current->link;
            }
        }
        if(current==this->first)
        {
            newNode->link = this->first;
            this->first = newNode;
            this->count++;
        }
        else
        {
            newNode->link = current;
            trailCurrent->link = newNode;
            this->count++;
            if(current == NULL)
                this->last = trailCurrent;
        }
    }
}
template<class Type>
void orderedLinkedList<Type>::insertFirst(const Type &newItem)
{
    /*
    nodeType<Type> *newNode;

    newNode = new nodeType<Type>;
    newNode->link = first;
    first = newNode;
    count++;
    */
    insert(newItem);
}
template<class Type>
void orderedLinkedList<Type>::insertLast(const Type &newItem)
{
    /*
    nodeType<Type> *newNode;
    newNode = new nodeType<Type>;
    last->link = newNode;
    newNode->link = NULL;
    last = newNode;
    count++;
    */
    insert(newItem);
}
template<class Type>
void orderedLinkedList<Type>::deleteNode(const Type &deleteItem)
{
    nodeType<Type> *current;
    nodeType<Type> *trailCurrent;
    bool found;

    if(this->first == NULL)
        cout<<"Cannot delete from an empty list."<<endl;
    else
    {
        current = this->first;
        found = false;

        while(current!=NULL && !found)
            if(current->info == deleteItem)
                found = true;
            else
            {
                trailCurrent = current;
                current = current->link;
            }
        if(current == NULL)
            cout<<"The item to be dleted is not in teh list."<<endl;
        else
        {
            if(current->info == deleteItem)
            {
                if(this->first == current)
                {
                    this->first = this->first->link;// :O
                    if(this->first == NULL)
                        this->last = NULL;
                    delete current;
                }
                else
                {
                    trailCurrent->link = current->link;
                    if(current == this->last)
                        this->last = trailCurrent;
                    delete current;
                }
                current--;
            }
        }
    }
}
