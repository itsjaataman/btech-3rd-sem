#include <stdio.h>

struct Student {
	int roll_no;
	char name[50];
	float marks;
};

int main(void) {
	struct Student student1;
	struct Student *ptr = &student1;

	printf("Enter roll number: ");
	scanf("%d", &ptr->roll_no);

	printf("Enter name: ");
	scanf("%49s", ptr->name);

	printf("Enter marks: ");
	scanf("%f", &ptr->marks);

	printf("\nStudent Details\n");
	printf("Roll No: %d\n", ptr->roll_no);
	printf("Name: %s\n", ptr->name);
	printf("Marks: %.2f\n", ptr->marks);

	return 0;
}
