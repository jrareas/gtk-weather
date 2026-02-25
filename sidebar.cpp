#include "sidebar.h"
#include <gtk/gtk.h>

struct side_bar_elements {
    char* icon;
    uint8_t* signal;
};

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
    list = gtk_list_box_new ();
    gtk_window_set_child(GTK_WINDOW(SideBar::window), list);

    box = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 6);
    gtk_widget_set_size_request(box, 10, 10);

    gtk_list_box_append (GTK_LIST_BOX (list), box);
    icon = gtk_image_new_from_file("icons/settings.png");
    button = gtk_button_new();
    gtk_button_set_child(GTK_BUTTON(button), icon);
    gtk_box_append(GTK_BOX(box), button);
    

    box = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 6);
    gtk_list_box_append (GTK_LIST_BOX (list), box);
    icon = gtk_image_new_from_file("icons/power.png");
    button = gtk_button_new();
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


