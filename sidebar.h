

#ifndef __FSE_WEATHER_SIDEBAR__
#define __FSE_WEATHER_SIDEBAR__
#include <gtk/gtk.h>
class SideBar{
    public:
        GtkWidget *window;
        SideBar(GtkWidget* w);
    private:
        GtkWidget *main_hbox;
        gboolean on_close_request(GtkWindow *window, gpointer user_data);
};

#endif
