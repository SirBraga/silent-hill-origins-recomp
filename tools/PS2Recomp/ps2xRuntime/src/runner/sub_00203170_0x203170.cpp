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

// Function: sub_00203170
// Address: 0x203170 - 0x203278
void sub_00203170_0x203170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203170_0x203170");
#endif

    switch (ctx->pc) {
        case 0x2031e8u: goto label_2031e8;
        default: break;
    }

    ctx->pc = 0x203170u;

    // 0x203170: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x203170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203174: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x203174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203178: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x203178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20317c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x20317cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x203180: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203180u;
    {
        const bool branch_taken_0x203180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203180) {
            ctx->pc = 0x203198u;
            goto label_203198;
        }
    }
    ctx->pc = 0x203188u;
    // 0x203188: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x203188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x20318c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x20318cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x203190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203190u;
    {
        const bool branch_taken_0x203190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203190u;
        // 0x203194: 0xe32023  subu        $a0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203190) {
            ctx->pc = 0x2031A0u;
            goto label_2031a0;
        }
    }
    ctx->pc = 0x203198u;
label_203198:
    // 0x203198: 0x3e00008  jr          $ra
    ctx->pc = 0x203198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203198u;
        // 0x20319c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2031A0u;
label_2031a0:
    // 0x2031a0: 0x8d05011c  lw          $a1, 0x11C($t0)
    ctx->pc = 0x2031a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 284)));
    // 0x2031a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2031a8: 0x24821fff  addiu       $v0, $a0, 0x1FFF
    ctx->pc = 0x2031a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8191));
    // 0x2031ac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2031acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2031b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2031b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2031b4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2031b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2031b8: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2031bc: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2031bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x2031c0: 0xad05011c  sw          $a1, 0x11C($t0)
    ctx->pc = 0x2031c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 284), GPR_U32(ctx, 5));
    // 0x2031c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2031c8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2031cc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2031ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2031d0: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2031D0u;
    {
        const bool branch_taken_0x2031d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031D0u;
        // 0x2031d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031d0) {
            ctx->pc = 0x203270u;
            goto label_203270;
        }
    }
    ctx->pc = 0x2031D8u;
    // 0x2031d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2031d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2031dc: 0x3c0a005c  lui         $t2, 0x5C
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)92 << 16));
    // 0x2031e0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2031e4: 0x0  nop
    ctx->pc = 0x2031e4u;
    // NOP
label_2031e8:
    // 0x2031e8: 0x5447001e  bnel        $v0, $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x2031E8u;
    {
        const bool branch_taken_0x2031e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2031e8) {
            ctx->pc = 0x2031ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2031E8u;
            // 0x2031ec: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203264u;
            goto label_203264;
        }
    }
    ctx->pc = 0x2031F0u;
    // 0x2031f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2031f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2031f4: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2031f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2031f8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2031f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2031fc: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x2031fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x203200: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x203204: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x203208: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x203208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x20320c: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20320Cu;
    {
        const bool branch_taken_0x20320c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x203210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20320Cu;
        // 0x203210: 0x1033821  addu        $a3, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20320c) {
            ctx->pc = 0x203224u;
            goto label_203224;
        }
    }
    ctx->pc = 0x203214u;
    // 0x203214: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x203214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x203218: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x203218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20321c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20321Cu;
    {
        const bool branch_taken_0x20321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20321Cu;
        // 0x203220: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20321c) {
            ctx->pc = 0x203230u;
            goto label_203230;
        }
    }
    ctx->pc = 0x203224u;
label_203224:
    // 0x203224: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203228: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x203228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20322c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x20322cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_203230:
    // 0x203230: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x203230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x203234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203238: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x203238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20323c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20323cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x203240: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x203240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x203244: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x203244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x203248: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x203248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x20324c: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x20324cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x203250: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x203250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x203254: 0x8d430284  lw          $v1, 0x284($t2)
    ctx->pc = 0x203254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 644)));
    // 0x203258: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x203258u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20325c: 0x3e00008  jr          $ra
    ctx->pc = 0x20325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20325Cu;
        // 0x203260: 0xad430284  sw          $v1, 0x284($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203264u;
label_203264:
    // 0x203264: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203268: 0x54a0ffdf  bnel        $a1, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x203268u;
    {
        const bool branch_taken_0x203268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x203268) {
            ctx->pc = 0x20326Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203268u;
            // 0x20326c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2031E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2031e8;
        }
    }
    ctx->pc = 0x203270u;
label_203270:
    // 0x203270: 0x3e00008  jr          $ra
    ctx->pc = 0x203270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203270u;
        // 0x203274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203278u;
}
