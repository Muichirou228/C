//
// Created by 79627 on 01.04.2024.
//

#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
struct Student
{
    char fam[20];
    char name[20];
    char sex[2];
    int yo;
    char group[10];
    int MathN;
    int PhysN;
    int ChemN;
    int jourN;
    void* (*print) (void* student);
};

void* student_print (void* student);

void* student_input (void* stud);

void* student_input_with_file (void* stud, FILE* file);

void* student_input_with_binary_file (void* stud, FILE* file);

#endif //UNTITLED_STUDENT_H
