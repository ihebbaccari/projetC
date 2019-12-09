#include<string.h>
#include<stdio.h>
#include<gtk/gtk.h>
#include "vol.h"


void Ajout(Vol *v)
{
  FILE * f = fopen("Vol_E","ab+");
   if(!f) g_print("error ");

   fwrite(v,sizeof(Vol) , 1, f);
   fclose(f);
}


enum   
{       
 	ID,       
        CA,
	CL,
        DATE,
        NBR,
	VOITURE,
        COLUMNS
};






void Affiche_Vol(GtkWidget *liste)
{
        GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter    iter;
	GtkListStore *store;
       Vol v1;
	
        store=NULL;

       FILE *f;
	
	store=gtk_tree_view_get_model(GTK_TREE_VIEW(liste));	
	if (store==NULL)
	{
renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  ID", renderer, "text",ID, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



    renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  Date", renderer, "text",DATE, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
                renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  Compagnie.A", renderer, "text",CA, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" Classe", renderer, "text",CL, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);	
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  Nombre.B", renderer, "text",NBR, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	
		

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  Voiture", renderer, "text",VOITURE, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

               
	
	}

	
	store=gtk_list_store_new (COLUMNS, G_TYPE_UINT,  G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
        
	f = fopen("Vol_E", "rb");
        char frm_time[20],nb[10];
	while(fread(&v1,sizeof(Vol),1,f)==1){
          
	  sprintf(frm_time,"%d %d %d",v1.d.j,v1.d.m,v1.d.a);
		sprintf(nb,"%d",v1.Nb_b);

	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter, ID, v1.id, CA, v1.Ca, CL, v1.Cl,NBR,nb,DATE,frm_time,VOITURE,v1.R_v, -1); 
		}
		fclose(f);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste),  GTK_TREE_MODEL (store));
    g_object_unref (store);
	}


void s_user(int *id)
{
Vol v;
FILE *old;
FILE *new=NULL;
/*****create a temporary file *****/
new=fopen("Vol_E_test","wb");
fclose(new);
/******copy data from old to new *******/
old=fopen("Vol_E","rb");
new=fopen("Vol_E_test","ab");
/**************************/
int i=0;
while(!(feof(old)))
	{i++;
	fread(&v,1,sizeof(Vol),old);
	}
fclose(old);
old=fopen("Vol_E","rb");
/******************************/
int j=0;
while(j<i-1)
	{j++;
	fread(&v,1,sizeof(Vol),old);
	
	if(v.id!=id)
		{	
		fwrite(&v,sizeof(Vol),1,new);
		}
	}
fclose(new);
fclose(old);
remove("Vol_E");//nfas5ou il fichier li9dim
rename("Vol_E_test","Vol_E");//enronomiw il fichier ejdid b esm li9dim bech ye5ou blastou
/*****Na3mlo Actualiser lil liste **************/

}



