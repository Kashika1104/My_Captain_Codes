//Menu Driven Program
#include<stdio.h>
int main()
	{
		int choice;
		printf("Pick one :\n1. French Fries \n2. Pasta \n3. Sandwich \n4. Pizza \n5. Burger \n6. Exit \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Food item - French Fries \nPrice - Rs 99");
					break;
	     	case 2:
				printf("Food item - Pasta \nPrice - Rs 179");
					break;
			case 3:
				printf("Food item - Sandwich \nPrice - Rs 149");
					break;
			case 4:
				printf("Food item - Pizza \nPrice - Rs 239");
					break;
			case 5:
				printf("Food item - Burger \nPrice - Rs 129");
					break;
			case 6:
				exit(0);
					break;	
			default:
				printf("Sorry! Not in the list.");
					break;
		}
		return 0;								
	}
