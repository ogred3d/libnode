// Copyright (c) 2012 Plenluno All rights reserved.

#include <libnode/detail/net/server.h>

namespace libj {
namespace node {
namespace net {

LIBJ_SYMBOL_DEF(Server::IN_ADDR_ANY,      "0.0.0.0");
LIBJ_SYMBOL_DEF(Server::EVENT_CLOSE,      "close");
LIBJ_SYMBOL_DEF(Server::EVENT_ERROR,      "error");
LIBJ_SYMBOL_DEF(Server::EVENT_LISTENING,  "listening");
LIBJ_SYMBOL_DEF(Server::EVENT_CONNECTION, "connection");

Server::Ptr Server::create() {
    return detail::net::Server<Server>::create();
}

}  // namespace net
}  // namespace node
}  // namespace libj
