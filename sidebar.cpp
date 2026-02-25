#include "sidebar.h"
#include <gtk/gtk.h>
#include <string>

struct side_bar_elements {
    char* icon;
    uint8_t* signal;
};

#ifndef SHARE_ICON 
#define SHARE_ICON "/usr/share/icons/"
#endif

// static side_bar_elements* sbar_items = 
//     {
//         {
//             .icon = "icons/settings.png",
//             .button = 
//             .signal = g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_window_destroy), window);
//         }
//     };

SideBar::SideBar(GtkWidget* w) {
    SideBar::window = w;

    GtkWidget *list, *box, *icon, *button;
    char icon_str[100] = SHARE_ICON;
    list = gtk_list_box_new ();
    gtk_window_set_child(GTK_WINDOW(SideBar::window), list);
    
    box = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 6);
    gtk_widget_set_size_request(box, 10, 10);

    gtk_list_box_append (GTK_LIST_BOX (list), box);
    strcat(icon_str, "settings.png");
    icon = gtk_image_new_from_file(icon_str);
    button = gtk_button_new();
    gtk_button_set_child(GTK_BUTTON(button), icon);
    gtk_box_append(GTK_BOX(box), button);
    gtk_widget_set_size_request(button, 50, 50); 
    
    strcpy(icon_str, SHARE_ICON);

    box = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 6);
    gtk_list_box_append (GTK_LIST_BOX (list), box);
    strcat(icon_str, "power.png");
    icon = gtk_image_new_from_file(icon_str);
    button = gtk_button_new();
    gtk_widget_set_size_request(button, 50, 50); 
    gtk_button_set_child(GTK_BUTTON(button), icon);
    g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_window_destroy), window);
    gtk_box_append(GTK_BOX(box), button);
}

// SideBar::set_elements() {
//     // uint8_t* sidebar_elements = [

//     // ]
//     // for (int)
// }

gboolean SideBar::on_close_request(GtkWindow *window, gpointer user_data) {
    return true;
}


