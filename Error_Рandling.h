//#pragma once
//
//#include <iostream>
//#include <cstdlib>
//#include <assert.h>
//
//
//int divide(int a, int b)
//{
//	assert(b && "ѕопытка делени€ на ноль"); // подробно описывает что и где(&& добавл€ет свой комментарий) в отличии от abort()
//	int result = a / b;
//
//	return result;
//}
//
//void testAssert()
//{
//	int a(4);
//	int b(0);
//
//	int c = divide(a, b);
//
//	std::cout << "Division result: " << c << std::endl;
//}
//
//int divide2(int a, int b)
//{
//	if (b == 0)
//	{
//		throw "division by zero";
//	}
//
//	return a / b;
//}
//
//void testTry()
//{
//	int a(3);
//	int b(0);
//
//	try
//	{
//		std::cout << divide2(a, b) << std::endl;
//	}
//	catch(const char* exception)
//	{
//		std::cout << "Exception: " << exception << std::endl;
//	}
//
//	std::cout << "Program end!" << std::endl;
//}
//
//class BadHarmonicMean
//{
//private:
//	float _val;
//
//public:
//	BadHarmonicMean(float val) : _val(val) {}
//	void show() { std::cout << "Harmonic mean exception " << _val << std::endl; }
//};
//
//float harmonic_mean(float arr[], int size)
//{
//	if (size == 0)
//	{
//		throw BadHarmonicMean(0.0);
//	}
//
//	float sum = 0;
//
//	for (int i = 0; i < size; ++i)
//	{
//		if (arr[i] == 0.0)
//		{
//			throw BadHarmonicMean(arr[i]);
//		}
//		sum = sum + 1.0 / arr[i];
//	}
//
//	if (sum < 0.0001 && sum > -0.001)
//	{
//		throw BadHarmonicMean(sum);
//	}
//
//	return size / sum;
//}
//
//void testBadHarmonic()
//{
//	float array1[2] = { 0.0, 0.0 };
//	float array2[2] = { 1.5, -1.5 };
//	float array3[2] = { 2.3, 0.5 };
//	float hmean;
//
//	try
//	{
//		hmean = harmonic_mean(array1, 2);
//		std::cout << "hmean = " << hmean << std::endl;
//	}
//	catch (BadHarmonicMean& e)
//	{
//		e.show();
//	}
//
//	try
//	{
//		hmean = harmonic_mean(array2, 2);
//		std::cout << "hmean = " << hmean << std::endl;
//	}
//	catch (BadHarmonicMean& e)
//	{
//		e.show();
//	}
//
//	try
//	{
//		hmean = harmonic_mean(array2, 0);
//		std::cout << "hmean = " << hmean << std::endl;
//	}
//	catch (BadHarmonicMean& e)
//	{
//		e.show();
//	}
//
//	try
//	{
//		hmean = harmonic_mean(array3, 2);
//		std::cout << "hmean = " << hmean << std::endl;
//	}
//	catch (BadHarmonicMean& e)
//	{
//		e.show();
//	}
//}