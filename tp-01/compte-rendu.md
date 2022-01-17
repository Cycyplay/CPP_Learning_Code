# TP1 - Introduction au C++
## Exercice 1 - Compilation et exécution

1. Les avantages d'un langage compilé et qu'il est en général plus rapide à l'exécution mais il faut pouvoir compiler sur une machine pour obtenir l'executable.

2. Une erreur de compilation est un erreur qui survient lors de la compilation du programme. Une erreur d'exécution se produit pendant l'exécution du programme.

3. UB signifie que le programme n'a pas un comportement déterministe. On peut très bien le compiler, mais on ne peut garantir le déroulement de son exécution.
   

## Exercice 2 - Primitives et initialisation

1. Les const non initialisé provoque une erreur, il y a des problèmes de conversion (int -> bool, char * -> char)
   Rien ne change avec `-Werror`.

2. `s0` à une valeur dépendant de la pile (on ne sait pas)
   `ul7` à également une valeur dépendant de la pile (car b3 provoque une erreur)

## Exercice 3 - Les fonctions et leurs paramètres

2. - Par valeur : copie la valeur
   - Par référence: transmet la valeur de base sans la copier, direcement la vraie en mémoire
   - Par référence constante: transmet la valeur de base sans la copier, mais on ne peut pas la modifier

## Exercice 4 - `std::string` et `std::vector`

## Exercice 5 - Traducteur malade