#include <stdio.h>
#include <stdlib.h>


typedef struct TreeNode {
  int value;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;


void addValue(TreeNode* node, int value) {
  if (value < node -> value) {
    if (node -> left == NULL) {
      TreeNode* newNode = malloc(sizeof(TreeNode));
      newNode -> value = value;
      newNode -> left = newNode -> right = NULL;
      node -> left = newNode;
    } else addValue(node -> left, value);
  } else {
    if (node -> right == NULL) {
      TreeNode* newNode = malloc(sizeof(TreeNode));
      newNode -> value = value;
      newNode -> left = newNode -> right = NULL;
      node -> right = newNode;
    } else addValue(node -> right, value);
  }
}


#define TRUE 1
#define FALSE 0

int findValue(TreeNode* node, int value) {
  if (node == NULL) return (FALSE);
  else if (node -> value == value) return (TRUE);
  else if (value < node -> value) return (findValue(node -> left, value));
  else return (findValue(node -> right, value));
}


int main(int argc, char* argv[]) {
  TreeNode root;
  root.value = 23;
  root.left = root.right = NULL;

  addValue(&root, 5);
  addValue(&root, 50);
  addValue(&root, 8);
  addValue(&root, 2);
  addValue(&root, 34);
  if (findValue(&root, 23)) printf("23 found in tree\n");
  else printf("23 not found\n");
  if (findValue(&root, 42)) printf("42 found in tree\n");
  else printf("42 not found\n");
  return 0;
}
