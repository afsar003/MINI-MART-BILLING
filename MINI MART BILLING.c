#include<stdio.h>
#include<stdlib.h>
void main()
{
	float ans,ans1,ans2,ans3,ans4,ans5,ans6,ru;
	int ch;
	{
		printf("WELCOME TO BASHA DRY FRUIT STORE");
		printf("\n\n Press (1) to buy Almonds");
		printf("\n\n Press (2) to buy Apricot");
		printf("\n\n Press (3) to buy Dates");
		printf("\n\n Press (4) to buy Foxnuts");
		printf("\n\n Press (5) to buy Walnuts");
		printf("\n\n Press (6) to buy Cashewnuts");
		printf("\n\n Press (7) to buy Pistachios");
		printf("\n\n 8. Exit");
		printf("\n\n Please enter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n\nEnter number of grams: ");
				scanf("%f",&ru);
				ans=(ru*0.8);
				ans3=(ru*0.08);
				ans6=ru*0.04;
				printf("\nYour bill = %.2f rs" ,ans);
				printf("\nGST = %.2f rs",ans3);
				printf("\nDiscount=%.2f rs",ans6);
				printf("\nTotal bill=%.2f rs",ans+ans3-ans6);
				printf("\nYou saved=%.2f rs",ans6);
				printf("\nPLEASE VISIT AGAIN");
				break;
			case 2:printf("\n\nEnter number of grams: ");
				scanf("%f",&ru);
				ans1=ru*1.2;
				ans4=(ru*0.12);
				ans5=(ru*0.06);
				printf("\nYour bill = %.2f rs" ,ans1);
				printf("\nGST = %.2f rs",ans4);
				printf("\nDiscount=%.2f rs",ans5);
				printf("\nTotal bill=%.2f rs",((ans1+ans4)-ans5));
				printf("\nYou saved=%.2f rs",ans5);
				printf("\nPLEASE VISIT AGAIN");
				break;
			case 3:printf("\n\nEnter number of grams: ");
				scanf("%f",&ru);
				ans=ru*0.3;
				ans3=(ru*0.03);
				ans6=ru*0.015;
				printf("\nYour bill = %.2f rs" ,ans);
				printf("\nGST = %.2f rs",ans3);
				printf("\nDiscount=%.2f rs",ans6);
				printf("\nTotal bill=%.2f rs",ans+ans3-ans6);
				printf("\nYou saved=%.2f rs",ans6);
				printf("\nPLEASE VISIT AGAIN");
				break;
			case 4:printf("\n\nEnter number of grams: ");
				scanf("%f",&ru);
				ans1=ru*0.6;
				ans4=(ru*0.06);
				ans5=ru*0.03;
				printf("\nYour bill = %.2f rs" ,ans1);
				printf("\nGST = %.2f rs",ans4);
				printf("\nDiscount=%.2f rs",ans5);
				printf("\nTotal bill=%.2f rs",((ans1+ans4)-ans5));
				printf("\nYou saved=%.2f rs",ans5);
				printf("\nPLEASE VISIT AGAIN");
				break;
			case 5:printf("\n\nEnter number of grams: ");
				scanf("%f",&ru);
				ans=ru*2.4;
				ans3=(ru*0.24);
				ans6=ru*0.12;
				printf("\nYour bill = %.2f rs" ,ans);
				printf("\nGST = %.2f rs",ans3);
				printf("\nDiscount=%.2f rs",ans6);
				printf("\nTotal bill=%.2f rs",ans+ans3-ans6);
				printf("\nYou saved=%.2f rs",ans6);
				printf("\nPLEASE VISIT AGAIN");
				break;
			case 6:printf("\n\nEnter number of grams: ");
				scanf("%f",&ru);
				ans1=ru*0.65;
				ans4=(ru*0.065);
				ans5=ru*0.032;
				printf("\nYour bill = %.2f rs" ,ans1);
				printf("\n\GST = %.2f rs",ans4);
				printf("\nDiscount=%.2f rs",ans5);
				printf("\nTotal bill=%.2f rs",((ans1+ans4)-ans5));
				printf("\nYou saved=%.2f rs",ans5);
				printf("\nPLEASE VISIT AGAIN");
				break;
			case 7:printf("\n\nEnter number of grams: ");
			    scanf("%f",&ru);
			    ans=ru*0.24;
			    ans3=(ru*0.024);
			    ans6=ru*0.012;
				printf("\nYour bill = %.2f rs" ,ans);
				printf("\n\GST = %.2f rs",ans3);
				printf("\nDiscount=%.2f rs",ans6);
				printf("\nTotal bill=%.2f rs",ans+ans3-ans6);
				printf("\nYou saved=%.2f rs",ans6);
				printf("\nPLEASE VISIT AGAIN");
			case 8:exit(0);
		}
	}
}



