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

// Function: sub_002174A8
// Address: 0x2174a8 - 0x217510
void sub_002174A8_0x2174a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002174A8_0x2174a8");
#endif

    switch (ctx->pc) {
        case 0x2174d4u: goto label_2174d4;
        case 0x2174e8u: goto label_2174e8;
        default: break;
    }

    ctx->pc = 0x2174a8u;

    // 0x2174a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2174a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2174ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2174acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2174b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2174b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2174b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2174b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174b8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2174b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2174bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2174bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2174c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2174c4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2174c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2174c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2174c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2174cc: 0xc085d6e  jal         func_2175B8
    ctx->pc = 0x2174CCu;
    SET_GPR_U32(ctx, 31, 0x2174D4u);
    ctx->pc = 0x2174D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174CCu;
    // 0x2174d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2175B8u, 0x2174CCu, 0x2174D4u)) {
        return;
    }
    ctx->pc = 0x2174D4u;
label_2174d4:
    // 0x2174d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2174d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2174d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2174dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2174e0: 0xc085776  jal         func_215DD8
    ctx->pc = 0x2174E0u;
    SET_GPR_U32(ctx, 31, 0x2174E8u);
    ctx->pc = 0x2174E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174E0u;
    // 0x2174e4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x215DD8u, 0x2174E0u, 0x2174E8u)) {
        return;
    }
    ctx->pc = 0x2174E8u;
label_2174e8:
    // 0x2174e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2174e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2174ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2174ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2174f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2174f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2174f4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2174f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2174f8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2174f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2174fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2174FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174FCu;
        // 0x217500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217504u;
    // 0x217504: 0x0  nop
    ctx->pc = 0x217504u;
    // NOP
    // 0x217508: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x217508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21750c: 0x0  nop
    ctx->pc = 0x21750cu;
    // NOP
    ctx->pc = 0x217510u;
}
