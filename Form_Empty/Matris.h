#pragma once

ref class Matrix {
public:
	double** dizi;
	int row;
	int column;


	Matrix();
	Matrix(int row, int column);
	~Matrix();

	void set(double d, int i, int j);
	double get(int i, int j);
	void randomD();

	Matrix^ transpoz();
	Matrix^ operator *(Matrix^ oMatrix);
	Matrix^ operator *(double oDouble);
	Matrix^ operator +(Matrix^ oMatrix);

};