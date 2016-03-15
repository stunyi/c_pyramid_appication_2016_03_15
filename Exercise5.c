#include <stdio.h>
 
void printPyramid(char asciiCharacter){

	// Row printer
//	for(int i = 65; i <= ((int)asciiCharacter); i++){
		
	int i = 65;
	while(i <= ((int)asciiCharacter)){

		int leftMargin = ((int)asciiCharacter) - i;
		
		// Print Spaces
		int j = 1;
		while(j <= leftMargin){
			printf(" ");
			j++;
		}
		
		// Print Characters in order
		int k = 65;
		while(k < ((int)i)){
			printf("%c",(char)k);
			k++;
		}
		
		// Print Characters in reverse Order
		int l = ((int)i);
		while(l >= 65){
			printf("%c",(char)l);
			l--;
		}
		
		printf("\n");
		i++;
	}

}


int main()
{
 	
 	for(;;){
 		
 		printf("Please enter a character between A and Z. Enter (!) to exit \n");
		char in;
//    	scanf("%c",&in);
		in = getchar();
		getchar();
		
		printf("Printing Pyramid for: %c \n",in);
		
		// Validate first to Ensure the Characters lies between 65(A) and 90(Z)
		if(((int)in) >= 65 && ((int)in) <= 90){
			// Call Function for creating Pyramid
			printPyramid(in);
			printf("\n");
		}else if(((int)in) == 33){
			break;
		} else {
			continue;
		}
	 }
  return 0;
}
