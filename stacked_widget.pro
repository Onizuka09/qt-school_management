QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets sql

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Sql_con.cpp \
    dialog_myclassmates.cpp \
    dialog_std_teacher_info.cpp \
    grades_chart.cpp \
    main.cpp \
    mainwindow.cpp \
    notification.cpp \
    std_info.cpp \
    student_con.cpp \
    timetable.cpp

HEADERS += \
    Sql_con.h \
    database_info.h \
    dialog_myclassmates.h \
    dialog_std_teacher_info.h \
    grades_chart.h \
    mainwindow.h \
    notification.h \
    std_info.h \
    student_con.h \
    timetable.h

FORMS += \
    dialog_myclassmates.ui \
    dialog_std_teacher_info.ui \
    mainwindow.ui \
    std_info.ui \
    student_con.ui \
    timetable.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
