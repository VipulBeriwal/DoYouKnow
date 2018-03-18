#include <stdlib.h>
#include <stdio.h>

/*This program explains the meaning of Deep copy and shared copy with the help of the simple program.
We have a structure which contain attributes as int pointer and int as attributes. First make var1 and 
initialize it with some values. Then we copied the car1 innto another variable var2. By this the attributes 
whihch are non pointer types will have deep copies and attributes which are pointer types will be shallow 
copied i.e they point to the same location.*/



struct test{
	int *pointer;
	int value;
};


int main(){
	struct test var1, var2;
	int a = 7;
	//initialization of var1
	var1.pointer = &a;
	var1.value = a;
	//Printing value of stored address of a in var1.pointer.
	printf("Var1.pointer value : %p\n", var1.pointer);
	//Printing the address of var1.value
	printf("Var1.value         : %p\n", &var1.value);
	
	//Copying var1 to var2
	var2 = var1;
	//Printing the values of var2
	//Printing value of stored address of a in var2.pointer. We can see that they are same, Address stored in var1.pointer and var2.pointer is same.
	//"SHALLOW COPY" 
	printf("Var2.pointer value : %p\n", var2.pointer);
	//Printing the address of var1.value
	printf("Var2.value         : %p\n", &var2.value);
	

	//Changing the value of a = 10. This will reflect to both var1.variable and var2.valiable beacuse they are pointing to same location whose value is changed.
	//Changing the value of var1.value = 15. Var2.value will not be affected. Because "DEEP COPY"
	a = 10;
	var1.value = 10;
	printf("\n\nAFTER CHANGE\n\n");
	
	printf("Var1.pointer value : %d\n", *var1.pointer);
	printf("Var1.value         : %d\n", var1.value);
	printf("Var2.pointer value : %d\n", *var2.pointer);
	printf("Var2.value         : %d\n", var2.value);

	printf("\n\nA CHECK\n\n");
	//However, addresses of var1.pointer and var2.pointer will be different. But the location they are pointing are same.
	//Logically, a new location is made to store the address of same location(caribale a)
	printf("Address of Var1.pointer         : %p\n", &var1.pointer);
	printf("Address of Var2.pointer         : %p\n", &var2.pointer);


	printf("\n\nMAllOC\n");
	//If we do malloc explicitly then a deep copy happens.
	var2.pointer = (int*)malloc(sizeof(int));
	*var2.pointer = *var1.pointer;
	//Now thy will be pointing to different locations and if you change one of them, changes will not reflect to others
	printf("Var1.pointer value : %p\n", var1.pointer);
	printf("Var2.pointer value : %p\n", var2.pointer);
	


	//Changing value of a = 7 again. var1.pointer will give 7 but var2.pointer will give 10.
	printf("\n\nAFTER CHANGE AGAIN\n\n");
	a = 7;
	printf("Var1.pointer value : %d\n", *var1.pointer);
	printf("Var2.pointer value : %d\n", *var2.pointer);
}
