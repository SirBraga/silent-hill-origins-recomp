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

// Function: sub_001F0E88
// Address: 0x1f0e88 - 0x1f0f90
void sub_001F0E88_0x1f0e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0E88_0x1f0e88");
#endif

    switch (ctx->pc) {
        case 0x1f0ec8u: goto label_1f0ec8;
        case 0x1f0ee8u: goto label_1f0ee8;
        case 0x1f0ef4u: goto label_1f0ef4;
        case 0x1f0efcu: goto label_1f0efc;
        case 0x1f0f0cu: goto label_1f0f0c;
        case 0x1f0f14u: goto label_1f0f14;
        case 0x1f0f1cu: goto label_1f0f1c;
        case 0x1f0f24u: goto label_1f0f24;
        case 0x1f0f2cu: goto label_1f0f2c;
        case 0x1f0f38u: goto label_1f0f38;
        case 0x1f0f64u: goto label_1f0f64;
        default: break;
    }

    ctx->pc = 0x1f0e88u;

    // 0x1f0e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f0e8c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f0e90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f0e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f0e94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f0e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f0e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f0e9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0ea0: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x1f0ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1f0ea4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1f0ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1f0ea8: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F0EA8u;
    {
        const bool branch_taken_0x1f0ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EA8u;
        // 0x1f0eac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ea8) {
            ctx->pc = 0x1F0F78u;
            goto label_1f0f78;
        }
    }
    ctx->pc = 0x1F0EB0u;
    // 0x1f0eb0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f0eb4: 0x8c50e950  lw          $s0, -0x16B0($v0)
    ctx->pc = 0x1f0eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x33E950u));
    // 0x1f0eb8: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F0EB8u;
    {
        const bool branch_taken_0x1f0eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EB8u;
        // 0x1f0ebc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0eb8) {
            ctx->pc = 0x1F0F74u;
            goto label_1f0f74;
        }
    }
    ctx->pc = 0x1F0EC0u;
    // 0x1f0ec0: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1f0ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1f0ec4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1f0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f0ec8:
    // 0x1f0ec8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F0EC8u;
    {
        const bool branch_taken_0x1f0ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EC8u;
        // 0x1f0ecc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ec8) {
            ctx->pc = 0x1F0F44u;
            goto label_1f0f44;
        }
    }
    ctx->pc = 0x1F0ED0u;
    // 0x1f0ed0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1f0ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0ed4: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x1f0ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0ed8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f0ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f0edc: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1f0edcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0ee0: 0xc08941c  jal         func_225070
    ctx->pc = 0x1F0EE0u;
    SET_GPR_U32(ctx, 31, 0x1F0EE8u);
    ctx->pc = 0x1F0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0EE0u;
    // 0x1f0ee4: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225070u, 0x1F0EE0u, 0x1F0EE8u)) {
        return;
    }
    ctx->pc = 0x1F0EE8u;
label_1f0ee8:
    // 0x1f0ee8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f0eec: 0xc09795e  jal         func_25E578
    ctx->pc = 0x1F0EECu;
    SET_GPR_U32(ctx, 31, 0x1F0EF4u);
    ctx->pc = 0x1F0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0EECu;
    // 0x1f0ef0: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x1F0EECu, 0x1F0EF4u)) {
        return;
    }
    ctx->pc = 0x1F0EF4u;
label_1f0ef4:
    // 0x1f0ef4: 0xc0893a2  jal         func_224E88
    ctx->pc = 0x1F0EF4u;
    SET_GPR_U32(ctx, 31, 0x1F0EFCu);
    ctx->pc = 0x1F0EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0EF4u;
    // 0x1f0ef8: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x1F0EF4u, 0x1F0EFCu)) {
        return;
    }
    ctx->pc = 0x1F0EFCu;
label_1f0efc:
    // 0x1f0efc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0EFCu;
    {
        const bool branch_taken_0x1f0efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0efc) {
            ctx->pc = 0x1F0F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0EFCu;
            // 0x1f0f00: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0F30u;
            goto label_1f0f30;
        }
    }
    ctx->pc = 0x1F0F04u;
    // 0x1f0f04: 0xc0760d0  jal         func_1D8340
    ctx->pc = 0x1F0F04u;
    SET_GPR_U32(ctx, 31, 0x1F0F0Cu);
    ctx->pc = 0x1D8340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8340u, 0x1F0F04u, 0x1F0F0Cu)) {
        return;
    }
    ctx->pc = 0x1F0F0Cu;
label_1f0f0c:
    // 0x1f0f0c: 0xc095438  jal         func_2550E0
    ctx->pc = 0x1F0F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F14u);
    ctx->pc = 0x1F0F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F0Cu;
    // 0x1f0f10: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2550E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2550E0u, 0x1F0F0Cu, 0x1F0F14u)) {
        return;
    }
    ctx->pc = 0x1F0F14u;
label_1f0f14:
    // 0x1f0f14: 0xc095438  jal         func_2550E0
    ctx->pc = 0x1F0F14u;
    SET_GPR_U32(ctx, 31, 0x1F0F1Cu);
    ctx->pc = 0x1F0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F14u;
    // 0x1f0f18: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2550E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2550E0u, 0x1F0F14u, 0x1F0F1Cu)) {
        return;
    }
    ctx->pc = 0x1F0F1Cu;
label_1f0f1c:
    // 0x1f0f1c: 0xc08939a  jal         func_224E68
    ctx->pc = 0x1F0F1Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F24u);
    ctx->pc = 0x1F0F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F1Cu;
    // 0x1f0f20: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x1F0F1Cu, 0x1F0F24u)) {
        return;
    }
    ctx->pc = 0x1F0F24u;
label_1f0f24:
    // 0x1f0f24: 0xc07916a  jal         func_1E45A8
    ctx->pc = 0x1F0F24u;
    SET_GPR_U32(ctx, 31, 0x1F0F2Cu);
    ctx->pc = 0x1F0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F24u;
    // 0x1f0f28: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E45A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E45A8u, 0x1F0F24u, 0x1F0F2Cu)) {
        return;
    }
    ctx->pc = 0x1F0F2Cu;
label_1f0f2c:
    // 0x1f0f2c: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x1f0f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1f0f30:
    // 0x1f0f30: 0xc09799a  jal         func_25E668
    ctx->pc = 0x1F0F30u;
    SET_GPR_U32(ctx, 31, 0x1F0F38u);
    ctx->pc = 0x1F0F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F30u;
    // 0x1f0f34: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x1F0F30u, 0x1F0F38u)) {
        return;
    }
    ctx->pc = 0x1F0F38u;
label_1f0f38:
    // 0x1f0f38: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x1f0f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
    // 0x1f0f3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F0F3Cu;
    {
        const bool branch_taken_0x1f0f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F3Cu;
        // 0x1f0f40: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f3c) {
            ctx->pc = 0x1F0F68u;
            goto label_1f0f68;
        }
    }
    ctx->pc = 0x1F0F44u;
label_1f0f44:
    // 0x1f0f44: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1f0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1f0f48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0F48u;
    {
        const bool branch_taken_0x1f0f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F48u;
        // 0x1f0f4c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f48) {
            ctx->pc = 0x1F0F68u;
            goto label_1f0f68;
        }
    }
    ctx->pc = 0x1F0F50u;
    // 0x1f0f50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0F50u;
    {
        const bool branch_taken_0x1f0f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F50u;
        // 0x1f0f54: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f50) {
            ctx->pc = 0x1F0F68u;
            goto label_1f0f68;
        }
    }
    ctx->pc = 0x1F0F58u;
    // 0x1f0f58: 0x8e248b2c  lw          $a0, -0x74D4($s1)
    ctx->pc = 0x1f0f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937388)));
    // 0x1f0f5c: 0xc0640c6  jal         func_190318
    ctx->pc = 0x1F0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F64u);
    ctx->pc = 0x1F0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F5Cu;
    // 0x1f0f60: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x1F0F5Cu, 0x1F0F64u)) {
        return;
    }
    ctx->pc = 0x1F0F64u;
label_1f0f64:
    // 0x1f0f64: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f0f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1f0f68:
    // 0x1f0f68: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1f0f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f0f6c: 0x5600ffd6  bnel        $s0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1F0F6Cu;
    {
        const bool branch_taken_0x1f0f6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f6c) {
            ctx->pc = 0x1F0F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0F6Cu;
            // 0x1f0f70: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0ec8;
        }
    }
    ctx->pc = 0x1F0F74u;
label_1f0f74:
    // 0x1f0f74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f0f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0f78:
    // 0x1f0f78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f0f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0f7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F84u;
        // 0x1f0f88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0F8Cu;
    // 0x1f0f8c: 0x0  nop
    ctx->pc = 0x1f0f8cu;
    // NOP
    ctx->pc = 0x1f0f90u;
}
