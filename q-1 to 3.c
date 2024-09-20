#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	int score;
	score=marks>=90?'A':marks>=80?'B':marks>=70?'C':marks>=60?'D':marks>=50?'E':'F';
	printf("your grade is %c ",score);
	
	switch(score){
		
		case 'A':
			printf("Excellent work ");
			break;
			
		case 'B':
			printf("Well done ");
			break;
			
		case 'c':
			printf("Good job ");
			break;
			
		case 'D':
			printf("You passed, but you could do better ");
			break;
			
		case 'E':
			printf("batter lock ");
			break;
			
		case 'F':
			printf("Sorry, you failed ");
			break;
			
	}
	if(score=='A'){
		printf("‘Congratulations! You are eligible for the next level");
	}
	else if(score=='B'){
		printf("Congratulations! You are eligible for the next level");
	}
	else if(score=='C'){
		printf("Congratulations! You are eligible for the next level");
	}
	else if(score=='D'){
		printf("Congratulations! You are eligible for the next level");
	}
	else if(score=='E'){
		printf(" You are eligible for the next level");
	}
	else{
		printf("Please try again next time");
	}
}
