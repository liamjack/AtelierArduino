# Etape 01

Ouvrir Arduino IDE, puis Croquis > Inclure une bibliothèque > Gérer les bibliothèques.

Rechercher "MFRC" dans la barre de recherche.

Selectionner "MFRC522 by GithubCommunity" dans la liste et cliquer sur "Installer"

![install](https://github.com/liamjack/AtelierArduino/raw/master/RFID/Etape01/install.png)

Faire les branchements suivants depuis le module RFID vers l'Arduino:

* 3.3 V -> 3V3
* GND -> GND
* RST -> D9
* MISO -> D12
* MOSI -> D11
* SCK -> D13
* SDA -> D10

![fritzing](https://github.com/liamjack/AtelierArduino/raw/master/RFID/Etape01/Etape01.png)