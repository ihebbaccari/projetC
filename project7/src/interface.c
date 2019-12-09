/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkObject *s4_adj;
  GtkWidget *s4;
  GtkObject *s2_adj;
  GtkWidget *s2;
  GtkObject *s3_adj;
  GtkWidget *s3;
  GtkObject *s5_adj;
  GtkWidget *s5;
  GtkWidget *label4;
  GtkWidget *label3;
  GtkWidget *label2;
  GtkWidget *label15;
  GtkWidget *label1;
  GtkWidget *label5;
  GtkWidget *label6;
  GtkWidget *button3;
  GtkWidget *image4;
  GtkWidget *label8;
  GtkWidget *c3;
  GtkObject *spinbutton1_adj;
  GtkWidget *spinbutton1;
  GtkWidget *c1;
  GtkWidget *c2;
  GtkWidget *label7;
  GtkWidget *label20;
  GtkWidget *l12;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label12;
  GtkWidget *button2;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label13;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);
  gtk_widget_set_size_request (fixed1, 512, 333);

  s4_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  s4 = gtk_spin_button_new (GTK_ADJUSTMENT (s4_adj), 1, 0);
  gtk_widget_show (s4);
  gtk_fixed_put (GTK_FIXED (fixed1), s4, 240, 72);
  gtk_widget_set_size_request (s4, 60, 27);

  s2_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  s2 = gtk_spin_button_new (GTK_ADJUSTMENT (s2_adj), 1, 0);
  gtk_widget_show (s2);
  gtk_fixed_put (GTK_FIXED (fixed1), s2, 344, 72);
  gtk_widget_set_size_request (s2, 60, 27);

  s3_adj = gtk_adjustment_new (2019, 2019, 2025, 1, 10, 10);
  s3 = gtk_spin_button_new (GTK_ADJUSTMENT (s3_adj), 1, 0);
  gtk_widget_show (s3);
  gtk_fixed_put (GTK_FIXED (fixed1), s3, 448, 72);
  gtk_widget_set_size_request (s3, 60, 27);

  s5_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  s5 = gtk_spin_button_new (GTK_ADJUSTMENT (s5_adj), 1, 0);
  gtk_widget_show (s5);
  gtk_fixed_put (GTK_FIXED (fixed1), s5, 320, 200);
  gtk_widget_set_size_request (s5, 192, 27);

  label4 = gtk_label_new (_("A :"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 408, 72);
  gtk_widget_set_size_request (label4, 41, 25);

  label3 = gtk_label_new (_("M :"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 304, 72);
  gtk_widget_set_size_request (label3, 41, 25);

  label2 = gtk_label_new (_("J :"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 192, 72);
  gtk_widget_set_size_request (label2, 41, 25);

  label15 = gtk_label_new (_("Reservation Vol"));
  gtk_widget_show (label15);
  gtk_fixed_put (GTK_FIXED (fixed1), label15, 160, 8);
  gtk_widget_set_size_request (label15, 184, 40);

  label1 = gtk_label_new (_("Date de Reservation :"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 8, 72);
  gtk_widget_set_size_request (label1, 152, 25);

  label5 = gtk_label_new (_("Compagnie A\303\251rienne :"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 0, 104);
  gtk_widget_set_size_request (label5, 176, 25);

  label6 = gtk_label_new (_("Class du Vol :"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed1), label6, 0, 152);
  gtk_widget_set_size_request (label6, 120, 25);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed1), button3, 448, 8);
  gtk_widget_set_size_request (button3, 50, 37);

  image4 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_container_add (GTK_CONTAINER (button3), image4);

  label8 = gtk_label_new (_("Voitures :"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed1), label8, 8, 248);
  gtk_widget_set_size_request (label8, 80, 25);

  c3 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (c3);
  gtk_fixed_put (GTK_FIXED (fixed1), c3, 320, 240);
  gtk_widget_set_size_request (c3, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (c3), _("Oui"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (c3), _("Non"));

  spinbutton1_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton1_adj), 1, 0);
  gtk_widget_show (spinbutton1);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbutton1, 72, 32);
  gtk_widget_set_size_request (spinbutton1, 60, 27);

  c1 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (c1);
  gtk_fixed_put (GTK_FIXED (fixed1), c1, 320, 104);
  gtk_widget_set_size_request (c1, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (c1), _("Air France"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (c1), _("Tunisaire"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (c1), _("Turkish Air-Ligne"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (c1), _("Fly Emirates"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (c1), _("Katar Air-Ligne"));

  c2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (c2);
  gtk_fixed_put (GTK_FIXED (fixed1), c2, 320, 152);
  gtk_widget_set_size_request (c2, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (c2), _("Business class"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (c2), _("Class normale"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (c2), _("First class"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (c2), _("Economique"));

  label7 = gtk_label_new (_("Nombres des Biets\n         a Reserver :"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed1), label7, 0, 192);
  gtk_widget_set_size_request (label7, 152, 40);

  label20 = gtk_label_new (_("ID :"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed1), label20, 0, 32);
  gtk_widget_set_size_request (label20, 56, 24);

  l12 = gtk_label_new ("");
  gtk_widget_show (l12);
  gtk_fixed_put (GTK_FIXED (fixed1), l12, 312, 288);
  gtk_widget_set_size_request (l12, 192, 32);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 136, 296);
  gtk_widget_set_size_request (button1, 128, 37);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("Reserver"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox1), label12, FALSE, FALSE, 0);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 0, 296);
  gtk_widget_set_size_request (button2, 128, 37);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button2), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-select-all", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox2), label13, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, s4, "s4");
  GLADE_HOOKUP_OBJECT (window1, s2, "s2");
  GLADE_HOOKUP_OBJECT (window1, s3, "s3");
  GLADE_HOOKUP_OBJECT (window1, s5, "s5");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, label15, "label15");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, button3, "button3");
  GLADE_HOOKUP_OBJECT (window1, image4, "image4");
  GLADE_HOOKUP_OBJECT (window1, label8, "label8");
  GLADE_HOOKUP_OBJECT (window1, c3, "c3");
  GLADE_HOOKUP_OBJECT (window1, spinbutton1, "spinbutton1");
  GLADE_HOOKUP_OBJECT (window1, c1, "c1");
  GLADE_HOOKUP_OBJECT (window1, c2, "c2");
  GLADE_HOOKUP_OBJECT (window1, label7, "label7");
  GLADE_HOOKUP_OBJECT (window1, label20, "label20");
  GLADE_HOOKUP_OBJECT (window1, l12, "l12");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, label12, "label12");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window1, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window1, image2, "image2");
  GLADE_HOOKUP_OBJECT (window1, label13, "label13");

  return window1;
}

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;
  GtkWidget *fixed2;
  GtkWidget *treeview1;
  GtkWidget *label19;
  GtkWidget *button4;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image6;
  GtkWidget *label17;
  GtkWidget *Back;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image7;
  GtkWidget *label18;
  GtkWidget *button5;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image5;
  GtkWidget *label16;
  GtkWidget *button6;
  GtkWidget *image8;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2), _("window2"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (window2), fixed2);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview1, 40, 56);
  gtk_widget_set_size_request (treeview1, 560, 232);

  label19 = gtk_label_new (_("Liste des Reservations "));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed2), label19, 232, 8);
  gtk_widget_set_size_request (label19, 224, 33);

  button4 = gtk_button_new ();
  gtk_widget_show (button4);
  gtk_fixed_put (GTK_FIXED (fixed2), button4, 256, 304);
  gtk_widget_set_size_request (button4, 136, 40);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (button4), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image6 = gtk_image_new_from_stock ("gtk-properties", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox5), image6, FALSE, FALSE, 0);

  label17 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label17);
  gtk_box_pack_start (GTK_BOX (hbox5), label17, FALSE, FALSE, 0);

  Back = gtk_button_new ();
  gtk_widget_show (Back);
  gtk_fixed_put (GTK_FIXED (fixed2), Back, 40, 304);
  gtk_widget_set_size_request (Back, 128, 40);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (Back), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image7 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox6), image7, FALSE, FALSE, 0);

  label18 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label18);
  gtk_box_pack_start (GTK_BOX (hbox6), label18, FALSE, FALSE, 0);

  button5 = gtk_button_new ();
  gtk_widget_show (button5);
  gtk_fixed_put (GTK_FIXED (fixed2), button5, 472, 304);
  gtk_widget_set_size_request (button5, 112, 40);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (button5), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image5 = gtk_image_new_from_stock ("gtk-stop", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox4), image5, FALSE, FALSE, 0);

  label16 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label16);
  gtk_box_pack_start (GTK_BOX (hbox4), label16, FALSE, FALSE, 0);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed2), button6, 536, 8);
  gtk_widget_set_size_request (button6, 60, 40);

  image8 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_container_add (GTK_CONTAINER (button6), image8);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) button4, "clicked",
                    G_CALLBACK (on_button4_clicked),
                    NULL);
  g_signal_connect ((gpointer) Back, "clicked",
                    G_CALLBACK (on_Back_clicked),
                    NULL);
  g_signal_connect ((gpointer) button5, "clicked",
                    G_CALLBACK (on_button5_clicked),
                    NULL);
  g_signal_connect ((gpointer) button6, "clicked",
                    G_CALLBACK (on_button6_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");
  GLADE_HOOKUP_OBJECT (window2, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window2, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window2, label19, "label19");
  GLADE_HOOKUP_OBJECT (window2, button4, "button4");
  GLADE_HOOKUP_OBJECT (window2, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window2, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window2, image6, "image6");
  GLADE_HOOKUP_OBJECT (window2, label17, "label17");
  GLADE_HOOKUP_OBJECT (window2, Back, "Back");
  GLADE_HOOKUP_OBJECT (window2, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window2, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window2, image7, "image7");
  GLADE_HOOKUP_OBJECT (window2, label18, "label18");
  GLADE_HOOKUP_OBJECT (window2, button5, "button5");
  GLADE_HOOKUP_OBJECT (window2, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window2, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window2, image5, "image5");
  GLADE_HOOKUP_OBJECT (window2, label16, "label16");
  GLADE_HOOKUP_OBJECT (window2, button6, "button6");
  GLADE_HOOKUP_OBJECT (window2, image8, "image8");

  return window2;
}

GtkWidget*
create_window3 (void)
{
  GtkWidget *window3;
  GtkWidget *fixed3;
  GtkWidget *fixed4;
  GtkWidget *fixed5;
  GtkObject *spinbutton6_adj;
  GtkWidget *spinbutton6;
  GtkObject *spinbutton7_adj;
  GtkWidget *spinbutton7;
  GtkObject *spinbutton8_adj;
  GtkWidget *spinbutton8;
  GtkObject *spinbutton9_adj;
  GtkWidget *spinbutton9;
  GtkWidget *label35;
  GtkWidget *label36;
  GtkWidget *label37;
  GtkWidget *label39;
  GtkWidget *label40;
  GtkWidget *label41;
  GtkWidget *button10;
  GtkWidget *image12;
  GtkWidget *label42;
  GtkObject *spinbutton10_adj;
  GtkWidget *spinbutton10;
  GtkWidget *label43;
  GtkWidget *label44;
  GtkWidget *combobox3;
  GtkWidget *combobox1;
  GtkWidget *ff;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image10;
  GtkWidget *label33;
  GtkWidget *label38;
  GtkWidget *button8;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image11;
  GtkWidget *label34;
  GtkWidget *combobox2;
  GtkWidget *l12;

  window3 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window3), _("window3"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (window3), fixed3);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_fixed_put (GTK_FIXED (fixed3), fixed4, 0, 0);
  gtk_widget_set_size_request (fixed4, 0, 0);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_fixed_put (GTK_FIXED (fixed3), fixed5, 0, 0);
  gtk_widget_set_size_request (fixed5, 512, 333);

  spinbutton6_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton6_adj), 1, 0);
  gtk_widget_show (spinbutton6);
  gtk_fixed_put (GTK_FIXED (fixed5), spinbutton6, 240, 72);
  gtk_widget_set_size_request (spinbutton6, 60, 27);

  spinbutton7_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton7_adj), 1, 0);
  gtk_widget_show (spinbutton7);
  gtk_fixed_put (GTK_FIXED (fixed5), spinbutton7, 344, 72);
  gtk_widget_set_size_request (spinbutton7, 60, 27);

  spinbutton8_adj = gtk_adjustment_new (2019, 2019, 2025, 1, 10, 10);
  spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton8_adj), 1, 0);
  gtk_widget_show (spinbutton8);
  gtk_fixed_put (GTK_FIXED (fixed5), spinbutton8, 448, 72);
  gtk_widget_set_size_request (spinbutton8, 60, 27);

  spinbutton9_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinbutton9 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton9_adj), 1, 0);
  gtk_widget_show (spinbutton9);
  gtk_fixed_put (GTK_FIXED (fixed5), spinbutton9, 320, 200);
  gtk_widget_set_size_request (spinbutton9, 192, 27);

  label35 = gtk_label_new (_("A :"));
  gtk_widget_show (label35);
  gtk_fixed_put (GTK_FIXED (fixed5), label35, 408, 72);
  gtk_widget_set_size_request (label35, 41, 25);

  label36 = gtk_label_new (_("M :"));
  gtk_widget_show (label36);
  gtk_fixed_put (GTK_FIXED (fixed5), label36, 304, 72);
  gtk_widget_set_size_request (label36, 41, 25);

  label37 = gtk_label_new (_("J :"));
  gtk_widget_show (label37);
  gtk_fixed_put (GTK_FIXED (fixed5), label37, 192, 72);
  gtk_widget_set_size_request (label37, 41, 25);

  label39 = gtk_label_new (_("Date de Reservation :"));
  gtk_widget_show (label39);
  gtk_fixed_put (GTK_FIXED (fixed5), label39, 8, 72);
  gtk_widget_set_size_request (label39, 152, 25);

  label40 = gtk_label_new (_("Compagnie A\303\251rienne :"));
  gtk_widget_show (label40);
  gtk_fixed_put (GTK_FIXED (fixed5), label40, 0, 104);
  gtk_widget_set_size_request (label40, 176, 25);

  label41 = gtk_label_new (_("Class du Vol :"));
  gtk_widget_show (label41);
  gtk_fixed_put (GTK_FIXED (fixed5), label41, 0, 152);
  gtk_widget_set_size_request (label41, 120, 25);

  button10 = gtk_button_new ();
  gtk_widget_show (button10);
  gtk_fixed_put (GTK_FIXED (fixed5), button10, 448, 8);
  gtk_widget_set_size_request (button10, 50, 37);

  image12 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_container_add (GTK_CONTAINER (button10), image12);

  label42 = gtk_label_new (_("Voitures :"));
  gtk_widget_show (label42);
  gtk_fixed_put (GTK_FIXED (fixed5), label42, 8, 248);
  gtk_widget_set_size_request (label42, 80, 25);

  spinbutton10_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinbutton10 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton10_adj), 1, 0);
  gtk_widget_show (spinbutton10);
  gtk_fixed_put (GTK_FIXED (fixed5), spinbutton10, 72, 32);
  gtk_widget_set_size_request (spinbutton10, 60, 27);

  label43 = gtk_label_new (_("Nombres des Biets\n         a Reserver :"));
  gtk_widget_show (label43);
  gtk_fixed_put (GTK_FIXED (fixed5), label43, 0, 192);
  gtk_widget_set_size_request (label43, 152, 40);

  label44 = gtk_label_new (_("ID :"));
  gtk_widget_show (label44);
  gtk_fixed_put (GTK_FIXED (fixed5), label44, 0, 32);
  gtk_widget_set_size_request (label44, 56, 24);

  combobox3 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (combobox3);
  gtk_fixed_put (GTK_FIXED (fixed5), combobox3, 320, 152);
  gtk_widget_set_size_request (combobox3, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3), _("Business class"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3), _("Class normale"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3), _("First class"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3), _("Economique"));

  combobox1 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (combobox1);
  gtk_fixed_put (GTK_FIXED (fixed5), combobox1, 320, 240);
  gtk_widget_set_size_request (combobox1, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("Oui"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("Non"));

  ff = gtk_button_new ();
  gtk_widget_show (ff);
  gtk_fixed_put (GTK_FIXED (fixed5), ff, 0, 296);
  gtk_widget_set_size_request (ff, 128, 37);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (ff), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image10 = gtk_image_new_from_stock ("gtk-select-all", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox8), image10, FALSE, FALSE, 0);

  label33 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label33);
  gtk_box_pack_start (GTK_BOX (hbox8), label33, FALSE, FALSE, 0);

  label38 = gtk_label_new (_("Modifier Vol"));
  gtk_widget_show (label38);
  gtk_fixed_put (GTK_FIXED (fixed5), label38, 160, 8);
  gtk_widget_set_size_request (label38, 184, 40);

  button8 = gtk_button_new ();
  gtk_widget_show (button8);
  gtk_fixed_put (GTK_FIXED (fixed5), button8, 136, 296);
  gtk_widget_set_size_request (button8, 128, 37);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (button8), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image11 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox9), image11, FALSE, FALSE, 0);

  label34 = gtk_label_new_with_mnemonic (_("Reserver"));
  gtk_widget_show (label34);
  gtk_box_pack_start (GTK_BOX (hbox9), label34, FALSE, FALSE, 0);

  combobox2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (combobox2);
  gtk_fixed_put (GTK_FIXED (fixed5), combobox2, 320, 104);
  gtk_widget_set_size_request (combobox2, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Air France"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Tunisaire"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Turkish Air-Ligne"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Fly Emirates"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Katar Air-Ligne"));

  l12 = gtk_label_new ("");
  gtk_widget_show (l12);
  gtk_fixed_put (GTK_FIXED (fixed5), l12, 312, 288);
  gtk_widget_set_size_request (l12, 192, 32);

  g_signal_connect ((gpointer) button10, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);
  g_signal_connect ((gpointer) ff, "clicked",
                    G_CALLBACK (on_ff_clicked),
                    NULL);
  g_signal_connect ((gpointer) button8, "clicked",
                    G_CALLBACK (on_button8_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window3, window3, "window3");
  GLADE_HOOKUP_OBJECT (window3, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window3, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (window3, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (window3, spinbutton6, "spinbutton6");
  GLADE_HOOKUP_OBJECT (window3, spinbutton7, "spinbutton7");
  GLADE_HOOKUP_OBJECT (window3, spinbutton8, "spinbutton8");
  GLADE_HOOKUP_OBJECT (window3, spinbutton9, "spinbutton9");
  GLADE_HOOKUP_OBJECT (window3, label35, "label35");
  GLADE_HOOKUP_OBJECT (window3, label36, "label36");
  GLADE_HOOKUP_OBJECT (window3, label37, "label37");
  GLADE_HOOKUP_OBJECT (window3, label39, "label39");
  GLADE_HOOKUP_OBJECT (window3, label40, "label40");
  GLADE_HOOKUP_OBJECT (window3, label41, "label41");
  GLADE_HOOKUP_OBJECT (window3, button10, "button10");
  GLADE_HOOKUP_OBJECT (window3, image12, "image12");
  GLADE_HOOKUP_OBJECT (window3, label42, "label42");
  GLADE_HOOKUP_OBJECT (window3, spinbutton10, "spinbutton10");
  GLADE_HOOKUP_OBJECT (window3, label43, "label43");
  GLADE_HOOKUP_OBJECT (window3, label44, "label44");
  GLADE_HOOKUP_OBJECT (window3, combobox3, "combobox3");
  GLADE_HOOKUP_OBJECT (window3, combobox1, "combobox1");
  GLADE_HOOKUP_OBJECT (window3, ff, "ff");
  GLADE_HOOKUP_OBJECT (window3, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (window3, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (window3, image10, "image10");
  GLADE_HOOKUP_OBJECT (window3, label33, "label33");
  GLADE_HOOKUP_OBJECT (window3, label38, "label38");
  GLADE_HOOKUP_OBJECT (window3, button8, "button8");
  GLADE_HOOKUP_OBJECT (window3, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (window3, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (window3, image11, "image11");
  GLADE_HOOKUP_OBJECT (window3, label34, "label34");
  GLADE_HOOKUP_OBJECT (window3, combobox2, "combobox2");
  GLADE_HOOKUP_OBJECT (window3, l12, "l12");

  return window3;
}

GtkWidget*
create_window4 (void)
{
  GtkWidget *window4;
  GtkWidget *fixed6;
  GtkWidget *l45;
  GtkWidget *bq;

  window4 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window4), _("window4"));

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (window4), fixed6);

  l45 = gtk_label_new (_("Suppression Terminer !"));
  gtk_widget_show (l45);
  gtk_fixed_put (GTK_FIXED (fixed6), l45, 64, 24);
  gtk_widget_set_size_request (l45, 192, 41);

  bq = gtk_button_new_with_mnemonic (_("Ok"));
  gtk_widget_show (bq);
  gtk_fixed_put (GTK_FIXED (fixed6), bq, 120, 72);
  gtk_widget_set_size_request (bq, 74, 29);

  g_signal_connect ((gpointer) bq, "clicked",
                    G_CALLBACK (on_bq_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window4, window4, "window4");
  GLADE_HOOKUP_OBJECT (window4, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (window4, l45, "l45");
  GLADE_HOOKUP_OBJECT (window4, bq, "bq");

  return window4;
}
