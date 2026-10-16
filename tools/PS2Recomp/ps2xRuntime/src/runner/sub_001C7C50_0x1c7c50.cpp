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

// Function: sub_001C7C50
// Address: 0x1c7c50 - 0x1c7ca8
void sub_001C7C50_0x1c7c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7C50_0x1c7c50");
#endif

    switch (ctx->pc) {
        case 0x1c7c90u: goto label_1c7c90;
        default: break;
    }

    ctx->pc = 0x1c7c50u;

    // 0x1c7c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7c54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c7c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c60: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x1c7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x1c7c64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C7C64u;
    {
        const bool branch_taken_0x1c7c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C64u;
        // 0x1c7c68: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c64) {
            ctx->pc = 0x1C7C98u;
            goto label_1c7c98;
        }
    }
    ctx->pc = 0x1C7C6Cu;
    // 0x1c7c6c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c7c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c7c70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c7c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c7c74: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c7c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c7c78: 0xc60e02b4  lwc1        $f14, 0x2B4($s0)
    ctx->pc = 0x1c7c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c7c7c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1c7c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c7c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7c84: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1c7c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1c7c88: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1C7C88u;
    SET_GPR_U32(ctx, 31, 0x1C7C90u);
    ctx->pc = 0x1C7C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C88u;
    // 0x1c7c8c: 0x260502b8  addiu       $a1, $s0, 0x2B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1C7C88u, 0x1C7C90u)) {
        return;
    }
    ctx->pc = 0x1C7C90u;
label_1c7c90:
    // 0x1c7c90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c7c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c7c94: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x1c7c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
label_1c7c98:
    // 0x1c7c98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CA0u;
        // 0x1c7ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7CA8u;
}
