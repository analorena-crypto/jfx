/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#pragma once

#include "JSDOMWrapper.h"
#include "TestTypedefs.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSTestTypedefs : public JSDOMWrapper<TestTypedefs> {
public:
    using Base = JSDOMWrapper<TestTypedefs>;
    static JSTestTypedefs* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<TestTypedefs>&& impl)
    {
        JSTestTypedefs* ptr = new (NotNull, JSC::allocateCell<JSTestTypedefs>(globalObject->vm().heap)) JSTestTypedefs(structure, *globalObject, WTFMove(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* prototype(JSC::VM&, JSC::JSGlobalObject*);
    static TestTypedefs* toWrapped(JSC::VM&, JSC::JSValue);
    static void destroy(JSC::JSCell*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);
public:
    static const unsigned StructureFlags = JSC::HasStaticPropertyTable | Base::StructureFlags;
protected:
    JSTestTypedefs(JSC::Structure*, JSDOMGlobalObject&, Ref<TestTypedefs>&&);

    void finishCreation(JSC::VM&);
};

class JSTestTypedefsOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, TestTypedefs*)
{
    static NeverDestroyed<JSTestTypedefsOwner> owner;
    return &owner.get();
}

inline void* wrapperKey(TestTypedefs* wrappableObject)
{
    return wrappableObject;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestTypedefs&);
inline JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestTypedefs* impl) { return impl ? toJS(state, globalObject, *impl) : JSC::jsNull(); }
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Ref<TestTypedefs>&&);
inline JSC::JSValue toJSNewlyCreated(JSC::ExecState* state, JSDOMGlobalObject* globalObject, RefPtr<TestTypedefs>&& impl) { return impl ? toJSNewlyCreated(state, globalObject, impl.releaseNonNull()) : JSC::jsNull(); }

template<> struct JSDOMWrapperConverterTraits<TestTypedefs> {
    using WrapperClass = JSTestTypedefs;
    using ToWrappedReturnType = TestTypedefs*;
};

} // namespace WebCore
