/// @file system/weak_reference.h
#pragma once

#include "system/object.h"
#include "system/smart_ptr.h"
#include "system/weak_ptr.h"

namespace System
{
    /// Represents a weak reference, which references an object while still allowing that object to be deleted.
    class ASPOSECPP_SHARED_CLASS WeakReference 
    {

    public:
        /// Default constructor
        WeakReference()
        {
        }
        
        /// Initializes a new instance of the WeakReference class, referencing the specified object.
        WeakReference(const SmartPtr<Object> &data)
        {
            wptr = data;
        }

        /// Gets the object (the target) referenced by the current WeakReference object.
        const SmartPtr<Object>& get_Target() const
        {
            return wptr;
        }

        /// Sets the object (the target) referenced by the current WeakReference object.
        void set_Target(const SmartPtr<Object>& data)
        {
            wptr = data;
        }

        /// Gets an indication whether the object referenced by the current WeakReference object has been deleted.
        bool get_IsAlive() const
        {
            return !wptr.expired();
        }

        void reset()
        {
            wptr.reset();
        }

        /// Checks if referenced object is null.
        /// @return True if referenced object is null, false otherwise.
        bool operator==(std::nullptr_t) const
        {
            return wptr == nullptr;
        }

        /// Checks if referenced object is not null.
        /// @return True if referenced object is not null, false otherwise.
        bool operator!=(std::nullptr_t) const
        {
            return !(*this == nullptr);
        }

        /// Compares referenced object to another instance WeakReference class.
        /// @param other Object compare to.
        /// @return True if compared objects reference the same object, false otherwise.
        bool operator==(const WeakReference& other) const
        {
            return wptr == other.wptr;
        }

        /// Compares referenced object to another instance WeakReference class.
        /// @param other Object compare to.
        /// @return True if compared objects reference different objects, false if objects are same.
        bool operator!=(const WeakReference& other) const
        {
            return wptr != other.wptr;
        }

    private:
        WeakPtr<Object> wptr;
    };
}
