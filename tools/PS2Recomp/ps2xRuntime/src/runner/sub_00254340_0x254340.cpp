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

// Function: sub_00254340
// Address: 0x254340 - 0x2543b8
void sub_00254340_0x254340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254340_0x254340");
#endif

    switch (ctx->pc) {
        case 0x254368u: goto label_254368;
        case 0x254394u: goto label_254394;
        default: break;
    }

    ctx->pc = 0x254340u;

    // 0x254340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254344: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x254344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x254348: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x254348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25434c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254350: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x254350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254358: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x254358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x25435c: 0x24a53fb0  addiu       $a1, $a1, 0x3FB0
    ctx->pc = 0x25435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16304));
    // 0x254360: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x254360u;
    SET_GPR_U32(ctx, 31, 0x254368u);
    ctx->pc = 0x254364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254360u;
    // 0x254364: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x254360u, 0x254368u)) {
        return;
    }
    ctx->pc = 0x254368u;
label_254368:
    // 0x254368: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254368u;
    {
        const bool branch_taken_0x254368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254368u;
        // 0x25436c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254368) {
            ctx->pc = 0x254378u;
            goto label_254378;
        }
    }
    ctx->pc = 0x254370u;
    // 0x254370: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x254370u;
    {
        const bool branch_taken_0x254370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254370u;
        // 0x254374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254370) {
            ctx->pc = 0x2543A4u;
            goto label_2543a4;
        }
    }
    ctx->pc = 0x254378u;
label_254378:
    // 0x254378: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x254378u;
    {
        const bool branch_taken_0x254378 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x254378) {
            ctx->pc = 0x25437Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254378u;
            // 0x25437c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2543A4u;
            goto label_2543a4;
        }
    }
    ctx->pc = 0x254380u;
    // 0x254380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254384: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x254384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x254388: 0x24a53fb4  addiu       $a1, $a1, 0x3FB4
    ctx->pc = 0x254388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16308));
    // 0x25438c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x25438Cu;
    SET_GPR_U32(ctx, 31, 0x254394u);
    ctx->pc = 0x254390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25438Cu;
    // 0x254390: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x25438Cu, 0x254394u)) {
        return;
    }
    ctx->pc = 0x254394u;
label_254394:
    // 0x254394: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x254394u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254398: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x254398u;
    {
        const bool branch_taken_0x254398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254398u;
        // 0x25439c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254398) {
            ctx->pc = 0x2543A4u;
            goto label_2543a4;
        }
    }
    ctx->pc = 0x2543A0u;
    // 0x2543a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2543a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2543a4:
    // 0x2543a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2543a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2543a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2543a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2543ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2543acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2543b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2543B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543B0u;
        // 0x2543b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2543B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2543B8u;
}
