# Etape 08

Et si on utilisait plusieurs sorties, analogiques cette-fois, pour piloter une LED RGB ?

Toujours un feu tricolore très simple.

La LED RGB est en realité composé de trois LEDs de couleur differente. C'est que c'est la cathode commune qui a la broche la plus longue, ce qui donne, de gauche à droite:

* Anode Rouge
* Cathode commune
* Anode Verte
* Anode Bleue

On relie l'anode rouge à D11, l'anode verte à D10 et l'anode bleue à D9.

![fritzing](https://github.com/liamjack/AtelierArduino/raw/master/Etape08/Etape08.png)

Téléverser le code `Etape08.ino` sur l'Arduino.