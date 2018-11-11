#include <atlbase.h>
#include <atlcom.h>

// This implements DLL entry points so that the automagic ATL module can do its thing. Nothing to see here, move along.
class COMDLL : public CAtlDllModuleT<COMDLL> { };
static COMDLL comdll;
extern "C" BOOL WINAPI DllMain(HINSTANCE, DWORD dwReason, LPVOID lpReserved) { return comdll.DllMain(dwReason, lpReserved); }
STDAPI DllCanUnloadNow(void) { return comdll.DllCanUnloadNow(); }
STDAPI DllGetClassObject(__in REFCLSID rclsid, __in REFIID riid, __deref_out LPVOID* ppv) { return comdll.DllGetClassObject(rclsid, riid, ppv); }
STDAPI DllRegisterServer(void) { return comdll.DllRegisterServer(); }
STDAPI DllUnregisterServer(void) { return comdll.DllUnregisterServer(); }
