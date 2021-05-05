// ***************************************************************
// Copyright (c) 2021 Jittor. All Rights Reserved. 
// Maintainers: Dun Liang <randonlang@gmail.com>. 
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.
// ***************************************************************
#pragma once
#include "opt/pass/pass.h"

namespace jittor {

struct MLUPass : Pass {
    MLUPass() : Pass("mark_raw") {};
    void add_memcpy(KernelIR* loop_father, KernelIR* loop, vector<string> vars, vector<int> is_input, string new_id);
    void run() override;
};

} // jittor