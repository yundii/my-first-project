#include <stdio.h>

void update(int argument){
	argument = 10;
}

int main(){
	int value = 5;
	int* p_value = &value;
	
	printf("Value is: %d\n", value);
	printf("The address of value is: %p\n", p_value);
	printf("The value at p_value is: %d\n", *p_value);

	*p_value = 15; // used to be a 5, but it is 5
	printf("The updated value at p_value is: %d\n", *p_value);
	printf("Value updated is: %d\n", value);
	return 0;
}
