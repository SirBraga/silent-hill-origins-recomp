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

// Function: sub_00126F20
// Address: 0x126f20 - 0x126f90
void sub_00126F20_0x126f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126F20_0x126f20");
#endif

    switch (ctx->pc) {
        case 0x126f38u: goto label_126f38;
        default: break;
    }

    ctx->pc = 0x126f20u;

    // 0x126f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126f24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x126f28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x126f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126f30: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x126F30u;
    SET_GPR_U32(ctx, 31, 0x126F38u);
    ctx->pc = 0x126F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F30u;
    // 0x126f34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x126F30u, 0x126F38u)) {
        return;
    }
    ctx->pc = 0x126F38u;
label_126f38:
    // 0x126f38: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x126f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x126f3c: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x126f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x126f40: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x126f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126f44: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x126f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126f48: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x126f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126f4c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x126f4cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x126f50: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x126f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126f54: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x126f54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x126f58: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x126f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x126f5c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x126f5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x126f60: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x126f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x126f64: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x126f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x126f68: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x126f68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x126f6c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x126f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x126f70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x126f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126f74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x126f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x126f78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126f7c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x126f7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x126f80: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x126f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x126f84: 0x3e00008  jr          $ra
    ctx->pc = 0x126F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F84u;
        // 0x126f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126F8Cu;
    // 0x126f8c: 0x0  nop
    ctx->pc = 0x126f8cu;
    // NOP
    ctx->pc = 0x126f90u;
}
