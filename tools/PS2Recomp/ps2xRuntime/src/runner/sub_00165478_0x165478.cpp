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

// Function: sub_00165478
// Address: 0x165478 - 0x1654f8
void sub_00165478_0x165478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165478_0x165478");
#endif

    switch (ctx->pc) {
        case 0x1654a0u: goto label_1654a0;
        default: break;
    }

    ctx->pc = 0x165478u;

    // 0x165478: 0x8c82648c  lw          $v0, 0x648C($a0)
    ctx->pc = 0x165478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
    // 0x16547c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16547cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165480: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x165480u;
    {
        const bool branch_taken_0x165480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165480u;
        // 0x165484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165480) {
            ctx->pc = 0x1654C8u;
            goto label_1654c8;
        }
    }
    ctx->pc = 0x165488u;
    // 0x165488: 0x8c82100c  lw          $v0, 0x100C($a0)
    ctx->pc = 0x165488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4108)));
    // 0x16548c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16548Cu;
    {
        const bool branch_taken_0x16548c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16548c) {
            ctx->pc = 0x165490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16548Cu;
            // 0x165490: 0x8c82648c  lw          $v0, 0x648C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1654A0u;
            goto label_1654a0;
        }
    }
    ctx->pc = 0x165494u;
    // 0x165494: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x165494u;
    {
        const bool branch_taken_0x165494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165494u;
        // 0x165498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165494) {
            ctx->pc = 0x1654C8u;
            goto label_1654c8;
        }
    }
    ctx->pc = 0x16549Cu;
    // 0x16549c: 0x0  nop
    ctx->pc = 0x16549cu;
    // NOP
label_1654a0:
    // 0x1654a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1654a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1654a4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1654a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1654a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1654A8u;
    {
        const bool branch_taken_0x1654a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654A8u;
        // 0x1654ac: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654a8) {
            ctx->pc = 0x1654C8u;
            goto label_1654c8;
        }
    }
    ctx->pc = 0x1654B0u;
    // 0x1654b0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1654b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1654b4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1654b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1654b8: 0x8c43100c  lw          $v1, 0x100C($v0)
    ctx->pc = 0x1654b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4108)));
    // 0x1654bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1654BCu;
    {
        const bool branch_taken_0x1654bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1654bc) {
            ctx->pc = 0x1654C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1654BCu;
            // 0x1654c0: 0x8c82648c  lw          $v0, 0x648C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1654A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1654a0;
        }
    }
    ctx->pc = 0x1654C4u;
    // 0x1654c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1654c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1654c8:
    // 0x1654c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1654c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1654cc: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1654CCu;
    {
        const bool branch_taken_0x1654cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1654cc) {
            ctx->pc = 0x1654D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1654CCu;
            // 0x1654d0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1654E4u;
            goto label_1654e4;
        }
    }
    ctx->pc = 0x1654D4u;
    // 0x1654d4: 0x8c86648c  lw          $a2, 0x648C($a0)
    ctx->pc = 0x1654d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
    // 0x1654d8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1654d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1654dc: 0xac82648c  sw          $v0, 0x648C($a0)
    ctx->pc = 0x1654dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25740), GPR_U32(ctx, 2));
    // 0x1654e0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1654e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1654e4:
    // 0x1654e4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1654e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1654e8: 0x2442100c  addiu       $v0, $v0, 0x100C
    ctx->pc = 0x1654e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4108));
    // 0x1654ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1654ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1654F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654ECu;
        // 0x1654f0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1654ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1654F4u;
    // 0x1654f4: 0x0  nop
    ctx->pc = 0x1654f4u;
    // NOP
    ctx->pc = 0x1654f8u;
}
