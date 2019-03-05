/*
 * File:   Window.h
 * Author: ganbold
 *
 * Created on March 4, 2019, 8:45 PM
 */

#ifndef _WINDOW_H
#define _WINDOW_H

#include "ui_Window.h"

/** @brief Window Class. It is derived from QMainWindow. 
    A window provides a framework for 
    building an application's user interface.
    @author D.Huynh and G.Adilbish
    @date March 2019
    */

class Window : public QMainWindow {
    Q_OBJECT /* The QObject class is the base class of all Qt objects.*/
public:
    /** Default constructor. It begins 
        a setup for an application's user interface.
        */
    Window();
    /** Default destructor.
        */
    virtual ~Window();
private:
    Ui::Window widget; /**<The private ui object provides the code for setting up and managing the user interface.*/
};

#endif /* _WINDOW_H */
