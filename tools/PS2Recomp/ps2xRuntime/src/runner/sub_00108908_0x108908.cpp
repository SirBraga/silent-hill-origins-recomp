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

// Function: sub_00108908
// Address: 0x108908 - 0x108950
void sub_00108908_0x108908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108908_0x108908");
#endif

    switch (ctx->pc) {
        case 0x108934u: goto label_108934;
        default: break;
    }

    ctx->pc = 0x108908u;

    // 0x108908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10890c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10890cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x108910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x108910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x108914: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x108914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10891c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10891cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108920: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x108920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x108924: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x108924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x108928: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10892c: 0xc06ca72  jal         func_1B29C8
    ctx->pc = 0x10892Cu;
    SET_GPR_U32(ctx, 31, 0x108934u);
    ctx->pc = 0x108930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10892Cu;
    // 0x108930: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B29C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B29C8u, 0x10892Cu, 0x108934u)) {
        return;
    }
    ctx->pc = 0x108934u;
label_108934:
    // 0x108934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10893c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x10893cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x108940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x108940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108944: 0x3e00008  jr          $ra
    ctx->pc = 0x108944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108944u;
        // 0x108948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10894Cu;
    // 0x10894c: 0x0  nop
    ctx->pc = 0x10894cu;
    // NOP
    ctx->pc = 0x108950u;
}
