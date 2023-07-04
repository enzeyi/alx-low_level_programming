A singly linked list is a linear data structure in which each element, known as a node, contains a value and a pointer to the next node in the sequence. The last node points to NULL, indicating the end of the list.

```
struct Node {
    int data;
    struct Node* next;
};
```

In the above code, we define a structure called `Node` that contains an integer value (`data`) and a pointer to the next node (`next`).

To create a singly linked list, you would typically maintain a pointer to the first node, commonly referred to as the "head" of the list. Initially, the head points to NULL to indicate an empty list. As new nodes are added, they are dynamically allocated and linked together using the `next` pointer.

Here's an example of how to create a simple singly linked list in C:

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;  // Initialize an empty list

    // Create three nodes
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));

    // Assign values and link nodes together
    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 30;
    node3->next = NULL;  // Last node points to NULL

    // Assign head to the first node
    head = node1;

    // Traverse and print the linked list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
```

In this example, we create three nodes and link them together to form a linked list with elements 10, 20, and 30. The `head` pointer is assigned to the first node (`node1`). We then traverse the list starting from the head and print the data of each node.

Remember to properly deallocate the memory using `free()` when you're done working with the linked list to avoid memory leaks.

Let's go through the code line by line, explaining each step in a beginner-friendly manner:

```c
#include <stdio.h>
#include <stdlib.h>
```
These lines include the necessary header files for input/output operations (`stdio.h`) and dynamic memory allocation (`stdlib.h`).

```c
struct Node {
    int data;
    struct Node* next;
};
```
Here, we define a structure called `Node` that represents a node in the linked list. It has two members: `data`, which stores the value of the node, and `next`, which is a pointer to the next node in the list.

```c
int main() {
    struct Node* head = NULL;  // Initialize an empty list
```
This is the beginning of the `main` function. We declare a pointer to a structure `Node` called `head` and initialize it to `NULL`, indicating an empty list.

```c
struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
```
In the next few lines, we allocate memory dynamically using the `malloc` function to create three nodes (`node1`, `node2`, `node3`). Each node is allocated memory of the size of the `struct Node`.

```c
node1->data = 10;
node1->next = node2;

node2->data = 20;
node2->next = node3;

node3->data = 30;
node3->next = NULL;
```
Here, we assign values to each node's `data` member and link the nodes together using the `next` pointer. For example, `node1` contains the value `10` and points to `node2`, `node2` contains the value `20` and points to `node3`, and `node3` contains the value `30` and points to `NULL`.

```c
head = node1;
```
We assign the `head` pointer to the first node (`node1`), making it the beginning of the linked list.

```c
struct Node* current = head;
while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
}
```
We declare a new pointer `current` and initialize it with the `head` pointer. Then, we enter a loop that iterates until `current` becomes `NULL`, meaning we have reached the end of the linked list. Inside the loop, we print the `data` of the current node using `printf`, and then update `current` to point to the next node in the list.

```c
return 0;
```
Finally, we return `0` from the `main` function, indicating successful program execution.

In summary, the code creates a simple linked list with three nodes (10, 20, and 30) and prints the values of all the nodes. It demonstrates the basic concepts of creating and traversing a singly linked list in C.

Singly linked lists are widely used in real-life applications and are fundamental data structures in computer science. Here are a few examples of their practical applications:

1. Data Structures: Singly linked lists serve as building blocks for more complex data structures like stacks, queues, and graphs. These data structures often use linked lists to efficiently store and manage data.

2. File Systems: File systems in operating systems often use linked lists to maintain the list of files in a directory. Each file is represented as a node in the linked list, and the `next` pointer connects them.

3. Dynamic Memory Allocation: Linked lists are essential in managing dynamic memory allocation. Memory management functions like `malloc` and `free` often use linked lists internally to keep track of allocated and deallocated memory blocks.

4. Network Data Structures: In networking, linked lists are used to represent data structures like routing tables, adjacency lists, and packet queues. Linked lists provide efficient insertion and deletion operations, making them suitable for managing dynamic network data.

5. Polynomial Representation: Linked lists can be used to represent polynomials, where each node contains a coefficient and an exponent. The nodes can be linked together to form a polynomial expression.

6. Music and Video Playlists: Singly linked lists are commonly used to implement playlists in music and video players. Each song or video is represented by a node, and the `next` pointer links them together to create a sequential playlist.

7. Undo/Redo Functionality: In applications that require undo and redo operations, linked lists can be used to store the state changes. Each state change is stored as a node, and the `next` pointer represents the sequence of changes.

8. Navigation Systems: Linked lists can be used to represent routes in navigation systems. Each node represents a location, and the `next` pointer connects the locations in the correct order to form a route.

These are just a few examples, and linked lists find applications in various other domains, including databases, compilers, simulation systems, and more. Their flexibility and dynamic nature make them suitable for scenarios where efficient insertion and deletion of elements are required, even in the presence of frequent modifications to the data structure.