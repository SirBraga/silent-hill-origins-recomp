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

// Function: sub_00191148
// Address: 0x191148 - 0x1911b0
void sub_00191148_0x191148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191148_0x191148");
#endif

    switch (ctx->pc) {
        case 0x19115cu: goto label_19115c;
        default: break;
    }

    ctx->pc = 0x191148u;

    // 0x191148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19114c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191154: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x191154u;
    SET_GPR_U32(ctx, 31, 0x19115Cu);
    ctx->pc = 0x191158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191154u;
    // 0x191158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x191154u, 0x19115Cu)) {
        return;
    }
    ctx->pc = 0x19115Cu;
label_19115c:
    // 0x19115c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x19115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x191160: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x191160u;
    {
        const bool branch_taken_0x191160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191160u;
        // 0x191164: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191160) {
            ctx->pc = 0x191198u;
            goto label_191198;
        }
    }
    ctx->pc = 0x191168u;
    // 0x191168: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x19116c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19116Cu;
    {
        const bool branch_taken_0x19116c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19116Cu;
        // 0x191170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19116c) {
            ctx->pc = 0x19119Cu;
            goto label_19119c;
        }
    }
    ctx->pc = 0x191174u;
    // 0x191174: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x191174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x191178: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x191178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19117c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19117Cu;
    {
        const bool branch_taken_0x19117c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19117c) {
            ctx->pc = 0x191180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19117Cu;
            // 0x191180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19119Cu;
            goto label_19119c;
        }
    }
    ctx->pc = 0x191184u;
    // 0x191184: 0x8c831b88  lw          $v1, 0x1B88($a0)
    ctx->pc = 0x191184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7048)));
    // 0x191188: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x191188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x19118c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x19118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x191190: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191190u;
    {
        const bool branch_taken_0x191190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191190u;
        // 0x191194: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191190) {
            ctx->pc = 0x19119Cu;
            goto label_19119c;
        }
    }
    ctx->pc = 0x191198u;
label_191198:
    // 0x191198: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19119c:
    // 0x19119c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19119cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1911a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1911a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1911a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1911A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1911A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911A4u;
        // 0x1911a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1911A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1911ACu;
    // 0x1911ac: 0x0  nop
    ctx->pc = 0x1911acu;
    // NOP
    ctx->pc = 0x1911b0u;
}
