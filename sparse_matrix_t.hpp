#pragma once

#include <iostream>
#include <cmath>

#include "template_matrix_t.hpp"
#include "vector_t.hpp"
#include "pair_t.hpp"



using namespace std;

namespace AED{

enum {COL_CONF, ROW_CONF};

	class sparse_matrix_t {
	private:
		int m_;
		int n_;
		int conf_;

		// AquÃ­ va la definiciÃ³n de la estructura dispersa: dispersa_
	public:
		sparse_matrix_t(const matrix_t<double>& M, double eps, int conf):
		m_(M.get_m()),
		n_(M.get_n()),
		conf_(conf),
		dispersa_()
		{
		int contador;
		if(conf==COL_CONF){
			dispersa_.resize(n_),
			for(int j=1; j<n_;j++){
				contador=0;
				for(int i=1; i<m_; i++){
					if(Zero(M(i,j), eps){
						contador++;
					}
				}
				dispersa_[j-1].resize(contador);
				contador=0;
				for(int i=1; i<m_;i++){
					if(Zero(M(i,j), eps)){
						dispersa_[j-1][contador].set(i,M(i,j));
						contador++;
					}
				}
			}
		}

		~sparse_matrix_t(void) {}

		ostream& write(ostream& os)
		{
			os << "El numero de filas es: " << m_ << endl;
			os << "El numero de columnas es: " << n_ << endl;
			///////// (impresion de los elementos dispersos)
			return os;
		}
			
		bool Zero(double val, double eps){
			return (fabs(val) < eps);
		};

}
