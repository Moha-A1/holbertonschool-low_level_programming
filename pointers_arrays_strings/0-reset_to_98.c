#include "main.h" /* Inclut le fichier d'en-tête principal,
				   * où le prototype de cette fonction est déclaré.
				   */

/**
 * reset_to_98 - Met à jour la valeur vers laquelle un pointeur pointe,
 * en la changeant à 98.
 * @n: Un pointeur vers un entier. C'est l'adresse de l'entier dont
 * nous voulons modifier la valeur.
 *
 * Return: Cette fonction ne retourne rien (void). Elle modifie directement
 * la valeur à l'adresse mémoire donnée via le pointeur.
 */
void reset_to_98(int *n)
{
	/*
	* L'opérateur '*' devant le nom du pointeur (n) est appelé
	* "opérateur de déréférencement".
	* Il permet d'accéder à la VALEUR stockée à l'adresse mémoire
	* vers laquelle 'n' pointe.
	* Ici, nous assignons la valeur 98 à cet emplacement mémoire.
	*/
	*n = 98;
}
/* Facon detailler pour moi */
