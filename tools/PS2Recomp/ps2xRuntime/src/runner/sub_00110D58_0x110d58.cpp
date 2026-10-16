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

// Function: sub_00110D58
// Address: 0x110d58 - 0x1111d0
void sub_00110D58_0x110d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110D58_0x110d58");
#endif

    switch (ctx->pc) {
        case 0x110d74u: goto label_110d74;
        case 0x110d94u: goto label_110d94;
        case 0x110db4u: goto label_110db4;
        case 0x110dd4u: goto label_110dd4;
        case 0x110df4u: goto label_110df4;
        case 0x110e14u: goto label_110e14;
        case 0x110e34u: goto label_110e34;
        case 0x110e54u: goto label_110e54;
        case 0x110e74u: goto label_110e74;
        case 0x110e94u: goto label_110e94;
        case 0x110eb4u: goto label_110eb4;
        case 0x110ed8u: goto label_110ed8;
        case 0x110ef8u: goto label_110ef8;
        case 0x110f18u: goto label_110f18;
        case 0x110f38u: goto label_110f38;
        case 0x110f58u: goto label_110f58;
        case 0x110f78u: goto label_110f78;
        case 0x110f98u: goto label_110f98;
        case 0x110fb8u: goto label_110fb8;
        case 0x110fd8u: goto label_110fd8;
        case 0x110ff8u: goto label_110ff8;
        case 0x111018u: goto label_111018;
        case 0x111038u: goto label_111038;
        case 0x111058u: goto label_111058;
        case 0x111078u: goto label_111078;
        case 0x111098u: goto label_111098;
        case 0x1110b8u: goto label_1110b8;
        case 0x1110d8u: goto label_1110d8;
        case 0x1110f8u: goto label_1110f8;
        case 0x111118u: goto label_111118;
        case 0x111138u: goto label_111138;
        case 0x111158u: goto label_111158;
        case 0x111178u: goto label_111178;
        case 0x111188u: goto label_111188;
        case 0x1111a8u: goto label_1111a8;
        case 0x1111b8u: goto label_1111b8;
        default: break;
    }

    ctx->pc = 0x110d58u;

    // 0x110d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110d5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x110d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x110d60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x110d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x110d64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x110d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110d6c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x110D6Cu;
    SET_GPR_U32(ctx, 31, 0x110D74u);
    ctx->pc = 0x110D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D6Cu;
    // 0x110d70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x110D6Cu, 0x110D74u)) {
        return;
    }
    ctx->pc = 0x110D74u;
label_110d74:
    // 0x110d74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x110d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x110d78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x110d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110d7c: 0x8c434390  lw          $v1, 0x4390($v0)
    ctx->pc = 0x110d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4390u));
    // 0x110d80: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110D80u;
    {
        const bool branch_taken_0x110d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D80u;
        // 0x110d84: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d80) {
            ctx->pc = 0x110D9Cu;
            goto label_110d9c;
        }
    }
    ctx->pc = 0x110D88u;
    // 0x110d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d8c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110D8Cu;
    SET_GPR_U32(ctx, 31, 0x110D94u);
    ctx->pc = 0x110D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D8Cu;
    // 0x110d90: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110D8Cu, 0x110D94u)) {
        return;
    }
    ctx->pc = 0x110D94u;
label_110d94:
    // 0x110d94: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x110D94u;
    {
        const bool branch_taken_0x110d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D94u;
        // 0x110d98: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d94) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110D9Cu;
label_110d9c:
    // 0x110d9c: 0x8c434398  lw          $v1, 0x4398($v0)
    ctx->pc = 0x110d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17304)));
    // 0x110da0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110DA0u;
    {
        const bool branch_taken_0x110da0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DA0u;
        // 0x110da4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110da0) {
            ctx->pc = 0x110DBCu;
            goto label_110dbc;
        }
    }
    ctx->pc = 0x110DA8u;
    // 0x110da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dac: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110DACu;
    SET_GPR_U32(ctx, 31, 0x110DB4u);
    ctx->pc = 0x110DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DACu;
    // 0x110db0: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110DACu, 0x110DB4u)) {
        return;
    }
    ctx->pc = 0x110DB4u;
label_110db4:
    // 0x110db4: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x110DB4u;
    {
        const bool branch_taken_0x110db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DB4u;
        // 0x110db8: 0x8e250050  lw          $a1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110db4) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110DBCu;
label_110dbc:
    // 0x110dbc: 0x8c4343a0  lw          $v1, 0x43A0($v0)
    ctx->pc = 0x110dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17312)));
    // 0x110dc0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110DC0u;
    {
        const bool branch_taken_0x110dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DC0u;
        // 0x110dc4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dc0) {
            ctx->pc = 0x110DDCu;
            goto label_110ddc;
        }
    }
    ctx->pc = 0x110DC8u;
    // 0x110dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dcc: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110DCCu;
    SET_GPR_U32(ctx, 31, 0x110DD4u);
    ctx->pc = 0x110DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DCCu;
    // 0x110dd0: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110DCCu, 0x110DD4u)) {
        return;
    }
    ctx->pc = 0x110DD4u;
label_110dd4:
    // 0x110dd4: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x110DD4u;
    {
        const bool branch_taken_0x110dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DD4u;
        // 0x110dd8: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dd4) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110DDCu;
label_110ddc:
    // 0x110ddc: 0x8c4343a8  lw          $v1, 0x43A8($v0)
    ctx->pc = 0x110ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17320)));
    // 0x110de0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110DE0u;
    {
        const bool branch_taken_0x110de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DE0u;
        // 0x110de4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110de0) {
            ctx->pc = 0x110DFCu;
            goto label_110dfc;
        }
    }
    ctx->pc = 0x110DE8u;
    // 0x110de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dec: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110DECu;
    SET_GPR_U32(ctx, 31, 0x110DF4u);
    ctx->pc = 0x110DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DECu;
    // 0x110df0: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110DECu, 0x110DF4u)) {
        return;
    }
    ctx->pc = 0x110DF4u;
label_110df4:
    // 0x110df4: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x110DF4u;
    {
        const bool branch_taken_0x110df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DF4u;
        // 0x110df8: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110df4) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110DFCu;
label_110dfc:
    // 0x110dfc: 0x8c4343b0  lw          $v1, 0x43B0($v0)
    ctx->pc = 0x110dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
    // 0x110e00: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110E00u;
    {
        const bool branch_taken_0x110e00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E00u;
        // 0x110e04: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e00) {
            ctx->pc = 0x110E1Cu;
            goto label_110e1c;
        }
    }
    ctx->pc = 0x110E08u;
    // 0x110e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e0c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110E0Cu;
    SET_GPR_U32(ctx, 31, 0x110E14u);
    ctx->pc = 0x110E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E0Cu;
    // 0x110e10: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110E0Cu, 0x110E14u)) {
        return;
    }
    ctx->pc = 0x110E14u;
label_110e14:
    // 0x110e14: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x110E14u;
    {
        const bool branch_taken_0x110e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E14u;
        // 0x110e18: 0x8e25005c  lw          $a1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e14) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110E1Cu;
label_110e1c:
    // 0x110e1c: 0x8c4343b8  lw          $v1, 0x43B8($v0)
    ctx->pc = 0x110e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
    // 0x110e20: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110E20u;
    {
        const bool branch_taken_0x110e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E20u;
        // 0x110e24: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e20) {
            ctx->pc = 0x110E3Cu;
            goto label_110e3c;
        }
    }
    ctx->pc = 0x110E28u;
    // 0x110e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e2c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110E2Cu;
    SET_GPR_U32(ctx, 31, 0x110E34u);
    ctx->pc = 0x110E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E2Cu;
    // 0x110e30: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110E2Cu, 0x110E34u)) {
        return;
    }
    ctx->pc = 0x110E34u;
label_110e34:
    // 0x110e34: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x110E34u;
    {
        const bool branch_taken_0x110e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E34u;
        // 0x110e38: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e34) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110E3Cu;
label_110e3c:
    // 0x110e3c: 0x8c4343c0  lw          $v1, 0x43C0($v0)
    ctx->pc = 0x110e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
    // 0x110e40: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110E40u;
    {
        const bool branch_taken_0x110e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E40u;
        // 0x110e44: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e40) {
            ctx->pc = 0x110E5Cu;
            goto label_110e5c;
        }
    }
    ctx->pc = 0x110E48u;
    // 0x110e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e4c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110E4Cu;
    SET_GPR_U32(ctx, 31, 0x110E54u);
    ctx->pc = 0x110E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E4Cu;
    // 0x110e50: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110E4Cu, 0x110E54u)) {
        return;
    }
    ctx->pc = 0x110E54u;
label_110e54:
    // 0x110e54: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x110E54u;
    {
        const bool branch_taken_0x110e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E54u;
        // 0x110e58: 0x8e250064  lw          $a1, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e54) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110E5Cu;
label_110e5c:
    // 0x110e5c: 0x8c4343c8  lw          $v1, 0x43C8($v0)
    ctx->pc = 0x110e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17352)));
    // 0x110e60: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110E60u;
    {
        const bool branch_taken_0x110e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E60u;
        // 0x110e64: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e60) {
            ctx->pc = 0x110E7Cu;
            goto label_110e7c;
        }
    }
    ctx->pc = 0x110E68u;
    // 0x110e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e6c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110E6Cu;
    SET_GPR_U32(ctx, 31, 0x110E74u);
    ctx->pc = 0x110E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E6Cu;
    // 0x110e70: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110E6Cu, 0x110E74u)) {
        return;
    }
    ctx->pc = 0x110E74u;
label_110e74:
    // 0x110e74: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x110E74u;
    {
        const bool branch_taken_0x110e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E74u;
        // 0x110e78: 0x8e250068  lw          $a1, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e74) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110E7Cu;
label_110e7c:
    // 0x110e7c: 0x8c4343d0  lw          $v1, 0x43D0($v0)
    ctx->pc = 0x110e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17360)));
    // 0x110e80: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110E80u;
    {
        const bool branch_taken_0x110e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E80u;
        // 0x110e84: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e80) {
            ctx->pc = 0x110E9Cu;
            goto label_110e9c;
        }
    }
    ctx->pc = 0x110E88u;
    // 0x110e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e8c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110E8Cu;
    SET_GPR_U32(ctx, 31, 0x110E94u);
    ctx->pc = 0x110E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E8Cu;
    // 0x110e90: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110E8Cu, 0x110E94u)) {
        return;
    }
    ctx->pc = 0x110E94u;
label_110e94:
    // 0x110e94: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x110E94u;
    {
        const bool branch_taken_0x110e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E94u;
        // 0x110e98: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e94) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110E9Cu;
label_110e9c:
    // 0x110e9c: 0x8c4343d8  lw          $v1, 0x43D8($v0)
    ctx->pc = 0x110e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17368)));
    // 0x110ea0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110EA0u;
    {
        const bool branch_taken_0x110ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EA0u;
        // 0x110ea4: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ea0) {
            ctx->pc = 0x110EBCu;
            goto label_110ebc;
        }
    }
    ctx->pc = 0x110EA8u;
    // 0x110ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eac: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110EACu;
    SET_GPR_U32(ctx, 31, 0x110EB4u);
    ctx->pc = 0x110EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EACu;
    // 0x110eb0: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110EACu, 0x110EB4u)) {
        return;
    }
    ctx->pc = 0x110EB4u;
label_110eb4:
    // 0x110eb4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x110EB4u;
    {
        const bool branch_taken_0x110eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB4u;
        // 0x110eb8: 0x8e250070  lw          $a1, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eb4) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110EBCu;
label_110ebc:
    // 0x110ebc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x110ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110ec0: 0x8c6243e0  lw          $v0, 0x43E0($v1)
    ctx->pc = 0x110ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17376)));
    // 0x110ec4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110EC4u;
    {
        const bool branch_taken_0x110ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x110EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EC4u;
        // 0x110ec8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ec4) {
            ctx->pc = 0x110EE0u;
            goto label_110ee0;
        }
    }
    ctx->pc = 0x110ECCu;
    // 0x110ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ed0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110ED0u;
    SET_GPR_U32(ctx, 31, 0x110ED8u);
    ctx->pc = 0x110ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110ED0u;
    // 0x110ed4: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110ED0u, 0x110ED8u)) {
        return;
    }
    ctx->pc = 0x110ED8u;
label_110ed8:
    // 0x110ed8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x110ED8u;
    {
        const bool branch_taken_0x110ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ED8u;
        // 0x110edc: 0x8e250074  lw          $a1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ed8) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110EE0u;
label_110ee0:
    // 0x110ee0: 0x8c4343e8  lw          $v1, 0x43E8($v0)
    ctx->pc = 0x110ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17384)));
    // 0x110ee4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110EE4u;
    {
        const bool branch_taken_0x110ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EE4u;
        // 0x110ee8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ee4) {
            ctx->pc = 0x110F00u;
            goto label_110f00;
        }
    }
    ctx->pc = 0x110EECu;
    // 0x110eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ef0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110EF0u;
    SET_GPR_U32(ctx, 31, 0x110EF8u);
    ctx->pc = 0x110EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EF0u;
    // 0x110ef4: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110EF0u, 0x110EF8u)) {
        return;
    }
    ctx->pc = 0x110EF8u;
label_110ef8:
    // 0x110ef8: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x110EF8u;
    {
        const bool branch_taken_0x110ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EF8u;
        // 0x110efc: 0x8e250078  lw          $a1, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ef8) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110F00u;
label_110f00:
    // 0x110f00: 0x8c4343f0  lw          $v1, 0x43F0($v0)
    ctx->pc = 0x110f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17392)));
    // 0x110f04: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F04u;
    {
        const bool branch_taken_0x110f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F04u;
        // 0x110f08: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f04) {
            ctx->pc = 0x110F20u;
            goto label_110f20;
        }
    }
    ctx->pc = 0x110F0Cu;
    // 0x110f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f10: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110F10u;
    SET_GPR_U32(ctx, 31, 0x110F18u);
    ctx->pc = 0x110F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F10u;
    // 0x110f14: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110F10u, 0x110F18u)) {
        return;
    }
    ctx->pc = 0x110F18u;
label_110f18:
    // 0x110f18: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x110F18u;
    {
        const bool branch_taken_0x110f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F18u;
        // 0x110f1c: 0x8e25007c  lw          $a1, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f18) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110F20u;
label_110f20:
    // 0x110f20: 0x8c4343f8  lw          $v1, 0x43F8($v0)
    ctx->pc = 0x110f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17400)));
    // 0x110f24: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F24u;
    {
        const bool branch_taken_0x110f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F24u;
        // 0x110f28: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f24) {
            ctx->pc = 0x110F40u;
            goto label_110f40;
        }
    }
    ctx->pc = 0x110F2Cu;
    // 0x110f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f30: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110F30u;
    SET_GPR_U32(ctx, 31, 0x110F38u);
    ctx->pc = 0x110F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F30u;
    // 0x110f34: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110F30u, 0x110F38u)) {
        return;
    }
    ctx->pc = 0x110F38u;
label_110f38:
    // 0x110f38: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x110F38u;
    {
        const bool branch_taken_0x110f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F38u;
        // 0x110f3c: 0x8e250080  lw          $a1, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f38) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110F40u;
label_110f40:
    // 0x110f40: 0x8c434400  lw          $v1, 0x4400($v0)
    ctx->pc = 0x110f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17408)));
    // 0x110f44: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F44u;
    {
        const bool branch_taken_0x110f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F44u;
        // 0x110f48: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f44) {
            ctx->pc = 0x110F60u;
            goto label_110f60;
        }
    }
    ctx->pc = 0x110F4Cu;
    // 0x110f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f50: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110F50u;
    SET_GPR_U32(ctx, 31, 0x110F58u);
    ctx->pc = 0x110F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F50u;
    // 0x110f54: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110F50u, 0x110F58u)) {
        return;
    }
    ctx->pc = 0x110F58u;
label_110f58:
    // 0x110f58: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x110F58u;
    {
        const bool branch_taken_0x110f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F58u;
        // 0x110f5c: 0x8e250084  lw          $a1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f58) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110F60u;
label_110f60:
    // 0x110f60: 0x8c434408  lw          $v1, 0x4408($v0)
    ctx->pc = 0x110f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17416)));
    // 0x110f64: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F64u;
    {
        const bool branch_taken_0x110f64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F64u;
        // 0x110f68: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f64) {
            ctx->pc = 0x110F80u;
            goto label_110f80;
        }
    }
    ctx->pc = 0x110F6Cu;
    // 0x110f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f70: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110F70u;
    SET_GPR_U32(ctx, 31, 0x110F78u);
    ctx->pc = 0x110F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F70u;
    // 0x110f74: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110F70u, 0x110F78u)) {
        return;
    }
    ctx->pc = 0x110F78u;
label_110f78:
    // 0x110f78: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x110F78u;
    {
        const bool branch_taken_0x110f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F78u;
        // 0x110f7c: 0x8e250088  lw          $a1, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f78) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110F80u;
label_110f80:
    // 0x110f80: 0x8c434410  lw          $v1, 0x4410($v0)
    ctx->pc = 0x110f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17424)));
    // 0x110f84: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F84u;
    {
        const bool branch_taken_0x110f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F84u;
        // 0x110f88: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f84) {
            ctx->pc = 0x110FA0u;
            goto label_110fa0;
        }
    }
    ctx->pc = 0x110F8Cu;
    // 0x110f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f90: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110F90u;
    SET_GPR_U32(ctx, 31, 0x110F98u);
    ctx->pc = 0x110F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F90u;
    // 0x110f94: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110F90u, 0x110F98u)) {
        return;
    }
    ctx->pc = 0x110F98u;
label_110f98:
    // 0x110f98: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x110F98u;
    {
        const bool branch_taken_0x110f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F98u;
        // 0x110f9c: 0x8e25008c  lw          $a1, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f98) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x110FA0u;
label_110fa0:
    // 0x110fa0: 0x8c434418  lw          $v1, 0x4418($v0)
    ctx->pc = 0x110fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17432)));
    // 0x110fa4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110FA4u;
    {
        const bool branch_taken_0x110fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FA4u;
        // 0x110fa8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa4) {
            ctx->pc = 0x110FC0u;
            goto label_110fc0;
        }
    }
    ctx->pc = 0x110FACu;
    // 0x110fac: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x110facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x110fb0: 0xc043c88  jal         func_10F220
    ctx->pc = 0x110FB0u;
    SET_GPR_U32(ctx, 31, 0x110FB8u);
    ctx->pc = 0x110FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FB0u;
    // 0x110fb4: 0x26240044  addiu       $a0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x110FB0u, 0x110FB8u)) {
        return;
    }
    ctx->pc = 0x110FB8u;
label_110fb8:
    // 0x110fb8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x110FB8u;
    {
        const bool branch_taken_0x110fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FB8u;
        // 0x110fbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fb8) {
            ctx->pc = 0x1111BCu;
            goto label_1111bc;
        }
    }
    ctx->pc = 0x110FC0u;
label_110fc0:
    // 0x110fc0: 0x8c434420  lw          $v1, 0x4420($v0)
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17440)));
    // 0x110fc4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110FC4u;
    {
        const bool branch_taken_0x110fc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FC4u;
        // 0x110fc8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fc4) {
            ctx->pc = 0x110FE0u;
            goto label_110fe0;
        }
    }
    ctx->pc = 0x110FCCu;
    // 0x110fcc: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x110fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x110fd0: 0xc043cb4  jal         func_10F2D0
    ctx->pc = 0x110FD0u;
    SET_GPR_U32(ctx, 31, 0x110FD8u);
    ctx->pc = 0x110FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FD0u;
    // 0x110fd4: 0x26240044  addiu       $a0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F2D0u, 0x110FD0u, 0x110FD8u)) {
        return;
    }
    ctx->pc = 0x110FD8u;
label_110fd8:
    // 0x110fd8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x110FD8u;
    {
        const bool branch_taken_0x110fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FD8u;
        // 0x110fdc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fd8) {
            ctx->pc = 0x1111B8u;
            goto label_1111b8;
        }
    }
    ctx->pc = 0x110FE0u;
label_110fe0:
    // 0x110fe0: 0x8c434428  lw          $v1, 0x4428($v0)
    ctx->pc = 0x110fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17448)));
    // 0x110fe4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110FE4u;
    {
        const bool branch_taken_0x110fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE4u;
        // 0x110fe8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe4) {
            ctx->pc = 0x111000u;
            goto label_111000;
        }
    }
    ctx->pc = 0x110FECu;
    // 0x110fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ff0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x110FF0u;
    SET_GPR_U32(ctx, 31, 0x110FF8u);
    ctx->pc = 0x110FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FF0u;
    // 0x110ff4: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x110FF0u, 0x110FF8u)) {
        return;
    }
    ctx->pc = 0x110FF8u;
label_110ff8:
    // 0x110ff8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x110FF8u;
    {
        const bool branch_taken_0x110ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FF8u;
        // 0x110ffc: 0x8e250090  lw          $a1, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ff8) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111000u;
label_111000:
    // 0x111000: 0x8c434430  lw          $v1, 0x4430($v0)
    ctx->pc = 0x111000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17456)));
    // 0x111004: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111004u;
    {
        const bool branch_taken_0x111004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111004u;
        // 0x111008: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111004) {
            ctx->pc = 0x111020u;
            goto label_111020;
        }
    }
    ctx->pc = 0x11100Cu;
    // 0x11100c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111010: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111010u;
    SET_GPR_U32(ctx, 31, 0x111018u);
    ctx->pc = 0x111014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111010u;
    // 0x111014: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111010u, 0x111018u)) {
        return;
    }
    ctx->pc = 0x111018u;
label_111018:
    // 0x111018: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x111018u;
    {
        const bool branch_taken_0x111018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111018u;
        // 0x11101c: 0x8e250094  lw          $a1, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111018) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111020u;
label_111020:
    // 0x111020: 0x8c434438  lw          $v1, 0x4438($v0)
    ctx->pc = 0x111020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17464)));
    // 0x111024: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111024u;
    {
        const bool branch_taken_0x111024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111024u;
        // 0x111028: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111024) {
            ctx->pc = 0x111040u;
            goto label_111040;
        }
    }
    ctx->pc = 0x11102Cu;
    // 0x11102c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111030: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111030u;
    SET_GPR_U32(ctx, 31, 0x111038u);
    ctx->pc = 0x111034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111030u;
    // 0x111034: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111030u, 0x111038u)) {
        return;
    }
    ctx->pc = 0x111038u;
label_111038:
    // 0x111038: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x111038u;
    {
        const bool branch_taken_0x111038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111038u;
        // 0x11103c: 0x8e250098  lw          $a1, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111038) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111040u;
label_111040:
    // 0x111040: 0x8c434440  lw          $v1, 0x4440($v0)
    ctx->pc = 0x111040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17472)));
    // 0x111044: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111044u;
    {
        const bool branch_taken_0x111044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111044u;
        // 0x111048: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111044) {
            ctx->pc = 0x111060u;
            goto label_111060;
        }
    }
    ctx->pc = 0x11104Cu;
    // 0x11104c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111050: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111050u;
    SET_GPR_U32(ctx, 31, 0x111058u);
    ctx->pc = 0x111054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111050u;
    // 0x111054: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111050u, 0x111058u)) {
        return;
    }
    ctx->pc = 0x111058u;
label_111058:
    // 0x111058: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x111058u;
    {
        const bool branch_taken_0x111058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111058u;
        // 0x11105c: 0x8e25009c  lw          $a1, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111058) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111060u;
label_111060:
    // 0x111060: 0x8c434448  lw          $v1, 0x4448($v0)
    ctx->pc = 0x111060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17480)));
    // 0x111064: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111064u;
    {
        const bool branch_taken_0x111064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111064u;
        // 0x111068: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111064) {
            ctx->pc = 0x111080u;
            goto label_111080;
        }
    }
    ctx->pc = 0x11106Cu;
    // 0x11106c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111070: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111070u;
    SET_GPR_U32(ctx, 31, 0x111078u);
    ctx->pc = 0x111074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111070u;
    // 0x111074: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111070u, 0x111078u)) {
        return;
    }
    ctx->pc = 0x111078u;
label_111078:
    // 0x111078: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x111078u;
    {
        const bool branch_taken_0x111078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111078u;
        // 0x11107c: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111078) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111080u;
label_111080:
    // 0x111080: 0x8c434450  lw          $v1, 0x4450($v0)
    ctx->pc = 0x111080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17488)));
    // 0x111084: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111084u;
    {
        const bool branch_taken_0x111084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111084u;
        // 0x111088: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111084) {
            ctx->pc = 0x1110A0u;
            goto label_1110a0;
        }
    }
    ctx->pc = 0x11108Cu;
    // 0x11108c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111090: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111090u;
    SET_GPR_U32(ctx, 31, 0x111098u);
    ctx->pc = 0x111094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111090u;
    // 0x111094: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111090u, 0x111098u)) {
        return;
    }
    ctx->pc = 0x111098u;
label_111098:
    // 0x111098: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x111098u;
    {
        const bool branch_taken_0x111098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111098u;
        // 0x11109c: 0x8e2500a4  lw          $a1, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111098) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x1110A0u;
label_1110a0:
    // 0x1110a0: 0x8c434458  lw          $v1, 0x4458($v0)
    ctx->pc = 0x1110a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17496)));
    // 0x1110a4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1110A4u;
    {
        const bool branch_taken_0x1110a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1110A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110A4u;
        // 0x1110a8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110a4) {
            ctx->pc = 0x1110C0u;
            goto label_1110c0;
        }
    }
    ctx->pc = 0x1110ACu;
    // 0x1110ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1110acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110b0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1110B0u;
    SET_GPR_U32(ctx, 31, 0x1110B8u);
    ctx->pc = 0x1110B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110B0u;
    // 0x1110b4: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1110B0u, 0x1110B8u)) {
        return;
    }
    ctx->pc = 0x1110B8u;
label_1110b8:
    // 0x1110b8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1110B8u;
    {
        const bool branch_taken_0x1110b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110B8u;
        // 0x1110bc: 0x8e2500a8  lw          $a1, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110b8) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x1110C0u;
label_1110c0:
    // 0x1110c0: 0x8c434460  lw          $v1, 0x4460($v0)
    ctx->pc = 0x1110c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17504)));
    // 0x1110c4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1110C4u;
    {
        const bool branch_taken_0x1110c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1110C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110C4u;
        // 0x1110c8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110c4) {
            ctx->pc = 0x1110E0u;
            goto label_1110e0;
        }
    }
    ctx->pc = 0x1110CCu;
    // 0x1110cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1110ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110d0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1110D0u;
    SET_GPR_U32(ctx, 31, 0x1110D8u);
    ctx->pc = 0x1110D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110D0u;
    // 0x1110d4: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1110D0u, 0x1110D8u)) {
        return;
    }
    ctx->pc = 0x1110D8u;
label_1110d8:
    // 0x1110d8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1110D8u;
    {
        const bool branch_taken_0x1110d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110D8u;
        // 0x1110dc: 0x8e2500ac  lw          $a1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110d8) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x1110E0u;
label_1110e0:
    // 0x1110e0: 0x8c434468  lw          $v1, 0x4468($v0)
    ctx->pc = 0x1110e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17512)));
    // 0x1110e4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1110E4u;
    {
        const bool branch_taken_0x1110e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1110E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110E4u;
        // 0x1110e8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110e4) {
            ctx->pc = 0x111100u;
            goto label_111100;
        }
    }
    ctx->pc = 0x1110ECu;
    // 0x1110ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1110ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110f0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1110F0u;
    SET_GPR_U32(ctx, 31, 0x1110F8u);
    ctx->pc = 0x1110F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110F0u;
    // 0x1110f4: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1110F0u, 0x1110F8u)) {
        return;
    }
    ctx->pc = 0x1110F8u;
label_1110f8:
    // 0x1110f8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1110F8u;
    {
        const bool branch_taken_0x1110f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110F8u;
        // 0x1110fc: 0x8e2500b0  lw          $a1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110f8) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111100u;
label_111100:
    // 0x111100: 0x8c434470  lw          $v1, 0x4470($v0)
    ctx->pc = 0x111100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17520)));
    // 0x111104: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111104u;
    {
        const bool branch_taken_0x111104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111104u;
        // 0x111108: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111104) {
            ctx->pc = 0x111120u;
            goto label_111120;
        }
    }
    ctx->pc = 0x11110Cu;
    // 0x11110c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111110: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111110u;
    SET_GPR_U32(ctx, 31, 0x111118u);
    ctx->pc = 0x111114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111110u;
    // 0x111114: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111110u, 0x111118u)) {
        return;
    }
    ctx->pc = 0x111118u;
label_111118:
    // 0x111118: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x111118u;
    {
        const bool branch_taken_0x111118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111118u;
        // 0x11111c: 0x8e2500b4  lw          $a1, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111118) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111120u;
label_111120:
    // 0x111120: 0x8c434478  lw          $v1, 0x4478($v0)
    ctx->pc = 0x111120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17528)));
    // 0x111124: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111124u;
    {
        const bool branch_taken_0x111124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111124u;
        // 0x111128: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111124) {
            ctx->pc = 0x111140u;
            goto label_111140;
        }
    }
    ctx->pc = 0x11112Cu;
    // 0x11112c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111130: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111130u;
    SET_GPR_U32(ctx, 31, 0x111138u);
    ctx->pc = 0x111134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111130u;
    // 0x111134: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111130u, 0x111138u)) {
        return;
    }
    ctx->pc = 0x111138u;
label_111138:
    // 0x111138: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x111138u;
    {
        const bool branch_taken_0x111138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111138u;
        // 0x11113c: 0x8e2500b8  lw          $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111138) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111140u;
label_111140:
    // 0x111140: 0x8c434480  lw          $v1, 0x4480($v0)
    ctx->pc = 0x111140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17536)));
    // 0x111144: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111144u;
    {
        const bool branch_taken_0x111144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111144u;
        // 0x111148: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111144) {
            ctx->pc = 0x111160u;
            goto label_111160;
        }
    }
    ctx->pc = 0x11114Cu;
    // 0x11114c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111150: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111150u;
    SET_GPR_U32(ctx, 31, 0x111158u);
    ctx->pc = 0x111154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111150u;
    // 0x111154: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111150u, 0x111158u)) {
        return;
    }
    ctx->pc = 0x111158u;
label_111158:
    // 0x111158: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111158u;
    {
        const bool branch_taken_0x111158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111158u;
        // 0x11115c: 0x8e2500bc  lw          $a1, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111158) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111160u;
label_111160:
    // 0x111160: 0x8c434488  lw          $v1, 0x4488($v0)
    ctx->pc = 0x111160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17544)));
    // 0x111164: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x111164u;
    {
        const bool branch_taken_0x111164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111164u;
        // 0x111168: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111164) {
            ctx->pc = 0x111190u;
            goto label_111190;
        }
    }
    ctx->pc = 0x11116Cu;
    // 0x11116c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111170: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x111170u;
    SET_GPR_U32(ctx, 31, 0x111178u);
    ctx->pc = 0x111174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111170u;
    // 0x111174: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x111170u, 0x111178u)) {
        return;
    }
    ctx->pc = 0x111178u;
label_111178:
    // 0x111178: 0x8e2500c0  lw          $a1, 0xC0($s1)
    ctx->pc = 0x111178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_11117c:
    // 0x11117c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111180: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x111180u;
    SET_GPR_U32(ctx, 31, 0x111188u);
    ctx->pc = 0x111184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111180u;
    // 0x111184: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x111180u, 0x111188u)) {
        return;
    }
    ctx->pc = 0x111188u;
label_111188:
    // 0x111188: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x111188u;
    {
        const bool branch_taken_0x111188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111188u;
        // 0x11118c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111188) {
            ctx->pc = 0x1111BCu;
            goto label_1111bc;
        }
    }
    ctx->pc = 0x111190u;
label_111190:
    // 0x111190: 0x8c434490  lw          $v1, 0x4490($v0)
    ctx->pc = 0x111190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17552)));
    // 0x111194: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x111194u;
    {
        const bool branch_taken_0x111194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x111198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111194u;
        // 0x111198: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111194) {
            ctx->pc = 0x1111BCu;
            goto label_1111bc;
        }
    }
    ctx->pc = 0x11119Cu;
    // 0x11119c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111a0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1111A0u;
    SET_GPR_U32(ctx, 31, 0x1111A8u);
    ctx->pc = 0x1111A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111A0u;
    // 0x1111a4: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1111A0u, 0x1111A8u)) {
        return;
    }
    ctx->pc = 0x1111A8u;
label_1111a8:
    // 0x1111a8: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x1111a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1111ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1111acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111b0: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x1111B0u;
    SET_GPR_U32(ctx, 31, 0x1111B8u);
    ctx->pc = 0x1111B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111B0u;
    // 0x1111b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x1111B0u, 0x1111B8u)) {
        return;
    }
    ctx->pc = 0x1111B8u;
label_1111b8:
    // 0x1111b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1111b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1111bc:
    // 0x1111bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1111bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1111c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1111c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1111c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1111C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1111C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C4u;
        // 0x1111c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1111C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1111CCu;
    // 0x1111cc: 0x0  nop
    ctx->pc = 0x1111ccu;
    // NOP
    ctx->pc = 0x1111d0u;
}
