#pragma once
#ifndef CLASS_THERCAL_H_
#define CALSS_THERCAL_H_

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

#define M_PI acos(-1)

double Get_HeatExchanger_Efficiency() {
	double HeatExchanger_Efficiency = 0.8;
	return HeatExchanger_Efficiency;//find paper!
}

double Get_Heat_Transfer(double Flow, double Specific_Heat, double HotWater_Outlet_Temperature, double ColdWater_Outlet_Temperature, double HeatExchanger_Efficiency) {
	return Flow * Specific_Heat*(HotWater_Outlet_Temperature - ColdWater_Outlet_Temperature)*HeatExchanger_Efficiency * 1000 / 3600;
}

double Get_ColdWater_Flow(double Heat_Transfer, double Specific_Heat, double ColdWater_Inlet_Temperature, double ColdWater_Outlet_Temperature) {
	return 3.6*Heat_Transfer / (Specific_Heat*(ColdWater_Outlet_Temperature - ColdWater_Inlet_Temperature));
}

double Get_Countercurrent_Mean_Temperature_Difference(double Large_Temperature_Difference, double Small_Temperature_Difference) {
	return (Large_Temperature_Difference - Small_Temperature_Difference) / log(Large_Temperature_Difference / Small_Temperature_Difference);
}

double Get_Parameter_P(double ColdWater_Outlet_Temperature, double ColdWater_Inlet_Temperature, double HotWater_Inlet_Temperature) {
	return (ColdWater_Outlet_Temperature - ColdWater_Inlet_Temperature) / (HotWater_Inlet_Temperature - ColdWater_Inlet_Temperature);
}

double Get_Parameter_R(double HotWater_Inlet_Temperature, double HotWater_Outlet_Temperature, double ColdWater_Outlet_Temperature, double ColdWater_Inlet_Temperature) {
	return (HotWater_Inlet_Temperature - HotWater_Outlet_Temperature) / (ColdWater_Outlet_Temperature - ColdWater_Inlet_Temperature);
}

double Get_Temperature_Difference_Correction_Coefficient() {
	double Temperature_Difference_Correction_Coefficient = 0.98;
	return Temperature_Difference_Correction_Coefficient;//find paper!
}

double Get_Effective_Mean_Temperature_Difference(double Temperature_Difference_Correction_Coefficient, double Countercurrent_Mean_Temperature_Difference) {
	return Temperature_Difference_Correction_Coefficient * Countercurrent_Mean_Temperature_Difference;
}

double Get_Guass_HeatTransfer_Coefficient() {
	double Heat_Transfer_Coefficient = 700;//find paper!
	return Heat_Transfer_Coefficient;
}

double Get_Heat_Transfer_Area(double Heat_Transfer, double Heat_Transfer_Coefficient, double Effective_Mean_Temperature_Difference) {
	return Heat_Transfer / (Heat_Transfer_Coefficient*Effective_Mean_Temperature_Difference);
}

double Get_Tube_Outer_Diameter() {
	double Tube_Outer_Diameter = 25;//which one from 20*2.5/19*2/16*1.5mm(Tube_Outer_Diameter*Wall_Thickness)? -->follow calculate result!
	return Tube_Outer_Diameter;
}

double Get_Tube_Inner_Diameter(double Tube_Outer_Diameter,double Wall_Thickness) {
	return Tube_Outer_Diameter - (2 * Wall_Thickness);
}

double Get_Tube_Length() {
	double Tube_Length = 2;//which one from 2/2.5/3/4.5/6m? -->follow calculate result!   6<=l/D<=10
	return Tube_Length;
}

long Get_Tube_TotalNum(double Heat_Transfer_Area,double Tube_Outer_Diameter,double Tube_Length) {
	return (long)(Heat_Transfer_Area / (M_PI*Tube_Outer_Diameter*Tube_Length));
}

double Get_TubeSide_CrossSection(long Tube_TotalNum,double Tube_Inner_Diameter) {
	return (Tube_TotalNum / 2)*(M_PI / 4)*pow(Tube_Inner_Diameter, 2);
}

double Get_TubeSide_Flow_Rate(double ColdWater_Flow, double ColdWater_Density, double CrossSection) {
	return ColdWater_Flow / (ColdWater_Density*CrossSection * 3600);
}

double Get_TubeSide_ReNum(double ColdWater_Density, double TubeSide_Flow_Rate, double Tube_Inner_Diameter,double ColdWater_Viscosity) {
	return (ColdWater_Density*TubeSide_Flow_Rate*Tube_Inner_Diameter) / ColdWater_Viscosity;
}

double Get_TubeSide_NuNum(double ReNum, double PrNum) {
	return 0.023*pow(ReNum, 0.8)*pow(PrNum, 0.4);
}

double Get_TubeSide_HeatTransfer_Coefficient(double NuNum, double Thermal_Conductivity, double Tube_Inner_Diameter) {
	return (NuNum*Thermal_Conductivity) / Tube_Inner_Diameter;
}

//=======================================================================================================

string Get_Tube_Arrangement() {
	string Tube_Arrangement = "Regular triangle";
	return Tube_Arrangement;
}

double Get_Tube_Spacing(double Tube_Outer_Diameter) {
	long Num = (long)Tube_Outer_Diameter;
	switch (Num)
	{
	case 25:return 32; break;
	case 19:return 25; break;
	case 16:return 22; break;
	default:return 1.5 * Tube_Outer_Diameter;
		break;
	}
}

long Get_CenterRow_TubeNum(long Tube_TotalNum) {
	return (long)(1.1*sqrt(Tube_TotalNum));
}

double Get_Outer_Tube_Spacing(double Tube_Outer_Diameter) {
	return 2 * Tube_Outer_Diameter;
}

double Get_Shell_Inner_Diameter(double Tube_Spacing, long CenterRow_TubeNum, double Tube_Outer_Diameter) {
	return Tube_Spacing * (CenterRow_TubeNum - 1) + 5 * Tube_Outer_Diameter;
}

double Get_Length_Diameter_Ratio(double Tube_Length, double Shell_Inner_Diameter) {
	return Tube_Length / Shell_Inner_Diameter;//the better between 6 and 10!
}

double Get_BowShaped_Height(double Shell_Inner_Diameter) {
	return 0.2*Shell_Inner_Diameter;
}

double Get_BowShaped_Spacing(double Shell_Inner_Diameter) {
	return Shell_Inner_Diameter / 3;
}

long Get_BowShaped_Number(double Tube_Length, double BowShaped_Spacing) {
	return (long)(Tube_Length - BowShaped_Spacing) - 1;
}

//=======================================================================================================

double Get_Shell_CrossSection(double BowShaped_Spacing, double Shell_Inner_Diameter, double Tube_Outer_Diameter, double Tube_Spacing) {
	return BowShaped_Spacing * Shell_Inner_Diameter*(1 - Tube_Outer_Diameter / Tube_Spacing);
}

double Get_Shell_Flow_Rate(double HotWater_Flow, double HotWater_Density, double Shell_CrossSection) {
	return (HotWater_Flow / 3600) / (HotWater_Density*Shell_CrossSection);
}

double Get_Shell_Mass_Flow_Rate(double HotWater_Density, double Shell_Flow_Rate) {
	return HotWater_Density * Shell_Flow_Rate;
}

double Get_Shell_Equivalent_Diameter(double Tube_Spacing, double Tube_Outer_Diameter) {
	return (4 * (sqrt(3) / 4)*pow(Tube_Spacing, 2) - M_PI / 8 * pow(Tube_Outer_Diameter, 2)) / (0.5*M_PI*Tube_Outer_Diameter);
}

double Get_Shell_ReNum(double Shell_Mass_Flow_Rate, double Shell_Equivalent_Diameter, double HotWater_Viscosity) {
	return Shell_Mass_Flow_Rate * Shell_Equivalent_Diameter / HotWater_Viscosity;
}

double Get_TubeSpacing_Ratio(string Tube_Arrangement = "Regular triangle") {
	if (Tube_Arrangement == "Regular triangle")return 2 / sqrt(3);
}

double Get_Shell_NuNum(double Shell_ReNum, double ShellSide_PrNum, double ShellWall_PrNum, double TubeSpacing_Ratio = 1.0) {
	if (Shell_ReNum < 1e2)return 1.04*pow(Shell_ReNum, 0.4)*pow(ShellSide_PrNum, 0.36)*pow(ShellSide_PrNum / ShellWall_PrNum, 0.25);
	if (Shell_ReNum > 1e2&&Shell_ReNum <= 1e3)return 0.71*pow(Shell_ReNum, 0.5)*pow(ShellSide_PrNum, 0.36)*pow(ShellSide_PrNum / ShellWall_PrNum, 0.25);
	if (Shell_ReNum > 1e3&&Shell_ReNum <= 2 * 1e5)return 0.35*pow(TubeSpacing_Ratio,0.2)*pow(Shell_ReNum, 0.6)*pow(ShellSide_PrNum, 0.36)*pow(ShellSide_PrNum / ShellWall_PrNum, 0.25);
	if (Shell_ReNum > 2 * 1e5)return 0.031*pow(TubeSpacing_Ratio,0.2)*pow(Shell_ReNum, 0.8)*pow(ShellSide_PrNum, 0.36)*pow(ShellSide_PrNum / ShellWall_PrNum, 0.25);
}

double Get_PipeRow_Correction_Factor(long PipeRow_Number, string Arrangement = "Fork row") {
	if(Arrangement=="In order")
		switch (PipeRow_Number)
		{
		case 1:return 0.7; break;
		case 2:return 0.8; break;
		case 3:return 0.86; break;
		case 4:return 0.9; break;
		case 5:return 0.93; break;
		case 7:return 0.96; break;
		case 11:return 0.98; break;
		case 13:return 0.99; break;
		default:return 1;
			break;
		}
	if (Arrangement == "Fork row")
		switch (PipeRow_Number)
		{
		case 1:return 0.64; break;
		case 2:return 0.76; break;
		case 3:return 0.84; break;
		case 4:return 0.89; break;
		case 5:return 0.93; break;
		case 7:return 0.96; break;
		case 11:return 0.98; break;
		case 13:return 0.99; break;
		default:return 1;
			break;
		}
}

double Get_ShellSide_HeatTransfer_Coefficient(double PipeRow_Correction_Factor, double Shell_NuNum, double HotWater_Thermal_Conductivity, double Tube_Outer_Diameter) {
	return PipeRow_Correction_Factor * Shell_NuNum * HotWater_Thermal_Conductivity / Tube_Outer_Diameter;
}

double Get_ColdWaterSide_DirtResistance(string Fluid_Type = "Tap Water") {
	if (Fluid_Type == "Tap Water")return 17.2*1e-5; else return 17.2*1e-5;
}

double Get_HotWaterSide_DirtResistance(string Fluid_Type = "Tap Water") {
	if (Fluid_Type == "Tap Water")return 17.2*1e-5; else return 17.2*1e-5;
}

double Get_TubeWall_Thermal_Resistance() {
	return 0;
}

double Get_Total_HeatTransfer_Resistance(double ShellSide_HeatTransfer_Coefficient, double HotWaterSide_DirtResistance, double ColdWaterSide_DirtResistance, double Tube_Outer_Diameter, double Tube_Inner_Diameter, double TubeSide_HeatTransfer_Coefficient) {
	return 1 / ShellSide_HeatTransfer_Coefficient + HotWaterSide_DirtResistance + ColdWaterSide_DirtResistance * (Tube_Outer_Diameter / Tube_Inner_Diameter) + 1 / TubeSide_HeatTransfer_Coefficient * (Tube_Outer_Diameter / Tube_Inner_Diameter);
}

double Get_HeatTransfer_Coefficient(double Total_HeatTransfer_Resistance) {
	return 1 / Total_HeatTransfer_Resistance;
}

double Get_HeatTransfer_Coefficient_Ratio(double HeatTransfer_Coefficient, double Guass_HeatTransfer_Coefficient) {
	return HeatTransfer_Coefficient / Guass_HeatTransfer_Coefficient;
}

//============================================================================================================

double Get_OutsideWall_HeatFlux(double Heat_Transfer, long Tube_TotalNum, double Tube_Outer_Diameter, double Tube_Length) {
	return Heat_Transfer / (Tube_TotalNum*M_PI*Tube_Outer_Diameter*Tube_Length);
}

double Get_OuterWall_Temperature(double HotWater_Qualitative_Temperature, double OutsideWall_HeatFlux, double ShellSide_HeatTransfer_Coefficient, double HotWaterSide_DirtResistance) {
	return HotWater_Qualitative_Temperature - OutsideWall_HeatFlux * (1 / ShellSide_HeatTransfer_Coefficient + HotWaterSide_DirtResistance);
}


#endif; //!CALSS_THERCAL_H_
