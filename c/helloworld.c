#include <stdio.h>
#include <python2.7/Python.h>
/*
 * FUNCTION IN C
   static PyObject *MyFunction( PyObject *self, PyObject *args );
   static PyObject *MyFunctionWithKeywords(PyObject *self, PyObject *args, PyObject *kw);
   static PyObject *MyFunctionWithNoArgs( PyObject *self );

  Struct object
    struct PyMethodDef {
        char *ml_name;
        PyCFunction ml_meth;
        int ml_flags;
        char *ml_doc;
    };
 */
/*
static PyObject *spam_system(PyObject *self, PyObject *args) {
    const char *command;
    int sts;

    if (!PyArg_ParseTuple(args, "s", &command))
        return NULL;
    sts = system(command);

    
    return Py_BuildValue("i", sts);
    //Py_INCREF(Py_None);
    //return Py_None;
}
*/

static PyObject *msg(PyObject *self, PyObject *args) {
    /* Do your stuff here. */
    return Py_BuildValue("s", "Hello, python extensions!! ");
    //Py_INCREF(Py_None);
    //return Py_None;
}

static PyMethodDef module_method[] =
{
    {
        "msg",
        (PyCFunction)msg,
        METH_NOARGS,
        "helloworld( ): Any message you want to put here!!\n"
    },
    {
        NULL
    }
};


/*
    PyMODINIT_FUNC init_module(){
        Py_InitModule3(hello_word,module_method,"init modelu hello_word");
    }
*/

void inithelloworld(void) {
    Py_InitModule3("helloworld", module_method, "Extension module example!");
}
