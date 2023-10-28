#include <stdio.h>
#include <ctype.h>
#include <string.h>



void intro(); //prototype for intro function 


int main(){
	
		
	char PassW[100];
	char PassW2[100];
	int length;
	int i = 0;
	int upper = 0, lower = 0, alpha = 0, alnum = 0, digit = 0, punct =0;
	int runAgain;
	intro();



do{


	
	printf("\n\n\nPlease enter a password:");
	scanf("%s", PassW);
	printf("Please re-enter the password:");
	scanf("%s", PassW2);
	
		
		
	//makes certain both password matches
	if(strcmp(PassW, PassW2) != 0){
		printf("Passwords not matching, please re-enter!\n\n");
		printf("\n\nPlease enter a password:");
		scanf("%s", PassW);
		printf("Please re-enter the password:");
		scanf("%s", PassW2);
	}

	
	//places length of string in length variable
	length = strlen(PassW2);
	
	
	
	//for loop to calculate how many of each number, uppercase&lowercase letter and symbol there are and place in counter variable
	for(i=0; i<length; i++){
		
		if(isalpha(PassW2[i])){
			alpha++;	
		}
		
		
		if(isalnum(PassW2[i])){
			alnum++;	
		}
		
		if(isdigit(PassW2[i])){
			digit++;
		}
		
		
		if(islower(PassW2[i])){
			lower++;	
		}
		
		
		if(isupper(PassW2[i])){
			upper++;
		}
			
			
		if(ispunct(PassW2[i])){
			punct++;
		}
	
	}

	
		//comparison of each count to determine password strength
		if(length < 7){
			printf("Password is weak!");
				}else if(length < 7 && alnum == length || digit == length){
					printf("Password is weak!");
						}else if(length >= 7 && alpha == length || digit == length){
							printf("Password is weak!");
							}else if(length >= 7 && alpha >= 1 && digit >= 1 && punct == 0){
							printf("Password is moderate!");
								}else if(length >= 7 && lower >= 1 && upper >= 1 && digit >= 1 && punct == 0 && alpha >= 1){
								printf("Password is moderate!");
									}else if(length >= 7 && upper >= 1 && lower >= 1 && punct >= 1 && alpha >= 1 && digit >= 1){
									printf("Password is strong!");	
		}
	
	
	
	printf("\n\nEnter 1 to exit, any other value to run again:");
    scanf("%d", &runAgain);
    
	
	}while(runAgain != 1);
    	
    
	printf("\n\nThanks for using the password analyzer");
		
    return 0;
	
}


//function for intro
void intro(){
	
	printf("PASSWORD ANALYZER PROGRAM\n\n");
    printf("---------------------------\n\n");
    printf("Your password should satisfy the following criteria: \n\n \t1. At least one capital letter \n\n\t2. At least one digit (0-9)) \n\n\t3. At least one special charecter (!, $,*,#,&));\n\n\t4. Length should be at least 7");
}

	
