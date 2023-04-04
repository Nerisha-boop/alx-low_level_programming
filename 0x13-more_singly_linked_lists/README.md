9-insert_nodeint.c: C functionthat inserts a new node  to a listint_t linked list at a given position.
If it is not possible to add the new node at the indexidx, or the function fails - returnss NULL.
Otherwise - returns the address of the new node.
10. Delete at index

10-delelte_nodeint.c: C function that deletes the node at a given index of a listint_t linked list.
If the function succeeds - returns 1.
If the function fails - returns -1.
11. Reverse list

100-reverse_listint.c: C function that revevrses a listint_t linked list using a maximum of one loop and two variables.
Returns a pointer to the first node of the reversed list.
12. Print (safe version)

101-print_listint_safe.c: C function that prints a listint_t linked list safely (ie. can free listst containing loops).
Returns the number of nodes in the listint_t list.
13. Free (safe version)

102-free_listint_safe.c: C function that frees a listint_t linked list safely (ie. can free lists containing loops).
Returns the size of the list was freed.
Sets the head to NULL.
14. Find the loop

103-find_loop.c: C function that finds the loop contained in a listint_t linked list using a maximum of two variables.
If no loop is found - returns NULL.
Otherwise - returns the address of the node where the loop starts. 
