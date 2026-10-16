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

// Function: sub_00138F70
// Address: 0x138f70 - 0x138fd8
void sub_00138F70_0x138f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138F70_0x138f70");
#endif

    switch (ctx->pc) {
        case 0x138f94u: goto label_138f94;
        case 0x138fa4u: goto label_138fa4;
        case 0x138fb8u: goto label_138fb8;
        default: break;
    }

    ctx->pc = 0x138f70u;

    // 0x138f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138f74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x138f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x138f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138f7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x138f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f8c: 0xc040688  jal         func_101A20
    ctx->pc = 0x138F8Cu;
    SET_GPR_U32(ctx, 31, 0x138F94u);
    ctx->pc = 0x138F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F8Cu;
    // 0x138f90: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x138F8Cu, 0x138F94u)) {
        return;
    }
    ctx->pc = 0x138F94u;
label_138f94:
    // 0x138f94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f9c: 0xc0406bc  jal         func_101AF0
    ctx->pc = 0x138F9Cu;
    SET_GPR_U32(ctx, 31, 0x138FA4u);
    ctx->pc = 0x138FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F9Cu;
    // 0x138fa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AF0u, 0x138F9Cu, 0x138FA4u)) {
        return;
    }
    ctx->pc = 0x138FA4u;
label_138fa4:
    // 0x138fa4: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x138fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x138fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x138facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138fb0: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x138FB0u;
    SET_GPR_U32(ctx, 31, 0x138FB8u);
    ctx->pc = 0x138FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138FB0u;
    // 0x138fb4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x138FB0u, 0x138FB8u)) {
        return;
    }
    ctx->pc = 0x138FB8u;
label_138fb8:
    // 0x138fb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x138fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x138FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FC4u;
        // 0x138fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138FCCu;
    // 0x138fcc: 0x0  nop
    ctx->pc = 0x138fccu;
    // NOP
    // 0x138fd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x138fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x138fd4: 0x0  nop
    ctx->pc = 0x138fd4u;
    // NOP
    ctx->pc = 0x138fd8u;
}
