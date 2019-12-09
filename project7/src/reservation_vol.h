#ifndef reservation_H_INCLUDED	
#define reservation_H_INCLUDED
#include "reservation_vol.h"
typedef struct
{
int jour;
int mois;
int annee;
}Date;
typedef struct
{
char num[5];
Date dt_res;
}reservation_vol;

int tableau_reservation_vol(reservation_vol tab[50]);
void reserver_vol(reservation_vol s);

#endif
