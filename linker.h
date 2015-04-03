#ifndef LINKER_H_INCLUDED
#define LINKER_H_INCLUDED
#define DATA int
#define KEY int
typedef struct Point* Node;
struct Point{
    DATA data;
    Node next;
    KEY key;
};
Node CreateLinker(void);
void Append(Node head , Node node);
void Insert(Node head , KEY key , Node node);
void Delete(Node head , KEY key);
Node Find(Node head , KEY key);

#endif
