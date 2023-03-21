#include <stdio.h>
#include <stdlib.h>

int main() {

    int vp, v1, v2, v3; 

    printf ("Informe um valor de 3 digitos: "); 
    scanf ("%d", &vp); 

    v1 = vp%10;
    vp = vp/10;
	v2 = vp%10;
	vp = vp/10;
	v3 = vp%10;
	vp = vp/10;

    printf ("%d%d%d", v1, v2, v3); 

}