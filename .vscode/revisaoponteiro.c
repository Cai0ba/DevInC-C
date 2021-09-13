int main()
{
    int idade = 9;
    int *pontIdade = &idade;
printf("\n A variavel idade utiliza %li bytes de memoria.",sizeof(idade));
  printf("\n A variavel pontIdade utiliza %li bytes de memoria",sizeof(pontIdade));
  *pontIdade*=10;
  printf("\n DIRETO o conteudo de idade %i endereco de memoria %p", idade,&idade);
   printf("\n INDIRETO o conteudo de idade %i endereco de memoria %p", *pontIdade,pontIdade);
  printf("\n Endereço de memoria do ponteiro %p", &pontIdade);
    return 0;
}
