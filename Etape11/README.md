# Etape 11

Jusqu'à maintenant nous n'avons utilisé que les sorties de l'Arduino. Mais il est aussi possible d'avoir des entrées, utile par exemple pour detecter un appui sur un bouton.

Relier le bouton poussoir à D2 et 5 V. Mettre une resistance 10 kohm entre D2 et GND, c'est ce que l'on appele un "Pull-down resistor". [En savoir plus](https://playground.arduino.cc/CommonTopics/PullUpDownResistor)

![fritzing](https://github.com/liamjack/AtelierArduino/raw/master/Etape08/Etape08.png)

Téléverser le code `Etape11.ino` sur l'Arduino et ouvrir le moniteur série.