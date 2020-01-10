#pragma once
#ifndef CLASS_HYDRAULIC_H_
#define CALSS_HYDRAULIC_H_

#include <iostream>
#include <cmath>
#define M_PI acos(-1)

double Get_WallTemperature_Viscosity(double OuterWall_Temperature) {
	return 6;//REFPROP
}

double Get_TubeSide_Viscosity_Correction_Factor(double ColdWater_Viscosity, double WallTemperature_Viscosity) {
	return pow(ColdWater_Viscosity / WallTemperature_Viscosity, 0.14);
}

double Get_Friction_Coefficient(double ReNum) {
	return 0.78;//Write form!
}

double Get_PipeAlong_PressureDrop(double TubeSide_Flow_Rate, double ColdWater_Density, double Tube_Length, double Tube_Inner_Diameter, double Friction_Coefficient, double TubeSide_Viscosity_Correction_Factor, long Tube_Number = 2) {
	return (pow(TubeSide_Flow_Rate, 2) / (2 * ColdWater_Density))*(Tube_Length*Tube_Number / Tube_Inner_Diameter)*(Friction_Coefficient / TubeSide_Viscosity_Correction_Factor);
}

double Get_BackBend_PressureDrop(double TubeSide_Flow_Rate, double ColdWater_Density, long Tube_Number = 2) {
	return (pow(TubeSide_Flow_Rate, 2) / (2 * ColdWater_Density)) * 4 * Tube_Number;
}

double Get_Nozzle_MassFlowRate(double Nozzle_Density, double Nozzle_FlowRate) {
	return Nozzle_Density * Nozzle_FlowRate;
}

double Get_Nozzle_PressureDrop(double Nozzle_MassFlowRate, double Nozzle_Density) {
	return (pow(Nozzle_MassFlowRate, 2) / (2 * Nozzle_Density))*1.5;
}

double Get_TubeSide_Scaling_Factor(double Tube_Outer_Diameter) {
	switch ((long)Tube_Outer_Diameter)
	{
	case 25:return 1.4; break;
	case 19:return 1.5; break;
	case 16:return 1.5; break;
	default:return 1.5;
		break;
	}
}

double Get_TubeSide_PressureDrop(double PipeAlong_PressureDrop, double BackBend_PressureDrop, double TubeSide_Scaling_Factor, double Nozzle_PressureDrop) {
	return (PipeAlong_PressureDrop + BackBend_PressureDrop)*TubeSide_Scaling_Factor + Nozzle_PressureDrop;
}

double Get_ShellSide_Equivalent_Diameter(double Inner_Diameter, double Tube_Outer_Diameter, long Tube_Number = 2) {
	return (pow(Inner_Diameter, 2) - Tube_Number * pow(Tube_Outer_Diameter, 2)) / (Inner_Diameter + Tube_Number * Tube_Outer_Diameter);
}

double Get_Shell_ReNum(double Shell_Mass_Flow_Rate, double ShellSide_Equivalent_Diameter, double HotWater_Viscosity) {
	return Shell_Mass_Flow_Rate * ShellSide_Equivalent_Diameter / HotWater_Viscosity;
}

double Get_ShellSide_Friction_Coefficient(double ReNum, double Baffle_MissingCircle_Height) {
	return 0.5;//find form!
}

double Get_Shell_Viscosity_Correction_Factor(double HotWater_Viscosity, double WallTemperature_Viscosity) {
	return pow(HotWater_Viscosity / WallTemperature_Viscosity, 0.14);
}

double Get_TubeBundle_PressureDrop(double Shell_Flow_Rate, double HotWater_Density, double Shell_Inner_Diameter, long BowShaped_Number, double ShellSide_Equivalent_Diameter, double ShellSide_Friction_Coefficient, double Shell_Viscosity_Correction_Factor) {
	return (pow(Shell_Flow_Rate, 2) / (2 * HotWater_Density))*(Shell_Inner_Diameter*(BowShaped_Number + 1) / ShellSide_Equivalent_Diameter)*(ShellSide_Friction_Coefficient / Shell_Viscosity_Correction_Factor);
}

double Get_Nozzle_Mass_FlowRate(double HotWater_Density, double Shell_Nozzle_FlowRate) {
	return HotWater_Density * Shell_Nozzle_FlowRate;
}

double Get_ShellNozzle_PressureDrop(double ShellNozzle_MassFlowRate, double ShellNozzle_Density) {
	return (pow(ShellNozzle_MassFlowRate, 2) / (2 * ShellNozzle_Density))*1.5;
}

double Get_Deflection_Coefficient() {
	return 7.5;//Determined by actual measurement. When there is no actual measurement data, take 5 ~ 10 estimates!
}

double Get_Deflector_PressureDrop(double ShellNozzle_PressureDrop, double HotWater_Density,double Deflection_Coefficient) {
	return pow(ShellNozzle_PressureDrop, 2) / (2 * HotWater_Density)*Deflection_Coefficient;
}

double Get_ShellSide_Scaling_Correction_Factor(double Shell_Inner_Diameter, double BowShaped_Spacing) {
	int num = (int)(Shell_Inner_Diameter / BowShaped_Spacing)/0.5;
	switch (num)
	{
	case 2:return 1.12; break;
	case 3:return 1.20; break;
	case 4:return 1.28; break;
	case 6:return 1.38; break;
	case 8:return 1.47; break;
	case 10:return 1.55; break;
	default:return 1.00;
		break;
	}
}

double Get_Shell_PressureDrop(double TubeBundle_PressureDrop,double ShellSide_Scaling_Correction_Factor,double Deflector_PressureDrop,double ShellNozzle_PressureDrop) {
	return TubeBundle_PressureDrop * ShellSide_Scaling_Correction_Factor + Deflector_PressureDrop + ShellNozzle_PressureDrop;
}

double Get_Allowable_PressureDrop(double Operating_Pressure) {
	if (Operating_Pressure <= 1)return Operating_Pressure / 10;
	if (Operating_Pressure > 1 && Operating_Pressure <= 1.7)return Operating_Pressure / 2;
	if (Operating_Pressure > 1.7&&Operating_Pressure <= 11)return 0.35;
	if (Operating_Pressure > 11 && Operating_Pressure <= 31)return 1.5;
	if (Operating_Pressure > 31)return 1.6;
}

#endif; //!CALSS_HYDRAULIC_H_
