/* Generated code for Python module 'numpy.core._add_newdocs'
 * created by Nuitka version 1.8.4
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_numpy$core$_add_newdocs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$_add_newdocs;
PyDictObject *moduledict_numpy$core$_add_newdocs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[312];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[312];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("numpy.core._add_newdocs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 312; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$_add_newdocs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 312; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d3cfb5a701c7ec601bdd4c811afc6b9d;
static PyCodeObject *codeobj_626c36d86a7f73a10208dbfce6cc25f1;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[308]); CHECK_OBJECT(module_filename_obj);
    codeobj_d3cfb5a701c7ec601bdd4c811afc6b9d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[309], mod_consts[309], NULL, NULL, 0, 0, 0);
    codeobj_626c36d86a7f73a10208dbfce6cc25f1 = MAKE_CODE_OBJECT(module_filename_obj, 6753, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[229], mod_consts[229], mod_consts[310], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute(PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_attr = python_pars[0];
    PyObject *par_method = python_pars[1];
    struct Nuitka_FrameObject *frame_626c36d86a7f73a10208dbfce6cc25f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_626c36d86a7f73a10208dbfce6cc25f1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_626c36d86a7f73a10208dbfce6cc25f1)) {
        Py_XDECREF(cache_frame_626c36d86a7f73a10208dbfce6cc25f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_626c36d86a7f73a10208dbfce6cc25f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_626c36d86a7f73a10208dbfce6cc25f1 = MAKE_FUNCTION_FRAME(tstate, codeobj_626c36d86a7f73a10208dbfce6cc25f1, module_numpy$core$_add_newdocs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_626c36d86a7f73a10208dbfce6cc25f1->m_type_description == NULL);
    frame_626c36d86a7f73a10208dbfce6cc25f1 = cache_frame_626c36d86a7f73a10208dbfce6cc25f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_626c36d86a7f73a10208dbfce6cc25f1);
    assert(Py_REFCNT(frame_626c36d86a7f73a10208dbfce6cc25f1) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_attr);
        tmp_tuple_element_1 = par_attr;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            nuitka_bool tmp_condition_result_1;
            int tmp_truth_name_1;
            PyObject *tmp_kw_call_arg_value_2_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_kw_call_arg_value_0_1 = mod_consts[0];
            CHECK_OBJECT(par_method);
            tmp_truth_name_1 = CHECK_IF_TRUE(par_method);
            if (tmp_truth_name_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 6760;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_kw_call_arg_value_1_1 = mod_consts[1];
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_kw_call_arg_value_1_1 = mod_consts[2];
            condexpr_end_1:;
            CHECK_OBJECT(par_attr);
            tmp_kw_call_arg_value_2_1 = par_attr;
            frame_626c36d86a7f73a10208dbfce6cc25f1->m_frame.f_lineno = 6760;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 6760;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_626c36d86a7f73a10208dbfce6cc25f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_626c36d86a7f73a10208dbfce6cc25f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_626c36d86a7f73a10208dbfce6cc25f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_626c36d86a7f73a10208dbfce6cc25f1,
        type_description_1,
        par_attr,
        par_method,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_626c36d86a7f73a10208dbfce6cc25f1 == cache_frame_626c36d86a7f73a10208dbfce6cc25f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_626c36d86a7f73a10208dbfce6cc25f1);
        cache_frame_626c36d86a7f73a10208dbfce6cc25f1 = NULL;
    }

    assertFrameObject(frame_626c36d86a7f73a10208dbfce6cc25f1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_626c36d86a7f73a10208dbfce6cc25f1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_add_newdocs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_numpy$core$_add_newdocs[] = {
    impl_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_numpy$core$_add_newdocs;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_numpy$core$_add_newdocs) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_numpy$core$_add_newdocs[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_numpy$core$_add_newdocs,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_numpy$core$_add_newdocs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy.core._add_newdocs");

    // Store the module for future use.
    module_numpy$core$_add_newdocs = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.core._add_newdocs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy.core._add_newdocs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnumpy$core$_add_newdocs\n");

    moduledict_numpy$core$_add_newdocs = MODULE_DICT(module_numpy$core$_add_newdocs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$core$_add_newdocs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$core$_add_newdocs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[311]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$core$_add_newdocs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_add_newdocs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_add_newdocs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$core$_add_newdocs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$core$_add_newdocs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_d3cfb5a701c7ec601bdd4c811afc6b9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[3];
        UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_2);
    }
    frame_d3cfb5a701c7ec601bdd4c811afc6b9d = MAKE_MODULE_FRAME(codeobj_d3cfb5a701c7ec601bdd4c811afc6b9d, module_numpy$core$_add_newdocs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d3cfb5a701c7ec601bdd4c811afc6b9d);
    assert(Py_REFCNT(frame_d3cfb5a701c7ec601bdd4c811afc6b9d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$core$_add_newdocs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[11];
        tmp_level_value_1 = mod_consts[12];
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 12;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$core$_add_newdocs,
                mod_consts[13],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[14];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$core$_add_newdocs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[15];
        tmp_level_value_2 = mod_consts[12];
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 13;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$core$_add_newdocs,
                mod_consts[16],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 23;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_1, mod_consts[17]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 68;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_2, mod_consts[18]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 83;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_3, mod_consts[19]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 102;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_4, mod_consts[20]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 121;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[21]);

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 127;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[22]);

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 152;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_7, mod_consts[23]);

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 420;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_8, mod_consts[24]);

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 439;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_9, mod_consts[25]);

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 446;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_10, mod_consts[26]);

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 454;
        tmp_call_result_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_11, mod_consts[27]);

        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 464;
        tmp_call_result_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_12, mod_consts[28]);

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 479;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_13, mod_consts[29]);

        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 488;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_14, mod_consts[30]);

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 497;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_15, mod_consts[31]);

        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 505;
        tmp_call_result_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_16, mod_consts[32]);

        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 568;
        tmp_call_result_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_17, mod_consts[33]);

        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 590;
        tmp_call_result_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_18, mod_consts[34]);

        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 640;
        tmp_call_result_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_19, mod_consts[35]);

        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 658;
        tmp_call_result_20 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_20, mod_consts[36]);

        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 680;
        tmp_call_result_21 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_21, mod_consts[37]);

        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 696;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 696;
        tmp_call_result_22 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_22, mod_consts[38]);

        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 696;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 711;
        tmp_call_result_23 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_23, mod_consts[39]);

        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 725;
        tmp_call_result_24 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_24, mod_consts[40]);

        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 739;
        tmp_call_result_25 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_25, mod_consts[41]);

        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 753;
        tmp_call_result_26 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_26, mod_consts[42]);

        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_old_value_1;
        PyObject *tmp_new_value_1;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[43];
        tmp_args_element_value_2 = mod_consts[44];
        tmp_str_arg_value_1 = mod_consts[45];
        tmp_old_value_1 = mod_consts[46];
        tmp_new_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_1 == NULL)) {
            tmp_new_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_1, tmp_old_value_1, tmp_new_value_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 790;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_old_value_2;
        PyObject *tmp_new_value_2;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[43];
        tmp_args_element_value_5 = mod_consts[47];
        tmp_str_arg_value_2 = mod_consts[48];
        tmp_old_value_2 = mod_consts[46];
        tmp_new_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_2 == NULL)) {
            tmp_new_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 990;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_2, tmp_old_value_2, tmp_new_value_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 913;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 912;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_28, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_old_value_3;
        PyObject *tmp_new_value_3;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 993;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[43];
        tmp_args_element_value_8 = mod_consts[49];
        tmp_str_arg_value_3 = mod_consts[50];
        tmp_old_value_3 = mod_consts[46];
        tmp_new_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_3 == NULL)) {
            tmp_new_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1053;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_3, tmp_old_value_3, tmp_new_value_3);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 994;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 993;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 993;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_str_arg_value_4;
        PyObject *tmp_old_value_4;
        PyObject *tmp_new_value_4;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1056;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[43];
        tmp_args_element_value_11 = mod_consts[51];
        tmp_str_arg_value_4 = mod_consts[52];
        tmp_old_value_4 = mod_consts[46];
        tmp_new_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_4 == NULL)) {
            tmp_new_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_4, tmp_old_value_4, tmp_new_value_4);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1057;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1056;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1056;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_str_arg_value_5;
        PyObject *tmp_old_value_5;
        PyObject *tmp_new_value_5;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[43];
        tmp_args_element_value_14 = mod_consts[53];
        tmp_str_arg_value_5 = mod_consts[54];
        tmp_old_value_5 = mod_consts[46];
        tmp_new_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_5 == NULL)) {
            tmp_new_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_5, tmp_old_value_5, tmp_new_value_5);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1121;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_str_arg_value_6;
        PyObject *tmp_old_value_6;
        PyObject *tmp_new_value_6;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[43];
        tmp_args_element_value_17 = mod_consts[55];
        tmp_str_arg_value_6 = mod_consts[56];
        tmp_old_value_6 = mod_consts[46];
        tmp_new_value_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_6 == NULL)) {
            tmp_new_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_6, tmp_old_value_6, tmp_new_value_6);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1187;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1186;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_32, call_args);
        }

        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1186;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1243;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1243;
        tmp_call_result_33 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_33, mod_consts[57]);

        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1243;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_str_arg_value_7;
        PyObject *tmp_old_value_7;
        PyObject *tmp_new_value_7;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[43];
        tmp_args_element_value_20 = mod_consts[58];
        tmp_str_arg_value_7 = mod_consts[59];
        tmp_old_value_7 = mod_consts[46];
        tmp_new_value_7 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_7 == NULL)) {
            tmp_new_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_7, tmp_old_value_7, tmp_new_value_7);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1258;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1257;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1257;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_35;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1316;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1316;
        tmp_call_result_35 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_35, mod_consts[60]);

        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1316;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_str_arg_value_8;
        PyObject *tmp_old_value_8;
        PyObject *tmp_new_value_8;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[43];
        tmp_args_element_value_23 = mod_consts[61];
        tmp_str_arg_value_8 = mod_consts[62];
        tmp_old_value_8 = mod_consts[46];
        tmp_new_value_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_8 == NULL)) {
            tmp_new_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1387;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_8, tmp_old_value_8, tmp_new_value_8);
        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1325;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1324;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1324;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1390;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1390;
        tmp_call_result_37 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_37, mod_consts[63]);

        if (tmp_call_result_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1390;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_str_arg_value_9;
        PyObject *tmp_old_value_9;
        PyObject *tmp_new_value_9;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[43];
        tmp_args_element_value_26 = mod_consts[64];
        tmp_str_arg_value_9 = mod_consts[65];
        tmp_old_value_9 = mod_consts[46];
        tmp_new_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_9 == NULL)) {
            tmp_new_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_9, tmp_old_value_9, tmp_new_value_9);
        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1428;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1427;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_str_arg_value_10;
        PyObject *tmp_old_value_10;
        PyObject *tmp_new_value_10;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[43];
        tmp_args_element_value_29 = mod_consts[66];
        tmp_str_arg_value_10 = mod_consts[67];
        tmp_old_value_10 = mod_consts[46];
        tmp_new_value_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_10 == NULL)) {
            tmp_new_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1576;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_10, tmp_old_value_10, tmp_new_value_10);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1485;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1484;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_39 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_str_arg_value_11;
        PyObject *tmp_old_value_11;
        PyObject *tmp_new_value_11;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = mod_consts[43];
        tmp_args_element_value_32 = mod_consts[68];
        tmp_str_arg_value_11 = mod_consts[69];
        tmp_old_value_11 = mod_consts[46];
        tmp_new_value_11 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_11 == NULL)) {
            tmp_new_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1638;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_11, tmp_old_value_11, tmp_new_value_11);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1580;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1579;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_call_result_40 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_40, call_args);
        }

        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_call_result_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1641;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1641;
        tmp_call_result_41 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_41, mod_consts[70]);

        if (tmp_call_result_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1641;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_call_result_42;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1675;
        tmp_call_result_42 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_42, mod_consts[71]);

        if (tmp_call_result_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_call_result_43;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1685;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1685;
        tmp_call_result_43 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_43, mod_consts[72]);

        if (tmp_call_result_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1685;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_str_arg_value_12;
        PyObject *tmp_old_value_12;
        PyObject *tmp_new_value_12;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1688;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = mod_consts[43];
        tmp_args_element_value_35 = mod_consts[73];
        tmp_str_arg_value_12 = mod_consts[74];
        tmp_old_value_12 = mod_consts[46];
        tmp_new_value_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_new_value_12 == NULL)) {
            tmp_new_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_new_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1798;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_12, tmp_old_value_12, tmp_new_value_12);
        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1688;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1688;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_call_result_45;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1801;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1801;
        tmp_call_result_45 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_45, mod_consts[75]);

        if (tmp_call_result_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1801;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_call_result_46;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1808;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1808;
        tmp_call_result_46 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_46, mod_consts[76]);

        if (tmp_call_result_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1808;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_47;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1816;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1816;
        tmp_call_result_47 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_47, mod_consts[77]);

        if (tmp_call_result_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1816;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_call_result_48;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1824;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1824;
        tmp_call_result_48 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_48, mod_consts[78]);

        if (tmp_call_result_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1824;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_call_result_49;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1874;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1874;
        tmp_call_result_49 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_49, mod_consts[79]);

        if (tmp_call_result_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1874;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_50;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1943;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 1943;
        tmp_call_result_50 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_50, mod_consts[80]);

        if (tmp_call_result_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1943;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_51;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2262;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2262;
        tmp_call_result_51 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_51, mod_consts[81]);

        if (tmp_call_result_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2262;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_52;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2393;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2393;
        tmp_call_result_52 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_52, mod_consts[82]);

        if (tmp_call_result_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2393;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_call_result_53;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2397;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2397;
        tmp_call_result_53 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_53, mod_consts[83]);

        if (tmp_call_result_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2397;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_54;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2401;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2401;
        tmp_call_result_54 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_54, mod_consts[84]);

        if (tmp_call_result_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2401;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_55;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2404;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2404;
        tmp_call_result_55 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_55, mod_consts[85]);

        if (tmp_call_result_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2404;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_56;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2409;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2409;
        tmp_call_result_56 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_56, mod_consts[86]);

        if (tmp_call_result_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2409;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_57;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2414;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2414;
        tmp_call_result_57 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_57, mod_consts[87]);

        if (tmp_call_result_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2414;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_58;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2435;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2435;
        tmp_call_result_58 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_58, mod_consts[88]);

        if (tmp_call_result_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2435;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_59;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2512;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2512;
        tmp_call_result_59 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_59, mod_consts[89]);

        if (tmp_call_result_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2512;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_60;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2516;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2516;
        tmp_call_result_60 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_60, mod_consts[90]);

        if (tmp_call_result_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2516;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_call_result_61;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2553;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2553;
        tmp_call_result_61 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_61, mod_consts[91]);

        if (tmp_call_result_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2553;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_62;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2568;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2568;
        tmp_call_result_62 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_62, mod_consts[92]);

        if (tmp_call_result_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2568;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_63;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2584;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2584;
        tmp_call_result_63 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_63, mod_consts[93]);

        if (tmp_call_result_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2584;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_64;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2655;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2655;
        tmp_call_result_64 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_64, mod_consts[94]);

        if (tmp_call_result_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2655;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_call_result_65;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2697;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2697;
        tmp_call_result_65 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_65, mod_consts[95]);

        if (tmp_call_result_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2697;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_call_result_66;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2717;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2717;
        tmp_call_result_66 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_66, mod_consts[96]);

        if (tmp_call_result_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2717;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_67;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2733;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2733;
        tmp_call_result_67 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_67, mod_consts[97]);

        if (tmp_call_result_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2733;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_call_result_68;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2752;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2752;
        tmp_call_result_68 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_68, mod_consts[98]);

        if (tmp_call_result_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2752;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_call_result_69;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2800;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2800;
        tmp_call_result_69 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_69, mod_consts[99]);

        if (tmp_call_result_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2800;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_70;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2826;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2826;
        tmp_call_result_70 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_70, mod_consts[100]);

        if (tmp_call_result_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2826;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_71;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2894;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2894;
        tmp_call_result_71 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_71, mod_consts[101]);

        if (tmp_call_result_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2894;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_call_result_72;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2930;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2930;
        tmp_call_result_72 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_72, mod_consts[102]);

        if (tmp_call_result_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2930;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_73;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2940;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2940;
        tmp_call_result_73 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_73, mod_consts[103]);

        if (tmp_call_result_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2940;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_call_result_74;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2948;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2948;
        tmp_call_result_74 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_74, mod_consts[104]);

        if (tmp_call_result_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2948;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_75;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2956;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2956;
        tmp_call_result_75 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_75, mod_consts[105]);

        if (tmp_call_result_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2956;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_76;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2964;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2964;
        tmp_call_result_76 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_76, mod_consts[106]);

        if (tmp_call_result_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2964;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_77;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2974;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 2974;
        tmp_call_result_77 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_77, mod_consts[107]);

        if (tmp_call_result_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2974;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_call_result_78;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3007;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3007;
        tmp_call_result_78 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_78, mod_consts[108]);

        if (tmp_call_result_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3007;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_79;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3015;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3015;
        tmp_call_result_79 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_79, mod_consts[109]);

        if (tmp_call_result_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3015;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_call_result_80;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3023;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3023;
        tmp_call_result_80 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_80, mod_consts[110]);

        if (tmp_call_result_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3023;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_call_result_81;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3044;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3044;
        tmp_call_result_81 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_81, mod_consts[111]);

        if (tmp_call_result_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3044;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_82;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3059;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3059;
        tmp_call_result_82 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_82, mod_consts[112]);

        if (tmp_call_result_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3059;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_call_result_83;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3074;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3074;
        tmp_call_result_83 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_83, mod_consts[113]);

        if (tmp_call_result_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3074;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_call_result_84;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3089;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3089;
        tmp_call_result_84 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_84, mod_consts[114]);

        if (tmp_call_result_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3089;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_85;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3104;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3104;
        tmp_call_result_85 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_85, mod_consts[115]);

        if (tmp_call_result_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3104;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_call_result_86;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3119;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3119;
        tmp_call_result_86 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_86, mod_consts[116]);

        if (tmp_call_result_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3119;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_87;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3136;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3136;
        tmp_call_result_87 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_87, mod_consts[117]);

        if (tmp_call_result_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3136;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_call_result_88;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3210;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3210;
        tmp_call_result_88 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_88, mod_consts[118]);

        if (tmp_call_result_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3210;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_89;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3264;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3264;
        tmp_call_result_89 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_89, mod_consts[119]);

        if (tmp_call_result_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3264;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_90;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3279;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3279;
        tmp_call_result_90 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_90, mod_consts[120]);

        if (tmp_call_result_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3279;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_call_result_91;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3295;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3295;
        tmp_call_result_91 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_91, mod_consts[121]);

        if (tmp_call_result_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3295;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_92;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3310;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3310;
        tmp_call_result_92 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_92, mod_consts[122]);

        if (tmp_call_result_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3310;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_93;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3325;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3325;
        tmp_call_result_93 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_93, mod_consts[123]);

        if (tmp_call_result_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3325;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_call_result_94;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3340;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3340;
        tmp_call_result_94 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_94, mod_consts[124]);

        if (tmp_call_result_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3340;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_call_result_95;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3389;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3389;
        tmp_call_result_95 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_95, mod_consts[125]);

        if (tmp_call_result_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3389;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_call_result_96;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3404;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3404;
        tmp_call_result_96 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_96, mod_consts[126]);

        if (tmp_call_result_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3404;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_call_result_97;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3419;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3419;
        tmp_call_result_97 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_97, mod_consts[127]);

        if (tmp_call_result_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3419;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_call_result_98;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3436;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3436;
        tmp_call_result_98 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_98, mod_consts[128]);

        if (tmp_call_result_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3436;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_call_result_99;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3439;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3439;
        tmp_call_result_99 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_99, mod_consts[129]);

        if (tmp_call_result_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3439;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_100;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3456;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3456;
        tmp_call_result_100 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_100, mod_consts[130]);

        if (tmp_call_result_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3456;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_call_result_101;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3470;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3470;
        tmp_call_result_101 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_101, mod_consts[131]);

        if (tmp_call_result_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3470;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_call_result_102;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3513;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3513;
        tmp_call_result_102 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_102, mod_consts[132]);

        if (tmp_call_result_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3513;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_call_result_103;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3551;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3551;
        tmp_call_result_103 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_103, mod_consts[133]);

        if (tmp_call_result_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3551;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_call_result_104;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3593;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3593;
        tmp_call_result_104 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_104, mod_consts[134]);

        if (tmp_call_result_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3593;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_call_result_105;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3652;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3652;
        tmp_call_result_105 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_105, mod_consts[135]);

        if (tmp_call_result_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3652;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_call_result_106;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3699;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3699;
        tmp_call_result_106 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_106, mod_consts[136]);

        if (tmp_call_result_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3699;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_call_result_107;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3714;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3714;
        tmp_call_result_107 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_107, mod_consts[137]);

        if (tmp_call_result_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3714;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_108;
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3729;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3729;
        tmp_call_result_108 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_108, mod_consts[138]);

        if (tmp_call_result_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3729;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_call_result_109;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3744;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3744;
        tmp_call_result_109 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_109, mod_consts[139]);

        if (tmp_call_result_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3744;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_call_result_110;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3784;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3784;
        tmp_call_result_110 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_110, mod_consts[140]);

        if (tmp_call_result_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3784;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_value_111;
        PyObject *tmp_call_result_111;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3799;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3799;
        tmp_call_result_111 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_111, mod_consts[141]);

        if (tmp_call_result_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3799;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_call_result_112;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3814;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3814;
        tmp_call_result_112 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_112, mod_consts[142]);

        if (tmp_call_result_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3814;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_call_result_113;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3829;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3829;
        tmp_call_result_113 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_113, mod_consts[143]);

        if (tmp_call_result_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3829;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_call_result_114;
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3844;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3844;
        tmp_call_result_114 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_114, mod_consts[144]);

        if (tmp_call_result_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3844;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_call_result_115;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3861;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3861;
        tmp_call_result_115 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_115, mod_consts[145]);

        if (tmp_call_result_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3861;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_call_result_116;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3876;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3876;
        tmp_call_result_116 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_116, mod_consts[146]);

        if (tmp_call_result_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3876;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_call_result_117;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3898;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3898;
        tmp_call_result_117 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_117, mod_consts[147]);

        if (tmp_call_result_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3898;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_call_result_118;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3990;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 3990;
        tmp_call_result_118 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_118, mod_consts[148]);

        if (tmp_call_result_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3990;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_call_result_119;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4005;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4005;
        tmp_call_result_119 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_119, mod_consts[149]);

        if (tmp_call_result_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4005;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_call_result_120;
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4020;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4020;
        tmp_call_result_120 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_120, mod_consts[150]);

        if (tmp_call_result_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4020;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_call_result_121;
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4071;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4071;
        tmp_call_result_121 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_121, mod_consts[151]);

        if (tmp_call_result_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4071;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_call_result_122;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4147;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4147;
        tmp_call_result_122 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_122, mod_consts[152]);

        if (tmp_call_result_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4147;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_call_result_123;
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4210;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4210;
        tmp_call_result_123 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_123, mod_consts[153]);

        if (tmp_call_result_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4210;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_call_result_124;
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4269;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4269;
        tmp_call_result_124 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_124, mod_consts[154]);

        if (tmp_call_result_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4269;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_call_result_125;
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4284;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4284;
        tmp_call_result_125 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_125, mod_consts[155]);

        if (tmp_call_result_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4284;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_call_result_126;
        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_126 == NULL)) {
            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4299;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4299;
        tmp_call_result_126 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_126, mod_consts[156]);

        if (tmp_call_result_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4299;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_call_result_127;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4314;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4314;
        tmp_call_result_127 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_127, mod_consts[157]);

        if (tmp_call_result_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4314;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_call_result_128;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4329;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4329;
        tmp_call_result_128 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_128, mod_consts[158]);

        if (tmp_call_result_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4329;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_call_result_129;
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4344;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4344;
        tmp_call_result_129 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_129, mod_consts[159]);

        if (tmp_call_result_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4344;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_call_result_130;
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4388;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4388;
        tmp_call_result_130 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_130, mod_consts[160]);

        if (tmp_call_result_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4388;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_call_result_131;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4452;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4452;
        tmp_call_result_131 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_131, mod_consts[161]);

        if (tmp_call_result_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4452;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_call_result_132;
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4494;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4494;
        tmp_call_result_132 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_132, mod_consts[162]);

        if (tmp_call_result_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4494;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_call_result_133;
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4505;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4505;
        tmp_call_result_133 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_133, mod_consts[163]);

        if (tmp_call_result_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4505;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_call_result_134;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4520;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4520;
        tmp_call_result_134 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_134, mod_consts[164]);

        if (tmp_call_result_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4520;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_call_result_135;
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4576;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4576;
        tmp_call_result_135 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_135, mod_consts[165]);

        if (tmp_call_result_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4576;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_result_136;
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4591;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4591;
        tmp_call_result_136 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_136, mod_consts[166]);

        if (tmp_call_result_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4591;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_call_result_137;
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4716;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4716;
        tmp_call_result_137 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_137, mod_consts[167]);

        if (tmp_call_result_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4716;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_call_result_138;
        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_138 == NULL)) {
            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4766;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4766;
        tmp_call_result_138 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_138, mod_consts[168]);

        if (tmp_call_result_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4766;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_call_result_139;
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4830;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4830;
        tmp_call_result_139 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_139, mod_consts[169]);

        if (tmp_call_result_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4830;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_call_result_140;
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4896;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4896;
        tmp_call_result_140 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_140, mod_consts[170]);

        if (tmp_call_result_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4896;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_call_result_141;
        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_141 == NULL)) {
            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4906;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4906;
        tmp_call_result_141 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_141, mod_consts[171]);

        if (tmp_call_result_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4906;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_call_result_142;
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4932;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4932;
        tmp_call_result_142 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_142, mod_consts[172]);

        if (tmp_call_result_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4932;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_value_143;
        PyObject *tmp_call_result_143;
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4942;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4942;
        tmp_call_result_143 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_143, mod_consts[173]);

        if (tmp_call_result_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4942;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_call_result_144;
        tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_144 == NULL)) {
            tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4952;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4952;
        tmp_call_result_144 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_144, mod_consts[174]);

        if (tmp_call_result_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4952;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_value_145;
        PyObject *tmp_call_result_145;
        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_145 == NULL)) {
            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4961;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4961;
        tmp_call_result_145 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_145, mod_consts[175]);

        if (tmp_call_result_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4961;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_value_146;
        PyObject *tmp_call_result_146;
        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_146 == NULL)) {
            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4970;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 4970;
        tmp_call_result_146 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_146, mod_consts[176]);

        if (tmp_call_result_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4970;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_value_147;
        PyObject *tmp_call_result_147;
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5015;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5015;
        tmp_call_result_147 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_147, mod_consts[177]);

        if (tmp_call_result_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5015;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_value_148;
        PyObject *tmp_call_result_148;
        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_148 == NULL)) {
            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5073;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5073;
        tmp_call_result_148 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_148, mod_consts[178]);

        if (tmp_call_result_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5073;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_value_149;
        PyObject *tmp_call_result_149;
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5092;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5092;
        tmp_call_result_149 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_149, mod_consts[179]);

        if (tmp_call_result_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5092;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_value_150;
        PyObject *tmp_call_result_150;
        tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_150 == NULL)) {
            tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5116;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5116;
        tmp_call_result_150 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_150, mod_consts[180]);

        if (tmp_call_result_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5116;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_value_151;
        PyObject *tmp_call_result_151;
        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_151 == NULL)) {
            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5134;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5134;
        tmp_call_result_151 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_151, mod_consts[181]);

        if (tmp_call_result_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5134;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_call_result_152;
        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_152 == NULL)) {
            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5157;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5157;
        tmp_call_result_152 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_152, mod_consts[182]);

        if (tmp_call_result_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5157;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_value_153;
        PyObject *tmp_call_result_153;
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5183;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5183;
        tmp_call_result_153 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_153, mod_consts[183]);

        if (tmp_call_result_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5183;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_value_154;
        PyObject *tmp_call_result_154;
        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_154 == NULL)) {
            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5220;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5220;
        tmp_call_result_154 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_154, mod_consts[184]);

        if (tmp_call_result_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5220;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_called_value_155;
        PyObject *tmp_call_result_155;
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5257;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5257;
        tmp_call_result_155 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_155, mod_consts[185]);

        if (tmp_call_result_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5257;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_call_result_156;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5387;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5387;
        tmp_call_result_156 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_156, mod_consts[186]);

        if (tmp_call_result_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5387;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }
    {
        PyObject *tmp_called_value_157;
        PyObject *tmp_call_result_157;
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5466;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5466;
        tmp_call_result_157 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_157, mod_consts[187]);

        if (tmp_call_result_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5466;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_157);
    }
    {
        PyObject *tmp_called_value_158;
        PyObject *tmp_call_result_158;
        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_158 == NULL)) {
            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5574;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5574;
        tmp_call_result_158 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_158, mod_consts[188]);

        if (tmp_call_result_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5574;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_158);
    }
    {
        PyObject *tmp_called_value_159;
        PyObject *tmp_call_result_159;
        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_159 == NULL)) {
            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5645;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5645;
        tmp_call_result_159 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_159, mod_consts[189]);

        if (tmp_call_result_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5645;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_159);
    }
    {
        PyObject *tmp_called_value_160;
        PyObject *tmp_call_result_160;
        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_160 == NULL)) {
            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5697;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5697;
        tmp_call_result_160 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_160, mod_consts[190]);

        if (tmp_call_result_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5697;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_160);
    }
    {
        PyObject *tmp_called_value_161;
        PyObject *tmp_call_result_161;
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5773;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5773;
        tmp_call_result_161 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_161, mod_consts[191]);

        if (tmp_call_result_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5773;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_161);
    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_call_result_162;
        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_162 == NULL)) {
            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5796;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5796;
        tmp_call_result_162 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_162, mod_consts[192]);

        if (tmp_call_result_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5796;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_162);
    }
    {
        PyObject *tmp_called_value_163;
        PyObject *tmp_call_result_163;
        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_163 == NULL)) {
            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5868;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5868;
        tmp_call_result_163 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_163, mod_consts[193]);

        if (tmp_call_result_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5868;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_163);
    }
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_call_result_164;
        tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_164 == NULL)) {
            tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5959;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5959;
        tmp_call_result_164 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_164, mod_consts[194]);

        if (tmp_call_result_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5959;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_164);
    }
    {
        PyObject *tmp_called_value_165;
        PyObject *tmp_call_result_165;
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5978;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 5978;
        tmp_call_result_165 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_165, mod_consts[195]);

        if (tmp_call_result_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5978;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_165);
    }
    {
        PyObject *tmp_called_value_166;
        PyObject *tmp_call_result_166;
        tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_166 == NULL)) {
            tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6021;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6021;
        tmp_call_result_166 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_166, mod_consts[196]);

        if (tmp_call_result_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6021;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_166);
    }
    {
        PyObject *tmp_called_value_167;
        PyObject *tmp_call_result_167;
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6033;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6033;
        tmp_call_result_167 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_167, mod_consts[197]);

        if (tmp_call_result_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6033;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_167);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_call_result_168;
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6057;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6057;
        tmp_call_result_168 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_168, mod_consts[198]);

        if (tmp_call_result_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6057;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_168);
    }
    {
        PyObject *tmp_called_value_169;
        PyObject *tmp_call_result_169;
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6085;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6085;
        tmp_call_result_169 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_169, mod_consts[199]);

        if (tmp_call_result_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6085;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_169);
    }
    {
        PyObject *tmp_called_value_170;
        PyObject *tmp_call_result_170;
        tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_170 == NULL)) {
            tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6109;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6109;
        tmp_call_result_170 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_170, mod_consts[200]);

        if (tmp_call_result_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6109;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_170);
    }
    {
        PyObject *tmp_called_value_171;
        PyObject *tmp_call_result_171;
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6122;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6122;
        tmp_call_result_171 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_171, mod_consts[201]);

        if (tmp_call_result_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6122;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_171);
    }
    {
        PyObject *tmp_called_value_172;
        PyObject *tmp_call_result_172;
        tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_172 == NULL)) {
            tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6151;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6151;
        tmp_call_result_172 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_172, mod_consts[202]);

        if (tmp_call_result_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6151;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_172);
    }
    {
        PyObject *tmp_called_value_173;
        PyObject *tmp_call_result_173;
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6158;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6158;
        tmp_call_result_173 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_173, mod_consts[203]);

        if (tmp_call_result_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6158;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_173);
    }
    {
        PyObject *tmp_called_value_174;
        PyObject *tmp_call_result_174;
        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_174 == NULL)) {
            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6167;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6167;
        tmp_call_result_174 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_174, mod_consts[204]);

        if (tmp_call_result_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6167;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_174);
    }
    {
        PyObject *tmp_called_value_175;
        PyObject *tmp_call_result_175;
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6189;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6189;
        tmp_call_result_175 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_175, mod_consts[205]);

        if (tmp_call_result_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6189;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_175);
    }
    {
        PyObject *tmp_called_value_176;
        PyObject *tmp_call_result_176;
        tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_176 == NULL)) {
            tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6222;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6222;
        tmp_call_result_176 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_176, mod_consts[206]);

        if (tmp_call_result_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6222;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_176);
    }
    {
        PyObject *tmp_called_value_177;
        PyObject *tmp_call_result_177;
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6261;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6261;
        tmp_call_result_177 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_177, mod_consts[207]);

        if (tmp_call_result_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6261;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_177);
    }
    {
        PyObject *tmp_called_value_178;
        PyObject *tmp_call_result_178;
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6279;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6279;
        tmp_call_result_178 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_178, mod_consts[208]);

        if (tmp_call_result_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6279;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_178);
    }
    {
        PyObject *tmp_called_value_179;
        PyObject *tmp_call_result_179;
        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_179 == NULL)) {
            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6294;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6294;
        tmp_call_result_179 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_179, mod_consts[209]);

        if (tmp_call_result_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6294;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_179);
    }
    {
        PyObject *tmp_called_value_180;
        PyObject *tmp_call_result_180;
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6313;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6313;
        tmp_call_result_180 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_180, mod_consts[210]);

        if (tmp_call_result_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6313;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_180);
    }
    {
        PyObject *tmp_called_value_181;
        PyObject *tmp_call_result_181;
        tmp_called_value_181 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_181 == NULL)) {
            tmp_called_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6331;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6331;
        tmp_call_result_181 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_181, mod_consts[211]);

        if (tmp_call_result_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6331;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_181);
    }
    {
        PyObject *tmp_called_value_182;
        PyObject *tmp_call_result_182;
        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_182 == NULL)) {
            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6354;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6354;
        tmp_call_result_182 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_182, mod_consts[212]);

        if (tmp_call_result_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6354;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_182);
    }
    {
        PyObject *tmp_called_value_183;
        PyObject *tmp_call_result_183;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6357;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6357;
        tmp_call_result_183 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_183, mod_consts[213]);

        if (tmp_call_result_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6357;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_183);
    }
    {
        PyObject *tmp_called_value_184;
        PyObject *tmp_call_result_184;
        tmp_called_value_184 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_184 == NULL)) {
            tmp_called_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6385;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6385;
        tmp_call_result_184 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_184, mod_consts[214]);

        if (tmp_call_result_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6385;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_184);
    }
    {
        PyObject *tmp_called_value_185;
        PyObject *tmp_call_result_185;
        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_185 == NULL)) {
            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6406;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6406;
        tmp_call_result_185 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_185, mod_consts[215]);

        if (tmp_call_result_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6406;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_185);
    }
    {
        PyObject *tmp_called_value_186;
        PyObject *tmp_call_result_186;
        tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_186 == NULL)) {
            tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6415;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6415;
        tmp_call_result_186 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_186, mod_consts[216]);

        if (tmp_call_result_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6415;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_186);
    }
    {
        PyObject *tmp_called_value_187;
        PyObject *tmp_call_result_187;
        tmp_called_value_187 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_187 == NULL)) {
            tmp_called_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6476;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6476;
        tmp_call_result_187 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_187, mod_consts[217]);

        if (tmp_call_result_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6476;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_187);
    }
    {
        PyObject *tmp_called_value_188;
        PyObject *tmp_call_result_188;
        tmp_called_value_188 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_188 == NULL)) {
            tmp_called_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6506;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6506;
        tmp_call_result_188 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_188, mod_consts[218]);

        if (tmp_call_result_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6506;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_188);
    }
    {
        PyObject *tmp_called_value_189;
        PyObject *tmp_call_result_189;
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6521;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6521;
        tmp_call_result_189 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_189, mod_consts[219]);

        if (tmp_call_result_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6521;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_189);
    }
    {
        PyObject *tmp_called_value_190;
        PyObject *tmp_call_result_190;
        tmp_called_value_190 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_190 == NULL)) {
            tmp_called_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6536;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6536;
        tmp_call_result_190 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_190, mod_consts[220]);

        if (tmp_call_result_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6536;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_190);
    }
    {
        PyObject *tmp_called_value_191;
        PyObject *tmp_call_result_191;
        tmp_called_value_191 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_191 == NULL)) {
            tmp_called_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6552;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6552;
        tmp_call_result_191 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_191, mod_consts[221]);

        if (tmp_call_result_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6552;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_191);
    }
    {
        PyObject *tmp_called_value_192;
        PyObject *tmp_call_result_192;
        tmp_called_value_192 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_192 == NULL)) {
            tmp_called_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6574;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6574;
        tmp_call_result_192 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_192, mod_consts[222]);

        if (tmp_call_result_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6574;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_192);
    }
    {
        PyObject *tmp_called_value_193;
        PyObject *tmp_call_result_193;
        tmp_called_value_193 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_193 == NULL)) {
            tmp_called_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6638;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6638;
        tmp_call_result_193 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_193, mod_consts[223]);

        if (tmp_call_result_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6638;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_193);
    }
    {
        PyObject *tmp_called_value_194;
        PyObject *tmp_call_result_194;
        tmp_called_value_194 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_194 == NULL)) {
            tmp_called_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6641;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6641;
        tmp_call_result_194 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_194, mod_consts[224]);

        if (tmp_call_result_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6641;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_194);
    }
    {
        PyObject *tmp_called_value_195;
        PyObject *tmp_call_result_195;
        tmp_called_value_195 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_195 == NULL)) {
            tmp_called_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6644;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6644;
        tmp_call_result_195 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_195, mod_consts[225]);

        if (tmp_call_result_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6644;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_195);
    }
    {
        PyObject *tmp_called_value_196;
        PyObject *tmp_call_result_196;
        tmp_called_value_196 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_196 == NULL)) {
            tmp_called_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6695;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6695;
        tmp_call_result_196 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_196, mod_consts[226]);

        if (tmp_call_result_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6695;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_196);
    }
    {
        PyObject *tmp_called_value_197;
        PyObject *tmp_call_result_197;
        tmp_called_value_197 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_197 == NULL)) {
            tmp_called_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6739;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6739;
        tmp_call_result_197 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_197, mod_consts[227]);

        if (tmp_call_result_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6739;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_197);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[228];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_6 = MAKE_FUNCTION_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_6);
    }
    {
        PyObject *tmp_called_value_198;
        PyObject *tmp_call_result_198;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_value_199;
        tmp_called_value_198 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_198 == NULL)) {
            tmp_called_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6763;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[230];
        tmp_args_element_value_38 = mod_consts[231];
        tmp_called_value_199 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_199 == NULL)) {
            tmp_called_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        assert(!(tmp_called_value_199 == NULL));
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6764;
        tmp_args_element_value_39 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_199, &PyTuple_GET_ITEM(mod_consts[232], 0), mod_consts[233]);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6764;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6763;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_call_result_198 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_198, call_args);
        }

        Py_DECREF(tmp_args_element_value_39);
        if (tmp_call_result_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6763;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_198);
    }
    {
        PyObject *tmp_called_value_200;
        PyObject *tmp_call_result_199;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_201;
        tmp_called_value_200 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_200 == NULL)) {
            tmp_called_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6766;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = mod_consts[230];
        tmp_args_element_value_41 = mod_consts[231];
        tmp_called_value_201 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_201 == NULL)) {
            tmp_called_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6767;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6767;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_201, &PyTuple_GET_ITEM(mod_consts[234], 0), mod_consts[233]);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6767;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6766;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_call_result_199 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_200, call_args);
        }

        Py_DECREF(tmp_args_element_value_42);
        if (tmp_call_result_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6766;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_199);
    }
    {
        PyObject *tmp_called_value_202;
        PyObject *tmp_call_result_200;
        tmp_called_value_202 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_202 == NULL)) {
            tmp_called_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6769;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6769;
        tmp_call_result_200 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_202, mod_consts[235]);

        if (tmp_call_result_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6769;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_200);
    }
    {
        PyObject *tmp_called_value_203;
        PyObject *tmp_call_result_201;
        tmp_called_value_203 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_203 == NULL)) {
            tmp_called_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6772;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6772;
        tmp_call_result_201 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_203, mod_consts[236]);

        if (tmp_call_result_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6772;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_201);
    }
    {
        PyObject *tmp_called_value_204;
        PyObject *tmp_call_result_202;
        tmp_called_value_204 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_204 == NULL)) {
            tmp_called_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6775;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6775;
        tmp_call_result_202 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_204, mod_consts[237]);

        if (tmp_call_result_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6775;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_202);
    }
    {
        PyObject *tmp_called_value_205;
        PyObject *tmp_call_result_203;
        tmp_called_value_205 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_205 == NULL)) {
            tmp_called_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6778;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6778;
        tmp_call_result_203 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_205, mod_consts[238]);

        if (tmp_call_result_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6778;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_203);
    }
    {
        PyObject *tmp_called_value_206;
        PyObject *tmp_call_result_204;
        tmp_called_value_206 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_206 == NULL)) {
            tmp_called_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6781;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6781;
        tmp_call_result_204 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_206, mod_consts[239]);

        if (tmp_call_result_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6781;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_204);
    }
    {
        PyObject *tmp_called_value_207;
        PyObject *tmp_call_result_205;
        tmp_called_value_207 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_207 == NULL)) {
            tmp_called_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6784;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6784;
        tmp_call_result_205 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_207, mod_consts[240]);

        if (tmp_call_result_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6784;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_205);
    }
    {
        PyObject *tmp_called_value_208;
        PyObject *tmp_call_result_206;
        tmp_called_value_208 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_208 == NULL)) {
            tmp_called_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6787;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6787;
        tmp_call_result_206 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_208, mod_consts[241]);

        if (tmp_call_result_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6787;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_206);
    }
    {
        PyObject *tmp_called_value_209;
        PyObject *tmp_call_result_207;
        tmp_called_value_209 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_209 == NULL)) {
            tmp_called_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6790;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6790;
        tmp_call_result_207 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_209, mod_consts[242]);

        if (tmp_call_result_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6790;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_207);
    }
    {
        PyObject *tmp_called_value_210;
        PyObject *tmp_call_result_208;
        tmp_called_value_210 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_210 == NULL)) {
            tmp_called_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6793;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6793;
        tmp_call_result_208 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_210, mod_consts[243]);

        if (tmp_call_result_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6793;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_208);
    }
    {
        PyObject *tmp_called_value_211;
        PyObject *tmp_call_result_209;
        tmp_called_value_211 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_211 == NULL)) {
            tmp_called_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6796;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6796;
        tmp_call_result_209 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_211, mod_consts[244]);

        if (tmp_call_result_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6796;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_209);
    }
    {
        PyObject *tmp_called_value_212;
        PyObject *tmp_call_result_210;
        tmp_called_value_212 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_212 == NULL)) {
            tmp_called_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6799;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6799;
        tmp_call_result_210 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_212, mod_consts[245]);

        if (tmp_call_result_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6799;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_210);
    }
    {
        PyObject *tmp_called_value_213;
        PyObject *tmp_call_result_211;
        tmp_called_value_213 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_213 == NULL)) {
            tmp_called_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6802;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6802;
        tmp_call_result_211 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_213, mod_consts[246]);

        if (tmp_call_result_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6802;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_211);
    }
    {
        PyObject *tmp_called_value_214;
        PyObject *tmp_call_result_212;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_215;
        tmp_called_value_214 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_214 == NULL)) {
            tmp_called_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6807;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = mod_consts[230];
        tmp_args_element_value_44 = mod_consts[231];
        tmp_called_value_215 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_215 == NULL)) {
            tmp_called_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6808;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6808;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_215, mod_consts[247]);

        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6808;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6807;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_call_result_212 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_214, call_args);
        }

        Py_DECREF(tmp_args_element_value_45);
        if (tmp_call_result_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6807;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_212);
    }
    {
        PyObject *tmp_called_value_216;
        PyObject *tmp_call_result_213;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_value_217;
        tmp_called_value_216 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_216 == NULL)) {
            tmp_called_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6810;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = mod_consts[230];
        tmp_args_element_value_47 = mod_consts[231];
        tmp_called_value_217 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_217 == NULL)) {
            tmp_called_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6811;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6811;
        tmp_args_element_value_48 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_217, mod_consts[248]);

        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6811;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6810;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_call_result_213 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_216, call_args);
        }

        Py_DECREF(tmp_args_element_value_48);
        if (tmp_call_result_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6810;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_213);
    }
    {
        PyObject *tmp_called_value_218;
        PyObject *tmp_call_result_214;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_219;
        tmp_called_value_218 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_218 == NULL)) {
            tmp_called_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6813;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = mod_consts[230];
        tmp_args_element_value_50 = mod_consts[231];
        tmp_called_value_219 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_219 == NULL)) {
            tmp_called_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6814;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6814;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_219, mod_consts[249]);

        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6814;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6813;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_call_result_214 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_218, call_args);
        }

        Py_DECREF(tmp_args_element_value_51);
        if (tmp_call_result_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6813;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_214);
    }
    {
        PyObject *tmp_called_value_220;
        PyObject *tmp_call_result_215;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_221;
        tmp_called_value_220 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_220 == NULL)) {
            tmp_called_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6816;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[230];
        tmp_args_element_value_53 = mod_consts[231];
        tmp_called_value_221 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_221 == NULL)) {
            tmp_called_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6817;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6817;
        tmp_args_element_value_54 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_221, mod_consts[250]);

        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6817;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6816;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_call_result_215 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_220, call_args);
        }

        Py_DECREF(tmp_args_element_value_54);
        if (tmp_call_result_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6816;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_215);
    }
    {
        PyObject *tmp_called_value_222;
        PyObject *tmp_call_result_216;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_223;
        tmp_called_value_222 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_222 == NULL)) {
            tmp_called_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6819;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = mod_consts[230];
        tmp_args_element_value_56 = mod_consts[231];
        tmp_called_value_223 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_223 == NULL)) {
            tmp_called_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6820;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6820;
        tmp_args_element_value_57 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_223, mod_consts[251]);

        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6820;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6819;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_call_result_216 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_222, call_args);
        }

        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6819;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_216);
    }
    {
        PyObject *tmp_called_value_224;
        PyObject *tmp_call_result_217;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_called_value_225;
        tmp_called_value_224 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_224 == NULL)) {
            tmp_called_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6822;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = mod_consts[230];
        tmp_args_element_value_59 = mod_consts[231];
        tmp_called_value_225 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_225 == NULL)) {
            tmp_called_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6823;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6823;
        tmp_args_element_value_60 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_225, mod_consts[252]);

        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6823;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6822;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_call_result_217 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_224, call_args);
        }

        Py_DECREF(tmp_args_element_value_60);
        if (tmp_call_result_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6822;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_217);
    }
    {
        PyObject *tmp_called_value_226;
        PyObject *tmp_call_result_218;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_called_value_227;
        tmp_called_value_226 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_226 == NULL)) {
            tmp_called_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6825;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = mod_consts[230];
        tmp_args_element_value_62 = mod_consts[231];
        tmp_called_value_227 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_227 == NULL)) {
            tmp_called_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6826;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6826;
        tmp_args_element_value_63 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_227, mod_consts[253]);

        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6826;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6825;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_call_result_218 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_226, call_args);
        }

        Py_DECREF(tmp_args_element_value_63);
        if (tmp_call_result_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6825;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_218);
    }
    {
        PyObject *tmp_called_value_228;
        PyObject *tmp_call_result_219;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_called_value_229;
        tmp_called_value_228 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_228 == NULL)) {
            tmp_called_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6828;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = mod_consts[230];
        tmp_args_element_value_65 = mod_consts[231];
        tmp_called_value_229 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_229 == NULL)) {
            tmp_called_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6829;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6829;
        tmp_args_element_value_66 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_229, mod_consts[254]);

        if (tmp_args_element_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6829;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6828;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_call_result_219 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_228, call_args);
        }

        Py_DECREF(tmp_args_element_value_66);
        if (tmp_call_result_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6828;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_219);
    }
    {
        PyObject *tmp_called_value_230;
        PyObject *tmp_call_result_220;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_called_value_231;
        tmp_called_value_230 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_230 == NULL)) {
            tmp_called_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6831;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = mod_consts[230];
        tmp_args_element_value_68 = mod_consts[231];
        tmp_called_value_231 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_231 == NULL)) {
            tmp_called_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6832;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6832;
        tmp_args_element_value_69 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_231, mod_consts[255]);

        if (tmp_args_element_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6832;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6831;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_call_result_220 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_230, call_args);
        }

        Py_DECREF(tmp_args_element_value_69);
        if (tmp_call_result_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6831;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_220);
    }
    {
        PyObject *tmp_called_value_232;
        PyObject *tmp_call_result_221;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_called_value_233;
        tmp_called_value_232 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_232 == NULL)) {
            tmp_called_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6834;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = mod_consts[230];
        tmp_args_element_value_71 = mod_consts[231];
        tmp_called_value_233 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_233 == NULL)) {
            tmp_called_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6835;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6835;
        tmp_args_element_value_72 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_233, mod_consts[256]);

        if (tmp_args_element_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6835;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6834;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_call_result_221 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_232, call_args);
        }

        Py_DECREF(tmp_args_element_value_72);
        if (tmp_call_result_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6834;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_221);
    }
    {
        PyObject *tmp_called_value_234;
        PyObject *tmp_call_result_222;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_called_value_235;
        tmp_called_value_234 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_234 == NULL)) {
            tmp_called_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6837;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = mod_consts[230];
        tmp_args_element_value_74 = mod_consts[231];
        tmp_called_value_235 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_235 == NULL)) {
            tmp_called_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6838;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6838;
        tmp_args_element_value_75 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_235, mod_consts[257]);

        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6838;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6837;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_call_result_222 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_234, call_args);
        }

        Py_DECREF(tmp_args_element_value_75);
        if (tmp_call_result_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6837;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_222);
    }
    {
        PyObject *tmp_called_value_236;
        PyObject *tmp_call_result_223;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_called_value_237;
        tmp_called_value_236 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_236 == NULL)) {
            tmp_called_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6840;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = mod_consts[230];
        tmp_args_element_value_77 = mod_consts[231];
        tmp_called_value_237 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_237 == NULL)) {
            tmp_called_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6841;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6841;
        tmp_args_element_value_78 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_237, mod_consts[258]);

        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6841;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6840;
        {
            PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78};
            tmp_call_result_223 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_236, call_args);
        }

        Py_DECREF(tmp_args_element_value_78);
        if (tmp_call_result_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6840;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_223);
    }
    {
        PyObject *tmp_called_value_238;
        PyObject *tmp_call_result_224;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_called_value_239;
        tmp_called_value_238 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_238 == NULL)) {
            tmp_called_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6843;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = mod_consts[230];
        tmp_args_element_value_80 = mod_consts[231];
        tmp_called_value_239 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_239 == NULL)) {
            tmp_called_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6844;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6844;
        tmp_args_element_value_81 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_239, mod_consts[259]);

        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6844;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6843;
        {
            PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_call_result_224 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_238, call_args);
        }

        Py_DECREF(tmp_args_element_value_81);
        if (tmp_call_result_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6843;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_224);
    }
    {
        PyObject *tmp_called_value_240;
        PyObject *tmp_call_result_225;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_called_value_241;
        tmp_called_value_240 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_240 == NULL)) {
            tmp_called_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6846;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = mod_consts[230];
        tmp_args_element_value_83 = mod_consts[231];
        tmp_called_value_241 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_241 == NULL)) {
            tmp_called_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6847;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6847;
        tmp_args_element_value_84 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_241, mod_consts[260]);

        if (tmp_args_element_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6847;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6846;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_call_result_225 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_240, call_args);
        }

        Py_DECREF(tmp_args_element_value_84);
        if (tmp_call_result_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6846;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_225);
    }
    {
        PyObject *tmp_called_value_242;
        PyObject *tmp_call_result_226;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_called_value_243;
        tmp_called_value_242 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_242 == NULL)) {
            tmp_called_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6849;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = mod_consts[230];
        tmp_args_element_value_86 = mod_consts[231];
        tmp_called_value_243 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_243 == NULL)) {
            tmp_called_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6850;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6850;
        tmp_args_element_value_87 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_243, mod_consts[261]);

        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6850;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6849;
        {
            PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_call_result_226 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_242, call_args);
        }

        Py_DECREF(tmp_args_element_value_87);
        if (tmp_call_result_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6849;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_226);
    }
    {
        PyObject *tmp_called_value_244;
        PyObject *tmp_call_result_227;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_called_value_245;
        tmp_called_value_244 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_244 == NULL)) {
            tmp_called_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6852;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = mod_consts[230];
        tmp_args_element_value_89 = mod_consts[231];
        tmp_called_value_245 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_245 == NULL)) {
            tmp_called_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6853;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6853;
        tmp_args_element_value_90 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_245, mod_consts[262]);

        if (tmp_args_element_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6853;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6852;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90};
            tmp_call_result_227 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_244, call_args);
        }

        Py_DECREF(tmp_args_element_value_90);
        if (tmp_call_result_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6852;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_227);
    }
    {
        PyObject *tmp_called_value_246;
        PyObject *tmp_call_result_228;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_value_247;
        tmp_called_value_246 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_246 == NULL)) {
            tmp_called_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6855;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = mod_consts[230];
        tmp_args_element_value_92 = mod_consts[231];
        tmp_called_value_247 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_247 == NULL)) {
            tmp_called_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6856;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6856;
        tmp_args_element_value_93 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_247, mod_consts[263]);

        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6856;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6855;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_call_result_228 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_246, call_args);
        }

        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6855;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_228);
    }
    {
        PyObject *tmp_called_value_248;
        PyObject *tmp_call_result_229;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_value_249;
        tmp_called_value_248 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_248 == NULL)) {
            tmp_called_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6858;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = mod_consts[230];
        tmp_args_element_value_95 = mod_consts[231];
        tmp_called_value_249 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_249 == NULL)) {
            tmp_called_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6859;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6859;
        tmp_args_element_value_96 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_249, mod_consts[264]);

        if (tmp_args_element_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6859;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6858;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96};
            tmp_call_result_229 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_248, call_args);
        }

        Py_DECREF(tmp_args_element_value_96);
        if (tmp_call_result_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6858;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_229);
    }
    {
        PyObject *tmp_called_value_250;
        PyObject *tmp_call_result_230;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_value_251;
        tmp_called_value_250 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_250 == NULL)) {
            tmp_called_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6861;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = mod_consts[230];
        tmp_args_element_value_98 = mod_consts[231];
        tmp_called_value_251 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_251 == NULL)) {
            tmp_called_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6862;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6862;
        tmp_args_element_value_99 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_251, mod_consts[265]);

        if (tmp_args_element_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6862;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6861;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99};
            tmp_call_result_230 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_250, call_args);
        }

        Py_DECREF(tmp_args_element_value_99);
        if (tmp_call_result_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6861;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_230);
    }
    {
        PyObject *tmp_called_value_252;
        PyObject *tmp_call_result_231;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_called_value_253;
        tmp_called_value_252 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_252 == NULL)) {
            tmp_called_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6864;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = mod_consts[230];
        tmp_args_element_value_101 = mod_consts[231];
        tmp_called_value_253 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_253 == NULL)) {
            tmp_called_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6865;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6865;
        tmp_args_element_value_102 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_253, mod_consts[266]);

        if (tmp_args_element_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6865;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6864;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_call_result_231 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_252, call_args);
        }

        Py_DECREF(tmp_args_element_value_102);
        if (tmp_call_result_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6864;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_231);
    }
    {
        PyObject *tmp_called_value_254;
        PyObject *tmp_call_result_232;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_called_value_255;
        tmp_called_value_254 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_254 == NULL)) {
            tmp_called_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6867;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = mod_consts[230];
        tmp_args_element_value_104 = mod_consts[231];
        tmp_called_value_255 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_255 == NULL)) {
            tmp_called_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6868;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6868;
        tmp_args_element_value_105 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_255, mod_consts[267]);

        if (tmp_args_element_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6868;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6867;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_call_result_232 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_254, call_args);
        }

        Py_DECREF(tmp_args_element_value_105);
        if (tmp_call_result_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6867;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_232);
    }
    {
        PyObject *tmp_called_value_256;
        PyObject *tmp_call_result_233;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_called_value_257;
        tmp_called_value_256 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_256 == NULL)) {
            tmp_called_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_256 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6870;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = mod_consts[230];
        tmp_args_element_value_107 = mod_consts[231];
        tmp_called_value_257 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_257 == NULL)) {
            tmp_called_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6871;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6871;
        tmp_args_element_value_108 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_257, mod_consts[268]);

        if (tmp_args_element_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6871;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6870;
        {
            PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_call_result_233 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_256, call_args);
        }

        Py_DECREF(tmp_args_element_value_108);
        if (tmp_call_result_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6870;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_233);
    }
    {
        PyObject *tmp_called_value_258;
        PyObject *tmp_call_result_234;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_called_value_259;
        tmp_called_value_258 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_258 == NULL)) {
            tmp_called_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6873;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = mod_consts[230];
        tmp_args_element_value_110 = mod_consts[231];
        tmp_called_value_259 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_259 == NULL)) {
            tmp_called_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6874;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6874;
        tmp_args_element_value_111 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_259, mod_consts[269]);

        if (tmp_args_element_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6874;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6873;
        {
            PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111};
            tmp_call_result_234 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_258, call_args);
        }

        Py_DECREF(tmp_args_element_value_111);
        if (tmp_call_result_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6873;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_234);
    }
    {
        PyObject *tmp_called_value_260;
        PyObject *tmp_call_result_235;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_called_value_261;
        tmp_called_value_260 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_260 == NULL)) {
            tmp_called_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_260 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6876;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = mod_consts[230];
        tmp_args_element_value_113 = mod_consts[231];
        tmp_called_value_261 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_261 == NULL)) {
            tmp_called_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6877;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6877;
        tmp_args_element_value_114 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_261, mod_consts[270]);

        if (tmp_args_element_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6877;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6876;
        {
            PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_call_result_235 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_260, call_args);
        }

        Py_DECREF(tmp_args_element_value_114);
        if (tmp_call_result_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6876;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_235);
    }
    {
        PyObject *tmp_called_value_262;
        PyObject *tmp_call_result_236;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_called_value_263;
        tmp_called_value_262 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_262 == NULL)) {
            tmp_called_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_262 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6879;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = mod_consts[230];
        tmp_args_element_value_116 = mod_consts[231];
        tmp_called_value_263 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_263 == NULL)) {
            tmp_called_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_263 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6880;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6880;
        tmp_args_element_value_117 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_263, mod_consts[271]);

        if (tmp_args_element_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6880;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6879;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_call_result_236 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_262, call_args);
        }

        Py_DECREF(tmp_args_element_value_117);
        if (tmp_call_result_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6879;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_236);
    }
    {
        PyObject *tmp_called_value_264;
        PyObject *tmp_call_result_237;
        tmp_called_value_264 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_264 == NULL)) {
            tmp_called_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6882;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6882;
        tmp_call_result_237 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_264, mod_consts[272]);

        if (tmp_call_result_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6882;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_237);
    }
    {
        PyObject *tmp_called_value_265;
        PyObject *tmp_call_result_238;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_called_value_266;
        tmp_called_value_265 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_265 == NULL)) {
            tmp_called_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6913;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = mod_consts[230];
        tmp_args_element_value_119 = mod_consts[231];
        tmp_called_value_266 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_266 == NULL)) {
            tmp_called_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_266 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6914;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6914;
        tmp_args_element_value_120 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_266, mod_consts[273]);

        if (tmp_args_element_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6914;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6913;
        {
            PyObject *call_args[] = {tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_call_result_238 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_265, call_args);
        }

        Py_DECREF(tmp_args_element_value_120);
        if (tmp_call_result_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6913;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_238);
    }
    {
        PyObject *tmp_called_value_267;
        PyObject *tmp_call_result_239;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_called_value_268;
        tmp_called_value_267 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_267 == NULL)) {
            tmp_called_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_267 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6916;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = mod_consts[230];
        tmp_args_element_value_122 = mod_consts[231];
        tmp_called_value_268 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_268 == NULL)) {
            tmp_called_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_268 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6917;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6917;
        tmp_args_element_value_123 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_268, mod_consts[274]);

        if (tmp_args_element_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6917;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6916;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122, tmp_args_element_value_123};
            tmp_call_result_239 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_267, call_args);
        }

        Py_DECREF(tmp_args_element_value_123);
        if (tmp_call_result_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6916;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_239);
    }
    {
        PyObject *tmp_called_value_269;
        PyObject *tmp_call_result_240;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_called_value_270;
        tmp_called_value_269 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_269 == NULL)) {
            tmp_called_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_269 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6919;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = mod_consts[230];
        tmp_args_element_value_125 = mod_consts[231];
        tmp_called_value_270 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_270 == NULL)) {
            tmp_called_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_270 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6920;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6920;
        tmp_args_element_value_126 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_270, mod_consts[275]);

        if (tmp_args_element_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6920;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6919;
        {
            PyObject *call_args[] = {tmp_args_element_value_124, tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_call_result_240 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_269, call_args);
        }

        Py_DECREF(tmp_args_element_value_126);
        if (tmp_call_result_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6919;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_240);
    }
    {
        PyObject *tmp_called_value_271;
        PyObject *tmp_call_result_241;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_called_value_272;
        tmp_called_value_271 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_271 == NULL)) {
            tmp_called_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6922;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = mod_consts[230];
        tmp_args_element_value_128 = mod_consts[231];
        tmp_called_value_272 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_272 == NULL)) {
            tmp_called_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6923;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6923;
        tmp_args_element_value_129 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_272, mod_consts[276]);

        if (tmp_args_element_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6923;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6922;
        {
            PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128, tmp_args_element_value_129};
            tmp_call_result_241 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_271, call_args);
        }

        Py_DECREF(tmp_args_element_value_129);
        if (tmp_call_result_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6922;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_241);
    }
    {
        PyObject *tmp_called_value_273;
        PyObject *tmp_call_result_242;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_called_value_274;
        tmp_called_value_273 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_273 == NULL)) {
            tmp_called_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_273 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6925;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_130 = mod_consts[230];
        tmp_args_element_value_131 = mod_consts[231];
        tmp_called_value_274 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_274 == NULL)) {
            tmp_called_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6926;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6926;
        tmp_args_element_value_132 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_274, mod_consts[277]);

        if (tmp_args_element_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6926;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6925;
        {
            PyObject *call_args[] = {tmp_args_element_value_130, tmp_args_element_value_131, tmp_args_element_value_132};
            tmp_call_result_242 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_273, call_args);
        }

        Py_DECREF(tmp_args_element_value_132);
        if (tmp_call_result_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6925;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_242);
    }
    {
        PyObject *tmp_called_value_275;
        PyObject *tmp_call_result_243;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_called_value_276;
        tmp_called_value_275 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_275 == NULL)) {
            tmp_called_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_275 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6928;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = mod_consts[230];
        tmp_args_element_value_134 = mod_consts[231];
        tmp_called_value_276 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_276 == NULL)) {
            tmp_called_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_276 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6929;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6929;
        tmp_args_element_value_135 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_276, mod_consts[278]);

        if (tmp_args_element_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6929;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6928;
        {
            PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135};
            tmp_call_result_243 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_275, call_args);
        }

        Py_DECREF(tmp_args_element_value_135);
        if (tmp_call_result_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6928;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_243);
    }
    {
        PyObject *tmp_called_value_277;
        PyObject *tmp_call_result_244;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_called_value_278;
        tmp_called_value_277 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_277 == NULL)) {
            tmp_called_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_277 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6931;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = mod_consts[230];
        tmp_args_element_value_137 = mod_consts[231];
        tmp_called_value_278 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_278 == NULL)) {
            tmp_called_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_278 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6932;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6932;
        tmp_args_element_value_138 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_278, mod_consts[279]);

        if (tmp_args_element_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6932;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6931;
        {
            PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137, tmp_args_element_value_138};
            tmp_call_result_244 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_277, call_args);
        }

        Py_DECREF(tmp_args_element_value_138);
        if (tmp_call_result_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6931;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_244);
    }
    {
        PyObject *tmp_called_value_279;
        PyObject *tmp_call_result_245;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_called_value_280;
        tmp_called_value_279 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_279 == NULL)) {
            tmp_called_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_279 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6934;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = mod_consts[230];
        tmp_args_element_value_140 = mod_consts[231];
        tmp_called_value_280 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_280 == NULL)) {
            tmp_called_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_280 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6935;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6935;
        tmp_args_element_value_141 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_280, mod_consts[280]);

        if (tmp_args_element_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6935;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6934;
        {
            PyObject *call_args[] = {tmp_args_element_value_139, tmp_args_element_value_140, tmp_args_element_value_141};
            tmp_call_result_245 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_279, call_args);
        }

        Py_DECREF(tmp_args_element_value_141);
        if (tmp_call_result_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6934;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_245);
    }
    {
        PyObject *tmp_called_value_281;
        PyObject *tmp_call_result_246;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_called_value_282;
        tmp_called_value_281 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_281 == NULL)) {
            tmp_called_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_281 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6937;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = mod_consts[230];
        tmp_args_element_value_143 = mod_consts[231];
        tmp_called_value_282 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_282 == NULL)) {
            tmp_called_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_282 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6938;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6938;
        tmp_args_element_value_144 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_282, mod_consts[281]);

        if (tmp_args_element_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6938;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6937;
        {
            PyObject *call_args[] = {tmp_args_element_value_142, tmp_args_element_value_143, tmp_args_element_value_144};
            tmp_call_result_246 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_281, call_args);
        }

        Py_DECREF(tmp_args_element_value_144);
        if (tmp_call_result_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6937;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_246);
    }
    {
        PyObject *tmp_called_value_283;
        PyObject *tmp_call_result_247;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_called_value_284;
        tmp_called_value_283 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_283 == NULL)) {
            tmp_called_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_283 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6940;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = mod_consts[230];
        tmp_args_element_value_146 = mod_consts[231];
        tmp_called_value_284 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_284 == NULL)) {
            tmp_called_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_284 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6941;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6941;
        tmp_args_element_value_147 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_284, mod_consts[282]);

        if (tmp_args_element_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6941;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6940;
        {
            PyObject *call_args[] = {tmp_args_element_value_145, tmp_args_element_value_146, tmp_args_element_value_147};
            tmp_call_result_247 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_283, call_args);
        }

        Py_DECREF(tmp_args_element_value_147);
        if (tmp_call_result_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6940;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_247);
    }
    {
        PyObject *tmp_called_value_285;
        PyObject *tmp_call_result_248;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_called_value_286;
        tmp_called_value_285 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_285 == NULL)) {
            tmp_called_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_285 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6943;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = mod_consts[230];
        tmp_args_element_value_149 = mod_consts[231];
        tmp_called_value_286 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_286 == NULL)) {
            tmp_called_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_286 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6944;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6944;
        tmp_args_element_value_150 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_286, mod_consts[283]);

        if (tmp_args_element_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6944;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6943;
        {
            PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149, tmp_args_element_value_150};
            tmp_call_result_248 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_285, call_args);
        }

        Py_DECREF(tmp_args_element_value_150);
        if (tmp_call_result_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6943;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_248);
    }
    {
        PyObject *tmp_called_value_287;
        PyObject *tmp_call_result_249;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_called_value_288;
        tmp_called_value_287 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_287 == NULL)) {
            tmp_called_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_287 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6946;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_151 = mod_consts[230];
        tmp_args_element_value_152 = mod_consts[231];
        tmp_called_value_288 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_288 == NULL)) {
            tmp_called_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_288 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6947;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6947;
        tmp_args_element_value_153 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_288, mod_consts[284]);

        if (tmp_args_element_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6947;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6946;
        {
            PyObject *call_args[] = {tmp_args_element_value_151, tmp_args_element_value_152, tmp_args_element_value_153};
            tmp_call_result_249 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_287, call_args);
        }

        Py_DECREF(tmp_args_element_value_153);
        if (tmp_call_result_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6946;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_249);
    }
    {
        PyObject *tmp_called_value_289;
        PyObject *tmp_call_result_250;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_args_element_value_155;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_called_value_290;
        tmp_called_value_289 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_289 == NULL)) {
            tmp_called_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_289 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6949;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = mod_consts[230];
        tmp_args_element_value_155 = mod_consts[231];
        tmp_called_value_290 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_290 == NULL)) {
            tmp_called_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_290 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6950;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6950;
        tmp_args_element_value_156 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_290, mod_consts[285]);

        if (tmp_args_element_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6950;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6949;
        {
            PyObject *call_args[] = {tmp_args_element_value_154, tmp_args_element_value_155, tmp_args_element_value_156};
            tmp_call_result_250 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_289, call_args);
        }

        Py_DECREF(tmp_args_element_value_156);
        if (tmp_call_result_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6949;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_250);
    }
    {
        PyObject *tmp_called_value_291;
        PyObject *tmp_call_result_251;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_called_value_292;
        tmp_called_value_291 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_291 == NULL)) {
            tmp_called_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_291 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6952;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_157 = mod_consts[230];
        tmp_args_element_value_158 = mod_consts[231];
        tmp_called_value_292 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_292 == NULL)) {
            tmp_called_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_292 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6953;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6953;
        tmp_args_element_value_159 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_292, mod_consts[286]);

        if (tmp_args_element_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6953;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6952;
        {
            PyObject *call_args[] = {tmp_args_element_value_157, tmp_args_element_value_158, tmp_args_element_value_159};
            tmp_call_result_251 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_291, call_args);
        }

        Py_DECREF(tmp_args_element_value_159);
        if (tmp_call_result_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6952;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_251);
    }
    {
        PyObject *tmp_called_value_293;
        PyObject *tmp_call_result_252;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_called_value_294;
        tmp_called_value_293 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_293 == NULL)) {
            tmp_called_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_293 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6955;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_160 = mod_consts[230];
        tmp_args_element_value_161 = mod_consts[231];
        tmp_called_value_294 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_294 == NULL)) {
            tmp_called_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_294 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6956;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6956;
        tmp_args_element_value_162 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_294, mod_consts[287]);

        if (tmp_args_element_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6956;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6955;
        {
            PyObject *call_args[] = {tmp_args_element_value_160, tmp_args_element_value_161, tmp_args_element_value_162};
            tmp_call_result_252 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_293, call_args);
        }

        Py_DECREF(tmp_args_element_value_162);
        if (tmp_call_result_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6955;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_252);
    }
    {
        PyObject *tmp_called_value_295;
        PyObject *tmp_call_result_253;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_called_value_296;
        tmp_called_value_295 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_295 == NULL)) {
            tmp_called_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_295 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6958;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = mod_consts[230];
        tmp_args_element_value_164 = mod_consts[231];
        tmp_called_value_296 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_296 == NULL)) {
            tmp_called_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_296 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6959;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6959;
        tmp_args_element_value_165 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_296, mod_consts[288]);

        if (tmp_args_element_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6959;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6958;
        {
            PyObject *call_args[] = {tmp_args_element_value_163, tmp_args_element_value_164, tmp_args_element_value_165};
            tmp_call_result_253 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_295, call_args);
        }

        Py_DECREF(tmp_args_element_value_165);
        if (tmp_call_result_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6958;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_253);
    }
    {
        PyObject *tmp_called_value_297;
        PyObject *tmp_call_result_254;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_called_value_298;
        tmp_called_value_297 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_297 == NULL)) {
            tmp_called_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_297 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6961;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = mod_consts[230];
        tmp_args_element_value_167 = mod_consts[231];
        tmp_called_value_298 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_298 == NULL)) {
            tmp_called_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_298 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6962;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6962;
        tmp_args_element_value_168 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_298, mod_consts[289]);

        if (tmp_args_element_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6962;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6961;
        {
            PyObject *call_args[] = {tmp_args_element_value_166, tmp_args_element_value_167, tmp_args_element_value_168};
            tmp_call_result_254 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_297, call_args);
        }

        Py_DECREF(tmp_args_element_value_168);
        if (tmp_call_result_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6961;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_254);
    }
    {
        PyObject *tmp_called_value_299;
        PyObject *tmp_call_result_255;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_called_value_300;
        tmp_called_value_299 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_299 == NULL)) {
            tmp_called_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_299 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6964;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = mod_consts[230];
        tmp_args_element_value_170 = mod_consts[231];
        tmp_called_value_300 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_300 == NULL)) {
            tmp_called_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_300 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6965;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6965;
        tmp_args_element_value_171 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_300, mod_consts[290]);

        if (tmp_args_element_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6965;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6964;
        {
            PyObject *call_args[] = {tmp_args_element_value_169, tmp_args_element_value_170, tmp_args_element_value_171};
            tmp_call_result_255 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_299, call_args);
        }

        Py_DECREF(tmp_args_element_value_171);
        if (tmp_call_result_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6964;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_255);
    }
    {
        PyObject *tmp_called_value_301;
        PyObject *tmp_call_result_256;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_called_value_302;
        tmp_called_value_301 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_301 == NULL)) {
            tmp_called_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_301 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6967;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_172 = mod_consts[230];
        tmp_args_element_value_173 = mod_consts[231];
        tmp_called_value_302 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_302 == NULL)) {
            tmp_called_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_302 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6968;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6968;
        tmp_args_element_value_174 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_302, mod_consts[291]);

        if (tmp_args_element_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6968;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6967;
        {
            PyObject *call_args[] = {tmp_args_element_value_172, tmp_args_element_value_173, tmp_args_element_value_174};
            tmp_call_result_256 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_301, call_args);
        }

        Py_DECREF(tmp_args_element_value_174);
        if (tmp_call_result_256 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6967;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_256);
    }
    {
        PyObject *tmp_called_value_303;
        PyObject *tmp_call_result_257;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_args_element_value_176;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_called_value_304;
        tmp_called_value_303 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_303 == NULL)) {
            tmp_called_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_303 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6970;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = mod_consts[230];
        tmp_args_element_value_176 = mod_consts[231];
        tmp_called_value_304 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_304 == NULL)) {
            tmp_called_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_304 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6971;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6971;
        tmp_args_element_value_177 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_304, mod_consts[292]);

        if (tmp_args_element_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6971;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6970;
        {
            PyObject *call_args[] = {tmp_args_element_value_175, tmp_args_element_value_176, tmp_args_element_value_177};
            tmp_call_result_257 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_303, call_args);
        }

        Py_DECREF(tmp_args_element_value_177);
        if (tmp_call_result_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6970;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_257);
    }
    {
        PyObject *tmp_called_value_305;
        PyObject *tmp_call_result_258;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_args_element_value_180;
        PyObject *tmp_called_value_306;
        tmp_called_value_305 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_305 == NULL)) {
            tmp_called_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_305 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6973;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = mod_consts[230];
        tmp_args_element_value_179 = mod_consts[231];
        tmp_called_value_306 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_306 == NULL)) {
            tmp_called_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_306 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6974;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6974;
        tmp_args_element_value_180 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_306, mod_consts[293]);

        if (tmp_args_element_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6974;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6973;
        {
            PyObject *call_args[] = {tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180};
            tmp_call_result_258 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_305, call_args);
        }

        Py_DECREF(tmp_args_element_value_180);
        if (tmp_call_result_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6973;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_258);
    }
    {
        PyObject *tmp_called_value_307;
        PyObject *tmp_call_result_259;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_args_element_value_182;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_called_value_308;
        tmp_called_value_307 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_307 == NULL)) {
            tmp_called_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_307 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6976;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_181 = mod_consts[230];
        tmp_args_element_value_182 = mod_consts[231];
        tmp_called_value_308 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_308 == NULL)) {
            tmp_called_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_308 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6977;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6977;
        tmp_args_element_value_183 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_308, mod_consts[294]);

        if (tmp_args_element_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6977;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6976;
        {
            PyObject *call_args[] = {tmp_args_element_value_181, tmp_args_element_value_182, tmp_args_element_value_183};
            tmp_call_result_259 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_307, call_args);
        }

        Py_DECREF(tmp_args_element_value_183);
        if (tmp_call_result_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6976;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_259);
    }
    {
        PyObject *tmp_called_value_309;
        PyObject *tmp_call_result_260;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_called_value_310;
        tmp_called_value_309 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_309 == NULL)) {
            tmp_called_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_309 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = mod_consts[230];
        tmp_args_element_value_185 = mod_consts[231];
        tmp_called_value_310 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_310 == NULL)) {
            tmp_called_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_310 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6980;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6980;
        tmp_args_element_value_186 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_310, mod_consts[295]);

        if (tmp_args_element_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6980;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6979;
        {
            PyObject *call_args[] = {tmp_args_element_value_184, tmp_args_element_value_185, tmp_args_element_value_186};
            tmp_call_result_260 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_309, call_args);
        }

        Py_DECREF(tmp_args_element_value_186);
        if (tmp_call_result_260 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_260);
    }
    {
        PyObject *tmp_called_value_311;
        PyObject *tmp_call_result_261;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_args_element_value_188;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_called_value_312;
        tmp_called_value_311 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_311 == NULL)) {
            tmp_called_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_311 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6982;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_187 = mod_consts[230];
        tmp_args_element_value_188 = mod_consts[231];
        tmp_called_value_312 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_312 == NULL)) {
            tmp_called_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_312 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6983;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6983;
        tmp_args_element_value_189 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_312, mod_consts[296]);

        if (tmp_args_element_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6983;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6982;
        {
            PyObject *call_args[] = {tmp_args_element_value_187, tmp_args_element_value_188, tmp_args_element_value_189};
            tmp_call_result_261 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_311, call_args);
        }

        Py_DECREF(tmp_args_element_value_189);
        if (tmp_call_result_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6982;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_261);
    }
    {
        PyObject *tmp_called_value_313;
        PyObject *tmp_call_result_262;
        PyObject *tmp_args_element_value_190;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_args_element_value_192;
        PyObject *tmp_called_value_314;
        tmp_called_value_313 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_313 == NULL)) {
            tmp_called_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_313 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6985;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_190 = mod_consts[230];
        tmp_args_element_value_191 = mod_consts[231];
        tmp_called_value_314 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_called_value_314 == NULL)) {
            tmp_called_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_called_value_314 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6986;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6986;
        tmp_args_element_value_192 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_314, mod_consts[297]);

        if (tmp_args_element_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6986;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6985;
        {
            PyObject *call_args[] = {tmp_args_element_value_190, tmp_args_element_value_191, tmp_args_element_value_192};
            tmp_call_result_262 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_313, call_args);
        }

        Py_DECREF(tmp_args_element_value_192);
        if (tmp_call_result_262 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6985;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_262);
    }
    {
        PyObject *tmp_called_value_315;
        PyObject *tmp_call_result_263;
        tmp_called_value_315 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_315 == NULL)) {
            tmp_called_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_315 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6988;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 6988;
        tmp_call_result_263 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_315, mod_consts[298]);

        if (tmp_call_result_263 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6988;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_263);
    }
    {
        PyObject *tmp_called_value_316;
        PyObject *tmp_call_result_264;
        tmp_called_value_316 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_316 == NULL)) {
            tmp_called_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_316 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7026;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7026;
        tmp_call_result_264 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_316, mod_consts[299]);

        if (tmp_call_result_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7026;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_264);
    }
    {
        PyObject *tmp_called_value_317;
        PyObject *tmp_call_result_265;
        tmp_called_value_317 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_317 == NULL)) {
            tmp_called_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_317 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7032;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7032;
        tmp_call_result_265 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_317, mod_consts[300]);

        if (tmp_call_result_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7032;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_265);
    }
    {
        PyObject *tmp_called_value_318;
        PyObject *tmp_call_result_266;
        tmp_called_value_318 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_318 == NULL)) {
            tmp_called_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_318 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7038;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7038;
        tmp_call_result_266 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_318, mod_consts[301]);

        if (tmp_call_result_266 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7038;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_266);
    }
    {
        PyObject *tmp_called_value_319;
        PyObject *tmp_call_result_267;
        tmp_called_value_319 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_319 == NULL)) {
            tmp_called_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_319 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7044;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7044;
        tmp_call_result_267 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_319, mod_consts[302]);

        if (tmp_call_result_267 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7044;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_267);
    }
    {
        PyObject *tmp_called_value_320;
        PyObject *tmp_call_result_268;
        tmp_called_value_320 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_320 == NULL)) {
            tmp_called_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_320 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7050;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7050;
        tmp_call_result_268 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_320, mod_consts[303]);

        if (tmp_call_result_268 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7050;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_268);
    }
    {
        PyObject *tmp_called_value_321;
        PyObject *tmp_call_result_269;
        tmp_called_value_321 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_321 == NULL)) {
            tmp_called_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_321 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7058;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7058;
        tmp_call_result_269 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_321, mod_consts[304]);

        if (tmp_call_result_269 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7058;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_269);
    }
    {
        PyObject *tmp_called_value_322;
        PyObject *tmp_call_result_270;
        tmp_called_value_322 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_322 == NULL)) {
            tmp_called_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_322 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7064;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7064;
        tmp_call_result_270 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_322, mod_consts[305]);

        if (tmp_call_result_270 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7064;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_270);
    }
    {
        PyObject *tmp_called_value_323;
        PyObject *tmp_call_result_271;
        tmp_called_value_323 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_323 == NULL)) {
            tmp_called_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_323 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7071;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7071;
        tmp_call_result_271 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_323, mod_consts[306]);

        if (tmp_call_result_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7071;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_271);
    }
    {
        PyObject *tmp_called_value_324;
        PyObject *tmp_call_result_272;
        tmp_called_value_324 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_324 == NULL)) {
            tmp_called_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_324 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7079;

            goto frame_exception_exit_1;
        }
        frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame.f_lineno = 7079;
        tmp_call_result_272 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_324, mod_consts[307]);

        if (tmp_call_result_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7079;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_272);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3cfb5a701c7ec601bdd4c811afc6b9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3cfb5a701c7ec601bdd4c811afc6b9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3cfb5a701c7ec601bdd4c811afc6b9d, exception_lineno);
    }



    assertFrameObject(frame_d3cfb5a701c7ec601bdd4c811afc6b9d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy.core._add_newdocs", false);

    Py_INCREF(module_numpy$core$_add_newdocs);
    return module_numpy$core$_add_newdocs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$core$_add_newdocs", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
