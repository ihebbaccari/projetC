#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reservation_vol.h"
int tableau_reservation_vol(reservation_vol tab[50])
{
int n=0;
FILE* f=fopen("reservation_vol.txt","r");
if(f!=NULL)
{
  while(fscanf(f,"%s %c %d %d %d %d",tab[n].num,&tab[n].bloc,&tab[n].dt_res.jour,&tab[n].dt_res.mois,&tab[n].dt_res.annee)!=EOF)
{
n++;
}
fclose(f);

}

return n;
}
int verifier_resrever_vol(reservation_vol sa)
{
reservation_vol s;
int v=0; 
FILE* f=fopen("sallesReserve.txt","r");
if(f!=NULL)
{
	while(!v && fscanf(f,"%s %c %d %d %d %d",s.num,&s.bloc,&s.dt_res.jour,&s.dt_res.mois,&s.dt_res.annee,&s.hr_resr)!=EOF)
	{


		if(strcmp(s.num,sa.num)==0 ) 
		{
			if ((s.dt_res.jour==sa.dt_res.jour) && (s.dt_res.mois==sa.dt_res.mois) && (s.dt_res.annee==sa.dt_res.annee) && (s.hr_resr==sa.hr_resr))
					{
						v=1;
					}	
	}

}

fclose(f);
}
return v;
}

printf("affichage fil fonction\n");
for(i=0;i<nS;i++)
{
printf("%s\n",salle[i]);
}
return nS;
}

void reserver_vol(reservation_vol s)
{
	FILE* f=fopen("reservation_vol","a");


	if(f!=NULL)
	{
	fprintf(f,"%s %c %d %d %d %d\n",s.num,s.bloc,s.dt_res.jour,s.dt_res.mois,s.dt_res.annee,);
	fclose(f);
	}
}
