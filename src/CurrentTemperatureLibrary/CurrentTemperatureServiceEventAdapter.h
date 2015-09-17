//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace net { namespace protosystem { namespace SmartSpaces { namespace Environment { namespace CurrentTemperature {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement ICurrentTemperatureService. Instead, CurrentTemperatureServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class CurrentTemperatureServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] ICurrentTemperatureService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<CurrentTemperatureServiceEventAdapter^, CurrentTemperatureSetLocationCalledEventArgs^>^ SetLocationCalled;

    // Property Read Events
    event Windows::Foundation::TypedEventHandler<CurrentTemperatureServiceEventAdapter^, CurrentTemperatureGetVersionRequestedEventArgs^>^ GetVersionRequested;
    event Windows::Foundation::TypedEventHandler<CurrentTemperatureServiceEventAdapter^, CurrentTemperatureGetCurrentValueRequestedEventArgs^>^ GetCurrentValueRequested;
    event Windows::Foundation::TypedEventHandler<CurrentTemperatureServiceEventAdapter^, CurrentTemperatureGetLocationRequestedEventArgs^>^ GetLocationRequested;
    
    // Property Write Events

    // ICurrentTemperatureService Implementation
    virtual Windows::Foundation::IAsyncOperation<CurrentTemperatureSetLocationResult^>^ SetLocationAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberLocation);

    virtual Windows::Foundation::IAsyncOperation<CurrentTemperatureGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<CurrentTemperatureGetCurrentValueResult^>^ GetCurrentValueAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<CurrentTemperatureGetLocationResult^>^ GetLocationAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

};

} } } } } 
