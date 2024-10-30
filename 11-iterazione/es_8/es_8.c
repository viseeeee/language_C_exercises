#include <stdio.h>
/**
 * @brief Dato N un numero intero positivo, generare e visualizzare in ordine
 * decrescente i primi N numeri interi positivi.
 * 
 * @param argc dimensione dell'array argv
 * @param argv argomenti che prende da riga di comando
 * @return Restituisce 0 se l'esecuzione ha successo.
 */
int main(int argc, char *argv[])
{

	int n, i;

	do
	{
		printf("Inserisci un numero >= 1 : ");
		scanf("%d", &n);
	} while (n < 0);

	i = n;
	do
	{
		printf("%d\n", i);
		i = i - 1;
	} while (i > 0);

	return 0;
}