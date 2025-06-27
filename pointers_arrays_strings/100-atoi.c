#include "main.h" 
/**
 * _atoi - Convertit une chaîne de caractères en un entier.
 * La fonction gère les caractères non numériques initiaux,
 * les signes '+' et '-' multiples, et retourne 0 si aucun nombre n'est trouvé.
 * @s: Le pointeur vers la chaîne de caractères à convertir.
 *
 * Return: L'entier converti depuis la chaîne. Retourne 0 si aucun nombre n'est trouvé.
 */
int _atoi(char *s)
{
	int sign = 1;     /* Variable pour suivre le signe final du nombre.
                           * Initialisée à 1 (positif). Chaque '-' multipliera par -1.
                           */
	unsigned int result = 0; /* Variable pour stocker le nombre converti.
                           * On utilise unsigned int pour éviter les problèmes de débordement
                           * temporaire lors de la construction du nombre,
                           * avant d'appliquer le signe final.
                           */
	int found_digit = 0; /* Indicateur booléen (0 ou 1) pour savoir si on a trouvé au moins un chiffre. */
	int i = 0;        /* Index pour parcourir la chaîne. */

	/* Première phase : Parcourir la chaîne pour trouver le début du nombre
	 * et déterminer le signe final.
	 * On continue tant qu'on n'a pas atteint le null byte et qu'on n'a pas
	 * encore trouvé de chiffre.
	 */
	while (s[i] != '\0' && found_digit == 0)
	{
		/* Si le caractère actuel est un signe '-' :
		 * Multiplie 'sign' par -1. Si 'sign' était 1, il devient -1.
		 * S'il était -1, il redevient 1 (gère les -- qui s'annulent).
		 */
		if (s[i] == '-')
		{
			sign *= -1;
		}

		/* Si le caractère actuel est un chiffre (entre '0' et '9') :
		 * C'est le début ou la continuation du nombre.
		 */
		if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1; /* On a trouvé au moins un chiffre. */

			/* Construire le nombre :
			 * Multiplier le résultat actuel par 10 (décaler les chiffres vers la gauche)
			 * et ajouter la valeur numérique du chiffre actuel (s[i] - '0').
			 * Par exemple : si result=12, et s[i] est '3', (12 * 10) + (3) = 123.
			 */
			result = (result * 10) + (s[i] - '0');

			/* Vérifier si le caractère suivant est un chiffre.
			 * Si ce n'est pas un chiffre, cela signifie que le nombre est terminé.
			 * On peut alors sortir de cette boucle.
			 * On vérifie aussi que ce n'est pas le null byte.
			 */
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9') && s[i + 1] != '\0')
			{
				break; /* Sort de la boucle, le nombre est complet. */
			}
		}
		i++; /* Passe au caractère suivant de la chaîne. */
	}

	/* Une fois la boucle terminée, on applique le signe final au 'result'.
	 * Le cast (int) est nécessaire car 'result' est unsigned int.
	 */
	return ((int)result * sign);
}
