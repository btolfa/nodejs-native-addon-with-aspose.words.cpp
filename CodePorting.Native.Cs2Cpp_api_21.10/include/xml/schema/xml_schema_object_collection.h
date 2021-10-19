#pragma once

#include <system/collections/ilist.h>

#include "xml_schema_object.h"

namespace System { namespace Xml { namespace Schema {

class ASPOSECPP_SHARED_CLASS XmlSchemaObjectCollection : public Collections::Generic::IList<SharedPtr<XmlSchemaObject>>
{
    using BaseType = Collections::Generic::IList<SharedPtr<XmlSchemaObject>>;

    friend class XmlSchemaComplexType;

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmlSchemaObjectCollection,
        CODEPORTING_ARGS(const SharedPtr<ICollection<SharedPtr<XmlSchemaObject>>>& items));

public:
    ASPOSECPP_SHARED_API XmlSchemaObjectCollection();

    ASPOSECPP_SHARED_API SmartPtr<Collections::Generic::IEnumerator<SmartPtr<XmlSchemaObject>>> GetEnumerator() override;

    ASPOSECPP_SHARED_API int get_Count() const override;

    ASPOSECPP_SHARED_API void Add(const SmartPtr<XmlSchemaObject>& item) override;

    ASPOSECPP_SHARED_API void Clear() override;

    ASPOSECPP_SHARED_API bool Contains(const SmartPtr<XmlSchemaObject>& item) const override;

    ASPOSECPP_SHARED_API bool Remove(const SmartPtr<XmlSchemaObject>& item) override;

    ASPOSECPP_SHARED_API void CopyTo(System::ArrayPtr<SmartPtr<XmlSchemaObject>> array, int arrayIndex) override;

    ASPOSECPP_SHARED_API int IndexOf(const SmartPtr<XmlSchemaObject>& item) const override;

    ASPOSECPP_SHARED_API void Insert(int index, const SmartPtr<XmlSchemaObject>& item) override;

    ASPOSECPP_SHARED_API void RemoveAt(int index) override;

    ASPOSECPP_SHARED_API SmartPtr<XmlSchemaObject> idx_get(int index) const override;

    ASPOSECPP_SHARED_API void idx_set(int index, SmartPtr<XmlSchemaObject> value) override;

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    XmlSchemaObjectCollection(const SharedPtr<ICollection<SharedPtr<XmlSchemaObject>>>& items);

private:
    SharedPtr<IList<SharedPtr<XmlSchemaObject>>> m_items;
};

}}}
