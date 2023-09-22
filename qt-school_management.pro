TARGET =qt-school_management
QT       += core gui 

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets sql charts

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Sources/Sql_con.cpp \
    Sources/dialog_myclassmates.cpp \
    Sources/dialog_std_teacher_info.cpp \
    Sources/dialog_student_form.cpp \
    Sources/dialog_teacher_form.cpp \
    Sources/grades_chart.cpp \
    Sources/main.cpp \
    Sources/mainwindow.cpp \
    Sources/notification.cpp \
    Sources/student_con.cpp \
    Sources/teacher_module.cpp \
    Sources/timetable.cpp

HEADERS += \
    Headers/Sql_con.h \
    Headers/database_info.h \
    Headers/dialog_myclassmates.h \
    Headers/dialog_std_teacher_info.h \
    Headers/dialog_student_form.h \
    Headers/dialog_teacher_form.h \
    Headers/grades_chart.h \
    Headers/mainwindow.h \
    Headers/notification.h \
    Headers/student_con.h \
    Headers/teacher_module.h \
    Headers/timetable.h

FORMS += \
    Forms/dialog_myclassmates.ui \
    Forms/dialog_std_teacher_info.ui \
    Forms/dialog_student_form.ui \
    Forms/dialog_teacher_form.ui \
    Forms/mainwindow.ui \
    Forms/student_con.ui \
    Forms/teacher_module.ui \
    Forms/timetable.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
OBJECTS_DIR = $$PWD/build/obj
UI_DIR = $$PWD/build/ui_headers
MOC_DIR = $$PWD/build/moc_dir
RCC_DIR = $$PWD/build/qrc_sources
RESOURCES += \
    resources/resources.qrc
