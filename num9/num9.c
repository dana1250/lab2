#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[128];
    char first[256];
    char second[256];
} test_result;

typedef struct t_node {
    test_result key; 
    struct t_node *left, *right;
} t_node;

int comp(test_result b, test_result a);
void display(t_node *p);
t_node * search(t_node * r, test_result k);
t_node * new_node(test_result i);
t_node *insert_node(t_node *n, test_result k);
t_node * min_node(t_node * n);
void help();
void select_help();
char command;
test_result e;
t_node * root = NULL;
t_node * temp;
int num=0;

void main() {
    
    printf("student number: ");
    scanf("%d",&num);
    printf("<name first(<=100) second(<=100)>\n");
    for(int i=1; i<=num; i++){
       printf("%d\n", i);
        scanf("%s", e.name);
        scanf("%s", e.first);
        scanf("%s", e.second);
        root = insert_node(root, e);
    }
    select_help();
}


int comp(test_result e1, test_result e2) {
    return strcmp(e1.name, e2.name);
}

void display(t_node *p) {
    if (p != NULL) {
        printf("(");
        display(p->left);
        printf("%s", p->key.name);
        printf("%s", p->key.first);
        printf("%s", p->key.second);
        display(p->right);
        printf(")");
    }
}

t_node * new_node(test_result item) {
    t_node * temp = (t_node *)malloc(sizeof(t_node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

t_node *insert_node(t_node *node, test_result key) {    
    char name[128];
    char first[256];
    char second[256];
    
    if (node == NULL) {
        strcpy(name, key.name);
        strcpy(first, key.first);
        strcpy(second, key.second);
        return new_node(key);
    }
    if (comp(key, node->key) < 0) {
        node->left = insert_node(node->left, key);
    }
    else if (comp(key, node->key) > 0) {
        node->right = insert_node(node->right, key);
    }
    strcpy(name, key.name);
    strcpy(first, key.first);
    strcpy(second, key.second);
    return node;
}

t_node * search(t_node * root, test_result key) {
    t_node * p = root;
    while (p != NULL) {
        if (comp(key, p->key) == 0)
            return p;

        else if (comp(key, p->key) < 0)
            p = p->left;

        else if (comp(key, p->key) > 0)
            p = p->right;
    }
    return p;
}

t_node * min_node(t_node * node) {
    t_node * current = node;
    while (current->left != NULL) {
        current = current->left;
    }
    return current;
}

void select_help() {
    t_node * temp = (t_node *)malloc(sizeof(t_node));
    char command;
    
    do {
        help();
        scanf("%s" , &command);
        switch (command) {
        case 'p':
            display(root);
            printf("\n");
            break;
        case 's':
            printf("name:");
            scanf("%s", e.name);
            temp = search(root, e);
            if (temp != NULL)
                printf("name:%s \n", temp->key.name);
                printf("first:%s \n", temp->key.first);
                printf("second:%s \n", temp->key.second);
            }
            break;
    }while (command != 'q');
}

void help() {
    printf("\nsearch:s print:p quit:q >>");






















}
