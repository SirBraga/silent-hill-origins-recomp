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

// Function: sub_00320110
// Address: 0x320110 - 0x320198
void sub_00320110_0x320110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320110_0x320110");
#endif

    ctx->pc = 0x320110u;

    // 0x320110: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x320110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x320114: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x320114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x320118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320118u;
    {
        const bool branch_taken_0x320118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320118u;
        // 0x32011c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320118) {
            ctx->pc = 0x320128u;
            goto label_320128;
        }
    }
    ctx->pc = 0x320120u;
    // 0x320120: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x320120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x320124: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x320124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_320128:
    // 0x320128: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x320128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x32012c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x320130: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320130u;
    {
        const bool branch_taken_0x320130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320130) {
            ctx->pc = 0x320140u;
            goto label_320140;
        }
    }
    ctx->pc = 0x320138u;
    // 0x320138: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x32013c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x32013cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_320140:
    // 0x320140: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x320140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x320144: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x320144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x320148: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320148u;
    {
        const bool branch_taken_0x320148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320148) {
            ctx->pc = 0x320158u;
            goto label_320158;
        }
    }
    ctx->pc = 0x320150u;
    // 0x320150: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x320150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x320154: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x320154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_320158:
    // 0x320158: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x320158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x32015c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x320160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320160u;
    {
        const bool branch_taken_0x320160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320160) {
            ctx->pc = 0x320170u;
            goto label_320170;
        }
    }
    ctx->pc = 0x320168u;
    // 0x320168: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x320168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x32016c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32016cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_320170:
    // 0x320170: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x320170u;
    {
        const bool branch_taken_0x320170 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x320174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320170u;
        // 0x320174: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320170) {
            ctx->pc = 0x320188u;
            goto label_320188;
        }
    }
    ctx->pc = 0x320178u;
    // 0x320178: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x320178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32017c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32017cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x320180: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x320180u;
    {
        const bool branch_taken_0x320180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320180u;
        // 0x320184: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320180) {
            ctx->pc = 0x32018Cu;
            goto label_32018c;
        }
    }
    ctx->pc = 0x320188u;
label_320188:
    // 0x320188: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x320188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32018c:
    // 0x32018c: 0x3e00008  jr          $ra
    ctx->pc = 0x32018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32018Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320194u;
    // 0x320194: 0x0  nop
    ctx->pc = 0x320194u;
    // NOP
    ctx->pc = 0x320198u;
}
