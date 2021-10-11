#include <stdio.h>
#include <stdlib.h>

#include "BSTree.h"

BSTree BSTreeInsert(BSTree t, int val) { 
    if (t == NULL) {
        t = malloc(sizeof(struct BSTNode)); 
        t->value = val;    
        t->left = t->right = NULL;
    } else if (val < t->value) {
        t->left = BSTreeInsert(t->left, val);
    } else {
        t->right = BSTreeInsert(t->right, val);
    } 
    
    
    return t;
 
 
 
 




 
 
 
 
 
 
 
 
 
 
 
 
/* 
    if(t == NULL || val == t->value) {
        t = malloc(sizeof(struct BSTNode));
        t->value = val;
        t->left = t->right = NULL;
    } else if (val < t->value) {
        t->left = BSTreeInsert(t->left, val);
    } else {
        t->right = BSTreeInsert(t->right, val);
    }

    return t;
*/

/*    if (t == NULL) {
        t = malloc(sizeof(struct BSTNode));
        t->value = val;
        t->left = t->right = NULL;
    } else if (val < t->value) {
        t->left = BSTreeInsert(t->left, val);
    } else {
        t->right = BSTreeInsert(t->right, val);
    }

    return t;




*/



/*    if (t == NULL) {
        t = malloc(sizeof(struct BSTNode));
        t->value = val;
        t->left = NULL;
        t->right = NULL;       
        return t;
    } else if (t->value > val) {
        t->left = BSTreeInsert(t->left, val);
        return t;        
    } else if (t->value < val) {
        t->right = BSTreeInsert(t->right, val);
        return t;
    } else {                   // for duplicates
        return t;
    }
*/
}

