Attention, l'exercice 4 requiert la librairie graphique X11.
Elle est téléchargeable via la commande: sudo apt install libx11-dev xorg-dev
IL suffit ensuite de modifier d'accès lors de la compilation en ajoutant les arguments: -lX11 -L/chemin_acces_lib_X11
--> Dans mon cas, chemin_acces_lib_X11 = usr/include/X11
