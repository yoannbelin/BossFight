TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += cpp/main.cpp \
    cpp/sfml.cpp \
    cpp/livingentities.cpp \
    cpp/player.cpp \
    cpp/boss.cpp \
    cpp/game.cpp


# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    cpp/sfml.h \
    cpp/livingentities.h \
    cpp/player.h \
    cpp/boss.h \
    cpp/game.h

DISTFILES += \
    qml/qml.qml

INCLUDEPATH += C:\BossFight-master\SFML-2.4.2\include
DEPENDPATH += C:\BossFight-master\SFML-2.4.2\include

LIBS += -LC:\BossFight-master\SFML-2.4.2-Build\LIBS

CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-system-d -lsfml-network-d -lsfml-main-d -lsfml-window-d -lsfml-graphics-d
CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-system -lsfml-network -lsfml-main -lsfml-window -lsfml-graphics
