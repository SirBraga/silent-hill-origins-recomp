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

// Function: sub_001BE128
// Address: 0x1be128 - 0x1be1d0
void sub_001BE128_0x1be128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE128_0x1be128");
#endif

    switch (ctx->pc) {
        case 0x1be158u: goto label_1be158;
        case 0x1be160u: goto label_1be160;
        default: break;
    }

    ctx->pc = 0x1be128u;

    // 0x1be128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1be128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1be12c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1be12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1be130: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1be130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1be134: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1be134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1be138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be13c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1be13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1be140: 0x8cb20040  lw          $s2, 0x40($a1)
    ctx->pc = 0x1be140u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1be144: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x1be144u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1be148: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BE148u;
    {
        const bool branch_taken_0x1be148 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE148u;
        // 0x1be14c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be148) {
            ctx->pc = 0x1BE1A8u;
            goto label_1be1a8;
        }
    }
    ctx->pc = 0x1BE150u;
    // 0x1be150: 0x267102e0  addiu       $s1, $s3, 0x2E0
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
    // 0x1be154: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1be154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1be158:
    // 0x1be158: 0xc080858  jal         func_202160
    ctx->pc = 0x1BE158u;
    SET_GPR_U32(ctx, 31, 0x1BE160u);
    ctx->pc = 0x1BE15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE158u;
    // 0x1be15c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1BE158u, 0x1BE160u)) {
        return;
    }
    ctx->pc = 0x1BE160u;
label_1be160:
    // 0x1be160: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be164: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1be164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1be168: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1be168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1be16c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1be16cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1be170: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1be170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1be174: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1be174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1be178: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BE178u;
    {
        const bool branch_taken_0x1be178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be178) {
            ctx->pc = 0x1BE17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE178u;
            // 0x1be17c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE180u;
            goto label_1be180;
        }
    }
    ctx->pc = 0x1BE180u;
label_1be180:
    // 0x1be180: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1be180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be184: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BE184u;
    {
        const bool branch_taken_0x1be184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be184) {
            ctx->pc = 0x1BE188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE184u;
            // 0x1be188: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BE18Cu;
label_1be18c:
    // 0x1be18c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1be18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1be190: 0x8e6202e0  lw          $v0, 0x2E0($s3)
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
    // 0x1be194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be198: 0xae6202e0  sw          $v0, 0x2E0($s3)
    ctx->pc = 0x1be198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 2));
    // 0x1be19c: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x1be19cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1be1a0: 0x5640ffed  bnel        $s2, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1BE1A0u;
    {
        const bool branch_taken_0x1be1a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be1a0) {
            ctx->pc = 0x1BE1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE1A0u;
            // 0x1be1a4: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be158;
        }
    }
    ctx->pc = 0x1BE1A8u;
label_1be1a8:
    // 0x1be1a8: 0x266202e0  addiu       $v0, $s3, 0x2E0
    ctx->pc = 0x1be1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
    // 0x1be1ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1be1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be1b0: 0xae6202dc  sw          $v0, 0x2DC($s3)
    ctx->pc = 0x1be1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 2));
    // 0x1be1b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1be1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be1b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be1bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1be1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1C4u;
        // 0x1be1c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE1CCu;
    // 0x1be1cc: 0x0  nop
    ctx->pc = 0x1be1ccu;
    // NOP
    ctx->pc = 0x1be1d0u;
}
