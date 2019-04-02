#include<stdio.h>
int main()
{
	float weight, height, BMI;
	
	printf("Enter weight in kg and height in meters");
	scanf("%f%f", &weight, &height);
		
	BMI = weight/(height*height);
	
	if (BMI<15)
	printf("Stravation");
	
	else if(BMI>=15.1 && BMI<=17.5)
	printf("Anorexic");
	
	else if (BMI>=17.6 && BMI<=18.5)
	printf("underweight");
	
	else if(BMI>=18.6 && BMI<=24.9)
	printf("ideal");
	
	else if(BMI>=25 && BMI<=25.9)
	printf("overweight");
	
	else if (BMI>=30 && BMI<=30.9) 
	printf("obese");
	
	else if (BMI>=40) 
	printf("morbidlyoverweight");
	
	return 0;
	
}

