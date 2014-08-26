/* Original code */

void myfunction(double x, double y, double *a, double *b)
{
  *a=9*x*x+cos(y)
}

/* Differentiated code */

void myfunction(double x, double y, double *a, double *b, double xd, double yd, double *aa, double *bb)
{
	double t1, t2, t3, t1p, t2p, t3p;
	/* t1, t2, t3 represents the original function */
	/* t1p, t2p, t3p,represnts the differentiated functions */
	 
	t1=x*x;  
	t2=9*t1;
	t1p= xd*x+x*xd;
	t2p=9*t1p;
    t3=cos(y);
    t3p=-sin(y)*yd;
    *a=t2+t3;
    *aa=t2p+t3p;

}
