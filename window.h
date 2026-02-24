#ifndef __MAIN_WINDOW__
#define __MAIN_WINDOW__

#include <gtk/gtk.h>

class MyWindow{
    protected:
        GtkWidget *window;
    public:
        MyWindow();
        void setApp(GtkApplication* app);
        void setWindowDimensions(gint width, gint height);
        void removeTitleBar();
};

#endif // __MAIN_WINDOW__