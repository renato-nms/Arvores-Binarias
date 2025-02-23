typedef struct no{
    int value;
    struct no *next;
    struct no  *right;
    struct no *left;
} no;

no* insert_tree(no *source,int information);