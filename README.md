<h1> Simple Shell Readme</h1>

Ce projet consiste à recréer un shell en langage C. Le shell est un programme qui sert d'interface entre l'utilisateur et le système d'exploitation. Il permet à l'utilisateur d'exécuter des commandes et d'interagir avec le système d'exploitation.

Le shell que nous allons recréer sera en mesure de lire des commandes entrées par l'utilisateur, de les analyser et de les exécuter. Nous allons implémenter les fonctionnalités de base d'un shell, telles que l'exécution de commandes externes et internes, la gestion des erreurs, la redirection d'entrée/sortie, etc.

<h2>Fonctionnalités</h2>

Le shell en C prendra en charge les fonctionnalités suivantes :

<ul>
<li>Lire les commandes à partir de l'entrée standard ou de la ligne de commande</li>
<li>Analyser les commandes et les séparer en arguments et options</li>
<li>Exécuter les commandes externes en créant de nouveaux processus</li>
<li>Prendre en charge les commandes internes telles que echo et exit</li>
<li>Gérer les erreurs de commande telles que les commandes inconnues ou les erreurs d'exécution</li>
  <li>Afficher les codes de sortie de la commande</li>
  </ul>
  
  <h2>Flowchart</h2>
  
  ![Capture d’écran 2023-04-24 à 14 41 39](https://user-images.githubusercontent.com/49965538/234015040-35726789-870b-4898-a641-d0f7b2750d8b.png)

  <h2>Utilisation</h2>
  
Pour installer le shell en C, clonez le dépôt git sur votre machine locale :

```git clone https://github.com/bricorne/holbertonshcool-simple_shell.git```

Pour utiliser le shell, vous pouvez le compiler en utilisant la commande suivante :

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```

Ensuite, vous pouvez exécuter le shell en tapant :

```./hsh```

Le shell affichera un prompt, qui vous permettra d'entrer des commandes.

Pour quitter le shell, tapez simplement exit.

<h2>Auteurs</h2>

Ce projet a été créé par Brice et Shawan dans le cadre d'un projet de programmation en C.
