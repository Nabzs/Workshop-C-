# C++ Image Processing Workshop

## Table des matières

- [Description](#description)
- [Objectifs](#objectifs)
- [Prérequis](#prérequis)
- [Exercices](#exercices)
  - [1 ⭐: Ne garder que le vert](#1)
  - [2 ⭐: Échanger les canaux](#2)
  - [3 ⭐: Noir & Blanc](#3)
  - [4 ⭐: Négatif](#4)
  - [5 ⭐: Dégradé](#5)
  - [6 ⭐⭐: Miroir](#6)
  - [7 ⭐⭐: Image bruitée](#7)
  - [8 ⭐⭐: Rotation de 90°](#8)
  - [9 ⭐⭐: RGB split](#9)
  - [10 ⭐⭐: Luminosité](#10)
  - [11 ⭐⭐⭐: Disque](#11)
  - [12 ⭐: Cercle](#12)
  - [13 ⭐: Animation](#13)
  - [14 ⭐⭐⭐: Rosace](#14)
  - [15 ⭐⭐: Mosaïque](#15)
  - [16 ⭐⭐⭐⭐: Mosaïque miroir](#16)
  - [17 ⭐⭐⭐: Glitch](#17)
  - [18 ⭐⭐⭐: Tri de pixels](#18)
  - [19 ⭐⭐⭐: Dégradés dans l'espace de couleur Lab](#19)
  - [20 ⭐⭐⭐(⭐): Fractale de Mandelbrot](#20)
  - [21 ⭐⭐⭐(⭐): Tramage](#21)
  - [22 ⭐⭐⭐(⭐): Normalisation de l'histogramme](#22)
  - [23 ⭐⭐⭐⭐: Vortex](#23)
  - [24 ⭐⭐⭐⭐: Convolutions](#24)
  - [25 ⭐⭐: Différence de gaussiennes](#25)
  - [26 ⭐⭐⭐⭐⭐: K-means](#26)
  - [27 ⭐⭐⭐⭐⭐: Filtre de Kuwahara](#27)
  - [28 ⭐⭐⭐⭐⭐⭐: Diamond Square](#28)
  - [29 ⭐⭐⭐⭐⭐⭐: Colorer la height map](#29)

---

## Description

Ce projet nous apprend à implémenter des effets sur des images (similaires à ceux de Photoshop ou Instagram) en C++. Il s'agit d'une introduction à la synthèse d'image, parfaite pour pratiquer et approfondir vos compétences en C++.  
[Lien du workshop](https://dsmte.github.io/Learn--cpp_programming/Workshop/Exercices)

## Objectifs

- Découvrir les bases du traitement d'images.
- Implémenter des effets variés (exercices de difficulté croissante).
- Rédiger un rapport en Markdown et, si souhaité, présenter un algorithme avancé.

## Prérequis

- Connaissance de base en C++.
- Environnement de développement configuré avec CMake.
- Librairie **sil** (incluse dans le template de projet).

---

## Exercices

| Exercice          | Enoncé                                                           | Difficultée | Original                                                           | Résultat                                                                       | Résultat 2                                                                       | Commentaire                                                                                                                                 |
| ----------------- | ---------------------------------------------------------------- | :---------: | ------------------------------------------------------------------ | ------------------------------------------------------------------------------ | -------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| <a id="1"></a>1   | Ne garder que le vert                                            |      ⭐      | ![Exercice 1 Original](./images/logo.png)                          | ![Exercice 1 Résultat](./output/green.png)                                     | -                                                                                | Un exercice simple et rapide, idéal pour se familiariser.                                                                                   |
| <a id="2"></a>2   | Échanger les canaux                                              |      ⭐      | ![Exercice 2 Original](./images/logo.png)                          | ![Exercice 2 Résultat](./output/swap.png)                                      | -                                                                                | Intéressant pour mieux comprendre la manipulation des pixels.                                                                               |
| <a id="3"></a>3   | Noir & Blanc                                                     |      ⭐      | ![Exercice 3 Original](./images/logo.png)                          | ![Exercice 3 Résultat](./output/black_white.png)                               | -                                                                                | Bonne introduction aux calculs de luminance.                                                                                                |
| <a id="4"></a>4   | Négatif                                                          |      ⭐      | ![Exercice 4 Original](./images/logo.png)                          | ![Exercice 4 Résultat](./output/negativ.png)                                   | -                                                                                |                                                                                                                                             |
| <a id="5"></a>5   | Dégradé                                                          |      ⭐      | -                                                                  | ![Exercice 5 Résultat](./output/degrade.png)                                   | -                                                                                |                                                                                                                                             |
| <a id="6"></a>6   | Miroir                                                           |     ⭐⭐      | ![Exercice 6 Original](./images/logo.png)                          | ![Exercice 6 Résultat](./output/mirror.png)                                    | -                                                                                |                                                                                                                                             |
| <a id="7"></a>7   | Image bruitée                                                    |     ⭐⭐      | ![Exercice 7 Original](./images/logo.png)                          | ![Exercice 7 Résultat](./output/noise.png)                                     | -                                                                                |                                                                                                                                             |
| <a id="8"></a>8   | Rotation de 90°                                                  |     ⭐⭐      | ![Exercice 8 Original](./images/mario.png)                         | ![Exercice 8 Résultat](./output/rotation_mario.png)                            | -                                                                                |                                                                                                                                             |
| <a id="9"></a>9   | RGB split                                                        |     ⭐⭐      | ![Exercice 9 Original](./images/logo.png)                          | ![Exercice 9 Résultat](./output/rgbSplit.png)                                  | -                                                                                |                                                                                                                                             |
| <a id="10"></a>10 | Luminosité                                                       |     ⭐⭐      | ![Exercice 10 Original](./images/photo.jpg)                        | ![Exercice 10 Résultat](./output/brighter.png)                                 | ![Exercice 10 Résultat 2](./output/darker.png)                                   |                                                                                                                                             |
| <a id="11"></a>11 | Disque                                                           |    ⭐⭐(⭐)    | ![Exercice 11 Original](./output/disk.png)                         | ![Exercice 11 Résultat](./output/disk.png)                                     | -                                                                                |                                                                                                                                             |
| <a id="12"></a>12 | Cercle                                                           |      ⭐      | ![Exercice 12 Original](./output/disk.png)                         | ![Exercice 12 Résultat](./output/circle.png)                                   | -                                                                                |                                                                                                                                             |
| <a id="13"></a>13 | Animation                                                        |      ⭐      | ![Exercice 12 Original](./output/disk.png)                         | ![Exercice 13 Résultat](./output/animation.gif)                                | -                                                                                |                                                                                                                                             |
| <a id="14"></a>14 | Rosace                                                           |     ⭐⭐⭐     | ![Exercice 14 Original](./output/circle.png)                       | ![Exercice 14 Résultat](./output/rosace.png)                                   | -                                                                                |                                                                                                                                             |
| <a id="15"></a>15 | Mosaïque                                                         |     ⭐⭐      | ![Exercice 15 Original](./images/logo.png)                         | ![Exercice 15 Résultat](./output/mosaique.png)                                 | -                                                                                |                                                                                                                                             |
| <a id="16"></a>16 | Mosaïque miroir                                                  |    ⭐⭐⭐⭐     | ![Exercice 16 Original](./images/logo.png)                         | ![Exercice 16 Résultat](./output/mosaiqueMirror.png)                           | -                                                                                |                                                                                                                                             |
| <a id="17"></a>17 | Glitch                                                           |     ⭐⭐⭐     | ![Exercice 17 Original](./images/blackops.jpg)                     | ![Exercice 17 Résultat](./output/glitch%20effect/bo6.gif)                      | ![Exercice 10 Résultat 2](./output/glitch%20effect/Anonymous_Glitch.gif)         | Mon effet préféré                                                                                                                           |
| <a id="18"></a>18 | Tri de pixels                                                    |     ⭐⭐⭐     | -                                                                  | -                                                                              | -                                                                                |                                                                                                                                             |
| <a id="19"></a>19 | Dégradés dans l'espace de couleur Lab                            |     ⭐⭐⭐     | -                                                                  | ![Exercice 19 Résultat](./output/colorDegrade.png)                             | -                                                                                |                                                                                                                                             |
| <a id="20"></a>20 | Fractale de Mandelbrot                                           |   ⭐⭐⭐(⭐)    | -                                                                  | ![Exercice 20 Résultat](./output/fractale.png)                                 | -                                                                                | Compliqué à comprendre au début, mais sinon après je n'ai pas eu trop de problèmes                                                          |
| <a id="21"></a>21 | Tramage                                                          |   ⭐⭐⭐(⭐)    | ![Exercice 21 Original](./images/photo.jpg)                        | ![Exercice 21 Résultat](./output/tramage.png)                                  | -                                                                                |                                                                                                                                             |
| <a id="22"></a>22 | Normalisation de l'histogramme                                   |   ⭐⭐⭐(⭐)    | ![Exercice 22 Original](./images/photo_faible_contraste.jpg)       | ![Exercice 22 Résultat](./output/betterContrast.jpg)                           | -                                                                                |                                                                                                                                             |
| <a id="23"></a>23 | Vortex                                                           |    ⭐⭐⭐⭐     | ![Exercice 23 Original](./images/logo.png)                         | ![Exercice 23 Résultat](./output/vortex.png)                                   | -                                                                                |                                                                                                                                             |
| <a id="24"></a>24 | Convolutions                                                     |    ⭐⭐⭐⭐     | ![Exercice 24 Original](./images/logo.png)                         | ![Exercice 24 Résultat](./output/blur.png)                                     | -                                                                                |                                                                                                                                             |
| <a id="25"></a>25 | Différence de gaussiennes                                        |     ⭐⭐      | -                                                                  | -                                                                              | -                                                                                |                                                                                                                                             |
| <a id="26"></a>26 | K-means : trouver les couleurs les plus présentes dans une image |    ⭐⭐⭐⭐⭐    | ![Exercice 26 Original](./images/photo.jpg)                        | ![Exercice 26 Résultat](./output/kmeans/kmeans-2-colors.jpg)                   | ![Exercice 26 Résultat 2](./output/kmeans/kmeans-16-colors.jpg)                  | Exercice le plus difficile à mes yeux                                                                                                       |
| <a id="27"></a>27 | Filtre de Kuwahara (effet peinture à l'huile)                    |    ⭐⭐⭐⭐⭐    | ![Exercice 27 Original](./images/photo.jpg)                        | ![Exercice 27 Résultat](./output/kurahara.png)                                 | -                                                                                |                                                                                                                                             |
| <a id="28"></a>28 | Diamond Square                                                   |   ⭐⭐⭐⭐⭐⭐    |                                                                    | ![Exercice 28 Résultat](./output/DiamondSquares/DiamondSquare.png)             | -                                                                                | Très satisfaisant, bonne introduction à la génération procédurale en c++                                                                    |
| <a id="29"></a>29 | Colorer la height map                                            |   ⭐⭐⭐⭐⭐⭐    | ![Exercice 29 Original](./output/DiamondSquares/DiamondSquare.png) | ![Exercice 29 Résultat](./output/DiamondSquares/DiamondSquareColored_2049.png) | ![Exercice 29 Résultat 2](./output/DiamondSquares/DiamondSquareColored_4097.png) | Ayant déjà fait de la génération procédurale en C#, cet exercice est celui où je me suis le plus amusé et où j'ai appris beaucoup de choses |

---

## Navigation

**[⬆ Retour à la table des matières](#c-image-processing-workshop)**
