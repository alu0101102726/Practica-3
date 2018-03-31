sparse_matrix_t::sparse_matrix_t(const matrix_t& M, double eps, int conf){
	m_(M.get_m()),
	n_(M.get_n()),
	conf_(conf),
	dispersa()
{
	if(conf==COL_CONF){
		dispersa_.resize(n_),
		for(int j=1; j<n_;j++){
			contador=0;
			for(int i=1; i<m_; i++){
				if(M(i,j!=0)){
					contador++;
				}
			}
			dispersa_(i,j).resize(contador);
			contador=0;
			for(int i=1; i<m_;i++){
				if(M(i,j)!=0){
					dispersa_(j-1)(contador).set(i,M(i,j));
					contador++;
				}
			}
		}
	}
}
