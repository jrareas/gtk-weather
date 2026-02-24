

#ifndef __FSE_WEATHER_SIDEBAR__
#define __FSE_WEATHER_SIDEBAR__
#include "window.h"

class SideBar{
    public:
        SideBar (MyWindow* w);
    private:
        GtkWidget *main_hbox;
        MyWindow* my_window;
    
};

#endif
