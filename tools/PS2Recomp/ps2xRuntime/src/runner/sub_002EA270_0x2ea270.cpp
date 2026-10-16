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

// Function: sub_002EA270
// Address: 0x2ea270 - 0x2ea318
void sub_002EA270_0x2ea270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA270_0x2ea270");
#endif

    switch (ctx->pc) {
        case 0x2ea2bcu: goto label_2ea2bc;
        case 0x2ea2c4u: goto label_2ea2c4;
        case 0x2ea2e8u: goto label_2ea2e8;
        case 0x2ea2f0u: goto label_2ea2f0;
        default: break;
    }

    ctx->pc = 0x2ea270u;

    // 0x2ea270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ea270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ea274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ea274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ea278: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ea278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ea27c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ea27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea280: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ea280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea284: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ea284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ea288: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ea288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ea28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea290: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2ea290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2ea294: 0x8e441044  lw          $a0, 0x1044($s2)
    ctx->pc = 0x2ea294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4164)));
    // 0x2ea298: 0x2470e480  addiu       $s0, $v1, -0x1B80
    ctx->pc = 0x2ea298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960256));
    // 0x2ea29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea2a0: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x2ea2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x2ea2a4: 0xac64e480  sw          $a0, -0x1B80($v1)
    ctx->pc = 0x2ea2a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x70E480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70E480u, _value); } while (0);
    // 0x2ea2a8: 0x2118825  or          $s1, $s0, $s1
    ctx->pc = 0x2ea2a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x2ea2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2b0: 0x260500bf  addiu       $a1, $s0, 0xBF
    ctx->pc = 0x2ea2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    // 0x2ea2b4: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2EA2B4u;
    SET_GPR_U32(ctx, 31, 0x2EA2BCu);
    ctx->pc = 0x2EA2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2B4u;
    // 0x2ea2b8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA2B4u, 0x2EA2BCu)) {
        return;
    }
    ctx->pc = 0x2EA2BCu;
label_2ea2bc:
    // 0x2ea2bc: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2EA2BCu;
    SET_GPR_U32(ctx, 31, 0x2EA2C4u);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2EA2BCu, 0x2EA2C4u)) {
        return;
    }
    ctx->pc = 0x2EA2C4u;
label_2ea2c4:
    // 0x2ea2c4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x2ea2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
    // 0x2ea2c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ea2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ea2ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2d0: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2ea2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2ea2d4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x2ea2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ea2d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea2d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ea2dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2e0: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EA2E0u;
    SET_GPR_U32(ctx, 31, 0x2EA2E8u);
    ctx->pc = 0x2EA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2E0u;
    // 0x2ea2e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EA2E0u, 0x2EA2E8u)) {
        return;
    }
    ctx->pc = 0x2EA2E8u;
label_2ea2e8:
    // 0x2ea2e8: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2EA2E8u;
    SET_GPR_U32(ctx, 31, 0x2EA2F0u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2EA2E8u, 0x2EA2F0u)) {
        return;
    }
    ctx->pc = 0x2EA2F0u;
label_2ea2f0:
    // 0x2ea2f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2ea2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ea2f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ea2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ea2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea2fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2ea2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2ea300: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ea300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ea304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea308: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ea308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea310: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA310u;
        // 0x2ea314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA318u;
}
