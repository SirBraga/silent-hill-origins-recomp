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

// Function: sub_002AB6D8
// Address: 0x2ab6d8 - 0x2ab730
void sub_002AB6D8_0x2ab6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB6D8_0x2ab6d8");
#endif

    switch (ctx->pc) {
        case 0x2ab6f0u: goto label_2ab6f0;
        default: break;
    }

    ctx->pc = 0x2ab6d8u;

    // 0x2ab6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab6dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ab6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ab6e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ab6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab6e8: 0xc0aaaba  jal         func_2AAAE8
    ctx->pc = 0x2AB6E8u;
    SET_GPR_U32(ctx, 31, 0x2AB6F0u);
    ctx->pc = 0x2AB6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6E8u;
    // 0x2ab6ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAAE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AAAE8u, 0x2AB6E8u, 0x2AB6F0u)) {
        return;
    }
    ctx->pc = 0x2AB6F0u;
label_2ab6f0:
    // 0x2ab6f0: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2ab6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab6f4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ab6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab6f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ab6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab6fc: 0x0  nop
    ctx->pc = 0x2ab6fcu;
    // NOP
    // 0x2ab700: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB700u;
    {
        const bool branch_taken_0x2ab700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab700) {
            ctx->pc = 0x2AB704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB700u;
            // 0x2ab704: 0xc7a1000c  lwc1        $f1, 0xC($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB714u;
            goto label_2ab714;
        }
    }
    ctx->pc = 0x2AB708u;
    // 0x2ab708: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ab708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ab70c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2ab70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2ab710: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2ab710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ab714:
    // 0x2ab714: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ab718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab71c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ab71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab720: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ab720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab728: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB728u;
        // 0x2ab72c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB730u;
}
