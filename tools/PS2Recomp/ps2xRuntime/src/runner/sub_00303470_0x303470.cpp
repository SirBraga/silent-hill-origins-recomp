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

// Function: sub_00303470
// Address: 0x303470 - 0x303520
void sub_00303470_0x303470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303470_0x303470");
#endif

    switch (ctx->pc) {
        case 0x303488u: goto label_303488;
        case 0x3034b0u: goto label_3034b0;
        case 0x3034d0u: goto label_3034d0;
        default: break;
    }

    ctx->pc = 0x303470u;

    // 0x303470: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x303470u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x303474: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x303474u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x303478: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x303478u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30347c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30347cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303480: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x303480u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x303484: 0x0  nop
    ctx->pc = 0x303484u;
    // NOP
label_303488:
    // 0x303488: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x303488u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30348c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30348cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303490: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x303490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x303494: 0x1180001b  beqz        $t4, . + 4 + (0x1B << 2)
    ctx->pc = 0x303494u;
    {
        const bool branch_taken_0x303494 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x303498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303494u;
        // 0x303498: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303494) {
            ctx->pc = 0x303504u;
            goto label_303504;
        }
    }
    ctx->pc = 0x30349Cu;
    // 0x30349c: 0x8c980008  lw          $t8, 0x8($a0)
    ctx->pc = 0x30349cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3034a0: 0x240e0028  addiu       $t6, $zero, 0x28
    ctx->pc = 0x3034a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3034a4: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x3034a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3034a8: 0x6e2818  mult        $a1, $v1, $t6
    ctx->pc = 0x3034a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3034ac: 0x0  nop
    ctx->pc = 0x3034acu;
    // NOP
label_3034b0:
    // 0x3034b0: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x3034b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3034b4: 0xb81021  addu        $v0, $a1, $t8
    ctx->pc = 0x3034b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x3034b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3034b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3034bc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3034bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3034c0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3034C0u;
    {
        const bool branch_taken_0x3034c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034C0u;
        // 0x3034c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034c0) {
            ctx->pc = 0x3034F4u;
            goto label_3034f4;
        }
    }
    ctx->pc = 0x3034C8u;
    // 0x3034c8: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x3034c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x3034cc: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3034ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3034d0:
    // 0x3034d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3034d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3034d4: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x3034d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3034d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3034D8u;
    {
        const bool branch_taken_0x3034d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034D8u;
        // 0x3034dc: 0x67102b  sltu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034d8) {
            ctx->pc = 0x3034E4u;
            goto label_3034e4;
        }
    }
    ctx->pc = 0x3034E0u;
    // 0x3034e0: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x3034e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3));
label_3034e4:
    // 0x3034e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3034e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3034e8: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x3034e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3034ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3034ECu;
    {
        const bool branch_taken_0x3034ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3034F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034ECu;
        // 0x3034f0: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034ec) {
            ctx->pc = 0x3034D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3034d0;
        }
    }
    ctx->pc = 0x3034F4u;
label_3034f4:
    // 0x3034f4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x3034f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3034f8: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x3034f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3034fc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3034FCu;
    {
        const bool branch_taken_0x3034fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3034fc) {
            ctx->pc = 0x303500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3034FCu;
            // 0x303500: 0x6e2818  mult        $a1, $v1, $t6 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3034B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3034b0;
        }
    }
    ctx->pc = 0x303504u;
label_303504:
    // 0x303504: 0x10ed0003  beq         $a3, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x303504u;
    {
        const bool branch_taken_0x303504 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        if (branch_taken_0x303504) {
            ctx->pc = 0x303514u;
            goto label_303514;
        }
    }
    ctx->pc = 0x30350Cu;
    // 0x30350c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x30350Cu;
    {
        const bool branch_taken_0x30350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30350Cu;
        // 0x303510: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30350c) {
            ctx->pc = 0x303488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303488;
        }
    }
    ctx->pc = 0x303514u;
label_303514:
    // 0x303514: 0x3e00008  jr          $ra
    ctx->pc = 0x303514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303514u;
        // 0x303518: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30351Cu;
    // 0x30351c: 0x0  nop
    ctx->pc = 0x30351cu;
    // NOP
    ctx->pc = 0x303520u;
}
