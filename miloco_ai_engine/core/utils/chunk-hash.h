/**
 * Copyright (C) 2025 Xiaomi Corporation
 * This software may be used and distributed according to the terms of the Xiaomi Miloco License Agreement.
 */
#ifndef CHUNK_HASH_H
#define CHUNK_HASH_H

#include <cstdint>
#include <iomanip>
#include <ios>
#include <string>

#include "mutil-modal/mtmd.h"

std::vector<std::string> chunk_hashs(mtmd::input_chunks* input_chunks);

#endif  // CHUNK_HASH_H