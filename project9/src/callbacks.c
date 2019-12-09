#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include<stdio.h>
#include<string.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "enr.h"



Enr e;
void
on_Ajoutt1_clicked                     (GtkWidget       *obj,
                                        gpointer         user_data)
{

GtkWidget *window2;
GtkWidget *window1;


window2=lookup_widget(obj,"window2");


window1=lookup_widget(obj,"window1");


gtk_widget_destroy(window1);
window2=create_window2();
gtk_widget_show(window2);
  /* GtkWidget *combobox1;

GtkWidget *combobox3;
GtkWidget *combobox2;
GtkWidget *input1 ,*input2,*input3;
Enr enr;

combobox1=lookup_widget(obj, "combobox1");

input1=lookup_widget(obj, "dest");
input2=lookup_widget(obj, "entry2");
input3=lookup_widget(obj, "Nbp");



combobox3=lookup_widget(obj, "combobox3");
combobox2=lookup_widget(obj, "combobox2");





strcpy(enr.dest,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(enr.prix,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(enr.nbp,gtk_entry_get_text(GTK_ENTRY(input3)));


strcpy(enr.com_aer,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));



strcpy(enr.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));


strcpy(enr.classe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox3)));



ajouter_Enr(&enr);
*/
}



void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{

 //GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);

GtkWidget *window1;
GtkWidget *window3;
GtkWidget *a,*r,*p,*nb;


window1=lookup_widget(objet,"window1");
gtk_widget_destroy(window1);
window3=lookup_widget(objet,"window3");
window3=create_window3();
gtk_widget_show(window3);

a=lookup_widget(window3,"entry3");
gtk_entry_set_text(GTK_ENTRY(a),e.dest);

r=lookup_widget(window3,"entry6");
gtk_entry_set_text(GTK_ENTRY(r),e.to);

p=lookup_widget(window3,"entry4");
gtk_entry_set_text(GTK_ENTRY(p),e.prix);

nb=lookup_widget(window3,"entry5");
gtk_entry_set_text(GTK_ENTRY(nb),e.nbp);




}


void
on_supprimer_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
    //GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);
dell_user((int *)e.id);
/*****Na3mlo Actualiser lil liste **************/
GtkWidget *window1=lookup_widget(GTK_WIDGET(button),"window1");
GtkWidget *treeview1;

treeview1=lookup_widget(window1,"treeview1");

affiche_data(treeview1);

//gtk_widget_show(treeview1);


 GtkWidget *window4,*fenetre_afficher,*l56;

fenetre_afficher=lookup_widget(button,"window1");
window4=lookup_widget(button,"window4");

window4=create_window4();
gtk_widget_show(window4);
gtk_label_set_text(GTK_LABEL(l56),"");
l56=lookup_widget(button, "l56");
}



void
on_Affiche_clicked                     (GtkWidget       *obj,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window1;
GtkWidget *treeview1;

window2=lookup_widget(obj,"window2");


window1=lookup_widget(obj,"window1");

window1=create_window1();
gtk_widget_destroy(window2);

gtk_widget_show(window1);

treeview1=lookup_widget(window1,"treeview1");

affiche_data(treeview1);
}


void
on_Ajout_clicked                       (GtkWidget       *obj,
                                        gpointer         user_data)
{




GtkWidget *combobox3;

GtkWidget *combobox2;
GtkWidget *combobox1;
GtkWidget *input1 ,*input2,*input3,*input4,*id;
GtkWidget *j1 ,*m1,*a1;
Enr enr;

GtkWidget *lbl;
lbl =lookup_widget(obj, "msg");
combobox3=lookup_widget(obj, "combobox3");

input1=lookup_widget(obj, "dest");
input2=lookup_widget(obj, "entry2");
input3=lookup_widget(obj, "Nbp");
input4=lookup_widget(obj, "to");

j1=lookup_widget(obj, "spinbutton1");
m1=lookup_widget(obj, "spinbutton2");
a1=lookup_widget(obj, "spinbutton3");
id=lookup_widget(obj, "id");
combobox2=lookup_widget(obj, "combobox2");
combobox1=lookup_widget(obj, "combobox1");

enr.d.j =gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(j1));

enr.d.m =gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(m1));
enr.d.a = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(a1));

enr.id =gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(id));


strcpy(enr.dest,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(enr.prix,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(enr.nbp,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(enr.to,gtk_entry_get_text(GTK_ENTRY(input4)));

strcpy(enr.com_aer,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox3)));



strcpy(enr.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));


strcpy(enr.classe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));



ajouter_Enr(&enr);
g_print("pass");
gtk_label_set_text(GTK_LABEL(lbl),"Enregistrement Terminer");

/*
GtkWidget *window1,*window2;
window2=lookup_widget(obj,"window2");


window1=lookup_widget(obj,"window1");

window1=create_window1();


gtk_widget_show(window1);
gtk_widget_destroy(window2);*/
}


void
on_Quit_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
  exit(-1);
}


void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
exit(-1);
}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *str_data,*str_data1,*str_data2,*str_data3,*str_data4;
GtkListStore *list_store;
list_store=gtk_tree_view_get_model(treeview);
GtkTreeIter   iter;
  if (gtk_tree_model_get_iter(GTK_TREE_MODEL(list_store), &iter, path))
  {
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter, 0, &str_data, -1);
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter, 1, &str_data1, -1);
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter, 2, &str_data2, -1);
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter, 4, &str_data3, -1);
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter, 7, &str_data4, -1);
  }
e.id=str_data;
strcpy(e.dest,str_data1);
strcpy(e.to,str_data2);
strcpy(e.prix,str_data3);
strcpy(e.nbp,str_data4);


}




void
on_valider_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{



	
}


void
on_aff_clicked                         (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_mod_clicked                         (GtkWidget       *obj,
                                        gpointer         user_data)
{
dell_user((int *)e.id);
GtkWidget *combobox6;

GtkWidget *combobox7;
GtkWidget *combobox8;
GtkWidget *input1,*input2,*input3,*input4,*id;
GtkWidget *j1 ,*m1,*a1;
Enr enr;

GtkWidget *lbl;
lbl =lookup_widget(obj, "msg");


input1=lookup_widget(obj, "entry3");
input2=lookup_widget(obj, "entry6");
input3=lookup_widget(obj, "entry4");
input4=lookup_widget(obj, "entry5");

j1=lookup_widget(obj, "spinbutton1");
m1=lookup_widget(obj, "spinbutton2");
a1=lookup_widget(obj, "spinbutton3");
id=lookup_widget(obj, "id2");


enr.d.j =gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(j1));

enr.d.m =gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(m1));
enr.d.a = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(a1));

enr.id =gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(id));


strcpy(enr.dest,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(enr.to,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(enr.prix,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(enr.nbp,gtk_entry_get_text(GTK_ENTRY(input4)));


combobox6=lookup_widget(obj, "combobox6");
combobox7=lookup_widget(obj, "combobox7");
combobox8=lookup_widget(obj, "combobox8");


strcpy(enr.com_aer,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox6)));



strcpy(enr.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox7)));


strcpy(enr.classe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox8)));


ajouter_Enr(&enr);
g_print("pass");
gtk_label_set_text(GTK_LABEL(lbl),"Modification valider");
}

/*
GtkWidget *window1,*window2;
window2=lookup_widget(obj,"window2");


window1=lookup_widget(obj,"window1");

window1=create_window1();


gtk_widget_show(window1);
gtk_widget_destroy(window2);*/



void
on_rr_clicked                          (GtkButton       *obj,
                                        gpointer         user_data)
{
GtkWidget *window3;
GtkWidget *window1;
GtkWidget *treeview1;

window1=lookup_widget(obj,"window1");


window3=lookup_widget(obj,"window3");

window1=create_window1();
gtk_widget_destroy(window3);

gtk_widget_show(window1);

treeview1=lookup_widget(window1,"treeview1");

affiche_data(treeview1);

}


void
on_bo_clicked                          (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window4;

//fenetre_afficher=lookup_widget(objet,"window1");
window4=lookup_widget(GTK_WIDGET(button),"window4");

gtk_widget_destroy(window4);
//fenetre_ajout=create_window1();
//gtk_widget_show(fenetre_afficher);
}

