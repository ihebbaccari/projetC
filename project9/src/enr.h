
#include <gtk/gtk.h>
#include "interface.h"
#include "support.h"

typedef struct Date Date;
struct Date{
int j , m ,a;
};

typedef struct Enr Enr;
struct Enr
{
   int id;
   char dest[30];
char to[40];
   char  com_aer[30];
   char prix[30];
   char type[20]  ;
   char classe[20];
   char nbp[20]; 

Date d;
};

void ajouter_Enr(Enr * );
void dell_user(int *id);

