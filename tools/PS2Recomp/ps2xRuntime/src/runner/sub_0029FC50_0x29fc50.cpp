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

// Function: sub_0029FC50
// Address: 0x29fc50 - 0x29fcd8
void sub_0029FC50_0x29fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FC50_0x29fc50");
#endif

    ctx->pc = 0x29fc50u;

    // 0x29fc50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29fc54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x29fc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x29fc58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FC58u;
    {
        const bool branch_taken_0x29fc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC58u;
        // 0x29fc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc58) {
            ctx->pc = 0x29FC68u;
            goto label_29fc68;
        }
    }
    ctx->pc = 0x29FC60u;
    // 0x29fc60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x29fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29fc64: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x29fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_29fc68:
    // 0x29fc68: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x29fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x29fc6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x29fc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x29fc70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FC70u;
    {
        const bool branch_taken_0x29fc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fc70) {
            ctx->pc = 0x29FC80u;
            goto label_29fc80;
        }
    }
    ctx->pc = 0x29FC78u;
    // 0x29fc78: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x29fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x29fc7c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_29fc80:
    // 0x29fc80: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x29fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x29fc84: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x29fc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x29fc88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FC88u;
    {
        const bool branch_taken_0x29fc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fc88) {
            ctx->pc = 0x29FC98u;
            goto label_29fc98;
        }
    }
    ctx->pc = 0x29FC90u;
    // 0x29fc90: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x29fc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x29fc94: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_29fc98:
    // 0x29fc98: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x29fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x29fc9c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x29fc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x29fca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FCA0u;
    {
        const bool branch_taken_0x29fca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fca0) {
            ctx->pc = 0x29FCB0u;
            goto label_29fcb0;
        }
    }
    ctx->pc = 0x29FCA8u;
    // 0x29fca8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x29fca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x29fcac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29fcb0:
    // 0x29fcb0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FCB0u;
    {
        const bool branch_taken_0x29fcb0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x29FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCB0u;
        // 0x29fcb4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fcb0) {
            ctx->pc = 0x29FCC8u;
            goto label_29fcc8;
        }
    }
    ctx->pc = 0x29FCB8u;
    // 0x29fcb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29fcbc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29fcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29fcc0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29FCC0u;
    {
        const bool branch_taken_0x29fcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCC0u;
        // 0x29fcc4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fcc0) {
            ctx->pc = 0x29FCCCu;
            goto label_29fccc;
        }
    }
    ctx->pc = 0x29FCC8u;
label_29fcc8:
    // 0x29fcc8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29fcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29fccc:
    // 0x29fccc: 0x3e00008  jr          $ra
    ctx->pc = 0x29FCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FCD4u;
    // 0x29fcd4: 0x0  nop
    ctx->pc = 0x29fcd4u;
    // NOP
    ctx->pc = 0x29fcd8u;
}
