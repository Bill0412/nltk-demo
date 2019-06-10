#ifndef __GUI_H
#define __GUI_H

#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.H>
#include <string>
#include <vector>

using namespace std;

int w{Fl::w()/2}, h{Fl::h()};
enum typeChess {empty, black, white};

#include "Point.h"
#include "Shape.h"
#include "Line.h"
#include "Circle.h"
#include "Text.h"
#include "Windows.h"
#include "Board.h"

#endif