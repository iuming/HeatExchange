#include "stdafx.h"
#include "stdio.h"
#include "WASPCN.h"

int main()
{
	double P=14;
	double T=320;
	double H=0.0;
	int R=0;
	SETSTD_WASP(97);
    PT2H(P,T,H,R);

	printf("H=%10.5f\n",H);

	return 0;
}