#include <gtk/gtk.h>


void
on_Ajoutt1_clicked                     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkWidget       *button,
                                        gpointer         user_data);

void
on_Affiche_clicked                     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_Ajout_clicked                       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_Quit_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_valider_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_aff_clicked                         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_mod_clicked                         (GtkWidget       *obj,
                                        gpointer         user_data);

void
on_rr_clicked                          (GtkButton       *obj,
                                        gpointer         user_data);

void
on_bo_clicked                          (GtkButton       *button,
                                        gpointer         user_data);
