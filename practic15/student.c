//
// Created by 79627 on 01.04.2024.
//
#include "student.h"
void* student_input
        (void* stud){
    struct Student* tmp = stud;
    printf("Please insert information about first name, second name, sex, group, Notes (math, physic, chemie), age and ID:\n");
    scanf ("%s", tmp->name);
    scanf ("%s", tmp->fam);
    scanf ("%s", tmp->sex);
    scanf ("%s", tmp->group);
    scanf ("%d", &tmp->MathN);
    scanf ("%d", &tmp->PhysN);
    scanf ("%d", &tmp->ChemN);
    scanf ("%d", &tmp->yo);
    scanf ("%d", &tmp->jourN);
    tmp->print = student_print;
    return tmp;
}

void* student_print (void* student)
{
    struct Student* studenttmp = student;
    printf ("\t\tName: %s\n", studenttmp->name);
    printf ("\t\tFamily: %s\n", studenttmp->fam);
    printf ("\t\tAge: %d\n", studenttmp->yo);
    printf ("\t\tPol: %s\n", studenttmp->sex);
    printf ("\t\tGroup: %s\n", studenttmp->group);
    printf ("\t\tMathnote: %d\n", studenttmp->MathN);
    printf ("\t\tPhysicnote: %d\n", studenttmp->PhysN);
    printf ("\t\tChemienote: %d\n", studenttmp->ChemN);
    printf ("\t\tJournalNumber: %d\n\n", studenttmp->jourN);
}

void* student_input_with_file (void* stud, FILE* file) {
    //file = fopen("file.txt", "w");
    struct Student* tmp = stud;
    printf("Please insert information about first name, second name, sex, group, Notes (math, physic, chemie), age and ID:\n");
    scanf ("%s", tmp->name);
    int length = strlen(tmp->name);
    fwrite(&length, sizeof(int), 1, file);
    fwrite (tmp->name, sizeof(char), length, file);
    scanf ("%s", tmp->fam);
    length = strlen(tmp->fam);
    fwrite(&length, sizeof(int), 1, file);
    fwrite (tmp->fam, sizeof(char), length, file);
    scanf ("%s", tmp->sex);
    length = strlen(tmp->sex);
    fwrite(&length, sizeof(int), 1, file);
    fwrite(tmp->sex, sizeof(char), length, file);

    scanf ("%s", tmp->group);
    length = strlen(tmp->group);
    fwrite(&length, sizeof(int), 1, file);
    fwrite(tmp->group, sizeof(char), length, file);

    scanf ("%d", &tmp->MathN);
    fprintf (file, "%d", tmp->MathN);
    scanf ("%d", &tmp->PhysN);
    fprintf (file, "%d", tmp->PhysN);
    scanf ("%d", &tmp->ChemN);
    fprintf (file, "%d", tmp->ChemN);
    scanf ("%d", &tmp->yo);
    fprintf (file, "%d", tmp->yo);
    scanf ("%d", &tmp->jourN);
    fprintf (file, "%d", tmp->jourN);
    tmp->print = student_print;
    //fclose(file)
    return tmp;
}



void* student_input_with_binary_file (void* stud, FILE* file) {
    //file = fopen("file.txt", "w");
    struct Student* tmp = stud;
    printf("Please insert information about first name, second name, sex, group, Notes (math, physic, chemie), age and ID:\n");
    scanf ("%s", tmp->name);
    int length = strlen(tmp->name);
    fwrite(&length, sizeof(int), 1, file);
    fwrite (tmp->name, sizeof(char), length, file);
    scanf ("%s", tmp->fam);
    length = strlen(tmp->fam);
    fwrite(&length, sizeof(int), 1, file);
    fwrite (tmp->fam, sizeof(char), length, file);
    scanf ("%s", tmp->sex);
    length = strlen(tmp->sex);
    fwrite(&length, sizeof(int), 1, file);
    fwrite(tmp->sex, sizeof(char), length, file);

    scanf ("%s", tmp->group);
    length = strlen(tmp->group);
    fwrite(&length, sizeof(int), 1, file);
    fwrite(tmp->group, sizeof(char), length, file);

    scanf ("%d", &tmp->MathN);
    fwrite (&tmp->MathN, sizeof(int), 1, file);
    scanf ("%d", &tmp->PhysN);
    fwrite (&tmp->PhysN, sizeof(int), 1, file);
    scanf ("%d", &tmp->ChemN);
    fwrite (&tmp->ChemN, sizeof(int), 1, file);
    scanf ("%d", &tmp->yo);
    fwrite (&tmp->yo, sizeof(int), 1, file);
    scanf ("%d", &tmp->jourN);
    fwrite (&tmp->jourN, sizeof(int), 1, file);
    tmp->print = student_print;
    //fclose(file)
    return tmp;
}
