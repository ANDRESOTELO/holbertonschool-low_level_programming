# More Singly linked lists

A **linked list** is a linear data structure, in which the elements are **not stored at contiguous memory** locations. The elements in a linked list are linked using pointers as shown in the below image:

![Singly linked list representation](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

## Is a linked list a derived data type?
Those data types which are implementation independent as they can be implemented in one or the other way are known as derived data types. These data types are normally built by the combination of primary or built-in data types and associated operations on them. So the answer is yes!

## Advantages over arrays

1. Dynamic size
2. Ease of insertion/deletion

## Drawbacks:

1. Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists efficiently with its default implementation.
2. Extra memory space for a pointer is required with each element of the list.
3. Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.

# Representation

// A linked list node
   struct Node
   {
      int data;
      struct Node* next;
   };

## Author
Andrés Sotelo.