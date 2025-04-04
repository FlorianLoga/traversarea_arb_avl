# Traversarea unui arbore AVL

1. **Detalii despre implementare**
Cu ajutorul functiilor de rotireStanga respectiv rotireDreapta, arborele va fi mereu echilibrat, acestea fiind folosite atunci cand diferența dintre sub-arborul stâng și drept este mai mare de 1, respectiv mai mica decat -1.Functia de inserare cauta locul corect pentru a insera nodul si actualizeaza inaltimea nodului si echilibrul arborelui.Functia populare, populeaza arborele cu un numar dat de noduri care vor fi mereu distincte intre ele.
2. **Platforma Software utilizata**
Am implementat proiectul in limbajul C pe Windows.Am dezvoltat codul sursa cu ajutorul Visual Studio Code si Visual Studio si am folosit Docker pentru a rula aplicatia si pentru a ma asigura ca pot fi folosite comenziile de "pull","push","run" si "build" corect.
3. **Rezultate**
Cele 4 traversari: preordine,inordine,postordine si peNivel functioneaza corect si returneaza ceea ce trebuie.
4. **Modalitate de rulare**
Dupa ce folositi  docker pull ghcr.io/florianloga/traversarea_arb_avl/traversarea_arb_avl:latest veti utiliza docker run -it ghcr.io/florianloga/traversarea_arb_avl/traversarea_arb_avl:latest pentru a putea introduce numarul de elemente dorite
5. **Motivatia**
Motivul pentru care am realizat acest proiect este de a ma familiariza cu arborii de tip AVL si de a intelege mai bine functionalitatea si implementarea lor.

![image](https://github.com/user-attachments/assets/75d8117d-7073-45f9-81ec-70ceb5bdef77)

![image](https://github.com/user-attachments/assets/c35da67e-18cf-4dc6-b3a8-c7cecf7cc0c7)
*Aici am avut probleme cu **compilatorul***

![image](https://github.com/user-attachments/assets/cc1fcd0f-23c6-4f4c-b52d-b78d47c26839)
*Nu se afisau toate numerele*

