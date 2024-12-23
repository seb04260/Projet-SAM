#ifndef CWIRE_HEADER
# define CWIRE_HEADER

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define MAX_LINE_LENGTH 1024

typedef struct AVLNode {
    int station_id;
    long capacity;
    long consumption;
    int height;
    struct AVLNode *left;
    struct AVLNode *right;
} AVLNode;

// Prototypes des fonctions
AVLNode *create_node(int station_id, long capacity, long consumption);
int height(AVLNode *node);
int get_balance(AVLNode *node);
AVLNode *rotate_right(AVLNode *y);
AVLNode *rotate_left(AVLNode *x);
AVLNode *insert_node(AVLNode *node, int station_id, long capacity, long consumption);
void free_tree(AVLNode *node);
void save_in_order(AVLNode *root, FILE *output);

#endif
