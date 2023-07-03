#include <stdio.h>

struct student {
	int roll_number;
	char name[30];
	float mark;
};

struct student add_student(void);
void show_student(struct student);

int main(void) {
	struct student s;
	
	s = add_student();
	show_student(s);
	
	return 0;
}

struct student add_student(void) {
	struct student s;
	
	printf("Enter student roll number: ");
	scanf("%d", &s.roll_number);
	
	printf("Enter student name: ");
	scanf("%s", s.name);
	
	printf("Enter student mark: ");
	scanf("%f", &s.mark);
	
	return s;
}

void show_student(struct student s) {
	printf("\nStudent data:\n");
	printf("Roll number: %d\n", s.roll_number);
	printf("Name: %s\n", s.name);
	printf("Mark: %.2f\n", s.mark);
}
