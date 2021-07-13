#ifndef STACKTYPE_H
#define STACKTYPE_H

const int MAX_ITEMS = 5;
class FullStack

{};
class EmptyStack

{};
template <class ItemType>
class StackType
{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
private:
    int top;
    ItemType items[MAX_ITEMS];
};

#endif
