#include <stdio.h>

struct student {
	int roll_number;
	char name[30];
	float mark;
};

void add_student(struct student *);
void show_student(struct student *);

int main(void) {
	struct student cs_group[3];
	int i;
	
	printf("Let's start accepting students' data from a user.\n");
	for (i = 0; i < 3; ++i) {
		printf("\nStudent N%d.\n", i + 1);
		add_student(&cs_group[i]);
	}
	
	printf("\nDisplay students' data.");
	for (i = 0; i < 3; ++i) {
		printf("\n\nStudent N%d.\n", i + 1);
		show_student(&cs_group[i]);
	}
	
	return 0;
}

void add_student(struct student *s) {
	printf("Enter roll number: ");
	scanf("%d", &s->roll_number);
	
	printf("Enter name: ");
	scanf("%s", s->name);
	
	printf("Enter mark: ");
	scanf("%f", &s->mark);
}

void show_student(struct student *s) {
	printf("Student data:\n");
	printf("Roll number: %d\n", s->roll_number);
	printf("Name: %s\n", s->name);
	printf("Mark: %.2f", s->mark);
}
