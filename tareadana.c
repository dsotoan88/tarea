#include<stdio.h>
#include<math.h>
int main( int argc, char const* argv []){
	int d=4, s, signo=1;
	double pi, suma;
	for(s=1; s<=10000000; s+=2){
	suma= signo*((double)d/s);
	pi = pi + suma;
	signo= signo* -1;
	}
	printf("Pi es: \n%1.54f", pi);
	return 0;
}
