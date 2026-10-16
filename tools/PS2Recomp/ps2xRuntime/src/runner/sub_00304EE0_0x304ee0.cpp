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

// Function: sub_00304EE0
// Address: 0x304ee0 - 0x304fa0
void sub_00304EE0_0x304ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304EE0_0x304ee0");
#endif

    switch (ctx->pc) {
        case 0x304f14u: goto label_304f14;
        default: break;
    }

    ctx->pc = 0x304ee0u;

    // 0x304ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x304ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x304ee4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x304ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x304ee8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x304ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x304eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ef0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x304ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x304ef4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x304ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ef8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x304ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x304efc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x304efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x304f00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x304f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304f08: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x304f08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f0c: 0xc0c13a8  jal         func_304EA0
    ctx->pc = 0x304F0Cu;
    SET_GPR_U32(ctx, 31, 0x304F14u);
    ctx->pc = 0x304F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F0Cu;
    // 0x304f10: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304EA0u, 0x304F0Cu, 0x304F14u)) {
        return;
    }
    ctx->pc = 0x304F14u;
label_304f14:
    // 0x304f14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f18: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x304F18u;
    {
        const bool branch_taken_0x304f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F18u;
        // 0x304f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f18) {
            ctx->pc = 0x304F34u;
            goto label_304f34;
        }
    }
    ctx->pc = 0x304F20u;
    // 0x304f20: 0x16220017  bne         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x304F20u;
    {
        const bool branch_taken_0x304f20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x304F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F20u;
        // 0x304f24: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f20) {
            ctx->pc = 0x304F80u;
            goto label_304f80;
        }
    }
    ctx->pc = 0x304F28u;
    // 0x304f28: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x304f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x304f2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x304F2Cu;
    {
        const bool branch_taken_0x304f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F2Cu;
        // 0x304f30: 0xacb30020  sw          $s3, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f2c) {
            ctx->pc = 0x304F80u;
            goto label_304f80;
        }
    }
    ctx->pc = 0x304F34u;
label_304f34:
    // 0x304f34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x304f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x304f38: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x304f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x304f3c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x304f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x304f40: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x304f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x304f44: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x304f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x304f48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x304f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x304f4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304f50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x304f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x304f54: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x304f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x304f58: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x304f58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
    // 0x304f5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x304f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f60: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x304f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x304f64: 0xacb40008  sw          $s4, 0x8($a1)
    ctx->pc = 0x304f64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 20));
    // 0x304f68: 0xacb00014  sw          $s0, 0x14($a1)
    ctx->pc = 0x304f68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 16));
    // 0x304f6c: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x304f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x304f70: 0xacb30020  sw          $s3, 0x20($a1)
    ctx->pc = 0x304f70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 19));
    // 0x304f74: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x304f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x304f78: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x304f78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x304f7c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x304f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_304f80:
    // 0x304f80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x304f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304f84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x304f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304f88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x304f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304f8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x304f8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304f90: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x304f90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304f98: 0x3e00008  jr          $ra
    ctx->pc = 0x304F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F98u;
        // 0x304f9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304FA0u;
}
