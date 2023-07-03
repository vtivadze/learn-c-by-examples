#include <stdio.h>

struct student {
	int roll_number;
	char name[30];
	float mark;
};

void add_student(struct student *);
void show_student(struct student *);

int main(void) {
	struct student s;
	
	add_student(&s);
	show_student(&s);
	
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
	printf("\nStudent data:\n");
	printf("Roll number: %d\n", s->roll_number);
	printf("Name: %s\n", s->name);
	printf("Mark: %.2f\n", s->mark);
}
