Utilisation
Exécution du Script
Le script c-wire.sh est utilisé pour filtrer les données et exécuter le programme C.

Usage :


./c-wire.sh <chemin_csv> <type_station> <type_consommateur> [id_centrale]
<chemin_csv> : Chemin vers le fichier CSV d'entrée.

<type_station> : Type de station (hvb, hva, lv).

<type_consommateur> : Type de consommateur (comp, indiv, all).

[id_centrale] : (Optionnel) ID de la centrale spécifique.

Nettoyage
Pour nettoyer les fichiers objets et l'exécutable générés :

make clean

Pour recompiler tout le projet :

make 
