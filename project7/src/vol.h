
#include "date.h"
#include<gtk/gtk.h>
typedef struct Vol Vol;

struct Vol
{
  Date1 d;
int id;
  char  Ca[30];
   char  Cl[30];
  int  Nb_b;
char  R_v[12];
 

};

void Ajout(Vol *v);
void Affiche_Vol(GtkWidget *show);
void dell_user(char *depart);
void s_user(int *id);
