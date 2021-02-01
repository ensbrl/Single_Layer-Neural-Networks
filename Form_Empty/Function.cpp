#pragma once
#include <math.h>
#include "Matris.h"
#define LAMBDA 0.001
int Ypoint(int x, Matrix^ w, int Carpan) {
	double xx, y, z;
	xx = w->get(0, 0);
	y = w->get(1, 0);
	z = w->get(2, 0);
	double temp = 0.0;
	
	//temp= (int)((double)(-1 * (double)(Carpan * z) - (xx * x) / (double)(y)));
	temp = (x - Carpan) * xx / y + (z / y) + Carpan;
	return temp;
}

double net(Matrix^ oMatrix, Matrix^ x) {
	double n = 0.0;
	for (int i = 0; i < 3; i++)
	{
		n += oMatrix->dizi[0][i] * x->dizi[i][0];
	}
	return n;
}
double activationFunction(double net) {

	double fnet = tanh(net);

	return fnet;
}
double turev(double net)
{
	double fTurev =( (1 - (pow(tanh(net), 2))) / 2);
	return fTurev;
}




