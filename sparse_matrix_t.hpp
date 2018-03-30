#pragma once

#include <iostream>

#include "template_matrix_t.hpp"
#include â€œvector_t.hppâ€
#include â€œpair_t.hppâ€

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

		}

		~sparse_matrix_t(void) {}

		ostream& write(ostream& os)
		{
			os << m_ << endl;
			os << n_ << endl;
			///////// (impresiÃ³n de los elementos dispersos)
			return os;
		}
			

	};

}
