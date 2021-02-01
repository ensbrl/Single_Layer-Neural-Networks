#include "Matris.h"
#include <stdlib.h>
#include <math.h>

Matrix::Matrix() {
	this->dizi = nullptr;
	this->row = 0;
	this->column = 0;
}


Matrix::Matrix(int row, int column) {
	this->row = row;
	this->column = column;

	dizi = new double* [row];

	for (int i = 0; i < row; i++) {
		dizi[i] = new double[column];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			dizi[i][j] = 0.0;
		}
	}
}
Matrix::~Matrix()
{
	for (int i = 0; i < this->row; i++)
	{
		delete[] this->dizi[i];
	}
	delete[] this->dizi;
}
void Matrix::set(double d, int i, int j) { this->dizi[i][j] = d; }
double Matrix::get(int i, int j) { return this->dizi[i][j]; }
void Matrix::randomD() {
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->column; j++)
		{
			this->dizi[i][j] = (rand() % 2000) / 1000.0 +1.0;
		}
	}

}

Matrix^ Matrix::transpoz()
{ 
	Matrix^ trans = gcnew Matrix(this->column, this->row);
	for (int i = 0; i < trans->row; i++)//1
	{
		for (int j = 0; j < trans->column; j++)//3
		{
			trans->dizi[i][j] = this->dizi[j][i];
		}
	}
	return trans;

}

Matrix^ Matrix::operator *(Matrix^ oMatrix) {
	Matrix^ temp = gcnew Matrix(this->row, oMatrix->column);
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < oMatrix->column; j++)
		{
			for (int k = 0; k < this->column; k++)
			{
				
				temp->dizi[i][j] +=  (oMatrix->dizi[k][j] * this->dizi[i][k]);
			}
		}
	}
	return temp;
}

Matrix^ Matrix::operator *(double oDouble) {
	Matrix^ temp = gcnew Matrix(this->row, this->column);
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->column; j++)
		{
			temp->dizi[i][j] = this->dizi[i][j] * oDouble;
		}

	}
	return temp;
	temp->~Matrix();
}

Matrix^ Matrix::operator +(Matrix^ oMatrix) {

	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->column; j++)
		{
			this->dizi[i][j] +=oMatrix->dizi[i][j];
		}
	}
	return this;

}

