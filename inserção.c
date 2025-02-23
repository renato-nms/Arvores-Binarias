#include <stdio.h>
#include "cabeçalho.h"

no* insert_tree(no *source,int information){
    no *new = (no*)malloc(sizeof(no));

    if(new == NULL){
        new->value = information;
        new->left = NULL;
        new->right = NULL;
    }
}