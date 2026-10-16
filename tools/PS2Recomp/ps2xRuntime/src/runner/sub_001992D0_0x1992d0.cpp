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

// Function: sub_001992D0
// Address: 0x1992d0 - 0x199338
void sub_001992D0_0x1992d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001992D0_0x1992d0");
#endif

    switch (ctx->pc) {
        case 0x1992f8u: goto label_1992f8;
        case 0x19930cu: goto label_19930c;
        case 0x199318u: goto label_199318;
        case 0x199324u: goto label_199324;
        default: break;
    }

    ctx->pc = 0x1992d0u;

    // 0x1992d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1992d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1992d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1992d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1992d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1992dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1992dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1992e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1992e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1992e4: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1992e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1992E8u;
    {
        const bool branch_taken_0x1992e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992E8u;
        // 0x1992ec: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992e8) {
            ctx->pc = 0x199324u;
            goto label_199324;
        }
    }
    ctx->pc = 0x1992F0u;
    // 0x1992f0: 0xc08bd3e  jal         func_22F4F8
    ctx->pc = 0x1992F0u;
    SET_GPR_U32(ctx, 31, 0x1992F8u);
    ctx->pc = 0x22F4F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22F4F8u, 0x1992F0u, 0x1992F8u)) {
        return;
    }
    ctx->pc = 0x1992F8u;
label_1992f8:
    // 0x1992f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1992f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1992fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1992FCu;
    {
        const bool branch_taken_0x1992fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992FCu;
        // 0x199300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992fc) {
            ctx->pc = 0x199324u;
            goto label_199324;
        }
    }
    ctx->pc = 0x199304u;
    // 0x199304: 0xc0664ce  jal         func_199338
    ctx->pc = 0x199304u;
    SET_GPR_U32(ctx, 31, 0x19930Cu);
    ctx->pc = 0x199308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199304u;
    // 0x199308: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x199338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199338u, 0x199304u, 0x19930Cu)) {
        return;
    }
    ctx->pc = 0x19930Cu;
label_19930c:
    // 0x19930c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199310: 0xc0664fc  jal         func_1993F0
    ctx->pc = 0x199310u;
    SET_GPR_U32(ctx, 31, 0x199318u);
    ctx->pc = 0x199314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199310u;
    // 0x199314: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1993F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1993F0u, 0x199310u, 0x199318u)) {
        return;
    }
    ctx->pc = 0x199318u;
label_199318:
    // 0x199318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19931c: 0xc06636e  jal         func_198DB8
    ctx->pc = 0x19931Cu;
    SET_GPR_U32(ctx, 31, 0x199324u);
    ctx->pc = 0x199320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19931Cu;
    // 0x199320: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x198DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198DB8u, 0x19931Cu, 0x199324u)) {
        return;
    }
    ctx->pc = 0x199324u;
label_199324:
    // 0x199324: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19932c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x199330: 0x3e00008  jr          $ra
    ctx->pc = 0x199330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199330u;
        // 0x199334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199338u;
}
