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

// Function: sub_00288C40
// Address: 0x288c40 - 0x288ca8
void sub_00288C40_0x288c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288C40_0x288c40");
#endif

    switch (ctx->pc) {
        case 0x288c70u: goto label_288c70;
        case 0x288c7cu: goto label_288c7c;
        case 0x288c8cu: goto label_288c8c;
        default: break;
    }

    ctx->pc = 0x288c40u;

label_288c40:
    // 0x288c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288c48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x288c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x288c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c50: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x288C50u;
    {
        const bool branch_taken_0x288c50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C50u;
        // 0x288c54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c50) {
            ctx->pc = 0x288C8Cu;
            goto label_288c8c;
        }
    }
    ctx->pc = 0x288C58u;
    // 0x288c58: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x288c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288c5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288c60: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x288C60u;
    {
        const bool branch_taken_0x288c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C60u;
        // 0x288c64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c60) {
            ctx->pc = 0x288C90u;
            goto label_288c90;
        }
    }
    ctx->pc = 0x288C68u;
    // 0x288c68: 0xc09294c  jal         func_24A530
    ctx->pc = 0x288C68u;
    SET_GPR_U32(ctx, 31, 0x288C70u);
    ctx->pc = 0x288C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C68u;
    // 0x288c6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x288C68u, 0x288C70u)) {
        return;
    }
    ctx->pc = 0x288C70u;
label_288c70:
    // 0x288c70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x288c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288c74: 0xc09294e  jal         func_24A538
    ctx->pc = 0x288C74u;
    SET_GPR_U32(ctx, 31, 0x288C7Cu);
    ctx->pc = 0x288C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C74u;
    // 0x288c78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A538u, 0x288C74u, 0x288C7Cu)) {
        return;
    }
    ctx->pc = 0x288C7Cu;
label_288c7c:
    // 0x288c7c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x288c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x288c80: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x288c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x288c84: 0xc0a2310  jal         func_288C40
    ctx->pc = 0x288C84u;
    SET_GPR_U32(ctx, 31, 0x288C8Cu);
    ctx->pc = 0x288C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C84u;
    // 0x288c88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C40u;
    goto label_288c40;
    ctx->pc = 0x288C8Cu;
label_288c8c:
    // 0x288c8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x288c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_288c90:
    // 0x288c90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x288c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x288C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C9Cu;
        // 0x288ca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288CA4u;
    // 0x288ca4: 0x0  nop
    ctx->pc = 0x288ca4u;
    // NOP
    ctx->pc = 0x288ca8u;
}
