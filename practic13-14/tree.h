//
// Created by 79627 on 01.04.2024.
//

#ifndef UNTITLED_TREE_H
#define UNTITLED_TREE_H
#include "student.h"
#include "string.h"
struct Tree {
    struct Student* value;
    struct Tree *left;
    struct Tree *right;
    int count;
    void* (*print) (void* tree);
    void* (*add) (void* tree, void* value);
    void* (*get) (void* tree, char NewGroup[10]);
};

void* tree_add (void* tree, void* value);

void* tree_print (void* tree);

void* tree_init(void* stud);

void* tree_get_5(void* tree, char NewGroup[10]);

void* read_file_with_tree (FILE* file);

#endif //UNTITLED_TREE_H
