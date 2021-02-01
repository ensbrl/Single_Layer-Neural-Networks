#pragma once

#define CLASS1 (1)
#define CLASS2 (-1)

struct samples
{
	double x1;
	double x2;
	double id;


};

bool randompressed = false;
bool drawWeight = false;
bool continuous = false;
bool binary = false;
double c = 0.2;
int zoom ;
double meanX = 0, meanY = 0;
double sSX = 0, sSY = 0;