
#include<stdio.h>
#include<string.h>
#include "enr.h"
#include<gtk/gtk.h>
enum{
ID,
DEST,
TO,
     COM,
   PRIX,
     TYPE  ,
    CLASSE,
    NBP,
    DATE,
COLUMNS
};


void affiche_data(GtkWidget * liste )

{
GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  GtkTreeIter iter;
  GtkListStore *store;
  
       store=NULL;
Enr enr;
  
           FILE*f;
     store=gtk_tree_view_get_model(GTK_TREE_VIEW(&liste));
           if(store==NULL)
{

renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" ID",renderer,"text",ID, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



          renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" Aller",renderer,"text",DEST, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


  	  column = gtk_tree_view_column_new_with_attributes(" Arriver",renderer,"text",TO, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
          renderer = gtk_cell_renderer_text_new();


	  column = gtk_tree_view_column_new_with_attributes(" Date",renderer,"text",DATE, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
          renderer = gtk_cell_renderer_text_new();          


          renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" Compagnie.A",renderer,"text",COM, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
          renderer = gtk_cell_renderer_text_new();

          column = gtk_tree_view_column_new_with_attributes(" Prix",renderer,"text",PRIX, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
          renderer = gtk_cell_renderer_text_new();

          column = gtk_tree_view_column_new_with_attributes(" Service",renderer,"text",TYPE, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

           column = gtk_tree_view_column_new_with_attributes(" Classe",renderer,"text",CLASSE, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
          renderer = gtk_cell_renderer_text_new();

	  column = gtk_tree_view_column_new_with_attributes(" Nombre.place",renderer,"text",NBP, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
          renderer = gtk_cell_renderer_text_new();



      store=gtk_list_store_new(COLUMNS, G_TYPE_UINT,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
    
     
          f= fopen("saves2","rb");
   char frm_date[50];
                    while(fread(&enr,sizeof(Enr),1,f) == 1) 
            {
     gtk_list_store_append (store, &iter);

sprintf(frm_date,"%d %d %d",enr.d.j,enr.d.m,enr.d.a);
 
     gtk_list_store_set (store, &iter, ID , enr.id, DEST, enr.dest, COM, enr.com_aer, PRIX, enr.prix, TYPE, enr.type,CLASSE,enr.classe,NBP,enr.nbp,DATE,frm_date,TO,enr.to, -1); 
            }
              fclose(f);
       gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));
       g_object_unref (store);
       }
}



