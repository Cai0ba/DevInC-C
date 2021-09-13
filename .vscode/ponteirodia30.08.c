int main()
{
   float numero = 10.12;
   float *ponteiroA = &numero;
 float *ponteiroB = ponteiroA;
 float **ponteiroC = &ponteiroA;
   printf("\nnumero  = %f e endereço %p",numero, &numero);
   printf("\nnumero  = %f e endereço %p",*ponteiroA, ponteiroA);
   printf("\nnumero  = %f e endereço %p",*ponteiroB, ponteiroB);
   
   printf("\nendereco de memoria do ponteiroB %p",*ponteiroB, ponteiroB);
   
   
   
   
    return 0;
}
