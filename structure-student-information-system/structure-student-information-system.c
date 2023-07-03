#include <stdio.h>
#include <stdlib.h>

struct student {
	int roll_number;
	char name[30];
	float mark;
};

void add_student(struct student *);
void show_student(struct student *);
void update_mark(struct student *s);

int main(void) {
	int n, i, roll_number;
	struct student *s[10];
	
	printf("How many students area there in the class? - ");
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i) {
		s[i] = (struct student *)malloc(sizeof(struct student));
		if (s[i] == NULL) {
			printf("Memory is not allocated.");
			exit(0);
		}
	}
	
	printf("Let's accept students'  data.\n");
	for (i = 0; i < n; ++i) {
		printf("\nEnter data for student N%d:\n", i + 1);
		add_student(s[i]);
	}
	
	printf("Enter roll number of a student for updating his mark: ");
	scanf("%d", &roll_number);
	for (i = 0; i < n; ++i) {
		if (s[i]->roll_number == roll_number) {
			update_mark(s[i]);
		}
	}
	
	printf("\nLet's display students' data.\n");
	for (i = 0; i < n; ++i) {
		printf("\nDisplay data for student N%d.\n", i + 1);
		show_student(s[i]);
	}
	
	for (i = 0; i < n; ++i) {
		free(s[i]);
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
	printf("Roll number: %d\n", s->roll_number);
	printf("Name: %s\n", s->name);
	printf("Mark: %.2f\n", s->mark);
}

void update_mark(struct student *s) {
	float mark;
	
	printf("Enter mark for a student: ");
	scanf("%f", &mark);
	
	s->mark = mark;
}
