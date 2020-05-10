#include <Python.h>
#include <math.h>

double distanceTo(double x, double y){
    return sqrt(pow(x,2) + pow(y,2));
};

double distanceToZero(double a, double b, double c){
    return abs(c)/sqrt(pow(a,2) + pow(b,2));
};

double distanceToPoint(double x, double y, double a, double b, double c){
    return abs(a*x + b*y + c)/sqrt(pow(a,2) + pow(b,2));
};

int isParallel(double a1, double b1, double c1, double a2, double b2, double c2){
    return abs(a1/b1*(-1) - a2/b2*(-1)) < 0.0001;
};

static PyObject *py_distanceTo(PyObject *self, PyObject *args) {
    double x, y, result;

    if (!PyArg_ParseTuple(args,"dd", &x, &y)) {
        return NULL;
    }
    result = distanceTo(x,y);
    return Py_BuildValue("d", result);
};

static PyObject *py_distanceToZero(PyObject *self, PyObject *args) {
    double x, y, z,result;

    if (!PyArg_ParseTuple(args,"ddd", &x, &y, &z)) {
        return NULL;
    }
    result = distanceToZero(x,y,z);
    return Py_BuildValue("d", result);
};
static PyObject *py_distanceToPoint(PyObject *self, PyObject *args) {
    double x, y, a, b, c, result;

    if (!PyArg_ParseTuple(args,"ddddd", &x, &y, &a, &b, &c)) {
        return NULL;
    }
    result = distanceToPoint(x,y,a,b,c);
    return Py_BuildValue("d", result);
};

static PyObject *py_isParallel(PyObject *self, PyObject *args) {
    double a1, b1, c1, a2, b2, c2;
    int result;

    if (!PyArg_ParseTuple(args,"dddddd", &a1, &b1, &c1, &a2, &b2, &c2)) {
        return NULL;
    }
    result = isParallel(a1, b1, c1, a2, b2, c2);
    return Py_BuildValue("i", result);
};

static struct PyMethodDef ownmod_methods[] = {
        {
                "distanceTo", 
                py_distanceTo,
                METH_VARARGS,
                "Возращает растояние от начала координат до точки"
        },
        {
                "distanceToZero",  
                py_distanceToZero, 
                METH_VARARGS,
                "Возвращает растояние от начала координат до прямой"
        },
        {
                "distanceToPoint",  
                py_distanceToPoint, 
                METH_VARARGS,
                "Возвращает растояние от прямой до точки"
        },
        {
                "isParallel",  
                py_isParallel, 
                METH_VARARGS,
                "Проверяет параллельны ли линии"
        },
        { NULL, NULL }
};

static PyModuleDef simple_module = {
        PyModuleDef_HEAD_INIT,
        "lineAndPoint", 
        "description", 
        -1,
        ownmod_methods
};

PyMODINIT_FUNC PyInit_lineAndPoint(void) {
    PyObject* m;

    m = PyModule_Create(&simple_module);
    if (m == NULL)
        return NULL;
    return m;
};

