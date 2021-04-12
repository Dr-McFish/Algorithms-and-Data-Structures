/* Use this header for small linked lists (DATA <= 8 bytes). */
/* User end only, see lincked_list.h for compiling linked_list.c */
#ifndef LINKED_LIST_SMALL_DATA_H
# define LINKED_LIST_SMALL_DATA_H

# include <stdint.h>
# include <stdbool.h>

/* change to appropriate type */
typedef int NODE_DATA;

typedef struct	node {
	NODE_DATA value;
	struct node* next;
}				node_t;

typedef bool(*is_eq_data_f)(NODE_DATA a, NODE_DATA b);
node_t* find_node(node_t* haystack, NODE_DATA needle, is_eq_data_f is_eq);
node_t* new_node(NODE_DATA value);
node_t* nth_node(node_t* head, uint16_t n);
node_t* final_node(node_t* head);
node_t* inject_node(node_t** old_node, node_t* new_node);
void remove_next(node_t* pervius);
void nuke_tail(node_t** head);
void printlist(node_t* head); /* won't work if NODE_DATA is not int */

#endif