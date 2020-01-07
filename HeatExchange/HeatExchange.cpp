// HeatExchange.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "THERCAL.h"
#include "fluid.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>

#define re register
#define IOS std::ios::sync_with_stdio(false)
#define met(f,val) memset((f),val,sizeof(f))
#define ll long long
#define ull unsigned long long
#define M_PI acos(-1)

using namespace std;

int main()
{
	cout << "Hello World!\n" << M_PI;
	double a = Get_HeatExchanger_Efficiency();
	cout << a;
	return 0;
}

