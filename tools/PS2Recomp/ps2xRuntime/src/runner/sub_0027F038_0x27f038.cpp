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

// Function: sub_0027F038
// Address: 0x27f038 - 0x27f0a8
void sub_0027F038_0x27f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F038_0x27f038");
#endif

    switch (ctx->pc) {
        case 0x27f064u: goto label_27f064;
        case 0x27f07cu: goto label_27f07c;
        case 0x27f08cu: goto label_27f08c;
        default: break;
    }

    ctx->pc = 0x27f038u;

    // 0x27f038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f03c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x27f03cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x27f040: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x27f040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x27f044: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27f044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27f048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f04c: 0x24c6f1f0  addiu       $a2, $a2, -0xE10
    ctx->pc = 0x27f04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963696));
    // 0x27f050: 0x24e7f210  addiu       $a3, $a3, -0xDF0
    ctx->pc = 0x27f050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963728));
    // 0x27f054: 0x2508f280  addiu       $t0, $t0, -0xD80
    ctx->pc = 0x27f054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963840));
    // 0x27f058: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x27f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27f05c: 0xc09579e  jal         func_255E78
    ctx->pc = 0x27F05Cu;
    SET_GPR_U32(ctx, 31, 0x27F064u);
    ctx->pc = 0x27F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F05Cu;
    // 0x27f060: 0x24050122  addiu       $a1, $zero, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x27F05Cu, 0x27F064u)) {
        return;
    }
    ctx->pc = 0x27F064u;
label_27f064:
    // 0x27f064: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27F064u;
    {
        const bool branch_taken_0x27f064 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F064u;
        // 0x27f068: 0xaf8287fc  sw          $v0, -0x7804($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f064) {
            ctx->pc = 0x27F094u;
            goto label_27f094;
        }
    }
    ctx->pc = 0x27F06Cu;
    // 0x27f06c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27f06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27f070: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x27f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x27f074: 0xc0957d0  jal         func_255F40
    ctx->pc = 0x27F074u;
    SET_GPR_U32(ctx, 31, 0x27F07Cu);
    ctx->pc = 0x27F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F074u;
    // 0x27f078: 0x24a5f3a0  addiu       $a1, $a1, -0xC60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F40u, 0x27F074u, 0x27F07Cu)) {
        return;
    }
    ctx->pc = 0x27F07Cu;
label_27f07c:
    // 0x27f07c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27f080: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x27f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x27f084: 0xc0957da  jal         func_255F68
    ctx->pc = 0x27F084u;
    SET_GPR_U32(ctx, 31, 0x27F08Cu);
    ctx->pc = 0x27F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F084u;
    // 0x27f088: 0x24a5f3e0  addiu       $a1, $a1, -0xC20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F68u, 0x27F084u, 0x27F08Cu)) {
        return;
    }
    ctx->pc = 0x27F08Cu;
label_27f08c:
    // 0x27f08c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F08Cu;
    {
        const bool branch_taken_0x27f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F08Cu;
        // 0x27f090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f08c) {
            ctx->pc = 0x27F098u;
            goto label_27f098;
        }
    }
    ctx->pc = 0x27F094u;
label_27f094:
    // 0x27f094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27f094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f098:
    // 0x27f098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f09c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F09Cu;
        // 0x27f0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F0A4u;
    // 0x27f0a4: 0x0  nop
    ctx->pc = 0x27f0a4u;
    // NOP
    ctx->pc = 0x27f0a8u;
}
