#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Nod
{
    int cheie;
    int inaltime;
    struct Nod *stanga;
    struct Nod *dreapta;
};

int inaltime(struct Nod *nod)
{
    if (nod == NULL)
        return 0;
    return nod->inaltime;
}

int maxim(int a,int b){
    if(a>b)
    return a;
    return b;
}

struct Nod *rotireStanga(struct Nod *x)
{
    struct Nod *y = x->dreapta;
    struct Nod *SS = y->stanga;

    y->stanga = x;
    x->dreapta = SS;

    x->inaltime = maxim(inaltime(x->stanga), inaltime(x->dreapta)) + 1;
    y->inaltime = maxim(inaltime(y->stanga), inaltime(y->dreapta)) + 1;

    return y;
}

struct Nod *rotireDreapta(struct Nod *y)
{
    struct Nod *x = y->stanga;
    struct Nod *SD = x->dreapta;

    x->dreapta = y;
    y->stanga = SD;

    x->inaltime = maxim(inaltime(x->stanga), inaltime(x->dreapta)) + 1;
    y->inaltime = maxim(inaltime(y->stanga), inaltime(y->dreapta)) + 1;

    return x;
}

int echilibru(struct Nod *nod)
{
    if (nod == NULL)
        return 0;
    return inaltime(nod->stanga) - inaltime(nod->dreapta);
}

struct Nod* inserare(struct Nod* nod, int cheie){
    if(nod==NULL)
    return 0;
    
    if(cheie<nod->cheie)
    nod->stanga=inserare(nod->stanga,cheie);
    else if(cheie>nod->cheie)
    nod->dreapta=inserare(nod->dreapta,cheie);
    else
    return nod;
if (cheie < nod->cheie)
		nod->stanga = inserare(nod->stanga, cheie);
	else if (cheie > nod->cheie)
		nod->dreapta = inserare(nod->dreapta, cheie);
	else
		return nod;

	nod->inaltime = 1 + maxim(inaltime(nod->stanga), inaltime(nod->dreapta));
	int balanta = echilibru(nod);

	if (balanta > 1 && cheie < nod->stanga->cheie)
		return rotireDreapta(nod);
	if (balanta < -1 && cheie > nod->dreapta->cheie)
		return rotireStanga(nod);
	if (balanta > 1 && cheie > nod->stanga->cheie) {
		nod->stanga = rotireStanga(nod->stanga);
		return rotireDreapta(nod);
	}
	if (balanta < -1 && cheie < nod->dreapta->cheie) {
		nod->dreapta = rotireDreapta(nod->dreapta);
		return rotireStanga(nod);
	}
	return nod;
    
}

void populare(struct Nod** nod,int nr,int min,int max){
    int i;
    srand(time(NULL));
    for(i=0;i<nr;i++){
        int val=rand() % (max-min +1) + min;
        *nod=inserare(*nod,val);
    }
}

int main(){



    return 0;
}
