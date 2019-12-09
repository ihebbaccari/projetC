#include "enr.h"
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <gtk/gtk.h>




void ajouter_Enr(Enr *enr )
{
   FILE *f = fopen("saves2","ab+");
   if(!f)  exit(-1);

   fwrite(enr,sizeof(Enr) , 1 , f);
   fclose(f);

}

void dell_user(int *id)
{
Enr enr;
FILE *old;
FILE *new=NULL;
/*****create a temporary file *****/
new=fopen("saves2_test","wb");
fclose(new);
/******copy data from old to new *******/
old=fopen("saves2","rb");
new=fopen("saves2_test","ab");
/**************************/
int i=0;
while(!(feof(old)))
	{i++;
	fread(&enr,1,sizeof(Enr),old);
	}
fclose(old);
old=fopen("saves2","rb");
/******************************/
int j=0;
while(j<i-1)
	{j++;
	fread(&enr,1,sizeof(Enr),old);
	
	if(enr.id!=id)
		{	
		fwrite(&enr,sizeof(Enr),1,new);
		}
	}
fclose(new);
fclose(old);
remove("saves2");//nfas5ou il fichier li9dim
rename("saves2_test","saves2");//enronomiw il fichier ejdid b esm li9dim bech ye5ou blastou
/*****Na3mlo Actualiser lil liste **************/

}
