/*
 * File:   main.cpp
 * Author: ganbold
 *
 * Created on March 4, 2019, 8:45 PM
 */

#include <QApplication>
#include "Window.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    Window window;
    window.show();

    return app.exec();
}
