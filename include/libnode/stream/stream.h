// Copyright (c) 2012 Plenluno All rights reserved.

#ifndef LIBNODE_STREAM_STREAM_H_
#define LIBNODE_STREAM_STREAM_H_

#include <libnode/events/event_emitter.h>

namespace libj {
namespace node {

class Stream : LIBNODE_EVENT_EMITTER(Stream)
 public:
    static Symbol::CPtr EVENT_ERROR;
    static Symbol::CPtr EVENT_CLOSE;

    virtual Boolean destroy() = 0;
};

}  // namespace node
}  // namespace libj

#define LIBNODE_STREAM(T) public libj::node::Stream { \
    LIBJ_MUTABLE_DEFS(T, libj::node::Stream)

#endif  // LIBNODE_STREAM_STREAM_H_
