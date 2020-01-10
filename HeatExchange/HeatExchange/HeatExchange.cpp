// HeatExchange.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "THERCAL.h"
#include "fluid.h"

#define re register
#define IOS std::ios::sync_with_stdio(false)
#define met(f,val) memset((f),val,sizeof(f))
#define ll long long
#define ull unsigned long long
#define M_PI acos(-1)

using namespace std;

int main()
{
	//Input parameters!
	PFluid ColdWater_Inlet, ColdWater_Outlet, HotWater_Inlet, HotWater_Outlet;
	cout << "Please enter the cooling water inlet temperature:" << "  ";
	cin >> ColdWater_Inlet.Temperature;
	cout << "Please enter the cooling water outlet temperature:" << "  ";
	cin >> ColdWater_Outlet.Temperature;
	cout << "Please enter the cooling water working pressure:" << "  ";
	cin >> ColdWater_Inlet.Pressure;
	ColdWater_Outlet.Pressure = ColdWater_Inlet.Pressure;
	cout << "Please enter the hot water inlet temperature:" << "  ";
	cin >> HotWater_Inlet.Temperature;
	cout << "Please enter the hot water outlet temperature:" << "  ";
	cin >> HotWater_Outlet.Temperature;
	cout << "Please enter the hot water working pressure:" << "  ";
	cin >> HotWater_Inlet.Pressure;
	HotWater_Outlet.Pressure = HotWater_Inlet.Pressure;
	cout << "Please enter hot water flow:" << "  ";
	cin >> HotWater_Inlet.Flow;
	HotWater_Outlet.Flow = HotWater_Inlet.Flow;

	cout << endl << endl;

	//REFPROP
	cout << "The qualitative temperature of the cooling water is:  ";
	cout << Calculate_Qualitative_Temperature(ColdWater_Inlet.Temperature, ColdWater_Outlet.Temperature) << endl;
	PFluid ColdWater_Qualitative;
	ColdWater_Qualitative.Temperature = Calculate_Qualitative_Temperature(ColdWater_Inlet.Temperature, ColdWater_Outlet.Temperature);
	ColdWater_Qualitative.Pressure = ColdWater_Inlet.Pressure;
	cout << "The density of the cooling water is:   ";
	cout << Calculation_Density(ColdWater_Qualitative.Temperature, ColdWater_Qualitative.Pressure) << endl;
	cout << "The specific heat of the cooling water is:  ";
	cout << Calculate_Specific_Heat(ColdWater_Qualitative.Temperature, ColdWater_Qualitative.Pressure) << endl;
	cout << "The thermal conductivity of the cooling water is:  ";
	cout << Calculate_Thermal_Conductivity(ColdWater_Qualitative.Temperature, ColdWater_Qualitative.Pressure) << endl;
	cout << "The viscosity of the cooling water is:  ";
	cout << Calculate_Viscosity(ColdWater_Qualitative.Temperature, ColdWater_Qualitative.Pressure) << endl;
	cout << "The Prandtl number of the cooling water is:  ";
	cout << Calculate_PrandtlNum(ColdWater_Qualitative.Temperature, ColdWater_Qualitative.Pressure) << endl;

	cout << "The qualitative temperature of hot water is:  ";
	cout << Calculate_Qualitative_Temperature(HotWater_Inlet.Temperature, HotWater_Outlet.Temperature) << endl;
	PFluid HotWater_Qualitative;
	HotWater_Qualitative.Temperature = Calculate_Qualitative_Temperature(HotWater_Inlet.Temperature, HotWater_Outlet.Temperature);
	HotWater_Qualitative.Pressure = HotWater_Inlet.Pressure;

	return 0;
}

