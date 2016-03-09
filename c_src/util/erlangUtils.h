//
// Created by Paul A. Place on 2/4/16.
//

#ifndef BASHOUTILS_ERLANGUTILS_H
#define BASHOUTILS_ERLANGUTILS_H

#include "buffer.h"
#include <string>

namespace basho {
namespace utils {

typedef Buffer<1024> ErlBuffer; // good general-purpose sized buffer for dealing with erlang term/binary stuff

// parses the string representation of an erlang binary term (e.g., "<<24,1,240>>"),
// putting the binary data in a Buffer (e.g., \x18\x01\F0)
int // number of bytes put in BinaryBuff; -1 on error
ParseErlangBinaryString(
    const std::string& BinaryStr,    // IN:  erlang binary term in string form
    ErlBuffer&         BinaryBuff ); // OUT: receives the binary bytes represented by BinaryStr; the BytesUsed property is set

} // namespace utils
} // namespace basho

#endif // BASHOUTILS_ERLANGUTILS_H
