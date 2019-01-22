# Fonctionnement du "Breadboard"

![fritzing](https://github.com/liamjack/AtelierArduino/raw/master/breadboard.png)

# LEDs

LED signifie « Light Emitting Diode », soit « Diode électroluminescente » en français. Comme toute diode, elle ne laisse passer le courant que dans un seul sens.

![led](https://upload.wikimedia.org/wikipedia/commons/thumb/5/52/%2B-_of_LED_2.svg/800px-%2B-_of_LED_2.svg.png)

La cathode est la broche la plus courte, et l’anode est la broche la plus longue.

Une LED a une limite de courant à respecter, sinon elle s’auto-detruit. Pour les LEDs de faible puissance, c’est generalament entre 10 et 30 mA.

# ATmega328P

[Datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega48A-PA-88A-PA-168A-PA-328-P-DS-DS40002061A.pdf)

Au cœur de l’Arduino Nano se trouve l’ATmega328P de Microchip. C’est un microcontrôleur 8 bits basé sur l’architecture RISC.

Ce microcontrôleur offre :
* 23 GPIO (General Purpose Input Output)
* 6 sorties PWM
* 6 canaux CAN (Convertisseur analogique - numerique)
* 32 kB de memoire flash
* 1 kB de EEPROM (Electrically Erasable Programmable Read-Only Memory)
* 2 kB de memoire vive (SRAM)

## Alimentation

* Minimum: 1,8 V
* Maximum: 5,5 V

## Consommation

* Actif: 0,2 mA
* En veille: 0,1 µA