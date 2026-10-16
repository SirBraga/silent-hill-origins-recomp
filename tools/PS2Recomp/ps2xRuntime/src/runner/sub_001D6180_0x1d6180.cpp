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

// Function: sub_001D6180
// Address: 0x1d6180 - 0x1d6228
void sub_001D6180_0x1d6180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6180_0x1d6180");
#endif

    switch (ctx->pc) {
        case 0x1d61e0u: goto label_1d61e0;
        default: break;
    }

    ctx->pc = 0x1d6180u;

    // 0x1d6180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d6180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d6184: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1d6184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6188: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d6188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d618c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d618cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6190: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d6190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d6194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6198: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1d6198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1d619c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d619cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1d61a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1d61a4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1d61a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d61a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d61ac: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1d61acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d61b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d61b4: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1d61b8: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x1d61b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d61bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D61BCu;
    {
        const bool branch_taken_0x1d61bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61BCu;
        // 0x1d61c0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61bc) {
            ctx->pc = 0x1D61FCu;
            goto label_1d61fc;
        }
    }
    ctx->pc = 0x1D61C4u;
    // 0x1d61c4: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1d61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1d61c8: 0x8e300084  lw          $s0, 0x84($s1)
    ctx->pc = 0x1d61c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1d61cc: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1d61ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d61d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d61d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d61d4: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x1d61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x1d61d8: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1D61D8u;
    SET_GPR_U32(ctx, 31, 0x1D61E0u);
    ctx->pc = 0x1D61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D61D8u;
    // 0x1d61dc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D61D8u, 0x1D61E0u)) {
        return;
    }
    ctx->pc = 0x1D61E0u;
label_1d61e0:
    // 0x1d61e0: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x1d61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
    // 0x1d61e4: 0xae130088  sw          $s3, 0x88($s0)
    ctx->pc = 0x1d61e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 19));
    // 0x1d61e8: 0xae14008c  sw          $s4, 0x8C($s0)
    ctx->pc = 0x1d61e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 20));
    // 0x1d61ec: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1d61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1d61f0: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1d61f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d61f8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1d61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1d61fc:
    // 0x1d61fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d61fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6200: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d6200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6204: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d6204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6208: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d6208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d620c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1d620cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6210: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1d6210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6218: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6218u;
        // 0x1d621c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6220u;
    // 0x1d6220: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d6220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d6224: 0x0  nop
    ctx->pc = 0x1d6224u;
    // NOP
    ctx->pc = 0x1d6228u;
}
