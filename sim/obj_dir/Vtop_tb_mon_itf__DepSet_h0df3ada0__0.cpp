// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb_mon_itf.h"

std::string VL_TO_STRING(const Vtop_tb_mon_itf* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_mon_itf::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
