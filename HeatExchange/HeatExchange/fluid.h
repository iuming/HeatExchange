#pragma once
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iomanip>
#include<windows.h>
#include<new>
#ifndef CLASS_FLUID_H_
#define CALSS_FLUID_H_

#define re register
#define IOS std::ios::sync_with_stdio(false)
#define met(f,val) memset((f),val,sizeof(f))
#define ll long long
#define ull unsigned long long

typedef struct PFluid {
	double Temperature, Pressure, Flow;
}Water;

class Fluid {
private:
	PFluid *HotWater_Entrance = nullptr;
	PFluid *HotWater_Export = nullptr;
	PFluid *ColdWater_Entrance = nullptr;
	PFluid *ColdWater_Export = nullptr;
};
	double Calculate_Qualitative_Temperature(double Inlet_temperature, double Output_temperature) {
		return (Inlet_temperature + Output_temperature) / 2;
	}
	double Calculation_Density(double Temperature,double Pressure) {
		return 1;//REPROP
	}
	double Calculate_Specific_Heat(double Temperature, double Pressure) {
		return 2;//REFPROP
	}
	double Calculate_Thermal_Conductivity(double Temperature, double Pressure) {
		return 3;//REFPROP
	}
	double Calculate_Viscosity(double Temperature, double Pressure) {
		return 4;//REFPROP
	}
	double Calculate_PrandtlNum(double Temperature, double Pressure) {
		return 5;//REFPROP
	}

#endif //!CALSS_FLUID_H_