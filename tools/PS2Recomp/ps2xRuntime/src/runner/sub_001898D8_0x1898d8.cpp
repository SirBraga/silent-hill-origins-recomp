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

// Function: sub_001898D8
// Address: 0x1898d8 - 0x189950
void sub_001898D8_0x1898d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001898D8_0x1898d8");
#endif

    switch (ctx->pc) {
        case 0x189900u: goto label_189900;
        case 0x189914u: goto label_189914;
        case 0x189928u: goto label_189928;
        default: break;
    }

    ctx->pc = 0x1898d8u;

    // 0x1898d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1898d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1898dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1898dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1898e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1898e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1898e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1898e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1898e8: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x1898e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1898ec: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1898ECu;
    {
        const bool branch_taken_0x1898ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898ECu;
        // 0x1898f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898ec) {
            ctx->pc = 0x18993Cu;
            goto label_18993c;
        }
    }
    ctx->pc = 0x1898F4u;
    // 0x1898f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1898f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1898f8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1898F8u;
    SET_GPR_U32(ctx, 31, 0x189900u);
    ctx->pc = 0x1898FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898F8u;
    // 0x1898fc: 0x8c508ac8  lw          $s0, -0x7538($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1898F8u, 0x189900u)) {
        return;
    }
    ctx->pc = 0x189900u;
label_189900:
    // 0x189900: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x189900u;
    {
        const bool branch_taken_0x189900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189900u;
        // 0x189904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189900) {
            ctx->pc = 0x189930u;
            goto label_189930;
        }
    }
    ctx->pc = 0x189908u;
    // 0x189908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18990c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18990Cu;
    SET_GPR_U32(ctx, 31, 0x189914u);
    ctx->pc = 0x189910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18990Cu;
    // 0x189910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18990Cu, 0x189914u)) {
        return;
    }
    ctx->pc = 0x189914u;
label_189914:
    // 0x189914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189914u;
    {
        const bool branch_taken_0x189914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189914u;
        // 0x189918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189914) {
            ctx->pc = 0x189930u;
            goto label_189930;
        }
    }
    ctx->pc = 0x18991Cu;
    // 0x18991c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18991cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189920: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x189920u;
    SET_GPR_U32(ctx, 31, 0x189928u);
    ctx->pc = 0x189924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189920u;
    // 0x189924: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x189920u, 0x189928u)) {
        return;
    }
    ctx->pc = 0x189928u;
label_189928:
    // 0x189928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189928u;
    {
        const bool branch_taken_0x189928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189928u;
        // 0x18992c: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189928) {
            ctx->pc = 0x189934u;
            goto label_189934;
        }
    }
    ctx->pc = 0x189930u;
label_189930:
    // 0x189930: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x189930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189934:
    // 0x189934: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189938: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x189938u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_18993c:
    // 0x18993c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18993cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189940: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x189940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189948: 0x3e00008  jr          $ra
    ctx->pc = 0x189948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189948u;
        // 0x18994c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189950u;
}
