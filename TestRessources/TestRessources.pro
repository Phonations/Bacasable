QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

SOURCES += main.cpp \

INCLUDEPATH += ../../libs

mac {
INCLUDEPATH += /Library/Frameworks \
                /Library/Frameworks/SDL.framework/Headers\
                /Library/Frameworks/SDL_image.framework/Headers \
                /Library/Frameworks/SDL_ttf.framework/Headers
DEPENDPATH += /Library/Frameworks
LIBS += -F/Library/Frameworks \
-framework Cocoa
LIBS += -framework SDL -framework SDL_image -framework SDL_ttf
}

RESOURCES += \
    TestRessources.qrc
