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

// Function: sub_0016DA10
// Address: 0x16da10 - 0x16da88
void sub_0016DA10_0x16da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DA10_0x16da10");
#endif

    switch (ctx->pc) {
        case 0x16da24u: goto label_16da24;
        case 0x16da44u: goto label_16da44;
        default: break;
    }

    ctx->pc = 0x16da10u;

    // 0x16da10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16da14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16da14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16da18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16da1c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16DA1Cu;
    SET_GPR_U32(ctx, 31, 0x16DA24u);
    ctx->pc = 0x16DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA1Cu;
    // 0x16da20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16DA1Cu, 0x16DA24u)) {
        return;
    }
    ctx->pc = 0x16DA24u;
label_16da24:
    // 0x16da24: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16da24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16da28: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16da28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16da2c: 0x24634d70  addiu       $v1, $v1, 0x4D70
    ctx->pc = 0x16da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19824));
    // 0x16da30: 0x24424d28  addiu       $v0, $v0, 0x4D28
    ctx->pc = 0x16da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19752));
    // 0x16da34: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16da34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16da38: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16da38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16da3c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16DA3Cu;
    SET_GPR_U32(ctx, 31, 0x16DA44u);
    ctx->pc = 0x16DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA3Cu;
    // 0x16da40: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16DA3Cu, 0x16DA44u)) {
        return;
    }
    ctx->pc = 0x16DA44u;
label_16da44:
    // 0x16da44: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16da44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16da48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16da48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16da4c: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x16da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x16da50: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x16da50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x16da54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16da54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da58: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x16da58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x16da5c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x16da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x16da60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x16da60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x16da64: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x16da64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x16da68: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x16da68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x16da6c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x16da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x16da70: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16da70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16da74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16da74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16da78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16da78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16da7c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA7Cu;
        // 0x16da80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DA84u;
    // 0x16da84: 0x0  nop
    ctx->pc = 0x16da84u;
    // NOP
    ctx->pc = 0x16da88u;
}
