// test01.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float amount, rate, mpay, sum1, sum2, sum3, m_rate;
	printf("enter amount if loan:\n");		//输入应还款金额
	scanf_s("%f", &amount);
	printf("enter interest rate:\n");		//输入年利率
	scanf_s("%f", &rate);
	printf("enter monthly payment:\n");		//输入每月还款金额
	scanf_s("%f", &mpay);

	m_rate = rate / 1200;
	printf("monthly rate = %f\n", m_rate);

	sum1 = (amount - mpay)*(m_rate + 1.0);
	sum2 = (sum1 - mpay)*(m_rate + 1.0);
	sum3 = (sum2 - mpay)*(m_rate + 1.0);

	printf("sum1 = %f\n", sum1);
	printf("sum2 = %f\n", sum2);
	printf("sum3 = %f\n", sum3);

	printf("this is the first change\n\n\n\n");
	printf("this is the second change\n\n\n\n");
	printf("what this is ??\n\n\n");	printf("what this is ??\n\n\n");

	system("pause");





}