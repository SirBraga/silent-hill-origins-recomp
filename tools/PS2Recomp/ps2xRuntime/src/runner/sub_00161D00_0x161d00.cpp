#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161D00
// Address: 0x161d00 - 0x161ee8
void sub_00161D00_0x161d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161D00_0x161d00");
#endif

    switch (ctx->pc) {
        case 0x161d38u: goto label_161d38;
        case 0x161d4cu: goto label_161d4c;
        case 0x161d78u: goto label_161d78;
        case 0x161d94u: goto label_161d94;
        case 0x161dbcu: goto label_161dbc;
        case 0x161dd8u: goto label_161dd8;
        case 0x161df0u: goto label_161df0;
        case 0x161e08u: goto label_161e08;
        case 0x161e20u: goto label_161e20;
        case 0x161e38u: goto label_161e38;
        case 0x161e50u: goto label_161e50;
        case 0x161e68u: goto label_161e68;
        case 0x161ea4u: goto label_161ea4;
        default: break;
    }

    ctx->pc = 0x161d00u;

    // 0x161d00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x161d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x161d04: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x161d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x161d08: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x161d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x161d0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x161d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d10: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x161d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x161d14: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x161d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x161d18: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x161d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x161d1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x161d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x161d20: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x161d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x161d24: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x161d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x161d28: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x161d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x161d2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161d30: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x161D30u;
    SET_GPR_U32(ctx, 31, 0x161D38u);
    ctx->pc = 0x161D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D30u;
    // 0x161d34: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x161D30u, 0x161D38u)) {
        return;
    }
    ctx->pc = 0x161D38u;
label_161d38:
    // 0x161d38: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x161d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x161d3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d40: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x161d40u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x161d44: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x161D44u;
    SET_GPR_U32(ctx, 31, 0x161D4Cu);
    ctx->pc = 0x161D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D44u;
    // 0x161d48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x161D44u, 0x161D4Cu)) {
        return;
    }
    ctx->pc = 0x161D4Cu;
label_161d4c:
    // 0x161d4c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x161d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161d54: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x161D54u;
    {
        const bool branch_taken_0x161d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D54u;
        // 0x161d58: 0x3c1e0069  lui         $fp, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d54) {
            ctx->pc = 0x161EB4u;
            goto label_161eb4;
        }
    }
    ctx->pc = 0x161D5Cu;
    // 0x161d5c: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x161d5cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x161d60: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x161d60u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x161d64: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x161d64u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x161d68: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x161d68u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x161d6c: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x161d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x161d70: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x161d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d74: 0x0  nop
    ctx->pc = 0x161d74u;
    // NOP
label_161d78:
    // 0x161d78: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x161d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x161d7c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x161D7Cu;
    {
        const bool branch_taken_0x161d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D7Cu;
        // 0x161d80: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d7c) {
            ctx->pc = 0x161E8Cu;
            goto label_161e8c;
        }
    }
    ctx->pc = 0x161D84u;
    // 0x161d84: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x161d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x161d88: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x161d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x161d8c: 0xc05953e  jal         func_1654F8
    ctx->pc = 0x161D8Cu;
    SET_GPR_U32(ctx, 31, 0x161D94u);
    ctx->pc = 0x161D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D8Cu;
    // 0x161d90: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1654F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1654F8u, 0x161D8Cu, 0x161D94u)) {
        return;
    }
    ctx->pc = 0x161D94u;
label_161d94:
    // 0x161d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d98: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x161D98u;
    {
        const bool branch_taken_0x161d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D98u;
        // 0x161d9c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d98) {
            ctx->pc = 0x161E8Cu;
            goto label_161e8c;
        }
    }
    ctx->pc = 0x161DA0u;
    // 0x161da0: 0x8e020660  lw          $v0, 0x660($s0)
    ctx->pc = 0x161da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x161da4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x161DA4u;
    {
        const bool branch_taken_0x161da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA4u;
        // 0x161da8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161da4) {
            ctx->pc = 0x161E8Cu;
            goto label_161e8c;
        }
    }
    ctx->pc = 0x161DACu;
    // 0x161dac: 0x8e040664  lw          $a0, 0x664($s0)
    ctx->pc = 0x161dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x161db0: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x161db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x161db4: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x161DB4u;
    SET_GPR_U32(ctx, 31, 0x161DBCu);
    ctx->pc = 0x161DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161DB4u;
    // 0x161db8: 0x244537b0  addiu       $a1, $v0, 0x37B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x161DB4u, 0x161DBCu)) {
        return;
    }
    ctx->pc = 0x161DBCu;
label_161dbc:
    // 0x161dbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161DBCu;
    {
        const bool branch_taken_0x161dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DBCu;
        // 0x161dc0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dbc) {
            ctx->pc = 0x161DCCu;
            goto label_161dcc;
        }
    }
    ctx->pc = 0x161DC4u;
    // 0x161dc4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x161DC4u;
    {
        const bool branch_taken_0x161dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DC4u;
        // 0x161dc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dc4) {
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161DCCu;
label_161dcc:
    // 0x161dcc: 0x8e040664  lw          $a0, 0x664($s0)
    ctx->pc = 0x161dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x161dd0: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x161DD0u;
    SET_GPR_U32(ctx, 31, 0x161DD8u);
    ctx->pc = 0x161DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161DD0u;
    // 0x161dd4: 0x244537c0  addiu       $a1, $v0, 0x37C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x161DD0u, 0x161DD8u)) {
        return;
    }
    ctx->pc = 0x161DD8u;
label_161dd8:
    // 0x161dd8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161DD8u;
    {
        const bool branch_taken_0x161dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161dd8) {
            ctx->pc = 0x161DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161DD8u;
            // 0x161ddc: 0x8e040664  lw          $a0, 0x664($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161DE8u;
            goto label_161de8;
        }
    }
    ctx->pc = 0x161DE0u;
    // 0x161de0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x161DE0u;
    {
        const bool branch_taken_0x161de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DE0u;
        // 0x161de4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161de0) {
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161DE8u;
label_161de8:
    // 0x161de8: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x161DE8u;
    SET_GPR_U32(ctx, 31, 0x161DF0u);
    ctx->pc = 0x161DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161DE8u;
    // 0x161dec: 0x27c537d0  addiu       $a1, $fp, 0x37D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 14288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x161DE8u, 0x161DF0u)) {
        return;
    }
    ctx->pc = 0x161DF0u;
label_161df0:
    // 0x161df0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161DF0u;
    {
        const bool branch_taken_0x161df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161df0) {
            ctx->pc = 0x161DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161DF0u;
            // 0x161df4: 0x8e040664  lw          $a0, 0x664($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E00u;
            goto label_161e00;
        }
    }
    ctx->pc = 0x161DF8u;
    // 0x161df8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x161DF8u;
    {
        const bool branch_taken_0x161df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DF8u;
        // 0x161dfc: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161df8) {
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161E00u;
label_161e00:
    // 0x161e00: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x161E00u;
    SET_GPR_U32(ctx, 31, 0x161E08u);
    ctx->pc = 0x161E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E00u;
    // 0x161e04: 0x26e537e0  addiu       $a1, $s7, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x161E00u, 0x161E08u)) {
        return;
    }
    ctx->pc = 0x161E08u;
label_161e08:
    // 0x161e08: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161E08u;
    {
        const bool branch_taken_0x161e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161e08) {
            ctx->pc = 0x161E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E08u;
            // 0x161e0c: 0x8e040664  lw          $a0, 0x664($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E18u;
            goto label_161e18;
        }
    }
    ctx->pc = 0x161E10u;
    // 0x161e10: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x161E10u;
    {
        const bool branch_taken_0x161e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E10u;
        // 0x161e14: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e10) {
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161E18u;
label_161e18:
    // 0x161e18: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x161E18u;
    SET_GPR_U32(ctx, 31, 0x161E20u);
    ctx->pc = 0x161E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E18u;
    // 0x161e1c: 0x26c537f0  addiu       $a1, $s6, 0x37F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 14320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x161E18u, 0x161E20u)) {
        return;
    }
    ctx->pc = 0x161E20u;
label_161e20:
    // 0x161e20: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161E20u;
    {
        const bool branch_taken_0x161e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161e20) {
            ctx->pc = 0x161E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E20u;
            // 0x161e24: 0x8e040664  lw          $a0, 0x664($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E30u;
            goto label_161e30;
        }
    }
    ctx->pc = 0x161E28u;
    // 0x161e28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x161E28u;
    {
        const bool branch_taken_0x161e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E28u;
        // 0x161e2c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e28) {
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161E30u;
label_161e30:
    // 0x161e30: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x161E30u;
    SET_GPR_U32(ctx, 31, 0x161E38u);
    ctx->pc = 0x161E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E30u;
    // 0x161e34: 0x26a53800  addiu       $a1, $s5, 0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 14336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x161E30u, 0x161E38u)) {
        return;
    }
    ctx->pc = 0x161E38u;
label_161e38:
    // 0x161e38: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161E38u;
    {
        const bool branch_taken_0x161e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161e38) {
            ctx->pc = 0x161E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E38u;
            // 0x161e3c: 0x8e040664  lw          $a0, 0x664($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E48u;
            goto label_161e48;
        }
    }
    ctx->pc = 0x161E40u;
    // 0x161e40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161E40u;
    {
        const bool branch_taken_0x161e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E40u;
        // 0x161e44: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e40) {
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161E48u;
label_161e48:
    // 0x161e48: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x161E48u;
    SET_GPR_U32(ctx, 31, 0x161E50u);
    ctx->pc = 0x161E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E48u;
    // 0x161e4c: 0x26853810  addiu       $a1, $s4, 0x3810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x161E48u, 0x161E50u)) {
        return;
    }
    ctx->pc = 0x161E50u;
label_161e50:
    // 0x161e50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161E50u;
    {
        const bool branch_taken_0x161e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161e50) {
            ctx->pc = 0x161E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E50u;
            // 0x161e54: 0x8e040664  lw          $a0, 0x664($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E60u;
            goto label_161e60;
        }
    }
    ctx->pc = 0x161E58u;
    // 0x161e58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161E58u;
    {
        const bool branch_taken_0x161e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E58u;
        // 0x161e5c: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e58) {
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161E60u;
label_161e60:
    // 0x161e60: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x161E60u;
    SET_GPR_U32(ctx, 31, 0x161E68u);
    ctx->pc = 0x161E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E60u;
    // 0x161e64: 0x26653820  addiu       $a1, $s3, 0x3820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x161E60u, 0x161E68u)) {
        return;
    }
    ctx->pc = 0x161E68u;
label_161e68:
    // 0x161e68: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x161e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x161e6c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x161e6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
label_161e70:
    // 0x161e70: 0x3a220008  xori        $v0, $s1, 0x8
    ctx->pc = 0x161e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8);
    // 0x161e74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161E74u;
    {
        const bool branch_taken_0x161e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E74u;
        // 0x161e78: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e74) {
            ctx->pc = 0x161E88u;
            goto label_161e88;
        }
    }
    ctx->pc = 0x161E7Cu;
    // 0x161e7c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x161e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x161e80: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x161e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x161e84: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x161e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
label_161e88:
    // 0x161e88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x161e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_161e8c:
    // 0x161e8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x161e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161e94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161e98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161e9c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x161E9Cu;
    SET_GPR_U32(ctx, 31, 0x161EA4u);
    ctx->pc = 0x161EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E9Cu;
    // 0x161ea0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x161E9Cu, 0x161EA4u)) {
        return;
    }
    ctx->pc = 0x161EA4u;
label_161ea4:
    // 0x161ea4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x161ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161ea8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x161ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161eac: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x161EACu;
    {
        const bool branch_taken_0x161eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EACu;
        // 0x161eb0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161eac) {
            ctx->pc = 0x161D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161d78;
        }
    }
    ctx->pc = 0x161EB4u;
label_161eb4:
    // 0x161eb4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x161eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161eb8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x161eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x161ebc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x161ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161ec0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x161ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161ec4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x161ec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x161ec8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x161ec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161ecc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x161eccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161ed0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x161ed0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161ed4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x161ed4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161edc: 0x3e00008  jr          $ra
    ctx->pc = 0x161EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EDCu;
        // 0x161ee0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161EE4u;
    // 0x161ee4: 0x0  nop
    ctx->pc = 0x161ee4u;
    // NOP
    ctx->pc = 0x161ee8u;
}
