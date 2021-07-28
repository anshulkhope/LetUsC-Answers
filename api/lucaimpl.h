#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const float PI = 3.14;

void calc_R_circ(void)
{

	/*
		formulas:-
		    circumference(circle) =: 2*π*r
		*/

	float radius_in;
	printf("Enter radius:");
	scanf("%f", &radius_in);
	float circumference = 2.0f * PI * radius_in;
	printf("%f", circumference);
	
}

void calc_LB_rect(void)
{

	/*
		formulas:-
		    permiter(rectangle) =: 2*(length+width)
		    area(rectangle) =: length*width
		*/

	float length_in_;
	float width_in_;
	printf("Enter length:");
	scanf("%f", &length_in_);
	printf("Enter width:");
	scanf("%f", &width_in_);
	float __perimeter_ = 2.0 * (length_in_ + width_in_);
	float __area_ = length_in_ * width_in_;
	printf("\nperimeter of rectangle:%f\n", __perimeter_);
	printf("area of rectangle:%f\n", __area_);

}

void deg_con_FtC(void)
{

	/*
		formula:-
		    (user_input^F - 32) * 5 / 9 = answer^C
		*/

	double __fahrenheit_in_;
	printf("fahranheit:");
	scanf("%lf", &__fahrenheit_in_);
	double __centigrade_ = (__fahrenheit_in_ - 32) * 5 / 9;
	printf("centigrade:%lf", __centigrade_);

}

void deg_con_CtF(void)
{

	/*
		formula:-
		    (user_input^C * 9 / 5) + 32 = answer^F
		*/
	double __centigrade_in_;
	printf("centigrade:");
	scanf("%lf", &__centigrade_in_);
	double __fahrenheit_ = (__centigrade_in_ * 9 / 5) + 32;
	printf("fahrenheit:%lf", __fahrenheit_);

}

void marks_calc(void)
{

	int marks_maths_in;
	int marks_science_in;
	int marks_english_in;
	int marks_pt_in;
	int marks_comp_in;
	printf("marks in maths:");
	scanf("%d", &marks_maths_in);
	printf("marks in science:");
	scanf("%d", &marks_science_in);
	printf("marks in english:");
	scanf("%d", &marks_english_in);
	printf("marks in PT:");
	scanf("%d", &marks_pt_in);
	printf("marks in computer:");
	scanf("%d", &marks_comp_in);

	int __total_ofmarks = marks_maths_in + marks_science_in + marks_english_in + marks_pt_in + marks_comp_in;
	int __percentage_ofmarks = __total_ofmarks / 100;
	printf("total marks:%d\n", __total_ofmarks);
	printf("percentage:%d", __percentage_ofmarks);

}

int hcf(int first_num, int sec_num) {
	int HCF;
	for (int i = 1; i <= (first_num || sec_num); i++) {
		if ((first_num % i == 0) && (sec_num % i == 0)) {
			HCF = i;
		}
	}
	return HCF;
}

int lcm(int first_num, int sec_num) {

	int LCM;
	for (int i = 0; i <= (first_num || sec_num); i++) {
		
	}
	return LCM;
}

void five_digit_plus_calc(void) {

	int fdigitNum;
	printf("Enter a five-digit number:");
	scanf("%d", &fdigitNum);

}

void five_digit_Reverse(void)
{

	char* fdigitNum_in;
	//int iter = 0;
	printf("Enter a five-digit number:");
	scanf("%s", &fdigitNum_in);
	//char* reved = strrev(fdigitNum_in);
	printf("%s", fdigitNum_in);
}

void calc_triangle(void)
{

	float side_a;
	float side_b;
	float side_c;
	printf("Enter side 1:");
	scanf("%f", &side_a);
	printf("Enter side 2:");
	scanf("%f", &side_b);
	printf("Enter side 3:");
	scanf("%f", &side_c);
	float S = (side_a + side_b + side_c) / 2;
	float area = sqrt(S * (S - side_a) * (S - side_b) * (S - side_c));
	printf("%f", area);

}

void crtsn_t_plr(void)
{

	float x = 78;
	float y = 75;
	float radius;
	float angle;
	float xs = x * x;
	float ys = y * y;
	radius = sqrt(xs + ys);
	angle = (tan(y / x) - 1);
	printf("Radius:%f", radius);
	printf("Angle:%f", angle);

}

void ll_g_dis(void)
{

	/*
		formulas:-
			degrees to radians -- r = deg * π / 180^
			Distance = 3963 (cos((sin(latt1)*sin(latt2))+(cos(latt1)*cos(latt2))*(cos(long1-long2)))-1)
		*/
	float Lng1;
	float Ltt1;
	float Lng2;
	float Ltt2;
	printf("Enter Longitude 1:");
	scanf("%f", &Lng1);
	printf("Enter Latitude 1:");
	scanf("%f", &Ltt1);
	printf("Enter Longitude 2:");
	scanf("%f", &Lng2);
	printf("Enter Latitude 2:");
	scanf("%f", &Ltt2);

	float dis = 3963 * (cos((sin(Ltt1) * sin(Ltt2)) + (cos(Ltt1) * cos(Ltt2)) * (cos(Lng2 - Lng1))) - 1);
	printf("Distance:%f", dis);

}

void calc_WCF(void)
{

	/*
		formula:-
			wcf = 35.74 + (0.6215*t) + ((0.4275*t) - 35.75) * (v*0.16)
		*/
	float wcf;
	float velocity;
	float temparature;
	printf("Enter wind velocity:");
	scanf("%f", &velocity);
	printf("Enter temparature:");
	scanf("%f", &temparature);
	wcf = 35.74 + (0.6215 * temparature) + ((0.4275 * temparature) - 35.74) * (velocity * 0.16);
	printf("Wind Chill Factor:%f", wcf);

}

void ag_trts(void)
{

	float angle;
	printf("Enter angle:");
	scanf("%f", &angle);

}

void swap_num(float num1, float num2)
{

	float t;
	t = num1;
	num1 = num2;
	num2 = t;
	printf("swapped:\n num1: %f num2: %f", num1, num2);

}

void profit_loss()
{

	float cp;
	float sp;
	printf("Enter Cost Price:");
	scanf("%f", &cp);
	printf("Enter Selling Price:");
	scanf("%f", &sp);
	if (cp > sp)
	{
		printf("The shopkeeper incurred loss by %f", cp - sp);
	}
	else if (sp > cp)
	{
		printf("The shopkeeper made profit by %f", sp - cp);
	}
	else
	{
		printf("Error: could not find answer");
	}

}

void odd_even_check()
{

	int num;
	printf("Enter number:");
	scanf("%d", &num);
	if ((num % 2) == 0)
	{

		printf("the number %d is an even number", num);
	}
	else
	{
		printf("the number %d is and odd number", num);
	}

}

void check_leap_year()
{

	int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4) == 0)
    {
        printf("%d is a leap year!\n", year);
    }
    else if((year % 4) != 0)
    {
        printf("%d is not a leap year!\n", year);
    }
    else
    {
        printf("Error!: Could not tell leap year.\n");
    }

}