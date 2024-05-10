//
// Created by 79627 on 01.04.2024.
//

#include "tree.h"
void* tree_add (void* tree, void* value) {
    struct Student* valuetmp = value;
    struct Tree* treetmp = tree;
    if(treetmp->value->jourN == valuetmp->jourN){
        return NULL;
    }
    if(treetmp->value->jourN < valuetmp->jourN){
        if(treetmp->left == NULL){
            treetmp->left = (struct Tree*) tree_init(valuetmp);
        }
        tree_add(treetmp->left, valuetmp);
    }
    if(treetmp->value->jourN > valuetmp->jourN){
        if(treetmp->right == NULL){
            treetmp->right = (struct Tree*) tree_init(valuetmp);
        }
        tree_add(treetmp->right, valuetmp);
    }
}



void* tree_print (void* tree)
{
    struct Tree* treetmp = tree;
    if (treetmp == NULL) return NULL;
    tree_print(treetmp->left);
    treetmp->value->print(treetmp->value);
    tree_print(treetmp->right);
}


void* tree_init(void* stud){
    struct Student* studenttmp = stud;
    struct Tree* head = malloc(sizeof(struct Tree));
    head->value = studenttmp;
    head->count = 1;
    head->left = NULL;
    head->right = NULL;
    head->print = tree_print;
    head->add = tree_add;
    head->get = tree_get_5;
    return head;
}

void* tree_get_5(void* tree, char NewGroup[10]){
    struct Tree* treetmp = tree;
    if(treetmp == NULL) {
        return NULL;
    }
    tree_get_5(treetmp->left, NewGroup);
    if (strcmp (treetmp->value->group, NewGroup) == 0) {
        if((treetmp->value->MathN == 5) && (treetmp->value->PhysN == 5) && (treetmp->value->ChemN == 5)) {
            treetmp->value->print(treetmp->value);
        }
    }
    tree_get_5(treetmp->right, NewGroup);
}

void* read_file_with_tree (FILE* file) {
    char word[100];
    file = fopen("file.txt", "r");
    while (fscanf(file, "%s", word) == 1) {
        printf("%s\n", word);
    }
    fclose(file);
}
