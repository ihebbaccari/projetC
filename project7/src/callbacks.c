#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <gtk/gtkclist.h>
#include <gdk/gdkkeysyms.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "reservation_vol.h"
#include "vol.h"
#include <string.h>
Vol e;
void
on_button1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)

{

Vol v1;
GtkWidget *combobox1;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *label12;
GtkWidget *id;
GtkWidget *Nb_b;
GtkWidget *combobox3;
GtkWidget *combobox2;

label12=lookup_widget(objet_graphique, "l12");

jour=lookup_widget(objet_graphique, "s4");
mois=lookup_widget(objet_graphique, "s2");
annee=lookup_widget(objet_graphique, "s3");
Nb_b=lookup_widget(objet_graphique, "s5");
id=lookup_widget(objet_graphique, "spinbutton1");
v1.d.j= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
v1.d.m= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
v1.d.a=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
v1.Nb_b=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Nb_b));
v1.id=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(id));

char bloc1[20],bloc2[20],bloc3[20];


combobox1=lookup_widget(objet_graphique, "c1");



combobox3=lookup_widget(objet_graphique, "c3");
combobox2=lookup_widget(objet_graphique, "c2");




strcpy(v1.Cl,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));



strcpy(v1.Ca,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));


strcpy(v1.R_v,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox3)));

Ajout(&v1);
g_print("pass");


gtk_label_set_text(GTK_LABEL(label12),"Reservation réusite.");
}



void
on_button2_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;
GtkWidget *treeview1;

fenetre_ajout=lookup_widget(objet,"window1");



fenetre_afficher=lookup_widget(objet,"window2");
fenetre_afficher=create_window2();

gtk_widget_show(fenetre_afficher);
gtk_widget_destroy(fenetre_ajout);

treeview1=lookup_widget(fenetre_afficher,"treeview1");

Affiche_Vol(treeview1); 
}


void
on_Back_clicked                       (GtkWidget       *objet,
                                        gpointer         user_data)
{
   GtkWidget *fenetre_ajout, *fenetre_afficher;

fenetre_afficher=lookup_widget(objet,"window2");
fenetre_ajout=lookup_widget(objet,"window1");

gtk_widget_destroy(fenetre_afficher);
fenetre_ajout=create_window1();
gtk_widget_show(fenetre_ajout);

}


void
on_button3_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkWidget *fenetre_ajout, *fenetre_afficher;

//fenetre_afficher=lookup_widget(objet,"window2");
fenetre_ajout=lookup_widget(GTK_WIDGET(button),"window1");

gtk_widget_destroy(fenetre_ajout);
//fenetre_ajout=create_window1();
//gtk_widget_show(fenetre_afficher);

}


void
on_button4_clicked                     (GtkButton       *objet,
                                        gpointer         user_data)
{

GtkWidget *window2,*window3,*out;

window3=create_window3();

window2=lookup_widget(objet,"window2");
gtk_widget_destroy(window2);
gtk_widget_show(window3);

out=lookup_widget(window3,"entry4");
gtk_entry_set_text (out,e.Ca);
out=lookup_widget(window3,"entry5");
gtk_entry_set_text (out,e.Cl);
out=lookup_widget(window3,"entry6");
gtk_entry_set_text (out,e.Nb_b);
out=lookup_widget(window3,"entry7");
gtk_entry_set_text (out,e.R_v);

}


void
on_button5_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
//GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);
s_user((int *)e.id);
/*****Na3mlo Actualiser lil liste **************/
GtkWidget *window2=lookup_widget(GTK_WIDGET(button),"window2");
GtkWidget *treeview1;

treeview1=lookup_widget(window2,"treeview1");

Affiche_Vol(treeview1);


 GtkWidget *window4,*fenetre_afficher,*l45;

fenetre_afficher=lookup_widget(button,"window2");
window4=lookup_widget(button,"window4");

window4=create_window4();
gtk_widget_show(window4);
gtk_label_set_text(GTK_LABEL(l45),"");
l45=lookup_widget(button, "l45");

//gtk_widget_show(treeview1);
}


void
on_button6_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkWidget *fenetre_ajout, *fenetre_afficher;

//fenetre_afficher=lookup_widget(objet,"window1");
fenetre_ajout=lookup_widget(GTK_WIDGET(button),"window2");

gtk_widget_destroy(fenetre_ajout);
//fenetre_ajout=create_window1();
//gtk_widget_show(fenetre_afficher);

}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *str_data;
GtkListStore *list_store;
list_store=gtk_tree_view_get_model(treeview);
GtkTreeIter   iter;
  if (gtk_tree_model_get_iter(GTK_TREE_MODEL(list_store), &iter, path))
  {
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter, 0, &str_data, -1);
  }
e.id=str_data;

}


void
on_button7_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button9_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button8_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
s_user((int *)e.id);
Vol v1;
GtkWidget *combobox1;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *label12;
GtkWidget *id;
GtkWidget *Nb_b;
GtkWidget *combobox3;
GtkWidget *combobox2;

label12=lookup_widget(objet_graphique, "l12");

jour=lookup_widget(objet_graphique, "spinbutton6");
mois=lookup_widget(objet_graphique, "spinbutton7");
annee=lookup_widget(objet_graphique, "spinbutton8");
Nb_b=lookup_widget(objet_graphique, "spinbutton9");
id=lookup_widget(objet_graphique, "spinbutton10");
v1.d.j= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
v1.d.m= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
v1.d.a=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
v1.Nb_b=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Nb_b));
v1.id=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(id));




combobox2=lookup_widget(objet_graphique, "combobox2");



combobox3=lookup_widget(objet_graphique, "combobox3");
combobox1=lookup_widget(objet_graphique, "combobox1");


strcpy(v1.Ca,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox3)));



strcpy(v1.Cl,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));


strcpy(v1.R_v,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));


Ajout(&v1);
g_print("pass");


gtk_label_set_text(GTK_LABEL(label12),"Reservation réusite.");
}






void
on_ff_clicked                          (GtkButton       *obj,
                                        gpointer         user_data)
{
GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;
GtkWidget *treeview1;

fenetre_ajout=lookup_widget(obj,"window3");



fenetre_afficher=lookup_widget(obj,"window2");
fenetre_afficher=create_window2();

gtk_widget_show(fenetre_afficher);
gtk_widget_destroy(fenetre_ajout);

treeview1=lookup_widget(fenetre_afficher,"treeview1");

Affiche_Vol(treeview1); 
}


void
on_bq_clicked                          (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkWidget *window4;

//fenetre_afficher=lookup_widget(objet,"window1");
window4=lookup_widget(GTK_WIDGET(button),"window4");

gtk_widget_destroy(window4);
//fenetre_ajout=create_window1();
//gtk_widget_show(fenetre_afficher);

}

