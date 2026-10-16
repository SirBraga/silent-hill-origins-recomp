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

// Function: sub_0017E5F0
// Address: 0x17e5f0 - 0x17e668
void sub_0017E5F0_0x17e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E5F0_0x17e5f0");
#endif

    switch (ctx->pc) {
        case 0x17e624u: goto label_17e624;
        case 0x17e638u: goto label_17e638;
        case 0x17e64cu: goto label_17e64c;
        default: break;
    }

    ctx->pc = 0x17e5f0u;

    // 0x17e5f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e5f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17e5f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17e5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17e5fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e600: 0x244288b8  addiu       $v0, $v0, -0x7748
    ctx->pc = 0x17e600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936760));
    // 0x17e604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e608: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17e608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17e60c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17e610: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17e610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17e614: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x17e614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e618: 0x8c70885c  lw          $s0, -0x77A4($v1)
    ctx->pc = 0x17e618u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x33885Cu));
    // 0x17e61c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17E61Cu;
    SET_GPR_U32(ctx, 31, 0x17E624u);
    ctx->pc = 0x17E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E61Cu;
    // 0x17e620: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17E61Cu, 0x17E624u)) {
        return;
    }
    ctx->pc = 0x17E624u;
label_17e624:
    // 0x17e624: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E624u;
    {
        const bool branch_taken_0x17e624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E624u;
        // 0x17e628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e624) {
            ctx->pc = 0x17E64Cu;
            goto label_17e64c;
        }
    }
    ctx->pc = 0x17E62Cu;
    // 0x17e62c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e630: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17E630u;
    SET_GPR_U32(ctx, 31, 0x17E638u);
    ctx->pc = 0x17E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E630u;
    // 0x17e634: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17E630u, 0x17E638u)) {
        return;
    }
    ctx->pc = 0x17E638u;
label_17e638:
    // 0x17e638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E638u;
    {
        const bool branch_taken_0x17e638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E638u;
        // 0x17e63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e638) {
            ctx->pc = 0x17E64Cu;
            goto label_17e64c;
        }
    }
    ctx->pc = 0x17E640u;
    // 0x17e640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e644: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17E644u;
    SET_GPR_U32(ctx, 31, 0x17E64Cu);
    ctx->pc = 0x17E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E644u;
    // 0x17e648: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17E644u, 0x17E64Cu)) {
        return;
    }
    ctx->pc = 0x17E64Cu;
label_17e64c:
    // 0x17e64c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e650: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17e650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e654: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e65c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E65Cu;
        // 0x17e660: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E664u;
    // 0x17e664: 0x0  nop
    ctx->pc = 0x17e664u;
    // NOP
    ctx->pc = 0x17e668u;
}
