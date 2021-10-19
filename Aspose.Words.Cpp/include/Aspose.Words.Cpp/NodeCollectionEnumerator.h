//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/NodeCollectionEnumerator.h
#pragma once

#include <system/string.h>
#include <system/scope_guard.h>
#include <system/exceptions.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/collections/ienumerator.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Node.h>
#include <Aspose.Words.Cpp/INodeCollection.h>
#include <Aspose.Words.Cpp/CompositeNode.h>

namespace Aspose {

namespace Words {

template<typename T>
/// \cond
class NodeCollectionEnumerator final : public System::Collections::Generic::IEnumerator<T>
{
    typedef Aspose::Words::Node BaseT_Node;
    assert_is_base_of(BaseT_Node, T);

    typedef NodeCollectionEnumerator<T> ThisType;
    typedef System::Collections::Generic::IEnumerator<T> BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);

    template<typename FT0> friend class Aspose::Words::NodeCollectionEnumerator;

public:

    T get_Current() const override
    {
        if ((mCurNode == mNodes->get_Container()) || (mCurNode == nullptr))
        {
            throw System::InvalidOperationException(u"Invalid position of the enumerator.");
        }
        return System::StaticCast<typename T::Pointee_>(mCurNode);
    }

    NodeCollectionEnumerator(const System::SharedPtr<Aspose::Words::INodeCollection>& nodes)
    {

        System::Details::ThisProtector __local_self_ref(this);

        mNodes = nodes;
        Reset();
    }

    void Dispose() override
    {

    }

    bool MoveNext() override
    {
        if (mCurNode == nullptr)
        {
            return false;
        }

        if ((mCurNode != mNodes->get_Container()) && (mCurNode->get_ParentNode() == nullptr))
        {

            mCurNode = mPrevNode;
        }

        if ((mCurNode != mNodes->get_Container()) && (mCurNode->get_ParentNode() == nullptr))
        {
            throw System::InvalidOperationException(u"Document structure was changed.");
        }

        mPrevNode = mNodes->GetNextMatchingNode(mCurNode);
        mCurNode = mNodes->GetCurrentNode();

        return mCurNode != nullptr;
    }

    void Reset() override
    {
        mCurNode = mNodes->get_Container();
    }

    #if defined(__MSVC__)
    #pragma warning( push )
    #pragma warning(disable : 4715)
    #pragma warning(disable : 4700)
    #pragma warning(disable : 4701)
    #elif defined(__GNUC__)
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreturn-type"
    #endif
    static int32_t GetCount(const System::SharedPtr<Aspose::Words::INodeCollection>& collection)
    {
        int32_t count = 0;
        {
            System::SharedPtr<Aspose::Words::NodeCollectionEnumerator<System::SharedPtr<Aspose::Words::Node>>> enumerator = System::MakeObject<Aspose::Words::NodeCollectionEnumerator<System::SharedPtr<Aspose::Words::Node>>>(collection);

            System::Details::DisposeGuard<1> __dispose_guard_0({ enumerator});

            try
            {
                while (enumerator->MoveNext())
                {
                    count++;
                }
            }
            catch(...)
            {
                __dispose_guard_0.SetCurrentException(std::current_exception());
            }
        }

        return count;
    }
    #if defined(__MSVC__)
    #pragma warning( pop )
    #elif defined(__GNUC__)
    #pragma GCC diagnostic pop
    #endif

    void SetTemplateWeakPtr(uint32_t argument) override
    {
        switch (argument)
        {
            case 0:
                break;

        }
    }

private:

    System::SharedPtr<Aspose::Words::INodeCollection> mNodes;
    System::SharedPtr<Aspose::Words::Node> mPrevNode;
    System::SharedPtr<Aspose::Words::Node> mCurNode;

};/// \endcond

}
}
