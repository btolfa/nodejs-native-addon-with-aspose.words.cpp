/// @file system/threading/auto_reset_event.h
#if !defined(_auto_reset_event_h_)
#define _auto_reset_event_h_

#include "system/object.h"
#include "system/threading/event_wait_handle.h"

namespace System{ namespace Threading{

/// Event to notify waiting thread that resets automatically.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS AutoResetEvent final : public EventWaitHandle
{
    /// RTTI information.
    RTTI_INFO(System::Threading::AutoResetEvent, ::System::BaseTypesInfo<System::Threading::EventWaitHandle>);
public:
    /// Constructor.
    /// @param initialState True for signalled, false for not signalled.
    ASPOSECPP_SHARED_API AutoResetEvent(bool initialState);
};

}}

#endif
