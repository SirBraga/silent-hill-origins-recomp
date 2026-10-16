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

// Function: sub_0017E820
// Address: 0x17e820 - 0x17e898
void sub_0017E820_0x17e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E820_0x17e820");
#endif

    switch (ctx->pc) {
        case 0x17e854u: goto label_17e854;
        case 0x17e868u: goto label_17e868;
        case 0x17e87cu: goto label_17e87c;
        default: break;
    }

    ctx->pc = 0x17e820u;

    // 0x17e820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e824: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17e824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17e828: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17e82c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e830: 0x244288f0  addiu       $v0, $v0, -0x7710
    ctx->pc = 0x17e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936816));
    // 0x17e834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e838: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17e83c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17e840: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17e840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17e844: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x17e844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e848: 0x8c708860  lw          $s0, -0x77A0($v1)
    ctx->pc = 0x17e848u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338860u));
    // 0x17e84c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17E84Cu;
    SET_GPR_U32(ctx, 31, 0x17E854u);
    ctx->pc = 0x17E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E84Cu;
    // 0x17e850: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17E84Cu, 0x17E854u)) {
        return;
    }
    ctx->pc = 0x17E854u;
label_17e854:
    // 0x17e854: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E854u;
    {
        const bool branch_taken_0x17e854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E854u;
        // 0x17e858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e854) {
            ctx->pc = 0x17E87Cu;
            goto label_17e87c;
        }
    }
    ctx->pc = 0x17E85Cu;
    // 0x17e85c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e860: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17E860u;
    SET_GPR_U32(ctx, 31, 0x17E868u);
    ctx->pc = 0x17E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E860u;
    // 0x17e864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17E860u, 0x17E868u)) {
        return;
    }
    ctx->pc = 0x17E868u;
label_17e868:
    // 0x17e868: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E868u;
    {
        const bool branch_taken_0x17e868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E868u;
        // 0x17e86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e868) {
            ctx->pc = 0x17E87Cu;
            goto label_17e87c;
        }
    }
    ctx->pc = 0x17E870u;
    // 0x17e870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e874: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17E874u;
    SET_GPR_U32(ctx, 31, 0x17E87Cu);
    ctx->pc = 0x17E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E874u;
    // 0x17e878: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17E874u, 0x17E87Cu)) {
        return;
    }
    ctx->pc = 0x17E87Cu;
label_17e87c:
    // 0x17e87c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e880: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17e880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e884: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e88c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E88Cu;
        // 0x17e890: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E894u;
    // 0x17e894: 0x0  nop
    ctx->pc = 0x17e894u;
    // NOP
    ctx->pc = 0x17e898u;
}
