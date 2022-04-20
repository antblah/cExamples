#include <stdio.h>

int main(int argc, char *argv[])
{
	// create two arrays 
	int ages[] = {23, 43, 67, 34};
	char *names[] = {
		"Alan", "Frank", "Bill", "Robert"
	};


	// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	// first way using indexing
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("---\n");

	// setup the pointers to the start of the arrays
	int *cur_age = ages;
	char **cur_names = names;


	// second way of using pointers 
	for(i = 0; i < count; i++) {
		printf("%s is %d years old. \n", *(cur_names+i), *(cur_age+i));
	}

	printf("---\n");

	// fourth way with pointers 
	for(cur_names = names, cur_age = ages;
			(cur_age - ages) < count;
			cur_names++, cur_age++)
	{
		printf("%s lived %d years so far.\n", *cur_names, *cur_age);
	}

	return 0;

}
				
				
