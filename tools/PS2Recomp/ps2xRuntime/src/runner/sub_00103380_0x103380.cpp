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

// Function: sub_00103380
// Address: 0x103380 - 0x103430
void sub_00103380_0x103380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103380_0x103380");
#endif

    switch (ctx->pc) {
        case 0x1033b8u: goto label_1033b8;
        default: break;
    }

    ctx->pc = 0x103380u;

    // 0x103380: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x103380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x103384: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x103384u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103388: 0xa24818  mult        $t1, $a1, $v0
    ctx->pc = 0x103388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x10338c: 0x8d6300d8  lw          $v1, 0xD8($t3)
    ctx->pc = 0x10338cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 216)));
    // 0x103390: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x103390u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x103394: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x103394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x103398: 0x8c4a0058  lw          $t2, 0x58($v0)
    ctx->pc = 0x103398u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x10339c: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x10339Cu;
    {
        const bool branch_taken_0x10339c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10339Cu;
        // 0x1033a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10339c) {
            ctx->pc = 0x1033E0u;
            goto label_1033e0;
        }
    }
    ctx->pc = 0x1033A4u;
    // 0x1033a4: 0x24620028  addiu       $v0, $v1, 0x28
    ctx->pc = 0x1033a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1033a8: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x1033a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x1033ac: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x1033acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1033b0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1033b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1033b4: 0x0  nop
    ctx->pc = 0x1033b4u;
    // NOP
label_1033b8:
    // 0x1033b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1033b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1033bc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1033BCu;
    {
        const bool branch_taken_0x1033bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1033C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033BCu;
        // 0x1033c0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033bc) {
            ctx->pc = 0x1033D0u;
            goto label_1033d0;
        }
    }
    ctx->pc = 0x1033C4u;
    // 0x1033c4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1033c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1033c8: 0x10470017  beq         $v0, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1033C8u;
    {
        const bool branch_taken_0x1033c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1033c8) {
            ctx->pc = 0x103428u;
            goto label_103428;
        }
    }
    ctx->pc = 0x1033D0u;
label_1033d0:
    // 0x1033d0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1033d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1033d4: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1033d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1033d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1033D8u;
    {
        const bool branch_taken_0x1033d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1033DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033D8u;
        // 0x1033dc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033d8) {
            ctx->pc = 0x1033B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1033b8;
        }
    }
    ctx->pc = 0x1033E0u;
label_1033e0:
    // 0x1033e0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1033e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1033e4: 0x8d6300d8  lw          $v1, 0xD8($t3)
    ctx->pc = 0x1033e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 216)));
    // 0x1033e8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1033e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1033ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1033ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1033f0: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1033f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1033f4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1033f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1033f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1033f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1033fc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1033fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x103400: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x103400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
    // 0x103404: 0x8d6200d8  lw          $v0, 0xD8($t3)
    ctx->pc = 0x103404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 216)));
    // 0x103408: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x103408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10340c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x103410: 0xa4470048  sh          $a3, 0x48($v0)
    ctx->pc = 0x103410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 7));
    // 0x103414: 0x8d6300d8  lw          $v1, 0xD8($t3)
    ctx->pc = 0x103414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 216)));
    // 0x103418: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x103418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10341c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x10341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x103420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x103420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x103424: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x103424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_103428:
    // 0x103428: 0x3e00008  jr          $ra
    ctx->pc = 0x103428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103430u;
}
