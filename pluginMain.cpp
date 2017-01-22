#include <maya/MFnPlugin.h>

MStatus initializePlugin(MObject plugin)
{
    MStatus status;
    MFnPlugin pluginFn(plugin, "___ORGANIZATIONNAME___", "1.0.0", "Any");
    
    // Register elements here
    
    return status;
}

MStatus uninitializePlugin(MObject plugin)
{
    MStatus status;
    MFnPlugin pluginFn(plugin);
    
    // Deregister elements here
    
    return status;
}
