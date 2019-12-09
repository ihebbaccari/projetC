#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <stdio.h>
#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "remplir.h"




void remplir(int *id)
{
Enr e,c;
GtkWidget *combobox6;
GtkWidget *combobox5;
GtkWidget *combobox4;
GtkWidget *jour;
GtkWidget *mois; 
GtkWidget *annee;
GtkWidget *input2,*input3,*input4,*input5;

FILE*f2;
FILE*f3;
int j;
int m;
int a;
f2=fopen("saves2","rb");
f3=fopen("saves","ab+");
combobox6=lookup_widget(button, "combobox6");
combobox5=lookup_widget(button, "combobox5");
combobox4=lookup_widget(button, "combobox4");
jour=lookup_widget(button, "spinbutton4");
mois=lookup_widget(button, "spinbutton5");
annee=lookup_widget(button, "spinbutton6");


input2=lookup_widget(button,"entry3");
input3=lookup_widget(button,"entry6");
input4=lookup_widget(button,"entry4");
input5=lookup_widget(button,"entry5");

	strcpy(c.dest,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(c.to,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(c.nbp,gtk_entry_get_text(GTK_ENTRY(input4)));
	strcpy(c.prix,gtk_entry_get_text(GTK_ENTRY(input5)));
	
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
strcpy(c.com_aer,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox6)));
strcpy(c.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox5)));
strcpy(c.classe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox4)));
sprintf(c.date,"%d/%d/%d",j,m,a);
f1=fopen("saves2","rb");
  if(f1!=NULL) 
  {
   while(fscanf(f1,"%d \n",id)!=EOF)
{
f2=fopen("saves2.bin","rb");
f3=fopen("saves.bin","ab+");
while(fscanf(f2,"%d %s %s %s %d %s %s %s %s %s\n",&id,e.dest,e.to,e.com_aer,&prix,e.type,e.classe,e.nbp,e.Date)!=EOF) 
{
if (strcmp(e.id,id)!=0) 
{
fprintf(f3,"%d %s %s %s %d %s %s %s %s %s  \n",&id,e.dest,e.to,e.com_aer,&prix,e.type,e.classe,e.nbp,e.Date);
}
else {
fprintf(f3,"%d %s %s %s %d %s %s %s %s %s  \n",&id,c.dest,c.to,c.com_aer,&prix,c.type,c.classe,c.nbp,c.Date);
}
}
fclose(f2);
fclose(f3);
remove("saves2.bin");
rename("saves.bin","saves2.bin");
 	
}
fclose(f1);
}
}


