#ifndef __FSE_WEATHER_MAIN_WINDOW__
#define __FSE_WEATHER_MAIN_WINDOW__

#include <gtk/gtk.h>
#include "sidebar.h"

class MyWindow{
    protected:
        GtkWidget *window;
        SideBar *side_bar;
    public:
        MyWindow();
        void setApp(GtkApplication* app);
        void setWindowDimensions(gint width, gint height);
        void removeTitleBar();
};

#endif // __MAIN_WINDOW__