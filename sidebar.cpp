

#include "sidebar.h"
#include <gtk/gtk.h>

SideBar::SideBar(MyWindow* w) {
    my_window = w;
    main_hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    
    GtkWidget *content_area = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);

    gtk_box_pack_end(GTK_BOX(main_hbox), content_area, TRUE, TRUE, 0);

    gtk_container_add(GTK_CONTAINER(my_window), main_hbox);
}

