//
// Created by 79627 on 01.04.2024.
//
#include "student.h"

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
    struct Student* tmp = stud;
    //fopen("file.txt", "w");
    printf("Please insert information about first name, second name, sex, group, Notes (math, physic, chemie), age and ID:\n");
    scanf ("%s", tmp->name);
    fprintf (file, tmp->name );
    fprintf (file, "\n");
    scanf ("%s", tmp->fam);
    fprintf (file, tmp->fam);
    fprintf (file, "\n");
    scanf ("%s", tmp->sex);
    fprintf (file, tmp->sex);
    fprintf (file, "\n");
    scanf ("%s", tmp->group);
    fprintf (file, tmp->group);
    fprintf (file, "\n");
    scanf ("%d", &tmp->MathN);
    fprintf (file, "%d", tmp->MathN);
    fprintf (file, "\n");
    scanf ("%d", &tmp->PhysN);
    fprintf (file, "%d", tmp->PhysN);
    fprintf (file, "\n");
    scanf ("%d", &tmp->ChemN);
    fprintf (file, "%d", tmp->ChemN);
    fprintf (file, "\n");
    scanf ("%d", &tmp->yo);
    fprintf (file, "%d", tmp->yo);
    fprintf (file, "\n");
    scanf ("%d", &tmp->jourN);
    fprintf (file, "%d", tmp->jourN);
    fprintf (file, "\n");
    tmp->print = student_print;
    //fclose(file);
    return tmp;

}
