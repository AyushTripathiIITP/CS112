#include<stdio.h>

// void average(struct Student *array , float n){
//     int sum = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         sum += array[i].marks;
//     }
//     printf("Average Score of all the student is %f\n", sum / n);
// }

typedef struct DOB{
    int day;
    int month;
    int year;
}DOB;

enum genders{Male , Female};

typedef struct Person{
    int per_ind_no;
    enum genders person ;
    DOB dateOfBirth;    
}Person;

typedef struct Teacher{
    int salary;
    Person teacher_identity;
}Teacher;

typedef struct Student{
    int marks;
    Person student_indentity;
}Student;

int main(void){
    Student detail_student[5];
    Teacher detail_teacher[5];
    int n;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        //takes students marks
        printf("Enter the details of Student %d\n", i+1);
        printf("Enter stdents marks\n");
        scanf("%i" , &detail_student[i].marks);
        //takes students identity number
        printf("Enter students identity NUmber\n");
        scanf("%i" , &detail_student[i].student_indentity.per_ind_no);
        //takes students gender
        printf("Enter the Gender of the student(Male or Female)\n");
        scanf("%s" , &detail_student[i].student_indentity.person);
        //takes students day of DOB
        printf("Enter the day of DOB\n");
        scanf("%i", &detail_student[i].student_indentity.dateOfBirth.day);
        //takes students months of dob
        printf("Enter the month of DOB\n");
        scanf("%i",  &detail_student[i].student_indentity.dateOfBirth.month);
        //takes students year of dob
        printf("Enter the year of DOB of student\n");
        scanf("%i",  &detail_student[i].student_indentity.dateOfBirth.year);
    }
    //printing details of students
    for(int i=0 ; i<n ; i++){
        printf("Student's Marks: %d\n" , detail_student[i].marks);
        printf("Personal Identity Number: %d\n" , detail_student[i].student_indentity.per_ind_no);
        printf("Gender: %s\n" , &detail_student[i].student_indentity.person);
        printf("DOB: %d ", detail_student[i].student_indentity.dateOfBirth.day);
        printf("%d ",  detail_student[i].student_indentity.dateOfBirth.month);
        printf("%d\n",  detail_student[i].student_indentity.dateOfBirth.year);
    }
    //details of teacher
    int t;
    printf("Enter the Number of teacher\n");
    scanf("%d", &t);
    for(int i =0 ; i <t ; i++){
        printf("Enter the details of teacher %d\nEnter the salary\n", i+1);
        scanf("%d", &detail_teacher[i].salary);
        printf("Enter the personal identity number\n");
        scanf("%d", &detail_teacher[i].teacher_identity.per_ind_no);
        printf("Enter the gender\n");
        scanf("%s", &detail_teacher->teacher_identity.person);
        printf("Enter the day of DOB\n");
        scanf("%d", &detail_teacher[i].teacher_identity.dateOfBirth.day);
        printf("Enter the month of DOB\n");
        scanf("%d",  &detail_teacher[i].teacher_identity.dateOfBirth.month);
        printf("Enter the year of DOB\n");
        scanf("%d",  &detail_teacher[i].teacher_identity.dateOfBirth.year);       
    }
    //details of teacher printing
    for(int i =0 ; i <t ; i++){
        printf("Salary: %i\n", detail_teacher[i].salary);
        printf("Personal Identity Number: %i\n", detail_teacher[i].teacher_identity.per_ind_no);
        printf("Gender: %s\n", &detail_teacher[i].teacher_identity.person);
        printf("DOB: %i ", detail_teacher[i].teacher_identity.dateOfBirth.day);
        printf("%i ",  detail_teacher[i].teacher_identity.dateOfBirth.month);
        printf("%i\n",  detail_teacher[i].teacher_identity.dateOfBirth.year);       
    }
    //printing the size of Student Structure
    printf("Size of Student Structure is %d\n", sizeof(Student));
    //calculation the average marks scored
    //average(detail_student , n);
    //could not work out the code for sum
return 0;
}