#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <map>
#include <unordered_map>
#include <cctype>
#include <regex>
#include <unordered_set>
#include <bitset>

#include "tasksNodeOrList.h"
#include "Polinoms.h"
#include "Node.h"
#include "Stack.h"
#include "Graph.h"
#include "Binary_Tree.h"
#include "Compression_RLE.h"
#include "Error_Рandling.h"

using std::cout;
using std::cin;

void algor_1();
void palindrome();
void APowB();
void additionNumber();
void arithmeticOfNumbers();
void geometricNumbers();
void maxNumber();
void minEvenNumber();
void sumOddNumber();
void pagesTest();
void foodTest();
void wayTest();
void sortGrainTest();
void ignoramusTest();
void fgorTest();
void divisionOfTheAmoebaTest();
void weightlifterTest();
void Test_Var2();
void recThreeTest();
void recTwoTest();
void answerTest();
void snail_V1();
void snail_V2();
void testSpeed();
void polindrome();
void simplePalindrome_V1();
void simplePalindrome_V2();
void chessKing();
void whileTest();
void numUpToZero();
void truncTest();
void setprecision();
void numberInFibonacci();
void numberOfConsecutive();
void sequenceElement();
void chessMoves();
void chessMovesHorse();
void narcissisticNumberTest();
void preValue();
void prosentDep();
void sequenceWithEvasion();
void matrTestOne();
void matrPicture();
void matrFillNumbers();
void matrCheckingSemetricity();
void matrReverse();
void matrWitchTecket();
void matrNinetyDegreeTurn();
void matrSnake();
void matrDiagonal();
void testVec();
void sizeShoesVec();
int qwer(int x);
void qwerty23();
void ttest();
void srav();
void testVector();
void strPolintrom();
void uniqueElements();
void step1_8();
void step1_9();
void maxSequenceTest();
void testTask_1();
bool isPalindrome(int x);
std::string longestCommonPrefix(const std::vector<std::string>& strs);
bool isValid(std::string s);
bool isValidMod(const std::string& s);
int maxProfit(const std::vector<int>& prices);
void testCombine();
double myPow(double x, int n);
void mergeTest();
int removeDuplicates(std::vector<int>& nums);
void removeElementTest();
void rotate(std::vector<std::vector<int>>& matrix);
std::string largestOddNumber(std::string num);
std::string largestGoodInteger(std::string num);
int strStr(std::string haystack, std::string needle);
bool canJump(std::vector<int>& nums);
int searchInsert(std::vector<int>& nums, int target);
std::vector<int> plusOne(std::vector<int>& digits);
int lengthOfLastWord(std::string s);
bool wordPattern(std::string pattern, std::string s);
int lengthOfLongestSubstring(std::string s);
int furthestDistanceFromOrigin(std::string moves);
std::string firstPalindrome(std::vector<std::string>& words);
bool isPalindrome(std::string s);
int characterReplacement(std::string s, int k);
bool isHappy(int n);
int distributeCandies(std::vector<int>& candyType);
double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2);
int singleNumber(const std::vector<int>& nums);
bool wordBreak(std::string s, std::vector<std::string>& wordDict);
std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
bool isAnagram(std::string s, std::string t);
bool repeatedSubstringPattern(std::string s);
std::string mergeAlternately(const std::string word1, const std::string word2);
bool canPlaceFlowers(std::vector<int>& flowerbed, int n);
std::string reverseVowels(std::string& s);
std::string reverseWords(std::string s);
std::vector<int> productExceptSelf(std::vector<int>& nums);
bool increasingTriplet(std::vector<int>& nums);
int compress(std::vector<char>& chars);
bool isSubsequence(std::string s, std::string t);
int maxArea(const std::vector<int>& height);
int maxOperations(std::vector<int>& nums, int k);
int search(std::vector<int>& nums, int target);
int majorityElement(const std::vector<int>& nums);
int maxProduct(std::vector<int>& nums);
std::vector<std::vector<int>> generate(int numRows);
std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, const std::vector<int>& newInterval);
int firstUniqChar(const std::string& s);
bool canConstruct(const std::string ransomNote, const std::string magazine);
int missingNumber(std::vector<int>& nums);
bool containsDuplicate(std::vector<int>& nums);
bool divideArray(std::vector<int>& nums);
bool containsNearbyDuplicate(std::vector<int>& nums, int k);
std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2);
std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2);
std::vector<int> countBits(const int& n);
int firstBadVersion(const int& n);
int addDigits(int num);
void yandex_1_1(int p, int v, int q, int m);
std::vector<int> findDisappearedNumbers(std::vector<int>& nums);
int firstMissingPositive(std::vector<int>& nums);
bool detectCapitalUse(const std::string word);
int findLUSlength(std::string a, std::string b);
std::string validIPAddress(const std::string& queryIP);
int findComplement(const int& num);
std::string licenseKeyFormatting(std::string s, int k);
int minNumber(const std::vector<int>& nums1, const std::vector<int>& nums2);
std::string interpret(std::string command);
std::vector<int> twoSumV2(const std::vector<int>& numbers, int target);
int minSubArrayLen(int target, const std::vector<int>& nums);
int minSubArrayLenV2(int target, const std::vector<int>& nums);
std::vector<int> findDuplicates(std::vector<int>& nums);
int countPrimes(int n);

/*
	static int i = 1;
	srand(time(0) * i++);
*/

int main()
{
	setlocale(LC_ALL, "rus");

	int x = 10;
	std::cout << countPrimes(x);

	return 0;
}

void algor_1()
{
	long value;

	cin >> value;

	while (true)
	{
		cout << value << ' ';

		if (value == 1)
		{
			break;
		}

		if (value % 2 == 0)
		{
			value /= 2;
		}
		else
		{
			value = value * 3 + 1;
		}
	}
	cout << '\n';
}

void palindrome()
{
	long long int num, buf;
	int n(1), reverseNum(0);
	short digit;
	int count(0);

	cin >> num;

	if (num % 11 == 0)
	{
		cout << "Число не полиндром!";
		return;
	}

	buf = num;

	while (buf)
	{
		buf /= 10;
		if (!buf)
		{
			break;
		}
		count++;
		n *= 10;
	}

	while (num)
	{
		digit = num % 10;
		reverseNum += digit * n;

		cout << digit;

		num /= 10;
		n /= 10;
	}

	cout << '\n' << reverseNum;
}

void APowB()
{
	int numA, numB;
	unsigned numC(0);

	cin >> numA >> numB;

	if (numA > numB)
	{
		std::swap(numA, numB);
	}

	while (numA <= numB)
	{
		if (numA == numB)
		{
			break;
		}
		numA *= numA;
		numC++;
	}

	if (numA == numB)
	{
		cout << "Целое положительное число = " << numC;
	}
	else
	{
		cout << "Такого числа для чисел " << numA << ' ' << numB
			<< " не существует";
	}
}

void additionNumber()
{
	unsigned numA, numB(1), sumB(0);

	cin >> numA;

	while (numA > sumB)
	{
		sumB += numB;
		cout << numB << " + ";
		numB++;
	}

	cout << "\nМинимальное число = " << numB;
}

void arithmeticOfNumbers()
{
	int numBuf, sumBuf(0), count, counter(0);

	srand(time(0));

	cin >> count;

	while (count--)
	{
		numBuf = rand() % 100;
		sumBuf += numBuf;
		cout << numBuf << ' ';
		counter++;
	}

	cout << "\n\nСреднее арифметическое число = " << (double(sumBuf) / counter);
}

void geometricNumbers()
{
	int numBuf, count;
	double numAdd(1);

	srand(time(0));

	cin >> count;

	for (size_t i = 0; i < count; i++)
	{
		numBuf = rand() % 100;
		numAdd *= numBuf;
		cout << numBuf << ' ';
	}

	cout << "\n\nСреднее геометрическое чисел = " << pow(numAdd, 1.0 / count);
}

void maxNumber()
{
	int num;
	short digit(0), buf(0);

	cin >> num;

	while (num)
	{
		digit = num % 10;

		if (buf <= digit)
		{
			buf = digit;
		}

		num /= 10;
	}

	cout << "\nМаксимальное число = " << buf;
}

void minEvenNumber()
{
	int num;
	short digit(0), buf(0);

	cin >> num;

	while (num)
	{
		digit = num % 10;

		if (buf >= digit && digit % 2 == 0)
		{
			buf = digit;
		}

		num /= 10;
	}

	cout << "\nМинимальное чётное число = " << buf;
}

void sumOddNumber()
{
	int num;
	short digit(0), buf(0), pos(1);

	cin >> num;

	while (num)
	{
		digit = num % 10;

		if (pos % 2 == 1)
		{
			buf += digit;
		}

		num /= 10;
		pos++;
	}

	cout << "\nСумма чисел стоящих на нечётных позициях = " << buf;
}

void getPageNumber(const unsigned maxSumPages,
	unsigned& sumPages, unsigned& page)
{
	if (sumPages >= maxSumPages)
		return;

	page++;
	sumPages += page;
	getPageNumber(maxSumPages, sumPages, page);
}

void pagesTest()
{
	unsigned sum = 1;
	unsigned page = 1;
	getPageNumber(2006, sum, page);

	cout << page;
}

int countFoodNumber(unsigned days)
{
	if (days <= 1)
		return 100;
	if (days < 2)
		return 200;

	return countFoodNumber(days - 2) + countFoodNumber(days - 1) - 2;
}

void foodTest()
{
	cout << "Сколько пищи съел Винни-Пух: ";

	int day = 0;
	cout << "Введите количество дней: ";
	cin >> day;

	cout << countFoodNumber(day) / 1000 << " кг. еды";
}
// 3
float countWay(unsigned days)
{
	if (days <= 1)
		return 10;

	return countWay(--days) * 1.1;
}

void wayTest()
{
	cout << "Сколько спортсмен пробежал: ";

	int day = 0;
	cout << "введите кол-во дней: ";
	cin >> day;

	cout << countWay(day) << " км.";
}
// 4
float sortGrain(unsigned hours)
{
	if (hours <= 1)
		return 6;

	return sortGrain(--hours) * 1.15 +
		sortGrain(--hours);
}

void sortGrainTest()
{
	int hour = 0;
	cout << "Введите кол-во часов: ";
	cin >> hour;

	cout << sortGrain(hour);
}
// Незнайка
int ignoramus(unsigned days)
{
	if (days <= 1)
		return 1;
	if (days < 2)
		return 2;

	return (2 / ignoramus(days - 2) + ignoramus(days - 1) - 2);
}

void ignoramusTest()
{
	int days = 0;
	cout << "Введите кол-во дней: ";
	cin >> days;

	cout << ignoramus(days);
}

// Лягушка
float fgor(unsigned days)
{
	if (days <= 1)
		return 12;

	return fgor(--days) * 1.20 +
		fgor(--days);
}

void fgorTest()
{
	int day = 0;
	cout << "Введите кол-во дней: ";
	cin >> day;

	cout << fgor(day);
}

// Амёба
int divisionOfTheAmoeba(unsigned hours)
{
	if (hours <= 0)
		return 1;

	if (hours % 3 == 0)
		return divisionOfTheAmoeba(--hours) * 2;

	return divisionOfTheAmoeba(--hours);
}

void divisionOfTheAmoebaTest()
{
	int hours = 0;
	cout << "Введите кол-во часов: ";
	cin >> hours;

	cout << divisionOfTheAmoeba(hours);
}

void weightlifter(float& age, float weightBegin = 120, float maxWeight = 210)
{
	if (weightBegin >= maxWeight)
		return;

	age += 0.5;

	weightlifter(age, weightBegin * 1.05, maxWeight);
}

void weightlifterTest()
{
	float age;
	cout << "Введите начальное кол-во лет: ";
	cin >> age;

	weightlifter(age);

	cout << age;
}

void Test_Var2()
{
	int num = 50;

	for (size_t i = 1; i <= num; i++)
	{
		cout << i << ' ';
	}
}

double recursionByThree(double& num, unsigned n)
{
	if (n <= 0)
		return 1;
	if (n <= 1)
		return 1;

	return recursionByThree(num /= 10, --n);
}

void recThreeTest()
{
	double num = 3;
	unsigned n;
	cout << "Введите кол-во повторений: ";
	cin >> n;

	n += 1;
	recursionByThree(num, n);

	cout << num;
}

double recursionByTwo(double& num, unsigned n)
{
	if (n <= 1)
		return 1;

	num /= 2;
	return recursionByTwo(num, --n);
}

void recTwoTest()
{
	double num = 10;
	unsigned n;
	cout << "Введите кол-во повторений: ";
	cin >> n;

	//n += 1;
	recursionByTwo(num, n);

	cout << num << '\n';
}

double newtonsBinomial(int& C, int m, int x)
{
	if (C <= 0)
		return 1;

	return newtonsBinomial(C, m, x);
}

void nwetonsBinomialTest()
{
	int m, x, C, res(0);
	cout << "Введите 2 числа m и x: ";
	cin >> m >> x;

	newtonsBinomial(C, m, x);

	for (size_t i = 0; i < m; i++)
	{
		res += res + C;
	}

	cout << res;
}

int power(int x, int p)
{
	int answer;

	answer = p ? x * power(x, p - 1) : 1;

	return answer;
}

void answerTest()
{
	int x, p;
	cin >> x >> p;

	cout << "\n\n" << power(x, p);
}

// решение улитки не шесте с while
void snail_V1()
{
	unsigned short heigth(0), up(0), down(0), buf(0), count(1);

	cin >> heigth >> up >> down;

	while (heigth >= buf)
	{
		buf += up;

		if (buf >= heigth)
		{
			break;
		}
		else
		{
			buf -= down;
		}

		count++;
	}

	cout << count;
}

// решение без циклов
void snail_V2()
{
	unsigned short heigth(0), up(0), down(0), diff(0), a(0), b(0), res(0);

	cin >> heigth >> up >> down;

	diff = (heigth - 3 + 1) / 1;
	a = (heigth - down);
	b = (up - down);

	cout << (a + b - 1) / b;
}

void testSpeed()
{
	int ring(109), time(0), speed(0);

	cin >> speed >> time;

	int res = (speed * time) % ring;

	while (res < 0)
	{
		res += ring;
	}

	cout << res;
}

//palindrome без циклов для 4 значных версия 1 моя
void simplePalindrome_V1()
{
	int num(0), digitNum1, digitNum2, digitNum3, digitNum4, bufNum1, bufNum2, res(0);

	cin >> num;

	digitNum1 = num / 1000;
	digitNum2 = (num / 100) % 10;
	digitNum3 = (num / 10) % 10;
	digitNum4 = num % 10;

	bufNum1 = (digitNum1 - digitNum4) * (digitNum1 - digitNum4);
	bufNum2 = (digitNum2 - digitNum3) * (digitNum2 - digitNum3);

	res = (bufNum1 + bufNum2) + 1;

	cout << res;
}

//palindrome без циклов для 4 значных версия 2 чужая более простая
/*Поделил входящее число на 2 числа, одно из них перевернул зеркально
(например 23 превращаем в 32).. потом вычитаю одно из другого,
если остаток 0 то добавляем +1, если есть остаток то ответ уже другой будет*/
void simplePalindrome_V2()
{
	int number, bufNum1, bufNum2;

	cin >> number;

	bufNum1 = number / 100;
	bufNum2 = (number % 10) * 10 + (number % 100) / 10;

	cout << bufNum1 - bufNum2 + 1;
}

void chessKing()
{
	int hor1, ver1, hor2, ver2, bufHor(0), bufVer(0);

	std::cin >> hor1 >> ver1 >> hor2 >> ver2;

	bufHor = hor1 - hor2;
	bufVer = ver1 - ver2;

	if ((bufHor == 2 || bufHor == -2)
		|| (bufVer == 2 || bufVer == -2))
	{
		std::cout << "NO";
		return;
	}

	if ((hor2 == (hor1 + 1) || hor2 == hor1)
		&& (ver2 == (ver1 + 1) || ver2 == ver1)
		|| (hor2 == (hor1 - 1) || ver2 == (ver1 - 1)))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

void qwerty()
{
	int hor1, ver1, hor2, ver2;

	std::cin >> hor1 >> ver1 >> hor2 >> ver2;

	if ((hor2 == (hor1 + 1) && (ver2 == (ver1 + 1)))
		|| (hor2 == (hor1 - 1) && (ver2 == (ver1 - 1))))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

void whileTest()
{
	int num, buf(1);

	cin >> num;

	if (!num)
	{
		return;
	}

	while (true)
	{
		if (buf == num)
		{
			cout << "YES";
			break;
		}
		else if (buf > num)
		{
			cout << "NO";
			break;
		}
		buf *= 2;
	}
}

void numUpToZero()
{
	unsigned num, largest(0), buf(0);

	while (true)
	{
		std::cin >> num;

		if (num == 0)
		{
			std::cout << buf;
			break;
		}

		if (largest < num)
		{
			buf = largest;
			largest = num;
		}
		else if (num >= buf)
		{
			buf = num;
		}
	}
}

void truncTest()
{
	double num, buf;

	std::cin >> num;

	buf = trunc(num);

	std::cout << num - buf;
}

void setprecision()
{
	double num;

	cin >> num;

	num *= 10;

	cout << (int)num % 10;
}

void numberInFibonacci()
{
	int num, count(1), addNumber(0), mainNumber(1), buf(0);

	std::cin >> num;

	while (true)
	{
		addNumber += mainNumber;
		buf = mainNumber;
		mainNumber = addNumber;
		addNumber = buf;

		count++;
		if (mainNumber == num)
		{
			std::cout << count;
			break;
		}
		else if (mainNumber > num)
		{
			std::cout << -1;
			break;
		}
	}
}

void sequenceElement()
{
	unsigned num, res(0), numOne(0), numTwo(0), numBufTwo(0), numBufOne(0), count(1);

	while (std::cin >> num && num != 0)
	{
		if (numOne > num && numOne > numTwo && numTwo != 0)
		{
			if (count > 0 && numBufOne == 1 && (res == 0 || res > count))
			{
				res = count;
			}
			numBufOne = 1;
			count = 1;
		}
		else
		{
			count++;
		}

		numTwo = numOne;
		numOne = num;
	}

	std::cout << res;
}

void chessMoves()
{
	float hor1, ver1, hor2, ver2, diff1, diff2, res;

	std::cin >> hor1 >> ver1 >> hor2 >> ver2;

	if (hor1 == hor2 || ver1 == ver2)
	{
		std::cout << "NO";
		return;
	}

	diff1 = hor1 - hor2;
	diff2 = ver1 - ver2;
	res = diff1 / diff2;

	if ((hor2 == (hor1 + 1) || hor2 == hor1)
		&& (ver2 == (ver1 + 1) || ver2 == ver1)
		|| (hor2 == (hor1 - 1) || ver2 == (ver1 - 1))
		|| (res == 1 || res == -1))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

void chessMovesHorse()
{
	float hor1, ver1, hor2, ver2, diff1, diff2, res;

	std::cin >> hor1 >> ver1 >> hor2 >> ver2;

	diff1 = hor1 - hor2;
	diff2 = ver1 - ver2;

	res = diff2 / diff1;

	if (res == 1 || res == -1 || res == 2 || res == -2)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

bool narcissistic(int value)
{
	std::vector <int> vec;
	int digit(0), pos(0), res(0), bufValue(0);
	bufValue = value;

	while (bufValue)
	{
		digit = bufValue % 10;

		vec.push_back(digit);

		bufValue /= 10;
		pos++;
	}

	for (size_t i = 0; i < pos; i++)
	{
		res += std::pow(vec[i], pos);
	}

	if (res == value) return true;
	else return false;
}

void narcissisticNumberTest()
{
	int value(0);

	cin >> value;

	narcissistic(value) ? std::cout << "YES" : std::cout << "NO";
}

void preValue()
{
	int* arr = nullptr;
	int size, preValue, value;

	std::cin >> size;

	arr = new int(size);

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];

		if (i > 0)
		{
			value = arr[i];
			preValue = arr[i - 1];


			if ((value < 0 && preValue < 0) || (value > 0 && preValue > 0))
			{
				std::cout << preValue << ' ' << value << ' ';
				return;
			}
		}
	}
}

void prosentDep()
{
	int p, x, y, k, sum;

	std::cin >> p >> x >> y >> k;
	sum = x * 100 + y;

	for (int i = 0; i < k; i++)
	{
		sum += sum * p / 100;
	}
	std::cout << sum / 100 << " " << sum % 100;
}

void sequenceWithEvasion()
{
	std::vector <int> vec;
	int count(0), num;
	double res(0.0), evasion(0.0);

	while (true)
	{
		std::cin >> num;
		if (num == 0)
		{
			break;
		}

		vec.push_back(num);
		res += num;
		count++;
	}

	res /= count;

	for (auto& elem : vec)
	{
		evasion += pow(elem, 2) - pow(res, 2);
	}
	evasion /= count - 1;

	std::cout << std::fixed << std::setprecision(11) << sqrt(evasion);
}

void matrTestOne()
{
	int** matr = nullptr;
	int rows, cols, maxNum(-2147483648), resRow(0), resCol(0);

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matr[i][j];

			if (maxNum < matr[i][j])
			{
				maxNum = matr[i][j];
				resRow = i;
				resCol = j;
			}
		}
	}

	std::cout << resRow << ' ' << resCol;
}

/* Первая версия программы ниже, разница в переменных, которые по сути не нужны
	char** matr = nullptr;
	int rows, cols, size(0);

	std::cin >> size;

	rows = size;
	cols = size;

	matr = new char* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new char[cols];
		memset(matr[i], 0, sizeof(char) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (i == j || i == size / 2 || j == size / 2 || i + j == size - 1)
			{
				matr[i][j] = '*';
			}
			else
			{
				matr[i][j] = '.';
			}
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << matr[i][j];
		}
		std::cout << '\n';
	}

*/

void matrPicture()
{
	char** matr = nullptr;
	unsigned size(0);

	std::cin >> size;

	matr = new char* [size];
	for (size_t i = 0; i < size; i++)
	{
		matr[i] = new char[size];
		memset(matr[i], 0, sizeof(char) * size);
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i == j || i == size / 2 || j == size / 2 || i + j == size - 1)
			{
				matr[i][j] = '*';
			}
			else
			{
				matr[i][j] = '.';
			}
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			std::cout << matr[i][j] << ' ';
		}
		std::cout << '\n';
	}

	delete[] matr;
}

void matrFillNumbers()
{
	int** matr = nullptr;
	unsigned rows, cols, sColOne, sColTwo;

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			//std::cin >> matr[i][j];
			matr[i][j] = 10 * (i + 1) + j + 1;
		}
	}

	std::cin >> sColOne >> sColTwo;

	for (size_t j = 0; j < rows; j++)
	{
		std::swap(matr[j][sColOne], matr[j][sColTwo]);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << matr[i][j] << ' ';
		}
		std::cout << '\n';
	}

	delete[] matr;
}

void matrCheckingSemetricity()
{
	int** matr = nullptr;
	unsigned size;

	std::cin >> size;

	matr = new int* [size];
	for (size_t i = 0; i < size; i++)
	{
		matr[i] = new int[size];
		memset(matr[i], 0, sizeof(int) * size);
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			std::cin >> matr[i][j];
			//matr[i][j] = 10 * (i + 1) + j + 1;
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (matr[i][j] == matr[j][i])
			{
				continue;
			}
			else
			{
				std::cout << "NO";
				return;
			}
		}
	}

	std::cout << "YES";

	delete[] matr;
}

void matrReverse()
{
	int** matr = nullptr;
	unsigned rows, cols;

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matr[i][j];
		}
	}

	for (size_t i = 0; i < cols; i++)
	{
		for (size_t j = 0; j < rows; j++)
		{
			std::cout << matr[j][i] << ' ';
		}
		std::cout << '\n';
	}

	delete[] matr;
}

void matrWitchTecket()
{
	int** matr = nullptr;
	unsigned rows, cols, count(0), ticket(0);

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matr[i][j];
		}
	}

	std::cin >> ticket;

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (matr[i][j] == 0)
			{
				count++;
			}
			else
			{
				count = 0;
			}

			if (count >= ticket)
			{
				std::cout << i + 1;

				for (size_t k = 0; k < rows; k++)
				{
					delete[] matr[k];
				}
				delete[] matr;
				return;
			}
		}
		count = 0;
	}

	std::cout << 0;

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
}

void matrNinetyDegreeTurn()
{
	int** matr = nullptr;
	unsigned rows, cols;

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matr[i][j];
		}
	}

	for (size_t i = 0; i < cols; i++)
	{
		for (int j = rows - 1; j >= 0; j--)
		{
			std::cout << matr[j][i] << ' ';
		}
		std::cout << std::endl;
	}

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
}

void matrSnake()
{
	int** matr = nullptr;
	unsigned rows, cols, num = 1;

	std::cin >> rows >> cols;
	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		if (i % 2 == 0)
		{
			for (size_t j = 0; j < cols; j++)
			{
				matr[i][j] = num++;
			}
		}
		else
		{
			for (int j = cols - 1; j >= 0; j--)
			{
				matr[i][j] = num++;
			}
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << std::setw(4) << matr[i][j];
		}
		std::cout << std::endl;
	}

	for (size_t i = 0; i < rows; i++) {
		delete[] matr[i];
	}
	delete[] matr;
}

void matrDiagonal()
{
	int** matr = nullptr;
	unsigned rows, cols, num = 1;

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	int i = 0, j = 0;

	while (num <= rows * cols)
	{
		matr[i][j] = num++;
		if ((i + j) % 2 == 0)
		{
			if (j == cols - 1)
			{
				i++;
			}
			else if (i == 0)
			{
				j++;
			}
			else
			{
				i--;
				j++;
			}
		}
		else
		{
			if (i == rows - 1)
			{
				j++;
			}
			else if (j == 0)
			{
				i++;
			}
			else
			{
				i++;
				j--;
			}
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << std::setw(4) << matr[i][j];
		}
		std::cout << std::endl;
	}

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
}

void testVec()
{
	std::vector <int> vec;
	int size, num(0);


	std::cin >> size;

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> num;
		vec.push_back(num);
	}

	std::sort(vec.begin(), vec.end());

	for (auto& elem : vec)
	{
		std::cout << elem << ' ';
	}
}

void sizeShoesVec()
{
	int sizeHum(0), quan(0), count(0), num(0);

	std::cin >> sizeHum >> quan;

	std::vector <int> vec;
	for (size_t i = 0; i < quan; i++)
	{
		std::cin >> num;
		if (num >= sizeHum)
		{
			vec.push_back(num);
		}
	}

	std::sort(vec.begin(), vec.end());

	for (auto elem : vec)
	{
		if (elem % sizeHum >= 3 || elem / sizeHum >= 3 || count == 0 && elem / sizeHum >= 1 || elem == sizeHum)
		{
			count++;
			sizeHum = elem;
		}
	}

	std::cout << count;
}

int qwer(int x)
{
	return x << 1;
}

void qwerty23()
{
	int x = 5;

	x = qwer(x);

	std::cout << x;
}

void ttest()
{
	int num, numTwo = 0, numOne = 0, sobSeg(0), sobDima(0);

	std::cin >> num;

	while (num)
	{
		if (num >= 0)
		{
			num -= 2;
			sobSeg += 1;
		}
		else
			break;

		if (num >= 0)
		{
			num -= 2;
			sobSeg += 1;
		}
		else
			break;

		if (num >= 0)
		{
			num -= 3;
			sobDima += 2;
		}
		else
			break;
	}

	std::cout << num << '\n' << sobSeg << '\n' << sobDima;
}

void srav()
{
	int num;

	cin >> num;

	if (num > 7 && num < 14)
	{
		cout << "GOOD";
	}
	else
	{
		cout << "NO";
	}
}

void testVector()
{
	std::vector<std::string> vec = { "Red", "Black", "White" };

	std::string& refg = vec[2];
	std::string* ref = &vec[2];

	//vec.clear();

	*ref += "123";

	std::cout << refg << std::endl;
	std::cout << *ref << std::endl;
	std::cout << vec[2];

}

void strPolintrom()
{
	std::string str, revStr;

	std::getline(std::cin, str);

	size_t i = 0;
	while (i < str.size())
	{
		if (str[i] == ' ')
		{
			str.erase(i, 1);
		}
		else
		{
			++i;
		}
	}

	for (size_t i = str.size() - 1; i != SIZE_MAX; --i)
	{
		revStr += str[i];
	}

	if (revStr == str)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

void uniqueElements()
{
	std::vector <int> i_vec;
	unsigned size;
	std::cin >> size;
	i_vec.reserve(size);

	int num(0);

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> num;
		i_vec.push_back(num);
	}

	std::sort(i_vec.begin(), i_vec.end());

	for (size_t i = 0; i + 1 < i_vec.size(); ++i)
	{
		if (i_vec[i] == i_vec[i + 1])
		{
			i_vec.pop_back();
			++i;
			i_vec.pop_back();
		}
	}

	std::cout << i_vec.size();
}

void step1_8()
{
	bool space = true;

	char c = '\0';
	while (cin.get(c))
	{
		if (c == ' ' && space)
		{
			cout << c;
			space = false;
		}
		else if (c != ' ')
		{
			cout << c;
			space = true;
		}
	}
}

unsigned int calculateLog2(unsigned int num)
{
	unsigned int log = 0;
	while (num > 1)
	{
		num /= 2;
		log++;
	}
	return log;
}

void computeLogsStep1_9()
{
	unsigned int T;
	std::cin >> T;

	std::vector<unsigned int> tests(T);
	for (unsigned int i = 0; i < T; ++i)
	{
		std::cin >> tests[i];
	}

	for (const auto& num : tests)
	{
		unsigned int p = calculateLog2(num);
		std::cout << p << '\n';
	}
}

int maxSequence(const std::vector<int>& arr)
{
	unsigned num(0);
	for (const auto& elem : arr)
	{
		if (elem <= 0)
		{
			num++;
		}
	}

	if (num == arr.size() || arr.size() == 0)
	{
		return 0;
	}

	int sum(0);
	int max(0);

	for (const auto& elem : arr)
	{
		if (elem > 0 && sum == 0)
		{
			sum += elem;
		}
		else if (sum + elem > 0 && sum != 0)
		{
			sum += elem;
			if ((int)sum > max)
			{
				max = sum;
			}
		}
		else
		{
			sum = 0;
		}
	}

	return max;
}
// Лучший вариант который был (не мой)
/*
int maxSequence(const vector<int>& arr)
{
	int localmax=0;
	int globalmax=0;
	for (int i = 0; i < arr.size(); i++)
	{
		localmax = localmax + arr[i];
		if (localmax > globalmax)
		{
			globalmax = localmax;
		}
		if (localmax < 0)
		{
			localmax = 0;
		}
	}
	return globalmax;
}
*/

void maxSequenceTest()
{
	std::vector<int> vec;

	int num(0);
	for (size_t i = 0; i < 9; i++)
	{
		std::cin >> num;
		vec.push_back(num);
	}

	std::cout << "res: " << maxSequence(vec);
}


//TO DO проверить, как оно работает в главном массиве
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
	std::vector<int> result;
	if (n <= 0)
	{
		return result;
	}

	if (n < 3)
	{
		for (auto i = 0; i < n; i++)
		{
			result.push_back(signature[i]);
		}
		return result;
	}

	int* arr = nullptr;
	arr = new int[n];
	for (size_t i = 0; i < 3; i++)
	{
		arr[i] = signature[i];
		result.push_back(arr[i]);
	}

	for (auto i = 0; i < n - 3; i++)
	{
		arr[i + 3] = arr[i] + arr[i + 1] + arr[i + 2];
		result.push_back(arr[i + 3]);
	}

	delete[] arr;
	return result;
}

/* Комментарий к себе выше, работает...
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
	if(n < 3)
	{
	   signature.resize(n);
	}

	for(int i = 3; i < n; i++)
	{
	  signature.push_back(signature[i-3]+signature[i-2]+signature[i-1]);
	}

	return signature;
}
*/

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
	std::vector<int> res;

	for (size_t i = 0; i < nums.size(); ++i)
	{
		for (size_t j = nums.size() - 1; j != 0; --j)
		{
			if (nums[i] + nums[j] == target)
			{
				res.push_back(i);
				res.push_back(j);
				return res;
			}
		}
	}

	return res;
}

void testTask_1()
{
	std::vector<int> vec = { 2,7,11,15 };
	std::vector<int> res = twoSum(vec, 9);

	for (const auto& elem : res)
	{
		std::cout << elem;
	}
}

bool isPalindrome(int x)
{
	long long int buf(0), revNum(0), n(1);
	short digit(0);

	if (x <= -1)
	{
		return false;
	}

	buf = x;
	while (buf)
	{
		buf /= 10;
		if (!buf)
		{
			break;
		}
		n *= 10;
	}

	buf = x;
	while (buf)
	{
		digit = buf % 10;
		revNum += digit * n;

		buf /= 10;
		n /= 10;
	}

	if (x == revNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::string longestCommonPrefix(const std::vector<std::string>& strs)
{
	if (strs.empty() || strs[0] == "")
	{
		return "";
	}
	else if (strs.size() == 1)
	{
		return strs[0];
	}

	std::string res("");
	unsigned i(0), buf(0), count(0), prev(0);
	char ch = strs[i][i];

	while (ch != '\0')
	{
		for (const auto& elem : strs)
		{
			if (ch == elem[i])
			{
				++buf;
			}
		}

		if (buf >= strs.size())
		{
			res.push_back(ch);
			buf -= strs.size();
			++count;
		}

		if (prev == count)
		{
			return res;
		}

		++i;
		ch = strs[0][i];
		prev = count;
	}

	return res;
}

bool isValid(std::string s)
{
	if (s.empty())
		return false;

	std::vector<int> vLetter;
	vLetter.resize(3, 0);

	for (size_t i = 0; i < s.size(); ++i)
	{
		if (s[i] == '(')
		{
			vLetter[0]++;
		}
		else if (s[i] == '[')
		{
			vLetter[1]++;
		}
		else if (s[i] == '{')
		{
			vLetter[2]++;
		}
		else if (s[i] == ')')
		{
			vLetter[0]--;
		}
		else if (s[i] == ']')
		{
			vLetter[1]--;
		}
		else if (s[i] == '}')
		{
			vLetter[2]--;
		}
	}

	for (const auto& elem : vLetter)
	{
		if (elem > 0)
			return false;
	}

	return true;
}

bool isValidMod(const std::string& s)
{
	std::vector<char> vec;

	for (const char& elem : s)
	{
		if (elem == '(')
		{
			vec.push_back(')');
			continue;
		}
		else if (elem == '[')
		{
			vec.push_back(']');
			continue;
		}
		else if (elem == '{')
		{
			vec.push_back('}');
			continue;
		}

		if (vec.empty())
		{
			return false;
		}

		if (vec.back() != elem)
		{
			return false;
		}

		vec.pop_back();
	}

	return vec.empty();
}

int maxProfit(const std::vector<int>& prices)
{
	int min = INT_MAX, max = INT_MIN;

	size_t res(0);
	for (size_t i = 0; i < prices.size(); ++i)
	{
		if (prices[i] < min)
		{
			min = prices[i];
			max = 0;
		}
		else if (prices[i] > max)
		{
			max = prices[i];
		}

		if ((max - min) > 0 && (max - min) > res)
		{
			res = max - min;
		}
	}

	return res;
}

double myPow(double x, int n)
{
	double buf = x;
	if (n > 0)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			x = x * buf;
		}
	}
	else
	{
		for (int i = 0; i < n - 1; ++i)
		{
			x = x / 2;
		}
	}

	return x;
}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
	size_t counter_1(0);
	size_t counter_2(0);
	size_t countVec_1 = m - n;

	std::vector<int> bufVec;
	for (size_t i = 0; i < countVec_1; ++i)
	{
		bufVec.push_back(nums1[i]);
	}
	nums1.clear();

	while (counter_1 < bufVec.size() && counter_2 < n)
	{
		if (bufVec[counter_1] < nums2[counter_2])
		{
			nums1.push_back(bufVec[counter_1++]);
		}
		else
		{
			nums1.push_back(nums2[counter_2++]);
		}
	}

	for (size_t i = counter_1; i < bufVec.size(); ++i)
	{
		nums1.push_back(bufVec[counter_1++]);
	}

	for (size_t i = counter_2; i < nums2.size(); ++i)
	{
		nums1.push_back(nums2[counter_2++]);
	}
}

void mergeTest()
{
	std::vector<int> vec1 = { 1,2,3,0,0,0 };
	std::vector<int> vec2 = { 2,5,6 };

	merge(vec1, 6, vec2, 3);

	for (const auto& elem : vec1)
	{
		std::cout << elem << ' ';
	}
}

int removeDuplicates(std::vector<int>& nums)
{
	//auto it = nums.begin();
	for (auto it = nums.begin(); it != nums.end(); )
	{
		if (std::next(it) != nums.end() && *it == *(std::next(it)))
		{
			it = nums.erase(it);
		}
		else
		{
			++it;
		}
	}

	//nums.erase(std::unique(nums.begin(), nums.end(), nums.end()));
	return nums.size();
}

int removeElement(std::vector<int>& nums, int val)
{
	auto it = nums.begin();
	for (; it != nums.end();)
	{
		if (*it == val)
		{
			it = nums.erase(it);
		}
		else
		{
			++it;
		}
	}

	int res = nums.size();
	return res;
}

void removeElementTest()
{
	std::vector<int> vec = { 3,2,2,3 };

	removeElement(vec, 3);

	for (const auto& elem : vec)
	{
		std::cout << elem << ' ';
	}
}

void rotate(std::vector<std::vector<int>>& matrix)
{
	int size = matrix.size();
	for (int i = 0; i < size / 2; i++)
	{
		for (int j = i; j < size - i - 1; j++)
		{
			int tmp = matrix[i][j];

			matrix[i][j] = matrix[size - 1 - j][i];
			matrix[size - 1 - j][i] = matrix[size - 1 - i][size - 1 - j];
			matrix[size - 1 - i][size - 1 - j] = matrix[j][size - 1 - i];
			matrix[j][size - 1 - i] = tmp;
		}
	}
}

std::string largestOddNumber(std::string num)
{
	int value = std::stoi(num);
	if (value % 2 == 1)
	{
		return num;
	}

	for (int i = num.size() - 1; i >= 0; --i)
	{
		if (num[i] % 2 == 0)
		{
			num.erase(i, 1);
		}
		else
		{
			break;
		}
	}

	return num;
}

std::string largestGoodInteger(std::string num)
{
	unsigned short count(0);
	std::string res = "", buf;

	for (size_t i = 0; i < num.size() - 2; ++i)
	{
		if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
		{
			for (int j = 0; j < 3; ++j)
			{
				buf += num[i + j];
			}

			if (res < buf)
			{
				res = buf;
			}

			buf.clear();
			i += 2;
		}
	}

	return res;
}

/* версия V2. Улучшенная
std::string largestGoodInteger(std::string num)
}
	if (num.size() < 3) {
		return "";
	}

	const int consecutiveCount = 3;
	std::string largestSubstring = "";

	for (size_t i = 0; i <= num.size() - consecutiveCount; ++i)
	{
		if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
		{
			std::string currentSubstring = num.substr(i, consecutiveCount);

			if (currentSubstring > largestSubstring)
			{
				largestSubstring = currentSubstring;
			}

			i += consecutiveCount - 1; // Пропустить следующие символы
		}
	}

	return largestSubstring;
}
*/

int strStr(std::string haystack, std::string needle)
{
	int count(0), ind(-1);
	for (size_t i = 0; i < haystack.size(); ++i)
	{
		if (haystack[i] == needle[0])
		{
			ind = i;
			for (size_t j = i; j < needle.size() + i; ++j)
			{
				if (haystack[j] == needle[count])
				{
					count++;
				}
				else
				{
					break;
				}

				if (count == needle.size())
				{
					return ind;
				}
			}
			count = 0;
		}
	}

	return -1;
}

bool canJump(std::vector<int>& nums)
{
	if (nums.size() == 1)
	{
		return true;
	}

	int count(0);
	for (size_t i = 0; i < nums.size();)
	{
		i += nums[i];


		if (i >= nums.size() - 1)
		{
			return true;
		}

		count++;
		if (count == nums.size())
		{
			break;
		}
	}


	return false;
}

int searchInsert(std::vector<int>& nums, int target)
{
	int count(0);
	for (const int& elem : nums)
	{
		if (elem == target || elem > target)
		{
			return count;
		}
		count++;
	}

	return nums.size();
}

std::vector<int> plusOne(std::vector<int>& digits)
{
	std::vector<int> resultVec;
	digits.back() += 1;

	for (size_t i = digits.size() - 1; i < -1; --i)
	{
		if (digits[i] > 9)
		{
			digits[i] = 0;

			if (i - 1 == -1)
			{
				resultVec.insert(resultVec.begin(), 0);
				resultVec.insert(resultVec.begin(), 1);
				
				return resultVec;
			}
			digits[i - 1] += 1;
			resultVec.insert(resultVec.begin(), digits[i]);
		}
		else
		{
			resultVec.insert(resultVec.begin(), digits[i]);
		}

	}

	return resultVec;
}

int lengthOfLastWord(std::string s)
{
	unsigned short count(0);
	for (size_t i = s.size() - 1; i > 0; --i)
	{
		if (s[i] != ' ')
		{
			count++;
		}

		if (s[i] == ' ' && count > 0)
		{
			return count;
		}
	}

	return count;
}

bool wordPattern(std::string pattern, std::string s)
{
	if (s.empty() || pattern.empty())
	{
		return false;
	}

	std::stringstream sstream(s);
	std::unordered_map<char, std::string> wordMap;
	std::unordered_map<std::string, char> reverseWordMap;

	std::string buf = "";
	size_t count = 0;

	while (sstream >> buf)
	{
		if (count >= pattern.size())
		{
			return false;
		}

		char currentPatternChar = pattern[count];

		if (wordMap.find(currentPatternChar) == wordMap.end())
		{
			if (reverseWordMap.find(buf) != reverseWordMap.end())
			{
				return false;
			}

			wordMap[currentPatternChar] = buf;
			reverseWordMap[buf] = currentPatternChar;
		}
		else
		{
			if (wordMap[currentPatternChar] != buf)
			{
				return false;
			}
		}
		count++;
	}

	return count == pattern.size();
}

int lengthOfLongestSubstring(std::string s)
{
	std::map<char, int> substring;
	int result = 0, start = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		if (substring.count(s[i]) > 0 && substring[s[i]] >= start)
		{
			start = substring[s[i]] + 1;
		}

		substring[s[i]] = i;
		result = std::max(result, i - start + 1);
	}

	return result;
}

int furthestDistanceFromOrigin(std::string moves)
{
	size_t freeSpace(0);
	int count(0);

	for (const auto& elem : moves)
	{
		if (elem == 'L')
		{
			--count;
		}
		else if (elem == 'R')
		{
			++count;
		}
		else
		{
			++freeSpace;
		}
	}

	count = std::abs(count);

	return count + freeSpace;
}

std::string firstPalindrome(std::vector<std::string>& words)
{
	std::string reverseWord;
	unsigned short count(0);

	for (const auto& elem : words)
	{
		reverseWord = elem;
		count = elem.length();
		for (size_t i = 0, j = reverseWord.length() - 1; i < elem.length(); ++i, --j)
		{
			if (elem[i] == reverseWord[j])
			{
				--count;
			}
			else
			{
				break;
			}
		}

		if (count == 0)
		{
			return elem;
		}
	}

	return "";
}

bool isPalindrome(std::string s)
{
	std::string cleanedStr;
	for (char c : s)
	{
		if (std::isalnum(c))
		{
			cleanedStr += std::tolower(c);
		}
	}

	int left = 0;
	int right = cleanedStr.length() - 1;
	while (left < right)
	{
		if (cleanedStr[left] != cleanedStr[right])
		{
			return false;
		}
		left++;
		right--;
	}

	return true;
}

int characterReplacement(std::string s, int k)
{
	int res(0), max(0);

	for (size_t i = 0; i < s.length(); ++i)
	{
		char letterForSwap = s[i];
		int count = k;
		for (size_t j = i; j < s.length(); ++j)
		{
			if (s[j] == s[i] && count == 0)
			{
				max++;
			}
			else if (count > 0 && s[j] != s[i])
			{
				count--;
				max++;
			}
			else if(count == 0 && s[i] != s[j])
			{
				break;
			}
			else
			{
				max++;
			}
		}

		if (max > res)
		{
			res = max;
		}
		max = 0;
	}

	return res;
}

bool isHappy(int n)
{
	std::vector<int> vecNumber;
	int buf = n, number(0), res = 0, count(0);

	while (res != 1)
	{
		while (buf)
		{
			number = buf % 10;

			vecNumber.push_back(number);
			buf /= 10;
		}

		for (const auto& elem : vecNumber)
		{
			buf += elem * elem;
		}

		vecNumber.clear();

		if (count >= 40)
		{
			return false;
		}
		else
		{
			res = buf;
			count++;
		}
	}

	return true;
}

int distributeCandies(std::vector<int>& candyType)
{
	std::unordered_map<int, int> mapType;

	for (const auto& elem : candyType)
	{
		if (mapType.find(elem) == mapType.end())
		{
			mapType[elem]++;
		}
	}

	if (candyType.size() / 2 > mapType.size())
	{
		return mapType.size();
	}
	else
	{
		return candyType.size() / 2;
	}
}

double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2)
{
	std::vector<int> v_common;
	size_t numsSize1 = nums1.size();
	size_t numsSize2 = nums2.size();
	size_t counter1(0), counter2(0);
	double result(0.0);

	while (counter1 != numsSize1 && counter2 != numsSize2)
	{
		if (nums1[counter1] < nums2[counter2])
		{
			v_common.push_back(nums1[counter1++]);
		}
		else
		{
			v_common.push_back(nums2[counter2++]);
		}
	}

	for (size_t i = counter1; i < numsSize1; ++i)
	{
		v_common.push_back(nums1[i]);
	}

	for (size_t i = counter2; i < numsSize2; ++i)
	{
		v_common.push_back(nums2[i]);
	}

	if (v_common.size() % 2 != 0)
	{
		int buf = v_common.size() / 2;
		result = v_common.at(buf);
		return result;
	}
	else
	{
		int buf = v_common.size() / 2;
		result = ((double)v_common.at(buf) + (double)v_common.at(buf - 1)) / 2.0;
		return result;
	}
}

int singleNumber(const std::vector<int>& nums)
{
	std::unordered_map<int, short> m_countNumber;

	for (const auto& elem : nums)
	{
		m_countNumber[elem]++;
	}

	for (const auto& [f, s] : m_countNumber)
	{
		if (s == 1)
		{
			return f;
		}
	}

	return -1;
}

bool wordBreak(std::string s, std::vector<std::string>& wordDict)
{
	// звучит как n^2, берём счётчик и проверяем со словом в цикле, если буквы нет, обнуляем
	// иначе переходим к некст слову в векторе

	size_t countWord(0), countLetters(0);
	size_t j(0), buf(0);

	while (countLetters <= s.length() - 1)
	{
		if (j == wordDict[countWord].size())
		{
			countWord++;
			j = 0;
		}

		if (countWord > wordDict.size() - 1)
			countWord = 0;

		if (s[countLetters] != wordDict[countWord][j])
		{
			for (const auto& elem : wordDict)
			{
				++buf;
				if (s[countLetters] == elem[0])
				{
					break;
				}
			}

			countWord = buf;
		}
		else
		{
			++countLetters;
			++j;
		}
	}

	return true;
}

std::vector<std::vector<int>> threeSum(std::vector<int>& nums)
{
	std::vector<std::vector<int>> matr;
	int size = nums.size();
	std::sort(nums.begin(), nums.end());

	for (size_t i = 0; i < size - 2; i++)
	{
		if (i > 0 && nums[i] == nums[i - 1])
			continue;

		int left = i + 1;
		int right = size - 1;

		while (left < right)
		{
			int sum = nums[i] + nums[right] + nums[left];

			if (sum == 0)
			{
				matr.push_back({ nums[i], nums[left], nums[right] });
				while (left < right && nums[left] == nums[left + 1]) left++;
				while (left < right && nums[right] == nums[right - 1]) right--;

				left++;
				right--;
			}
			else if (sum < 0)
				left++;
			else
				right--;
		}
	}

	return matr;
}

bool isAnagram(std::string s, std::string t)
{
	std::unordered_map<char, bool> m_letter;

	for (size_t i = 0; i < s.size(); ++i)
	{
		m_letter.insert(std::pair<char, bool>(s[i], false));
	}

	for (size_t i = 0; i < t.size(); ++i)
	{
		if (m_letter.find(t[i]) != m_letter.end())
		{
			m_letter[t[i]] = true;
		}
		else
		{
			m_letter.insert(std::pair<char, bool>(t[i], false));
		}
	}

	for (const auto& [f, s] : m_letter)
	{
		if (s == false)
		{
			return false;
		}
	}

	return true;
}

bool repeatedSubstringPattern(const std::string s)
{
	if (s.empty()) return false;

	std::string substr;
	size_t count(0);
	for (size_t i = 0; i < s.size() / 2; ++i)
	{
		substr.push_back(s[i]);

		for (size_t j = 0, k = 0; j < s.size(); ++j)
		{
			if (k == substr.size()) k = 0;

			if (substr[k] == s[j])
			{
				++k;
				++count;
			}
			else
			{
				--count;
				break;
			}
		}

		if (count == s.size() && count % substr.size() == 0)
		{
			return true;
		}
		else
		{
			count = 0;
		}
	}

	return false;
}

std::string mergeAlternately(const std::string word1, const std::string word2)
{
	std::string mergeStr;
	short sizeStr = std::min(word1.size(), word2.size());

	for (size_t i = 0; i < sizeStr; ++i)
	{
		mergeStr.push_back(word1[i]);
		mergeStr.push_back(word2[i]);
	}

	mergeStr.append(word1, sizeStr);
	mergeStr.append(word2, sizeStr);

	return mergeStr;
}

bool canPlaceFlowers(std::vector<int>& flowerbed, int n)
{
	if (n == 0) return true;
	
	size_t size = flowerbed.size() - 1;

	if (flowerbed[0] == 0 && n == 1 && size == 0)
	{
		return true;
	}

	if (flowerbed[0] == 0 && flowerbed[1] == 0)
	{
		flowerbed[0] = 1;
		--n;

		if (n == 0) return true;
	}
	
	if (flowerbed[size] == 0 && flowerbed[size - 1] == 0)
	{
		flowerbed[size] = 1;
		--n;

		if (n == 0) return true;
	}

	short count(0);
	for (size_t i = 1; i < size - 1; ++i)
	{
		if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
		{
			flowerbed[i] = 1;
			--n;

			if (n == 0) return true;
			++i;
		}
	}


	return false;
}

// версия 2
bool canPlaceFlowers_V2(std::vector<int>& flowerbed, int n)
{
	if (n == 0) return true;

	for (size_t i = 0; i < flowerbed.size(); ++i)
	{
		if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
			(i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
		{
			flowerbed[i] = 1;
			--n;

			if (n == 0) return true;
			++i;
		}
	}

	return false;
}
///////////////
inline bool isVowels(const char elem)
{
	return (elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u') ||
		   (elem == 'A' || elem == 'E' || elem == 'I' || elem == 'O' || elem == 'U');
}

std::string reverseVowels(std::string& s)
{
	std::string vowels;

	for (const auto& elem : s)
	{
		if (isVowels(elem))
		{
			vowels += elem;
		}
	}

	if (vowels.empty()) return s;

	for (int i = 0, j = vowels.size() - 1; i < vowels.size() || j >= 0; ++i)
	{
		if (isVowels(s[i]))
		{
			s[i] = vowels[j];
			--j;
		}
	}

	return s;
}
///////////////
std::string reverseWords(std::string s)
{
	std::string buf;
	std::string reverseStr;

	unsigned short count(0);
	for (int i = s.size() - 1; i >= 0; --i)
	{
		buf += s[i];

		if (s[i] == ' ')
		{
			++count;

			for (int j = buf.size() - 1; j >= 0; --j)
				reverseStr += buf[j];

			buf.clear();
		}
	}

	if (count == 0);
	{
		buf += ' ';
		for (int j = buf.size() - 1; j >= 0; --j)
		{
			reverseStr += buf[j];
		}
	}

	reverseStr = std::regex_replace(reverseStr, std::regex("^ +| +$|( ) +"), "$1");

	return reverseStr;
}

std::vector<int> productExceptSelf(std::vector<int>& nums)
{
	int n = nums.size();
	std::vector<int> result(n, 1);

	int left = 1;
	for (int i = 0; i < n; i++)
	{
		result[i] *= left;
		left *= nums[i];
	}

	int right = 1;
	for (int i = n - 1; i >= 0; i--)
	{
		result[i] *= right;
		right *= nums[i];
	}

	return result;
}

bool increasingTriplet(std::vector<int>& nums)
{
	if (nums.size() < 3) return false;

	int first = INT_MAX;
	int second = INT_MAX;

	for (const auto& elem : nums)
	{
		if (elem <= first)
		{
			first = elem;
		}
		else if (elem <= second)
		{
			second = elem;
		}
		else
		{
			return true;
		}
	}

	return false;
}

int compress(std::vector<char>& chars)
{
	std::string str;
	unsigned countChars = chars.size();

	int count, res(0);
	for (size_t i = 0; i < countChars - 1; ++i)
	{
		if (chars[i] != chars[i + 1])
		{
			str += chars[i];
			++res;
		}
		else
		{
			str += chars[i];
			count = 0;

			size_t j = i;
			while (chars[j] == chars[j + 1] && i < countChars - 1)
			{
				++count;
				++j;
				++i;
			}

			str += std::to_string(++count);
		}
	}

	for (const auto& elem : chars)
	{
		if (isdigit(elem)) res += (int)elem;
	}

	return res;
}

void moveZeroes(std::vector<int>& nums)
{
	int nonZeroIndex = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] != 0)
		{
			if (i != nonZeroIndex)
			{
				std::swap(nums[i], nums[nonZeroIndex]);
			}
			nonZeroIndex++;
		}
	}
}

bool isSubsequence(std::string s, std::string t)
{
	if (t.empty()) return false;

	int ind(0);

	for (const auto& elem : t)
	{
		if (ind < s.length() && elem == s[ind])
		{
			++ind;
		}
	}

	return ind == s.length();
}

int maxArea(const std::vector<int>& height)
{
	if (height.size() < 2) return 0;

	int maxArea = 0;
	int left = 0;
	int right = height.size() - 1;

	while (left < right)
	{
		int h = (height[left] < height[right]) ? height[left] : height[right];
		maxArea = std::max(maxArea, h * (right - left));

		if (height[left] < height[right])
			left++;
		else
			right--;
	}

	return maxArea;
}

int maxOperations(std::vector<int>& nums, int k)
{
	unsigned short count(0);
	unsigned carr(0), supp(1);

	while (true)
	{
		if (nums[carr] + nums[supp] == k)
		{
			++count;

			nums.erase(nums.begin() + carr);
			nums.erase(nums.begin() + supp - 1);

			if (nums.size() <= 1)
			{
				return count;
			}
			else supp = carr + 1;
		}
		else if (supp >= nums.size() - 1)
		{
			++carr;

			if (carr == supp && carr < nums.size() + 1) // доделать вопрос касаемо out-of-range c переменными
			{
				++carr;
			}
			else return count;
		}
		else ++supp;
	}

	return count;
}

int search(std::vector<int>& nums, int target)
{
	int mid;
	int left(0);
	int right = nums.size() - 1;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] > target)
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}

	--mid;

	return -1;
}

int majorityElement(const std::vector<int>& nums)
{
	std::unordered_map<int, int> m_count;
	int res = nums.size() / 2;

	for (const auto& elem : nums)
	{
		m_count[elem]++;

		if (m_count[elem] > res)
		{
			return elem;
		}
	}

	return 0;
}

int maxProduct(std::vector<int>& nums)
{
	int max = nums[0];
	int min = nums[0];
	int res = nums[0];

	for (size_t i = 1; i < nums.size(); ++i)
	{
		if (nums[i] < 0)
		{
			std::swap(max, min);
		}

		max = std::max(nums[i], max * nums[i]);
		min = std::min(nums[i], min * nums[i]);

		res = std::max(res, max);
	}

	return res;
}

std::vector<std::vector<int>> generate(int numRows)
{
	std::vector<std::vector<int>> matr;

	for (size_t i = 0; i < numRows; ++i)
	{
		matr.push_back(std::vector<int>(i + 1, 1));

		for (size_t j = 1; j < i; ++j)
		{
			matr[i][j] = matr[i - 1][j - 1] + matr[i - 1][j];
		}
	}

	return matr;
}

std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval)
{
	std::vector<std::vector<int>> v_res;

	size_t i(0);
	while (i < intervals.size() && newInterval[0] > intervals[i][1])
	{
		v_res.push_back(intervals[i]);
		++i;
	}

	while (i < intervals.size() && newInterval[1] >= intervals[i][0])
	{
		newInterval[0] = std::min(newInterval[0], intervals[i][0]);
		newInterval[1] = std::max(newInterval[1], intervals[i][1]);
		++i;
	}

	v_res.push_back(newInterval);

	while (i < intervals.size())
	{
		v_res.push_back(intervals[i]);
		++i;
	}

	return v_res;
}

int firstUniqChar(const std::string& s)
{
	std::unordered_map<char, int> m_letter;
	std::vector<char> v_unique;

	for (const auto& elem : s)
	{
		m_letter[elem]++;

		if (m_letter[elem] == 1)
		{
			v_unique.push_back(elem);
		}
	}

	for (const auto& elem : v_unique)
	{
		if (m_letter[elem] == 1)
		{
			return s.find(elem);
		}
	}

	return -1;
}

bool canConstruct(const std::string ransomNote, std::string magazine)
{
	int count(0), size = ransomNote.size();

	for (size_t i = 0; i < size; ++i)
	{
		if (count != i)
		{
			return false;
		}

		if (count == size)
		{
			return true;
		}

		for (size_t j = 0; j < magazine.size(); ++j)
		{
			if (magazine[j] == ransomNote[i])
			{
				magazine.erase(j, 1);
				++count;
				break;
			}
		}
	}

	return (count == size);
}

int missingNumber(std::vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());

	int count(0);
	for (size_t i = 0; i < nums.size(); ++i)
	{
		if (nums[i] != count)
		{
			return count;
		}

		++count;
	}

	return nums.back() + 1;
}

bool containsDuplicate(std::vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());

	int prev = nums[0];
	for (size_t i = 1; i < nums.size(); ++i)
	{
		if (nums[i] != prev)
		{
			prev = nums[i];
		}
		else
		{
			return true;
		}
	}

	return false;
}

bool divideArray(std::vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());

	for (size_t i = 0; i < nums.size() - 1; i += 2)
	{
		if (nums[i] != nums[i + 1])
		{
			return false;
		}
	}

	return true;
}

bool containsNearbyDuplicate(std::vector<int>& nums, int k)
{
	int count(0);

	for (size_t i = 0; i < nums.size() - 1; ++i)
	{
		for (size_t j = i + 1; j < nums.size(); ++j)
		{
			count = i - j;
			count = std::abs(count);
			if (nums[i] == nums[j])
			{
				return true;
			}
			else if (count <= k)
			{
				return false;
			}
		}
	}

	return true;
}

std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2)
{
	std::vector<int> v_res;
	int i(0), j(0);

	std::sort(nums1.begin(), nums1.end());
	std::sort(nums2.begin(), nums2.end());

	while (i < nums1.size() && j < nums2.size())
	{
		if (nums1[i] < nums2[j])
		{
			++i;
		}
		else if (nums1[i] > nums2[j])
		{
			++j;
		}
		else
		{
			v_res.push_back(nums1[i]);
			++i;
			++j;
		}
	}

	return v_res;
}

std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2)
{
	std::unordered_set<int> s_vec(nums1.begin(), nums1.end());
	std::vector<int> v_res;

	for (const auto& elem : nums2)
	{
		if (s_vec.count(elem))
		{
			v_res.push_back(elem);
			s_vec.erase(elem);
		}
	}

	return v_res;
}

std::vector<int> countBits(const int& n)
{
	std::vector<int> v_res(n + 1, 0);

	for (size_t i = 1; i <= n; ++i)
	{
		v_res[i] = v_res[i / 2] + (i % 2);
	}

	return v_res;
}

bool isBadVersion(int n)
{
	return (n >= 4);
}

int firstBadVersion(const int& n)
{
	int left = 1;
	int right = n;

	while (left < right)
	{
		int mid = left + (right - left) / 2;

		if (isBadVersion(mid))
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}

	return left;
}

int addDigits(int num)
{
	int digit, res(0);
	std::string str = std::to_string(num);

	for (const auto& elem : str)
	{
		digit = (int)elem;
		res += digit;
	}

	return res;
}


void yandex_1_1(int p, int v, int q, int m)
{
	int res(0), min, max;

	min = std::min(p, v);
	max = std::max(q, m);

	if (min == 0 || max == 0)
	{
		++res;
	}

	int num1 = min + v;
	int num2 = max - m;

	if (num1 >= num2)
	{
		res += 2 * (max - min);
	}
	else
	{
		res += v * 2;
		res += m * 2;
	}


	std::cout << res;
}

/*
									   0(1)          7(2)
-12 -11 -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9 10 11 12
												 5(2)			 12(1)

	0 < 7
	12 > 5
	min = 0; max = 12 

	if(min == 0 || max == 0)
		--res;

	num1 = min + v;
	num2 = max - m;

	if(num1 >= num2)
	{
		res += 2 * (max - min);
	}
	else
	{
		res += v * 2;
		res += m * 2;
	}

*/

std::vector<int> findDisappearedNumbers(std::vector<int>& nums)
{
	std::unordered_map<int, bool> m_nums;
	std::vector<int> v_res;

	std::sort(nums.begin(), nums.end());

	int count = 1;
	for (int i = 0; i < nums.size(); ++i)
	{
		m_nums[count++];
	}

	for (const auto& elem : nums)
	{
		if (m_nums.find(elem) != m_nums.end())
		{
			m_nums[elem] = true;
		}
	}


	return v_res;
}

int firstMissingPositive(std::vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());

	int num = 1;

	for (int elem : nums)
	{
		if (elem > 0)
		{
			if (elem == num)
			{
				++num;
			}
			else if (elem > num)
			{
				return num;
			}
		}
	}

	return num;
}

bool detectCapitalUse(const std::string word)
{
	int count(0);
	bool firstUpLetter = isupper(word[0]) ? 1 : 0;

	for (const auto& elem : word)
	{
		if (elem >= 'A' && elem <= 'Z')
		{
			++count;
		}
	}

	if (count == 0)
	{
		return true;
	}
	else if (word.size() == count)
	{
		return true;
	}
	if (count == 1 && firstUpLetter)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int findLUSlength(std::string a, std::string b)
{
	if (a != b)
	{
		return std::max(a.size(), b.size());
	}
	return -1;
}

bool checkIpv4(const std::string& str)
{
	std::vector<std::string> tokens;
	std::stringstream ch(str);
	std::string intermed;

	while (std::getline(ch, intermed, '.'))
	{
		tokens.push_back(intermed);
	}

	if (tokens.size() != 4)
	{
		return false;
	}

	for (int i = 0; i < tokens.size(); ++i)
	{
		int num(0);

		if (tokens[i] == "0")
		{
			continue;
		}

		if (tokens[i].size() == 0)
		{
			return false;
		}

		for (int j = 0; j < tokens[i].size(); ++j)
		{
			if (tokens[i][j] > '9' || tokens[i][j] < '0')
			{
				return false;
			}

			num *= 10;
			num += tokens[i][j] - '0';

			if (num == 0)
			{
				return false;
			}
		}

		if (num > 255 || num < 0)
		{
			return false;
		}
	}

	return true;
}

bool checkHex(const std::string& str)
{
	int len = str.length();

	for (int i = 0; i < len; i++) {
		char ch = str[i];

		if ((ch < '0' || ch > '9') && (ch < 'A' || ch > 'F')
			&& (ch < 'a' || ch > 'f'))
		{
			return false;
		}
	}

	return true;
}

bool checkIpv6(const std::string& str)
{
	std::vector<std::string> tokens;
	std::stringstream ch(str);
	std::string intermed;

	while (std::getline(ch, intermed, ':'))
	{
		tokens.push_back(intermed);
	}

	if (tokens.size() != 8)
	{
		return false;
	}

	for (int i = 0; i < tokens.size(); ++i)
	{
		int len = tokens[i].size();

		if (!checkHex(tokens[i]) || len > 4 || len < 1)
		{
			return false;
		}
	}

	return true;
}

std::string validIPAddress(const std::string& queryIP)
{
	int pointCount(0), colonCount(0), num(0);
	for (const auto& elem : queryIP)
	{
		if (num > 6)
		{
			return "Neither";
		}

		if (elem == '.')
		{
			++pointCount;
			num = 0;
		}
		else if (elem == ':')
		{
			++colonCount;
			num = 0;
		}

		++num;
	}

	if (pointCount == 3)
	{
		if (checkIpv4(queryIP))
		{
			return "IPv4";
		}
	}
	else if (colonCount == 7)
	{
		if (checkIpv6(queryIP))
		{
			return "IPv6";
		}
	}

	return "Neither";
}

int findComplement(const int& num)
{
	std::string str;
	std::bitset<32> bits(num);

	str = bits.to_string();

	int count(0);
	for (auto& elem : str)
	{
		if (elem == '1')
		{
			break;
		}

		++count;
	}

	for (int i = count; i < 32; ++i)
	{
		if (str[i] == '1')
		{
			str[i] = '0';
		}
		else
		{
			str[i] = '1';
		}
	}

	//count = std::stoi(str, 0, 2);

	return std::stoi(str, 0, 2);
}

std::string licenseKeyFormatting(const std::string s, int k)
{
	std::string result;

	for (const auto& elem : s)
	{
		if (elem != '-')
		{
			result.push_back(std::toupper(elem));
		}
	}

	int count(1);
	for (int i = result.size() - 1; i > 0; --i)
	{
		if (count == k)
		{
			result.insert(i, "-");
			count = 1;
		}
		else
		{
			++count;
		}
	}

	return (result[0] != '-') ? result : "";
}

int minNumber(const std::vector<int>& nums1, const std::vector<int>& nums2)
{
	bool identical = false;
	int buf = SHRT_MAX;

	for (const auto& f : nums1)
	{
		for (const auto& s : nums2)
		{
			if (f == s && buf > f)
			{
				buf = f;
				identical = true;
			}
		}
	}

	if (identical)
	{
		return buf;
	}

	std::vector<int> v_res = { };
	int minNum = SHRT_MAX;
	for (const auto& elem : nums1)
	{
		if (minNum > elem)
		{
			minNum = elem;
		}
	}
	v_res.push_back(minNum);
	
	minNum = SHRT_MAX;
	for (const auto& elem : nums2)
	{
		if (minNum > elem && elem != v_res[0])
		{
			minNum = elem;
		}
	}
	v_res.push_back(minNum);

	int result;
	if (v_res[0] > v_res[1])
	{
		result = v_res[1] * 10 + v_res[0];
	}
	else
	{
		result = v_res[0] * 10 + v_res[1];
	}

	return result;
}


std::string interpret(std::string command)
{
	std::string s_res;
	bool letterO = false;

	for (int i = 0; i < command.size(); ++i)
	{
		if (letterO)
		{
			s_res += 'o';
			letterO = false;
		}

		if (command[i] == '(')
		{
			if (command[i + 1] == ')')
			{
				letterO = true;
			}
		}
		else if(command[i] != ')')
		{
			s_res += command[i];
		}
	}

	return s_res;
}

std::vector<int> twoSumV2(const std::vector<int>& numbers, int target)
{
	std::vector<int> v_res;

	if (numbers[0] + numbers[1] == target)
	{
		v_res.push_back(1);
		v_res.push_back(2);

		return v_res;
	}

	int a(0), b(1);
	while (numbers[a] == numbers[b])
	{
		++a;
		++b;
	}

	for (int i = a; i < numbers.size() - 1; ++i)
	{
		for (int j = i + 1; j < numbers.size(); ++j)
		{
			if (numbers[i] + numbers[j] == target)
			{
				v_res.push_back(i + 1);
				v_res.push_back(j + 1);

				return v_res;
			}
		}
	}

	return v_res;
}

// O(n)
int minSubArrayLen(int target, const std::vector<int>& nums)
{
	int l(0), sum(0);
	int res = INT_MAX;

	for (int r = 0; r < nums.size(); ++r)
	{
		sum += nums[r];

		while (sum >= target)
		{
			res = std::min(res, r - l + 1);
			sum -= nums[l];
			++l;
		}
	}

	return (res == INT_MAX) ? 0 : res;
}

// O(n log(n))
int minSubArrayLenV2(int target, const std::vector<int>& nums)
{
	int ind(0), count(1), res(INT_MAX - 1);
	int buf = nums[0];

	for (int i = 1; i < nums.size(); ++i)
	{
		if (buf >= target)
		{
			buf -= nums[ind];
			++ind;

			if (buf >= target)
			{
				if (res > count)
				{
					res = count - 1;
					continue;
				}
			}

			if (res > count)
			{
				res = count;
				continue;
			}

			continue;
		}

		buf += nums[i];
		++count;
	}

	return res;
}

std::vector<int> findDuplicates(std::vector<int>& nums)
{
	std::ios_base::sync_with_stdio(false); cin.tie(NULL);

	int size = nums.size();
	for (int i = 0; i < size; ++i)
	{
		int a = (nums[i] - 1) % size;
		nums[a] += size;
	}

	std::vector<int> v_res;
	for (int i = 0; i < size; ++i)
	{
		if ((nums[i] - 1) / size > 1)
		{
			v_res.push_back(i + 1);
		}
	}

	return v_res;
}

int countPrimes(int n)
{
	if (n <= 2) return 0;

	std::vector<bool> prime(n, true);

	for (int i = 2; i * i < n; ++i)
	{
		if (prime[i])
		{
			for (int j = i * i; j < n; j += i)
			{
				prime[j] = false;
			}
		}
	}

	int res = 0;
	for (int i = 2; i < n; ++i)
	{
		if (prime[i])
		{
			++res;
		}
	}

	return res;
}

