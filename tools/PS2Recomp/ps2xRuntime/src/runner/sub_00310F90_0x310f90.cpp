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

// Function: sub_00310F90
// Address: 0x310f90 - 0x310fe0
void sub_00310F90_0x310f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310F90_0x310f90");
#endif

    switch (ctx->pc) {
        case 0x310fbcu: goto label_310fbc;
        default: break;
    }

    ctx->pc = 0x310f90u;

    // 0x310f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x310f94: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x310f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x310f98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x310f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x310f9c: 0x24a51028  addiu       $a1, $a1, 0x1028
    ctx->pc = 0x310f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4136));
    // 0x310fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310fa4: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x310fa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x310fa8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x310fa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x310fac: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x310facu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x310fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x310fb4: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x310FB4u;
    SET_GPR_U32(ctx, 31, 0x310FBCu);
    ctx->pc = 0x310FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FB4u;
    // 0x310fb8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x310FB4u, 0x310FBCu)) {
        return;
    }
    ctx->pc = 0x310FBCu;
label_310fbc:
    // 0x310fbc: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x310fbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x310fc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x310fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310fc4: 0xe6150040  swc1        $f21, 0x40($s0)
    ctx->pc = 0x310fc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x310fc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x310fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310fd0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x310fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x310fd4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x310fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x310FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FD8u;
        // 0x310fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310FE0u;
}
