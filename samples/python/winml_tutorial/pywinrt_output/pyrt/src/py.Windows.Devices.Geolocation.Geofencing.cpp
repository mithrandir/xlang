// WARNING: Please don't edit this file. It was generated by Python/WinRT

#include "py.Windows.Devices.Geolocation.Geofencing.h"

// ----- Geofence class --------------------

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>::python_type;

static PyObject* Geofence_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    if (kwds != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "keyword arguments not supported");
        return nullptr;
    }
    
    Py_ssize_t arg_count = PyTuple_Size(args);
    
    if (arg_count == 2)
    {
        try
        {
            auto param0 = py::convert_to<winrt::hstring>(args, 0);
            auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::IGeoshape>(args, 1);
            
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence instance{ param0, param1 };
            return py::wrap(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == 4)
    {
        try
        {
            auto param0 = py::convert_to<winrt::hstring>(args, 0);
            auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::IGeoshape>(args, 1);
            auto param2 = py::convert_to<winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>(args, 2);
            auto param3 = py::convert_to<bool>(args, 3);
            
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence instance{ param0, param1, param2, param3 };
            return py::wrap(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == 5)
    {
        try
        {
            auto param0 = py::convert_to<winrt::hstring>(args, 0);
            auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::IGeoshape>(args, 1);
            auto param2 = py::convert_to<winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>(args, 2);
            auto param3 = py::convert_to<bool>(args, 3);
            auto param4 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 4);
            
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence instance{ param0, param1, param2, param3, param4 };
            return py::wrap(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == 7)
    {
        try
        {
            auto param0 = py::convert_to<winrt::hstring>(args, 0);
            auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::IGeoshape>(args, 1);
            auto param2 = py::convert_to<winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>(args, 2);
            auto param3 = py::convert_to<bool>(args, 3);
            auto param4 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 4);
            auto param5 = py::convert_to<winrt::Windows::Foundation::DateTime>(args, 5);
            auto param6 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 6);
            
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence instance{ param0, param1, param2, param3, param4, param5, param6 };
            return py::wrap(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count != -1)
    {
        PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    }
    
    return nullptr;
}

static void Geofence_dealloc(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self)
{
    auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
    py::wrapped_instance(hash_value, nullptr);
    self->obj = nullptr;
}

static PyObject* Geofence_get_Duration(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.Duration();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Geofence_get_DwellTime(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.DwellTime();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Geofence_get_Geoshape(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.Geoshape();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Geofence_get_Id(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.Id();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Geofence_get_MonitoredStates(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.MonitoredStates();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Geofence_get_SingleUse(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.SingleUse();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Geofence_get_StartTime(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.StartTime();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* __Geofence_from(PyObject* /*unused*/, PyObject* arg)
{
    try
    {
        auto instance = py::converter<winrt::Windows::Foundation::IInspectable>::convert_to(arg);
        return py::convert(instance.as<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>());
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyMethodDef Geofence_methods[] = {
    { "_from", (PyCFunction)__Geofence_from, METH_O | METH_STATIC, nullptr },
    { nullptr }
};

static PyGetSetDef Geofence_getset[] = {
    { const_cast<char*>("Duration"), (getter)Geofence_get_Duration, nullptr, nullptr, nullptr },
    { const_cast<char*>("DwellTime"), (getter)Geofence_get_DwellTime, nullptr, nullptr, nullptr },
    { const_cast<char*>("Geoshape"), (getter)Geofence_get_Geoshape, nullptr, nullptr, nullptr },
    { const_cast<char*>("Id"), (getter)Geofence_get_Id, nullptr, nullptr, nullptr },
    { const_cast<char*>("MonitoredStates"), (getter)Geofence_get_MonitoredStates, nullptr, nullptr, nullptr },
    { const_cast<char*>("SingleUse"), (getter)Geofence_get_SingleUse, nullptr, nullptr, nullptr },
    { const_cast<char*>("StartTime"), (getter)Geofence_get_StartTime, nullptr, nullptr, nullptr },
    { nullptr }
};

static PyType_Slot Geofence_Type_slots[] = 
{
    { Py_tp_dealloc, Geofence_dealloc },
    { Py_tp_new, Geofence_new },
    { Py_tp_methods, Geofence_methods },
    { Py_tp_getset, Geofence_getset },
    { 0, nullptr },
};

static PyType_Spec Geofence_Type_spec =
{
    "_pyrt_Windows_Devices_Geolocation_Geofencing.Geofence",
    sizeof(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>),
    0,
    Py_TPFLAGS_DEFAULT,
    Geofence_Type_slots
};

// ----- GeofenceMonitor class --------------------

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>::python_type;

static PyObject* GeofenceMonitor_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    PyErr_SetString(PyExc_TypeError, "GeofenceMonitor is not activatable");
    return nullptr;
}

static void GeofenceMonitor_dealloc(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self)
{
    auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
    py::wrapped_instance(hash_value, nullptr);
    self->obj = nullptr;
}

static PyObject* GeofenceMonitor_ReadReports(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{
    Py_ssize_t arg_count = PyTuple_Size(args);
    
    if (arg_count == 0)
    {
        try
        {
            auto return_value = self->obj.ReadReports();
            
            py::pyobj_handle out_return_value{ py::convert(return_value) };
            if (!out_return_value) 
            { 
                return nullptr;
            }
            
            return out_return_value.detach();
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count != -1)
    {
        PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    }
    
    return nullptr;
}

static PyObject* GeofenceMonitor_get_Geofences(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.Geofences();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceMonitor_get_LastKnownGeoposition(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.LastKnownGeoposition();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceMonitor_get_Status(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.Status();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceMonitor_get_Current(PyObject* /*unused*/, PyObject* /*unused*/)
{
    try
    {
        auto return_value = winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor::Current();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceMonitor_add_GeofenceStateChanged(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* arg)
{
    try
    {
        auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, winrt::Windows::Foundation::IInspectable>>(arg);
        
        auto return_value = self->obj.GeofenceStateChanged(param0);
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceMonitor_remove_GeofenceStateChanged(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* arg)
{
    try
    {
        auto param0 = py::convert_to<winrt::event_token>(arg);
        
        self->obj.GeofenceStateChanged(param0);
        
        Py_RETURN_NONE;
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceMonitor_add_StatusChanged(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* arg)
{
    try
    {
        auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, winrt::Windows::Foundation::IInspectable>>(arg);
        
        auto return_value = self->obj.StatusChanged(param0);
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceMonitor_remove_StatusChanged(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* arg)
{
    try
    {
        auto param0 = py::convert_to<winrt::event_token>(arg);
        
        self->obj.StatusChanged(param0);
        
        Py_RETURN_NONE;
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* __GeofenceMonitor_from(PyObject* /*unused*/, PyObject* arg)
{
    try
    {
        auto instance = py::converter<winrt::Windows::Foundation::IInspectable>::convert_to(arg);
        return py::convert(instance.as<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>());
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyMethodDef GeofenceMonitor_methods[] = {
    { "ReadReports", (PyCFunction)GeofenceMonitor_ReadReports, METH_VARARGS, nullptr },
    { "get_Current", (PyCFunction)GeofenceMonitor_get_Current, METH_NOARGS | METH_STATIC, nullptr },
    { "add_GeofenceStateChanged", (PyCFunction)GeofenceMonitor_add_GeofenceStateChanged, METH_O, nullptr },
    { "remove_GeofenceStateChanged", (PyCFunction)GeofenceMonitor_remove_GeofenceStateChanged, METH_O, nullptr },
    { "add_StatusChanged", (PyCFunction)GeofenceMonitor_add_StatusChanged, METH_O, nullptr },
    { "remove_StatusChanged", (PyCFunction)GeofenceMonitor_remove_StatusChanged, METH_O, nullptr },
    { "_from", (PyCFunction)__GeofenceMonitor_from, METH_O | METH_STATIC, nullptr },
    { nullptr }
};

static PyGetSetDef GeofenceMonitor_getset[] = {
    { const_cast<char*>("Geofences"), (getter)GeofenceMonitor_get_Geofences, nullptr, nullptr, nullptr },
    { const_cast<char*>("LastKnownGeoposition"), (getter)GeofenceMonitor_get_LastKnownGeoposition, nullptr, nullptr, nullptr },
    { const_cast<char*>("Status"), (getter)GeofenceMonitor_get_Status, nullptr, nullptr, nullptr },
    { nullptr }
};

static PyType_Slot GeofenceMonitor_Type_slots[] = 
{
    { Py_tp_dealloc, GeofenceMonitor_dealloc },
    { Py_tp_new, GeofenceMonitor_new },
    { Py_tp_methods, GeofenceMonitor_methods },
    { Py_tp_getset, GeofenceMonitor_getset },
    { 0, nullptr },
};

static PyType_Spec GeofenceMonitor_Type_spec =
{
    "_pyrt_Windows_Devices_Geolocation_Geofencing.GeofenceMonitor",
    sizeof(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>),
    0,
    Py_TPFLAGS_DEFAULT,
    GeofenceMonitor_Type_slots
};

// ----- GeofenceStateChangeReport class --------------------

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>::python_type;

static PyObject* GeofenceStateChangeReport_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    PyErr_SetString(PyExc_TypeError, "GeofenceStateChangeReport is not activatable");
    return nullptr;
}

static void GeofenceStateChangeReport_dealloc(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self)
{
    auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
    py::wrapped_instance(hash_value, nullptr);
    self->obj = nullptr;
}

static PyObject* GeofenceStateChangeReport_get_Geofence(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.Geofence();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceStateChangeReport_get_Geoposition(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.Geoposition();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceStateChangeReport_get_NewState(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.NewState();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceStateChangeReport_get_RemovalReason(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self, void* /*unused*/)
{
    try
    {
        auto return_value = self->obj.RemovalReason();
        
        py::pyobj_handle out_return_value{ py::convert(return_value) };
        if (!out_return_value) 
        { 
            return nullptr;
        }
        
        return out_return_value.detach();
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* __GeofenceStateChangeReport_from(PyObject* /*unused*/, PyObject* arg)
{
    try
    {
        auto instance = py::converter<winrt::Windows::Foundation::IInspectable>::convert_to(arg);
        return py::convert(instance.as<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>());
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyMethodDef GeofenceStateChangeReport_methods[] = {
    { "_from", (PyCFunction)__GeofenceStateChangeReport_from, METH_O | METH_STATIC, nullptr },
    { nullptr }
};

static PyGetSetDef GeofenceStateChangeReport_getset[] = {
    { const_cast<char*>("Geofence"), (getter)GeofenceStateChangeReport_get_Geofence, nullptr, nullptr, nullptr },
    { const_cast<char*>("Geoposition"), (getter)GeofenceStateChangeReport_get_Geoposition, nullptr, nullptr, nullptr },
    { const_cast<char*>("NewState"), (getter)GeofenceStateChangeReport_get_NewState, nullptr, nullptr, nullptr },
    { const_cast<char*>("RemovalReason"), (getter)GeofenceStateChangeReport_get_RemovalReason, nullptr, nullptr, nullptr },
    { nullptr }
};

static PyType_Slot GeofenceStateChangeReport_Type_slots[] = 
{
    { Py_tp_dealloc, GeofenceStateChangeReport_dealloc },
    { Py_tp_new, GeofenceStateChangeReport_new },
    { Py_tp_methods, GeofenceStateChangeReport_methods },
    { Py_tp_getset, GeofenceStateChangeReport_getset },
    { 0, nullptr },
};

static PyType_Spec GeofenceStateChangeReport_Type_spec =
{
    "_pyrt_Windows_Devices_Geolocation_Geofencing.GeofenceStateChangeReport",
    sizeof(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>),
    0,
    Py_TPFLAGS_DEFAULT,
    GeofenceStateChangeReport_Type_slots
};

// ----- Windows.Devices.Geolocation.Geofencing Initialization --------------------

static int module_exec(PyObject* module)
{
    py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::winrt_base>::python_type) };
    
    {
        py::pyobj_handle type_object { PyType_FromSpecWithBases(&Geofence_Type_spec, bases.get()) };
        if (!type_object)
        {
            return -1;
        }
        if (PyModule_AddObject(module, "Geofence", type_object.get()) != 0)
        {
            return -1;
        }
        py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>::python_type = reinterpret_cast<PyTypeObject*>(type_object.detach());
    }
    {
        py::pyobj_handle type_object { PyType_FromSpecWithBases(&GeofenceMonitor_Type_spec, bases.get()) };
        if (!type_object)
        {
            return -1;
        }
        if (PyModule_AddObject(module, "GeofenceMonitor", type_object.get()) != 0)
        {
            return -1;
        }
        py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>::python_type = reinterpret_cast<PyTypeObject*>(type_object.detach());
    }
    {
        py::pyobj_handle type_object { PyType_FromSpecWithBases(&GeofenceStateChangeReport_Type_spec, bases.get()) };
        if (!type_object)
        {
            return -1;
        }
        if (PyModule_AddObject(module, "GeofenceStateChangeReport", type_object.get()) != 0)
        {
            return -1;
        }
        py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>::python_type = reinterpret_cast<PyTypeObject*>(type_object.detach());
    }
    return 0;
}

static PyModuleDef_Slot module_slots[] = {
    {Py_mod_exec, module_exec},
    {0, nullptr}
};

PyDoc_STRVAR(module_doc, "Windows.Devices.Geolocation.Geofencing");

static PyModuleDef module_def = {
    PyModuleDef_HEAD_INIT,
    "_pyrt_Windows_Devices_Geolocation_Geofencing",
    module_doc,
    0,
    nullptr,
    module_slots,
    nullptr,
    nullptr,
    nullptr
};

PyMODINIT_FUNC
PyInit__pyrt_Windows_Devices_Geolocation_Geofencing(void)
{
    return PyModuleDef_Init(&module_def);
}
