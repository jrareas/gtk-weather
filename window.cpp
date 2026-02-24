#include "window.h"
#include <gtk/gtk.h>

MyWindow::MyWindow() {

}

void MyWindow::setApp(GtkApplication* app) {
    MyWindow::window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (MyWindow::window), "Window");
    gtk_window_set_default_size (GTK_WINDOW (MyWindow::window), 200, 200);
    gtk_window_present (GTK_WINDOW (MyWindow::window));
    MyWindow::setWindowDimensions(800, 480);
}

void MyWindow::removeTitleBar() {
    gtk_window_set_decorated(GTK_WINDOW(MyWindow::window), FALSE);
}

void MyWindow::setWindowDimensions(gint width, gint height) {
    gtk_widget_set_size_request(MyWindow::window, width, height);
}
