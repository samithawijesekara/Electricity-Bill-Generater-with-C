#include <stdio.h>
int main(){

//Headding	
	printf("\n\n\t\t---------------------------------------\n");
	printf("---------------- SRI LANKA ELECTRICITY BILL CALCULATER ---------------\n");
	printf("\t\t---------------------------------------\n\n");


//Input the data
	int units, days;
	float amount, perday, tot, fix;

	printf("Enter the number of units : ");
	scanf("%d",&units);

	printf("Enter the number of days  : ");
	scanf("%d",&days);


//calculation for amount
	if (units <= 30){
	fix = 30;
	}

	else if (units <= 60){
	amount = units*7.85;
	fix = 60;
	}

	else if (units <= 90){
	amount = 471 + (units-60)*10;
	fix = 90;
	}

	else if (units <= 120){
	amount = 471 + 300 + (units-90)*27.75;
	fix = 480;
	}

	else if (units <= 180){
	amount = 471 + 300 + 832 + (units-120)*32;
	fix = 480;
	}

	else if (units > 180){
	amount = 471 + 300 + 832 + 1920 + (units-180)*45;
	fix = 540;
	}

//display the recipt
	printf("\n\n\tYour usage charge   :   %.2f LKR\n",amount);

	printf("\n\tFixed charges       :   %.2f LKR\n\n",fix);

	printf("			      ----------------");

	tot = amount + fix;
	printf("\n\tTotal charge        :   %.2f LKR\n",tot);

	perday = amount/days;
	printf("\n\tCharge per day      :   %.2f LKR\n",perday);

	printf("			      ----------------\n");


//Footer	
	printf("\n\t\t         -------------------\n");
	printf("-------------------------- T H A N K   Y O U --------------------------\n");
	printf("\t\t         -------------------\n\n");


return 0;
}
