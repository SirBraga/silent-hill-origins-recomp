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

// Function: sub_0016E9F0
// Address: 0x16e9f0 - 0x16eab8
void sub_0016E9F0_0x16e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E9F0_0x16e9f0");
#endif

    switch (ctx->pc) {
        case 0x16ea0cu: goto label_16ea0c;
        case 0x16ea3cu: goto label_16ea3c;
        case 0x16ea8cu: goto label_16ea8c;
        case 0x16eaa0u: goto label_16eaa0;
        default: break;
    }

    ctx->pc = 0x16e9f0u;

    // 0x16e9f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16e9f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16e9f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16e9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16e9fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16e9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16ea00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ea04: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16EA04u;
    SET_GPR_U32(ctx, 31, 0x16EA0Cu);
    ctx->pc = 0x16EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA04u;
    // 0x16ea08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16EA04u, 0x16EA0Cu)) {
        return;
    }
    ctx->pc = 0x16EA0Cu;
label_16ea0c:
    // 0x16ea0c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x16ea0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ea10: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x16ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16ea14: 0x56020023  bnel        $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16EA14u;
    {
        const bool branch_taken_0x16ea14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ea14) {
            ctx->pc = 0x16EA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EA14u;
            // 0x16ea18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EAA4u;
            goto label_16eaa4;
        }
    }
    ctx->pc = 0x16EA1Cu;
    // 0x16ea1c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16ea20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16ea20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea24: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16EA24u;
    {
        const bool branch_taken_0x16ea24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA24u;
        // 0x16ea28: 0x24454f30  addiu       $a1, $v0, 0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea24) {
            ctx->pc = 0x16EA30u;
            goto label_16ea30;
        }
    }
    ctx->pc = 0x16EA2Cu;
    // 0x16ea2c: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x16ea2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16ea30:
    // 0x16ea30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ea34: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16EA34u;
    SET_GPR_U32(ctx, 31, 0x16EA3Cu);
    ctx->pc = 0x16EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA34u;
    // 0x16ea38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16EA34u, 0x16EA3Cu)) {
        return;
    }
    ctx->pc = 0x16EA3Cu;
label_16ea3c:
    // 0x16ea3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16ea40: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x16ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ea44: 0x8c454510  lw          $a1, 0x4510($v0)
    ctx->pc = 0x16ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4510u));
    // 0x16ea48: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16ea4c: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x16ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea50: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x16ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ea54: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x16ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x16ea58: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x16ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x16ea5c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x16ea5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16ea60: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x16ea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16ea64: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x16ea64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16ea68: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EA68u;
    {
        const bool branch_taken_0x16ea68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA68u;
        // 0x16ea6c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea68) {
            ctx->pc = 0x16EA8Cu;
            goto label_16ea8c;
        }
    }
    ctx->pc = 0x16EA70u;
    // 0x16ea70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ea74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16EA74u;
    {
        const bool branch_taken_0x16ea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA74u;
        // 0x16ea78: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea74) {
            ctx->pc = 0x16EA8Cu;
            goto label_16ea8c;
        }
    }
    ctx->pc = 0x16EA7Cu;
    // 0x16ea7c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x16ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x16ea80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea84: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16EA84u;
    SET_GPR_U32(ctx, 31, 0x16EA8Cu);
    ctx->pc = 0x16EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA84u;
    // 0x16ea88: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16EA84u, 0x16EA8Cu)) {
        return;
    }
    ctx->pc = 0x16EA8Cu;
label_16ea8c:
    // 0x16ea8c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x16ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x16ea90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EA90u;
    {
        const bool branch_taken_0x16ea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA90u;
        // 0x16ea94: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea90) {
            ctx->pc = 0x16EAA0u;
            goto label_16eaa0;
        }
    }
    ctx->pc = 0x16EA98u;
    // 0x16ea98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16EA98u;
    SET_GPR_U32(ctx, 31, 0x16EAA0u);
    ctx->pc = 0x16EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA98u;
    // 0x16ea9c: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16EA98u, 0x16EAA0u)) {
        return;
    }
    ctx->pc = 0x16EAA0u;
label_16eaa0:
    // 0x16eaa0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16eaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16eaa4:
    // 0x16eaa4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16eaa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16eaa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16eaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16eaac: 0x3e00008  jr          $ra
    ctx->pc = 0x16EAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAACu;
        // 0x16eab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EAB4u;
    // 0x16eab4: 0x0  nop
    ctx->pc = 0x16eab4u;
    // NOP
    ctx->pc = 0x16eab8u;
}
