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

// Function: sub_001C27C8
// Address: 0x1c27c8 - 0x1c2830
void sub_001C27C8_0x1c27c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C27C8_0x1c27c8");
#endif

    switch (ctx->pc) {
        case 0x1c27f0u: goto label_1c27f0;
        case 0x1c27fcu: goto label_1c27fc;
        case 0x1c280cu: goto label_1c280c;
        default: break;
    }

    ctx->pc = 0x1c27c8u;

    // 0x1c27c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c27c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c27cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c27d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c27d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c27d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c27d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c27d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27dc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C27DCu;
    {
        const bool branch_taken_0x1c27dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27DCu;
        // 0x1c27e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27dc) {
            ctx->pc = 0x1C280Cu;
            goto label_1c280c;
        }
    }
    ctx->pc = 0x1C27E4u;
    // 0x1c27e4: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1c27e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1c27e8: 0xc0640b8  jal         func_1902E0
    ctx->pc = 0x1C27E8u;
    SET_GPR_U32(ctx, 31, 0x1C27F0u);
    ctx->pc = 0x1C27ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27E8u;
    // 0x1c27ec: 0x8e048b2c  lw          $a0, -0x74D4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x1C27E8u, 0x1C27F0u)) {
        return;
    }
    ctx->pc = 0x1C27F0u;
label_1c27f0:
    // 0x1c27f0: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x1c27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c27f4: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C27F4u;
    SET_GPR_U32(ctx, 31, 0x1C27FCu);
    ctx->pc = 0x1C27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27F4u;
    // 0x1c27f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C27F4u, 0x1C27FCu)) {
        return;
    }
    ctx->pc = 0x1C27FCu;
label_1c27fc:
    // 0x1c27fc: 0x8e048b2c  lw          $a0, -0x74D4($s0)
    ctx->pc = 0x1c27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937388)));
    // 0x1c2800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2804: 0xc0640c6  jal         func_190318
    ctx->pc = 0x1C2804u;
    SET_GPR_U32(ctx, 31, 0x1C280Cu);
    ctx->pc = 0x1C2808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2804u;
    // 0x1c2808: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x1C2804u, 0x1C280Cu)) {
        return;
    }
    ctx->pc = 0x1C280Cu;
label_1c280c:
    // 0x1c280c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c280cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2814: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c281c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C281Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C281Cu;
        // 0x1c2820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C281Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2824u;
    // 0x1c2824: 0x0  nop
    ctx->pc = 0x1c2824u;
    // NOP
    // 0x1c2828: 0x0  nop
    ctx->pc = 0x1c2828u;
    // NOP
    // 0x1c282c: 0x0  nop
    ctx->pc = 0x1c282cu;
    // NOP
    ctx->pc = 0x1c2830u;
}
