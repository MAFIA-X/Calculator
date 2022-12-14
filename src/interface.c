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
  GtkWidget *entry1;
  GtkWidget *Clear;
  GtkWidget *Bksp;
  GtkWidget *Ce;
  GtkWidget *pmm;
  GtkWidget *one;
  GtkWidget *two;
  GtkWidget *three;
  GtkWidget *add;
  GtkWidget *sub;
  GtkWidget *mul;
  GtkWidget *div;
  GtkWidget *four;
  GtkWidget *five;
  GtkWidget *six;
  GtkWidget *seven;
  GtkWidget *eight;
  GtkWidget *nine;
  GtkWidget *zero;
  GtkWidget *dot;
  GtkWidget *equall;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 8, 0);
  gtk_widget_set_size_request (entry1, 320, 56);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  Clear = gtk_button_new_with_mnemonic (_("clear"));
  gtk_widget_show (Clear);
  gtk_fixed_put (GTK_FIXED (fixed1), Clear, 16, 72);
  gtk_widget_set_size_request (Clear, 70, 29);

  Bksp = gtk_button_new_with_mnemonic (_("bksp"));
  gtk_widget_show (Bksp);
  gtk_fixed_put (GTK_FIXED (fixed1), Bksp, 104, 72);
  gtk_widget_set_size_request (Bksp, 69, 29);

  Ce = gtk_button_new_with_mnemonic (_("ce"));
  gtk_widget_show (Ce);
  gtk_fixed_put (GTK_FIXED (fixed1), Ce, 192, 72);
  gtk_widget_set_size_request (Ce, 70, 29);

  pmm = gtk_button_new_with_mnemonic (_("pm"));
  gtk_widget_show (pmm);
  gtk_fixed_put (GTK_FIXED (fixed1), pmm, 280, 72);
  gtk_widget_set_size_request (pmm, 69, 29);

  one = gtk_button_new_with_mnemonic (_("1"));
  gtk_widget_show (one);
  gtk_fixed_put (GTK_FIXED (fixed1), one, 16, 112);
  gtk_widget_set_size_request (one, 70, 29);

  two = gtk_button_new_with_mnemonic (_("2"));
  gtk_widget_show (two);
  gtk_fixed_put (GTK_FIXED (fixed1), two, 104, 112);
  gtk_widget_set_size_request (two, 70, 29);

  three = gtk_button_new_with_mnemonic (_("3"));
  gtk_widget_show (three);
  gtk_fixed_put (GTK_FIXED (fixed1), three, 192, 112);
  gtk_widget_set_size_request (three, 70, 29);

  add = gtk_button_new_with_mnemonic (_("+"));
  gtk_widget_show (add);
  gtk_fixed_put (GTK_FIXED (fixed1), add, 280, 112);
  gtk_widget_set_size_request (add, 69, 29);

  sub = gtk_button_new_with_mnemonic (_("-"));
  gtk_widget_show (sub);
  gtk_fixed_put (GTK_FIXED (fixed1), sub, 280, 152);
  gtk_widget_set_size_request (sub, 78, 29);

  mul = gtk_button_new_with_mnemonic (_("*"));
  gtk_widget_show (mul);
  gtk_fixed_put (GTK_FIXED (fixed1), mul, 280, 192);
  gtk_widget_set_size_request (mul, 79, 29);

  div = gtk_button_new_with_mnemonic (_("/"));
  gtk_widget_show (div);
  gtk_fixed_put (GTK_FIXED (fixed1), div, 280, 232);
  gtk_widget_set_size_request (div, 78, 29);

  four = gtk_button_new_with_mnemonic (_("4"));
  gtk_widget_show (four);
  gtk_fixed_put (GTK_FIXED (fixed1), four, 16, 152);
  gtk_widget_set_size_request (four, 70, 29);

  five = gtk_button_new_with_mnemonic (_("5"));
  gtk_widget_show (five);
  gtk_fixed_put (GTK_FIXED (fixed1), five, 104, 152);
  gtk_widget_set_size_request (five, 79, 29);

  six = gtk_button_new_with_mnemonic (_("6"));
  gtk_widget_show (six);
  gtk_fixed_put (GTK_FIXED (fixed1), six, 192, 152);
  gtk_widget_set_size_request (six, 79, 29);

  seven = gtk_button_new_with_mnemonic (_("7"));
  gtk_widget_show (seven);
  gtk_fixed_put (GTK_FIXED (fixed1), seven, 16, 192);
  gtk_widget_set_size_request (seven, 79, 29);

  eight = gtk_button_new_with_mnemonic (_("8"));
  gtk_widget_show (eight);
  gtk_fixed_put (GTK_FIXED (fixed1), eight, 104, 192);
  gtk_widget_set_size_request (eight, 78, 29);

  nine = gtk_button_new_with_mnemonic (_("9"));
  gtk_widget_show (nine);
  gtk_fixed_put (GTK_FIXED (fixed1), nine, 192, 192);
  gtk_widget_set_size_request (nine, 79, 29);

  zero = gtk_button_new_with_mnemonic (_("0"));
  gtk_widget_show (zero);
  gtk_fixed_put (GTK_FIXED (fixed1), zero, 16, 232);
  gtk_widget_set_size_request (zero, 79, 29);

  dot = gtk_button_new_with_mnemonic (_("."));
  gtk_widget_show (dot);
  gtk_fixed_put (GTK_FIXED (fixed1), dot, 104, 232);
  gtk_widget_set_size_request (dot, 78, 29);

  equall = gtk_button_new_with_mnemonic (_("="));
  gtk_widget_show (equall);
  gtk_fixed_put (GTK_FIXED (fixed1), equall, 192, 232);
  gtk_widget_set_size_request (equall, 79, 29);

  g_signal_connect ((gpointer) Clear, "clicked",
                    G_CALLBACK (on_Clear_clicked),
                    NULL);
  g_signal_connect ((gpointer) Bksp, "clicked",
                    G_CALLBACK (on_Bksp_clicked),
                    NULL);
  g_signal_connect ((gpointer) Ce, "clicked",
                    G_CALLBACK (on_Ce_clicked),
                    NULL);
  g_signal_connect ((gpointer) one, "clicked",
                    G_CALLBACK (on_one_clicked),
                    NULL);
  g_signal_connect ((gpointer) two, "clicked",
                    G_CALLBACK (on_two_clicked),
                    NULL);
  g_signal_connect ((gpointer) three, "clicked",
                    G_CALLBACK (on_three_clicked),
                    NULL);
  g_signal_connect ((gpointer) add, "clicked",
                    G_CALLBACK (on_add_clicked),
                    NULL);
  g_signal_connect ((gpointer) sub, "clicked",
                    G_CALLBACK (on_sub_clicked),
                    NULL);
  g_signal_connect ((gpointer) mul, "clicked",
                    G_CALLBACK (on_mul_clicked),
                    NULL);
  g_signal_connect ((gpointer) div, "clicked",
                    G_CALLBACK (on_div_clicked),
                    NULL);
  g_signal_connect ((gpointer) four, "clicked",
                    G_CALLBACK (on_four_clicked),
                    NULL);
  g_signal_connect ((gpointer) five, "clicked",
                    G_CALLBACK (on_five_clicked),
                    NULL);
  g_signal_connect ((gpointer) six, "clicked",
                    G_CALLBACK (on_six_clicked),
                    NULL);
  g_signal_connect ((gpointer) seven, "clicked",
                    G_CALLBACK (on_seven_clicked),
                    NULL);
  g_signal_connect ((gpointer) eight, "clicked",
                    G_CALLBACK (on_eight_clicked),
                    NULL);
  g_signal_connect ((gpointer) nine, "clicked",
                    G_CALLBACK (on_nine_clicked),
                    NULL);
  g_signal_connect ((gpointer) zero, "clicked",
                    G_CALLBACK (on_zero_clicked),
                    NULL);
  g_signal_connect ((gpointer) dot, "clicked",
                    G_CALLBACK (on_dot_clicked),
                    NULL);
  g_signal_connect ((gpointer) equall, "clicked",
                    G_CALLBACK (on_equall_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, Clear, "Clear");
  GLADE_HOOKUP_OBJECT (window1, Bksp, "Bksp");
  GLADE_HOOKUP_OBJECT (window1, Ce, "Ce");
  GLADE_HOOKUP_OBJECT (window1, pmm, "pmm");
  GLADE_HOOKUP_OBJECT (window1, one, "one");
  GLADE_HOOKUP_OBJECT (window1, two, "two");
  GLADE_HOOKUP_OBJECT (window1, three, "three");
  GLADE_HOOKUP_OBJECT (window1, add, "add");
  GLADE_HOOKUP_OBJECT (window1, sub, "sub");
  GLADE_HOOKUP_OBJECT (window1, mul, "mul");
  GLADE_HOOKUP_OBJECT (window1, div, "div");
  GLADE_HOOKUP_OBJECT (window1, four, "four");
  GLADE_HOOKUP_OBJECT (window1, five, "five");
  GLADE_HOOKUP_OBJECT (window1, six, "six");
  GLADE_HOOKUP_OBJECT (window1, seven, "seven");
  GLADE_HOOKUP_OBJECT (window1, eight, "eight");
  GLADE_HOOKUP_OBJECT (window1, nine, "nine");
  GLADE_HOOKUP_OBJECT (window1, zero, "zero");
  GLADE_HOOKUP_OBJECT (window1, dot, "dot");
  GLADE_HOOKUP_OBJECT (window1, equall, "equall");

  return window1;
}

