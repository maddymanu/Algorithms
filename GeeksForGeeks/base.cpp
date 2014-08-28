#include<stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;
 
/* You would want to remove below 3 lines if your compiler
   supports bool, true and false */
// #define bool int
// #define true 1
// #define false 0
 

/* A binary tree node has data, pointer to left child
   and a pointer to right child */

struct node
{
  int data;
  struct node* left;
  struct node* right;
};
 
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{ 
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
 
