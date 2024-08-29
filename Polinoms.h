#pragma once
#include <iostream>
#include <vector>
#include <math.h>

typedef long long LL;

void polinomInput(std::vector<LL>& vec);
void polinomOutput(const std::vector<LL>& vec);
void polinomCalculate(std::vector<LL>& vec);
inline LL polinomOneNumberCalculate(const LL num, const int ind = 1);
std::vector<LL> polinomSum(const std::vector<LL>& vec1, const std::vector<LL>& vec2);
std::vector<LL> polinomSub(const std::vector<LL>& vec1, const std::vector<LL>& vec2);