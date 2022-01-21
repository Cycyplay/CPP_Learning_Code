# TP2 - Les Classes en C++

## Exercice 1

1. Le programme affiche 17 et 17.
2. On ne sait pas car la valeur de global_sum sera définie en fonction de l'état de la pile. (Le programme ne compile même pas car la référence à global_sum n'est pas définie)


## Exercice 2

1. ça ne fonctionne pas, il faut écrire un constructeur.
2. /
3. Estimation : 2 copies
   Réalité : 1 copie. La copy-elison est une optimisation qui conserve en mémoire l'objet créer pour ne la copier qu'a la fin et ne faire qu'un appel au constructeur.

## Exercice 3

