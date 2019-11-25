/****************************************************************************
** Meta object code from reading C++ file 'plotter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../escultor3/plotter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Plotter_t {
    QByteArrayData data[21];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Plotter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Plotter_t qt_meta_stringdata_Plotter = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Plotter"
QT_MOC_LITERAL(1, 8, 6), // "mouseX"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 6), // "mouseY"
QT_MOC_LITERAL(4, 23, 7), // "returnR"
QT_MOC_LITERAL(5, 31, 2), // "_r"
QT_MOC_LITERAL(6, 34, 7), // "returnG"
QT_MOC_LITERAL(7, 42, 2), // "_g"
QT_MOC_LITERAL(8, 45, 7), // "returnB"
QT_MOC_LITERAL(9, 53, 2), // "_b"
QT_MOC_LITERAL(10, 56, 11), // "modificaDim"
QT_MOC_LITERAL(11, 68, 4), // "_dim"
QT_MOC_LITERAL(12, 73, 18), // "modificaRaioSphere"
QT_MOC_LITERAL(13, 92, 2), // "_R"
QT_MOC_LITERAL(14, 95, 12), // "modificaDimX"
QT_MOC_LITERAL(15, 108, 2), // "_x"
QT_MOC_LITERAL(16, 111, 12), // "modificaDimY"
QT_MOC_LITERAL(17, 124, 2), // "_y"
QT_MOC_LITERAL(18, 127, 12), // "modificaDimZ"
QT_MOC_LITERAL(19, 140, 2), // "_z"
QT_MOC_LITERAL(20, 143, 15) // "criarNovaMatriz"

    },
    "Plotter\0mouseX\0\0mouseY\0returnR\0_r\0"
    "returnG\0_g\0returnB\0_b\0modificaDim\0"
    "_dim\0modificaRaioSphere\0_R\0modificaDimX\0"
    "_x\0modificaDimY\0_y\0modificaDimZ\0_z\0"
    "criarNovaMatriz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plotter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   75,    2, 0x0a /* Public */,
       6,    1,   78,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      12,    1,   87,    2, 0x0a /* Public */,
      14,    1,   90,    2, 0x0a /* Public */,
      16,    1,   93,    2, 0x0a /* Public */,
      18,    1,   96,    2, 0x0a /* Public */,
      20,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,

       0        // eod
};

void Plotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Plotter *_t = static_cast<Plotter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mouseY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->returnR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->returnG((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->returnB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->modificaDim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->modificaRaioSphere((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->modificaDimX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->modificaDimY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->modificaDimZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->criarNovaMatriz(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Plotter::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::mouseX)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Plotter::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::mouseY)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Plotter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Plotter.data,
      qt_meta_data_Plotter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Plotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plotter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Plotter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Plotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Plotter::mouseX(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Plotter::mouseY(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
