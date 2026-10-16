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

// Function: sub_00217748
// Address: 0x217748 - 0x2177b8
void sub_00217748_0x217748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217748_0x217748");
#endif

    switch (ctx->pc) {
        case 0x217774u: goto label_217774;
        case 0x217780u: goto label_217780;
        case 0x217794u: goto label_217794;
        case 0x2177a4u: goto label_2177a4;
        default: break;
    }

    ctx->pc = 0x217748u;

    // 0x217748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21774c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x217754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21775c: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x21775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x217760: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x217760u;
    {
        const bool branch_taken_0x217760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217760u;
        // 0x217764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217760) {
            ctx->pc = 0x2177A4u;
            goto label_2177a4;
        }
    }
    ctx->pc = 0x217768u;
    // 0x217768: 0x8e240290  lw          $a0, 0x290($s1)
    ctx->pc = 0x217768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x21776c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x21776Cu;
    SET_GPR_U32(ctx, 31, 0x217774u);
    ctx->pc = 0x217770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21776Cu;
    // 0x217770: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x21776Cu, 0x217774u)) {
        return;
    }
    ctx->pc = 0x217774u;
label_217774:
    // 0x217774: 0x8e23028c  lw          $v1, 0x28C($s1)
    ctx->pc = 0x217774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x217778: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217778u;
    {
        const bool branch_taken_0x217778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217778u;
        // 0x21777c: 0xae220294  sw          $v0, 0x294($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217778) {
            ctx->pc = 0x21779Cu;
            goto label_21779c;
        }
    }
    ctx->pc = 0x217780u;
label_217780:
    // 0x217780: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x217780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x217784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217788: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x217788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21778c: 0xc085aa0  jal         func_216A80
    ctx->pc = 0x21778Cu;
    SET_GPR_U32(ctx, 31, 0x217794u);
    ctx->pc = 0x217790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21778Cu;
    // 0x217790: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216A80u, 0x21778Cu, 0x217794u)) {
        return;
    }
    ctx->pc = 0x217794u;
label_217794:
    // 0x217794: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217794u;
    {
        const bool branch_taken_0x217794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x217798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217794u;
        // 0x217798: 0xae30028c  sw          $s0, 0x28C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217794) {
            ctx->pc = 0x217780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217780;
        }
    }
    ctx->pc = 0x21779Cu;
label_21779c:
    // 0x21779c: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x21779Cu;
    SET_GPR_U32(ctx, 31, 0x2177A4u);
    ctx->pc = 0x2177A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21779Cu;
    // 0x2177a0: 0x8e240290  lw          $a0, 0x290($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x21779Cu, 0x2177A4u)) {
        return;
    }
    ctx->pc = 0x2177A4u;
label_2177a4:
    // 0x2177a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2177a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2177a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2177a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2177ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2177acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2177b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2177B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2177B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177B0u;
        // 0x2177b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2177B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2177B8u;
}
