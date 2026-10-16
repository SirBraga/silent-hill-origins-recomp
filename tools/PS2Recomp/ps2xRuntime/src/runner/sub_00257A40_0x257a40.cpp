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

// Function: sub_00257A40
// Address: 0x257a40 - 0x257ab8
void sub_00257A40_0x257a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257A40_0x257a40");
#endif

    switch (ctx->pc) {
        case 0x257a68u: goto label_257a68;
        case 0x257a94u: goto label_257a94;
        default: break;
    }

    ctx->pc = 0x257a40u;

    // 0x257a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257a44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x257a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257a48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x257a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257a50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x257a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257a58: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x257a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x257a5c: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0
    ctx->pc = 0x257a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
    // 0x257a60: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x257A60u;
    SET_GPR_U32(ctx, 31, 0x257A68u);
    ctx->pc = 0x257A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A60u;
    // 0x257a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x257A60u, 0x257A68u)) {
        return;
    }
    ctx->pc = 0x257A68u;
label_257a68:
    // 0x257a68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257A68u;
    {
        const bool branch_taken_0x257a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A68u;
        // 0x257a6c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a68) {
            ctx->pc = 0x257A78u;
            goto label_257a78;
        }
    }
    ctx->pc = 0x257A70u;
    // 0x257a70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x257A70u;
    {
        const bool branch_taken_0x257a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A70u;
        // 0x257a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a70) {
            ctx->pc = 0x257AA4u;
            goto label_257aa4;
        }
    }
    ctx->pc = 0x257A78u;
label_257a78:
    // 0x257a78: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x257A78u;
    {
        const bool branch_taken_0x257a78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x257a78) {
            ctx->pc = 0x257A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257A78u;
            // 0x257a7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257AA4u;
            goto label_257aa4;
        }
    }
    ctx->pc = 0x257A80u;
    // 0x257a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a84: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x257a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x257a88: 0x24a53fd4  addiu       $a1, $a1, 0x3FD4
    ctx->pc = 0x257a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16340));
    // 0x257a8c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x257A8Cu;
    SET_GPR_U32(ctx, 31, 0x257A94u);
    ctx->pc = 0x257A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A8Cu;
    // 0x257a90: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x257A8Cu, 0x257A94u)) {
        return;
    }
    ctx->pc = 0x257A94u;
label_257a94:
    // 0x257a94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x257a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a98: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x257A98u;
    {
        const bool branch_taken_0x257a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A98u;
        // 0x257a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a98) {
            ctx->pc = 0x257AA4u;
            goto label_257aa4;
        }
    }
    ctx->pc = 0x257AA0u;
    // 0x257aa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x257aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257aa4:
    // 0x257aa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x257AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AB0u;
        // 0x257ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257AB8u;
}
