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

// Function: sub_00140168
// Address: 0x140168 - 0x1401e0
void sub_00140168_0x140168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140168_0x140168");
#endif

    switch (ctx->pc) {
        case 0x1401a0u: goto label_1401a0;
        case 0x1401a8u: goto label_1401a8;
        case 0x1401bcu: goto label_1401bc;
        case 0x1401c8u: goto label_1401c8;
        default: break;
    }

    ctx->pc = 0x140168u;

    // 0x140168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14016c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x140170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x140170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x140174: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x140174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x140178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14017c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14017cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140184: 0x24420a18  addiu       $v0, $v0, 0xA18
    ctx->pc = 0x140184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2584));
    // 0x140188: 0x24630a38  addiu       $v1, $v1, 0xA38
    ctx->pc = 0x140188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2616));
    // 0x14018c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14018cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140190: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x140190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x140194: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x140194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x140198: 0xc050442  jal         func_141108
    ctx->pc = 0x140198u;
    SET_GPR_U32(ctx, 31, 0x1401A0u);
    ctx->pc = 0x14019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140198u;
    // 0x14019c: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141108u, 0x140198u, 0x1401A0u)) {
        return;
    }
    ctx->pc = 0x1401A0u;
label_1401a0:
    // 0x1401a0: 0xc050080  jal         func_140200
    ctx->pc = 0x1401A0u;
    SET_GPR_U32(ctx, 31, 0x1401A8u);
    ctx->pc = 0x1401A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401A0u;
    // 0x1401a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140200u, 0x1401A0u, 0x1401A8u)) {
        return;
    }
    ctx->pc = 0x1401A8u;
label_1401a8:
    // 0x1401a8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1401a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1401ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1401ACu;
    {
        const bool branch_taken_0x1401ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1401ac) {
            ctx->pc = 0x1401B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1401ACu;
            // 0x1401b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1401C0u;
            goto label_1401c0;
        }
    }
    ctx->pc = 0x1401B4u;
    // 0x1401b4: 0xc076ace  jal         func_1DAB38
    ctx->pc = 0x1401B4u;
    SET_GPR_U32(ctx, 31, 0x1401BCu);
    ctx->pc = 0x1DAB38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAB38u, 0x1401B4u, 0x1401BCu)) {
        return;
    }
    ctx->pc = 0x1401BCu;
label_1401bc:
    // 0x1401bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1401bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1401c0:
    // 0x1401c0: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1401C0u;
    SET_GPR_U32(ctx, 31, 0x1401C8u);
    ctx->pc = 0x1401C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401C0u;
    // 0x1401c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1401C0u, 0x1401C8u)) {
        return;
    }
    ctx->pc = 0x1401C8u;
label_1401c8:
    // 0x1401c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1401c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1401cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1401ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1401d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1401d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1401d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1401D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1401D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401D4u;
        // 0x1401d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1401D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1401DCu;
    // 0x1401dc: 0x0  nop
    ctx->pc = 0x1401dcu;
    // NOP
    ctx->pc = 0x1401e0u;
}
