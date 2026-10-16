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

// Function: sub_0029FA48
// Address: 0x29fa48 - 0x29fb18
void sub_0029FA48_0x29fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FA48_0x29fa48");
#endif

    switch (ctx->pc) {
        case 0x29fa78u: goto label_29fa78;
        case 0x29fae4u: goto label_29fae4;
        default: break;
    }

    ctx->pc = 0x29fa48u;

    // 0x29fa48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29fa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29fa4c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x29fa4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29fa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29fa54: 0x250b0014  addiu       $t3, $t0, 0x14
    ctx->pc = 0x29fa54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x29fa58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29fa5c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x29fa5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29fa64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29fa64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa68: 0x8d100010  lw          $s0, 0x10($t0)
    ctx->pc = 0x29fa68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x29fa6c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x29fa6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29fa70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa74: 0x0  nop
    ctx->pc = 0x29fa74u;
    // NOP
label_29fa78:
    // 0x29fa78: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x29fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29fa7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29fa7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29fa80: 0x150302a  slt         $a2, $t2, $s0
    ctx->pc = 0x29fa80u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29fa84: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29fa84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29fa88: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x29fa88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29fa8c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x29fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x29fa90: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x29fa90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29fa94: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x29fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29fa98: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x29fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x29fa9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29faa0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29faa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29faa4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x29faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29faa8: 0x38c02  srl         $s1, $v1, 16
    ctx->pc = 0x29faa8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x29faac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29fab0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x29fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x29fab4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29FAB4u;
    {
        const bool branch_taken_0x29fab4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAB4u;
        // 0x29fab8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fab4) {
            ctx->pc = 0x29FA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fa78;
        }
    }
    ctx->pc = 0x29FABCu;
    // 0x29fabc: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29FABCu;
    {
        const bool branch_taken_0x29fabc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FABCu;
        // 0x29fac0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fabc) {
            ctx->pc = 0x29FB04u;
            goto label_29fb04;
        }
    }
    ctx->pc = 0x29FAC4u;
    // 0x29fac4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x29fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x29fac8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x29fac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29facc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FACCu;
    {
        const bool branch_taken_0x29facc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FACCu;
        // 0x29fad0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29facc) {
            ctx->pc = 0x29FAF0u;
            goto label_29faf0;
        }
    }
    ctx->pc = 0x29FAD4u;
    // 0x29fad4: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x29fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x29fad8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x29fad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fadc: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x29FADCu;
    SET_GPR_U32(ctx, 31, 0x29FAE4u);
    ctx->pc = 0x29FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FADCu;
    // 0x29fae0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x29FADCu, 0x29FAE4u)) {
        return;
    }
    ctx->pc = 0x29FAE4u;
label_29fae4:
    // 0x29fae4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x29fae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fae8: 0x250b0014  addiu       $t3, $t0, 0x14
    ctx->pc = 0x29fae8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x29faec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29faecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29faf0:
    // 0x29faf0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x29faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x29faf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29faf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29faf8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x29faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x29fafc: 0xad100010  sw          $s0, 0x10($t0)
    ctx->pc = 0x29fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 16));
    // 0x29fb00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29fb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29fb04:
    // 0x29fb04: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x29fb04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29fb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fb0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29fb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fb10: 0x3e00008  jr          $ra
    ctx->pc = 0x29FB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB10u;
        // 0x29fb14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FB18u;
}
