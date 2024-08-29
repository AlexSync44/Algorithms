#include "Polinoms.h"

void polinomInput(std::vector<LL>& vec)
{
	std::cout << "¬ведите кол-во полиномов: ";
	int size;
	std::cin >> size;

	int num;
	while (std::cin >> num)
	{
		vec.push_back(num);
	}

	polinomCalculate(vec);
}

void polinomOutput(const std::vector<LL>& vec)
{
	if (vec.empty()) return;

	for (const int& elem : vec)
	{
		std::cout << elem << ' ';
	}

	std::cout << std::endl;
}

void polinomCalculate(std::vector<LL>& vec)
{
	if (vec.empty()) return;

	int count(1);
	for (LL& elem : vec)
	{
		elem = elem * std::pow(elem, count++);
	}
}

inline LL polinomOneNumberCalculate(const LL num, const int ind)
{
	return (num * std::pow(num, ind));
}

std::vector<LL> polinomSum(const std::vector<LL>& vec1, const std::vector<LL>& vec2)
{
	std::vector<LL> v_res;
	if (vec1.empty() || vec2.empty())
	{
		return v_res;
	}

	int pointer1 = vec1.size();
	int pointer2 = vec2.size();
	int countPtr(0);

	int count(1);
	long long res(0);
	while(countPtr != pointer1 && countPtr != pointer2)
	{
		res = vec1[countPtr] * std::pow(vec1[countPtr], count);
		res += vec2[countPtr] * std::pow(vec2[countPtr++], count++);
		
		v_res.push_back(res);
	}

	for (size_t i = countPtr; i < pointer1; ++i)
	{
		v_res.push_back(vec1[i]);
	}
	
	for (size_t i = countPtr; i < pointer2; ++i)
	{
		v_res.push_back(vec2[i]);
	}

	return v_res;
}

std::vector<LL> polinomSub(const std::vector<LL>& vec1, const std::vector<LL>& vec2)
{
	std::vector<LL> v_res;
	if (vec1.empty() || vec2.empty())
	{
		return v_res;
	}

	int pointer1 = vec1.size();
	int pointer2 = vec2.size();
	int countPtr(0);

	int count(1);
	long long res(0);
	while (countPtr != pointer1 && countPtr != pointer2)
	{
		res = vec1[countPtr] * std::pow(vec1[countPtr], count);
		res -= vec2[countPtr] * std::pow(vec2[countPtr++], count++);

		v_res.push_back(res);
	}

	for (size_t i = countPtr; i < pointer1; ++i)
	{
		v_res.push_back(vec1[i]);
	}

	for (size_t i = countPtr; i < pointer2; ++i)
	{
		v_res.push_back(vec2[i]);
	}

	return v_res;
}