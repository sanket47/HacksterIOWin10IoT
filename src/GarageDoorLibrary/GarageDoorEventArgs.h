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

namespace net { namespace protosystem { namespace GarageDoor {

// Signals
public ref class GarageDoorGarageDoorStateChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property uint32 OldState
    {
        uint32 get() { return m_interfaceMemberOldState; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberOldState = value; }
    }
    property uint32 NewState
    {
        uint32 get() { return m_interfaceMemberNewState; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberNewState = value; }
    }
    property int64 ElapsedTime
    {
        int64 get() { return m_interfaceMemberElapsedTime; }
    internal:
        void set(_In_ int64 value) { m_interfaceMemberElapsedTime = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    uint32 m_interfaceMemberOldState;
    uint32 m_interfaceMemberNewState;
    int64 m_interfaceMemberElapsedTime;
};


} } } 
