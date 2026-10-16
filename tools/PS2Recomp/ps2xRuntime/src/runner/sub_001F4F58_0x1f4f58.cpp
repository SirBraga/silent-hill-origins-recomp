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

// Function: sub_001F4F58
// Address: 0x1f4f58 - 0x1f4fd0
void sub_001F4F58_0x1f4f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4F58_0x1f4f58");
#endif

    switch (ctx->pc) {
        case 0x1f4f84u: goto label_1f4f84;
        case 0x1f4f94u: goto label_1f4f94;
        case 0x1f4fb8u: goto label_1f4fb8;
        default: break;
    }

    ctx->pc = 0x1f4f58u;

    // 0x1f4f58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4f5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f4f60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f4f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f4f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f4f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f4f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f4f70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f4f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4f7c: 0xc065c40  jal         func_197100
    ctx->pc = 0x1F4F7Cu;
    SET_GPR_U32(ctx, 31, 0x1F4F84u);
    ctx->pc = 0x1F4F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F7Cu;
    // 0x1f4f80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1F4F7Cu, 0x1F4F84u)) {
        return;
    }
    ctx->pc = 0x1F4F84u;
label_1f4f84:
    // 0x1f4f84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f8c: 0xc07d3b8  jal         func_1F4EE0
    ctx->pc = 0x1F4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1F4F94u);
    ctx->pc = 0x1F4F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F8Cu;
    // 0x1f4f90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4EE0u, 0x1F4F8Cu, 0x1F4F94u)) {
        return;
    }
    ctx->pc = 0x1F4F94u;
label_1f4f94:
    // 0x1f4f94: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4F94u;
    {
        const bool branch_taken_0x1f4f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f94) {
            ctx->pc = 0x1F4F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4F94u;
            // 0x1f4f98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4FBCu;
            goto label_1f4fbc;
        }
    }
    ctx->pc = 0x1F4F9Cu;
    // 0x1f4f9c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4F9Cu;
    {
        const bool branch_taken_0x1f4f9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F9Cu;
        // 0x1f4fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f9c) {
            ctx->pc = 0x1F4FB8u;
            goto label_1f4fb8;
        }
    }
    ctx->pc = 0x1F4FA4u;
    // 0x1f4fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fb0: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x1F4FB0u;
    SET_GPR_U32(ctx, 31, 0x1F4FB8u);
    ctx->pc = 0x1F4FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4FB0u;
    // 0x1f4fb4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5080u, 0x1F4FB0u, 0x1F4FB8u)) {
        return;
    }
    ctx->pc = 0x1F4FB8u;
label_1f4fb8:
    // 0x1f4fb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f4fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4fbc:
    // 0x1f4fbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f4fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4fc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f4fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FC8u;
        // 0x1f4fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4FD0u;
}
