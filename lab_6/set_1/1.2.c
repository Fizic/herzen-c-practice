#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Student {
    unsigned int id;
    char name[50];
    char faculty[50];
    float rating;
};

struct Student *generate_students_array() {
    struct Student *students = (struct Student *) malloc(sizeof(struct Student) * 10);
    for (int i = 0; i < 10; i++) {
        students[i].id = i + 1;
        for (int j = 0; j < 10; j++) {
            students[i].name[j] = rand() % 26 + 65;
        }
        students[i].name[10] = '\0';
        for (int j = 0; j < 2; j++) {
            if ((3 * i + 1) % 2 == 0) {
                students[i].faculty[j] = 'I';
            } else {
                students[i].faculty[j] = 'G';
            }
        }
        students[i].faculty[2] = '\0';
        students[i].rating = (i * 19 + 3) % 5 + 1;
    }
    return students;
}

int main() {
    srand(time(NULL));
    FILE *students_file;
    students_file = fopen("students.csv", "wb");
    struct Student *generated_students;
    generated_students = generate_students_array();
    for (int i = 0; i < 10; i++) {
        fwrite(&generated_students[i].id, sizeof(int), 1, students_file);
        fwrite(&generated_students[i].name, sizeof(char), 50, students_file);
        fwrite(&generated_students[i].faculty, sizeof(char), 50, students_file);
        fwrite(&generated_students[i].rating, sizeof(float), 1, students_file);
    }
    fclose(students_file);
    students_file = fopen("students.csv", "rb");
    for (int i = 0; i < 10; i++) {
        fread(&generated_students[i].id, sizeof(int), 1, students_file);
        fread(&generated_students[i].name, sizeof(char), 50, students_file);
        fread(&generated_students[i].faculty, sizeof(char), 50, students_file);
        fread(&generated_students[i].rating, sizeof(float), 1, students_file);
        printf("%d,%s,%s,%f\n", generated_students[i].id, generated_students[i].name,
               generated_students[i].faculty, generated_students[i].rating);
    }
    fclose(students_file);
    free(generated_students);
    return EXIT_SUCCESS;
}
