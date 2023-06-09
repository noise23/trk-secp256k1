// Copyright (c) 2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_SHA1_H
#define BITCOIN_SHA1_H

#include <stdint.h>
#include <stdlib.h>

/** A hasher class for SHA1. */
class CSHA1 {
private:
    uint32_t s[5];
    unsigned char buf[64];
    size_t bytes;

public:
    CSHA1();
    CSHA1& Write(const unsigned char *data, size_t len);
    void Finalize(unsigned char *hash);
    CSHA1& Reset();
};

#endif
