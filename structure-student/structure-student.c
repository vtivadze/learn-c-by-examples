#include <stdio.h>

struct student {
	int roll_number;
	char name[30];
	float mark;
};

int main(void) {
	struct student vt_student;
	
	printf("Enter student roll number: ");
	scanf("%d", &vt_student.roll_number);
	
	printf("Enter student name: ");
	scanf("%s", vt_student.name);
	
	printf("Enter student mark: ");
	scanf("%f", &vt_student.mark);
	
	printf("\nStudent data:\n");
	printf("Roll number: %d\n", vt_student.roll_number);
	printf("Name: %s\n", vt_student.name);
	printf("Mark: %.2f\n", vt_student.mark);
	
	return 0;
}
