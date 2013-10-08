#include <stdio.h>
#include <math.h>
#include <sys/time.h>

void ord_sel (int v[],int n){
int i,j,minx, minj;

for (i=0;i<n-1;i++){
minj =i;
minx= v[i];
	for (j=i+1;j<n;j++){
	if(v[j]<minx){
	minj = j;
	minx= v[j];
	}
	}
	v[minj] = v[i];
	v[i] = minx;
	}
	
}

void ord_shell(int v[], int n){
int incremento = n;
int i, tmp, j;
int seguir; // true=1, false=0
do{
	incremento = incremento / 2;
		for (i=incremento; i<n; i++){
		  tmp=v[i];
		  j=i;
		  seguir = 1;
			while((j-incremento)>=0 && seguir==1){
				if (tmp < v[j-incremento]){
				v[j]=v[j-incremento];
				j=j-incremento;
				}else{
				seguir=0;
				}
			}
			v[j]=tmp;
		}
}
while (incremento != 1);
}

void inicializar_semilla() {
    srand(time(NULL));
  // se establece la semilla de una nueva serie de enteros pseudo-aleatorios
  }
  
  void aleatorio(int v [], int n) {
    int i, m=2*n+1;
    for (i=0; i < n; i++)
    v[i] = (rand() % m) - n;
   /* se generan "n" números pseudoaleatorio entre -n y +n */
  }
  
double microsegundos() { /* obtiene la hora del sistema en microsegundos */
    struct timeval t;
    if (gettimeofday(&t, NULL) < 0 )
      return 0.0;
    return (t.tv_usec + t.tv_sec * 1000000.0);
  }
  
  void test (int v[],int i){
  
  }
main(){
int v[]={-9,-7,6,4,8,6,0,0,2,-1};
int w = 0;
ord_shell(v,10);
int i;

	for (i=0; i<10;i++){
	printf("%d\n",v[i]);
	}
}

