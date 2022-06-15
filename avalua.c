/* Cesar Colmenero */
double avalua(double *x, double *c, int n, double z){
       double val;
       int i;
       val = c[n];
       for(i=n-1; i>= 0; i--){
           val = c[i] +  val*(z-x[i]);
       }
       return val;
}
           
