/// @file system/threading/monitor.h
#pragma once
#include <system/timespan.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <cstdint>

namespace System { namespace Threading {

/// Class Monitor provides a mechanism that synchronizes access to objects
class ASPOSECPP_SHARED_CLASS Monitor : public System::Object
{
    typedef Monitor ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();

public:
    /// Acquires an exclusive lock on a specified object.
    /// @param obj The object on which to acquire the monitor lock.
    /// @throws ArgumentNullException The obj parameter is null.
    ASPOSECPP_SHARED_API static void Enter(SharedPtr<Object> obj);
    /// Acquires an exclusive lock on the specified object,
    /// and atomically sets a value that indicates whether the lock was taken
    static ASPOSECPP_SHARED_API void Enter(System::SharedPtr<Object> obj, bool& lockTaken);
    /// Releases an exclusive lock on the specified object.
    /// @param obj The object on which to release the lock.
    /// @throw ArgumentNullException The obj parameter is null.
    /// @throw SynchronizationLockException The current thread does not own the lock for the specified object.
    ASPOSECPP_SHARED_API static void Exit(SharedPtr<Object> obj);
    /// Attempts to acquire an exclusive lock on the specified object
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static bool TryEnter(SharedPtr<Object> obj);
    /// Attempts to acquire an exclusive lock on the specified object,
    /// and atomically sets a value that indicates whether the lock was taken
    static ASPOSECPP_SHARED_API void TryEnter(System::SharedPtr<Object> obj, bool& lockTaken);
    /// Attempts, for the specified number of milliseconds, to acquire an exclusive lock on the specified object
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static bool TryEnter(SharedPtr<Object> obj, int32_t millisecondsTimeout);
    /// Attempts, for the specified amount of time, to acquire an exclusive lock on the specified object
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static bool TryEnter(SharedPtr<Object> obj, TimeSpan timeout);
    /// Attempts, for the specified amount of time, to acquire an exclusive lock on the specified object,
    /// and atomically sets a value that indicates whether the lock was taken
    static ASPOSECPP_SHARED_API void TryEnter(System::SharedPtr<Object> obj, int32_t millisecondsTimeout,
                                              bool& lockTaken);
    /// Attempts, for the specified amount of time, to acquire an exclusive lock on the specified object,
    /// and atomically sets a value that indicates whether the lock was taken
    static ASPOSECPP_SHARED_API void TryEnter(System::SharedPtr<Object> obj, TimeSpan timeout, bool& lockTaken);
    /// Determines whether the current thread holds the lock on the specified object
    static ASPOSECPP_SHARED_API bool IsEntered(System::SharedPtr<Object> obj);
    /// Releases the lock on an object and blocks the current thread until it reacquires the lock.
    /// If the specified time-out interval elapses, the thread enters the ready queue.
    /// Optionally exits the synchronization domain for the synchronized context before the wait
    /// and reacquires the domain afterward.
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static bool Wait(SharedPtr<Object> obj, int32_t millisecondsTimeout, bool exitContext);
    /// Releases the lock on an object and blocks the current thread until it reacquires the lock.
    /// If the specified time-out interval elapses, the thread enters the ready queue.
    /// Optionally exits the synchronization domain for the synchronized context before the wait
    /// and reacquires the domain afterward.
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static bool Wait(SharedPtr<Object> obj, TimeSpan timeout, bool exitContext);
    /// Releases the lock on an object and blocks the current thread until it reacquires the lock.
    /// If the specified time-out interval elapses, the thread enters the ready queue.
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static bool Wait(SharedPtr<Object> obj, int32_t millisecondsTimeout);
    /// Releases the lock on an object and blocks the current thread until it reacquires the lock.
    /// If the specified time-out interval elapses, the thread enters the ready queue.
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static bool Wait(SharedPtr<Object> obj, TimeSpan timeout);
    /// Releases the lock on an object and blocks the current thread until it reacquires the lock
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static bool Wait(SharedPtr<Object> obj);
    /// Notifies a thread in the waiting queue of a change in the locked object's state
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static void Pulse(SharedPtr<Object> obj);
    /// Notifies all waiting threads of a change in the object's state
    /// Not implemented.
    /// @throw NotImplementedException Always.
    ASPOSECPP_SHARED_API static void PulseAll(SharedPtr<Object> obj);
    
private:
    static std::vector<SharedPtr<Object>> m_locked;
};

}} // namespace System::Threading
