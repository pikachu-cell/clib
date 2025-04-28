#ifndef binarySearchTree
#define binarySearchTree

typedef struct BSTNode {
  void *data;
  struct BSTNode *left;
  struct BSTNode *right;
} BSTNode;

BSTNode *createBSTNode(void *data);
BSTNode *BSTinsert(BSTNode *root,
                   void *key); // TODO Add support for custom comaparators
BSTNode *BSTsearch(BSTNode *root, void *key);
BSTNode *BSTdelete(BSTNode *root, void *key);

#endif // binarySearchTree.h
