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

// Function: sub_00125FA0
// Address: 0x125fa0 - 0x126010
void sub_00125FA0_0x125fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125FA0_0x125fa0");
#endif

    switch (ctx->pc) {
        case 0x125fa0u: goto label_125fa0;
        case 0x125fa4u: goto label_125fa4;
        case 0x125fa8u: goto label_125fa8;
        case 0x125facu: goto label_125fac;
        case 0x125fb0u: goto label_125fb0;
        case 0x125fb4u: goto label_125fb4;
        case 0x125fb8u: goto label_125fb8;
        case 0x125fbcu: goto label_125fbc;
        case 0x125fc0u: goto label_125fc0;
        case 0x125fc4u: goto label_125fc4;
        case 0x125fc8u: goto label_125fc8;
        case 0x125fccu: goto label_125fcc;
        case 0x125fd0u: goto label_125fd0;
        case 0x125fd4u: goto label_125fd4;
        case 0x125fd8u: goto label_125fd8;
        case 0x125fdcu: goto label_125fdc;
        case 0x125fe0u: goto label_125fe0;
        case 0x125fe4u: goto label_125fe4;
        case 0x125fe8u: goto label_125fe8;
        case 0x125fecu: goto label_125fec;
        case 0x125ff0u: goto label_125ff0;
        case 0x125ff4u: goto label_125ff4;
        case 0x125ff8u: goto label_125ff8;
        case 0x125ffcu: goto label_125ffc;
        case 0x126000u: goto label_126000;
        case 0x126004u: goto label_126004;
        case 0x126008u: goto label_126008;
        case 0x12600cu: goto label_12600c;
        default: break;
    }

    ctx->pc = 0x125fa0u;

label_125fa0:
    // 0x125fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_125fa4:
    // 0x125fa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x125fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_125fa8:
    // 0x125fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125fac:
    // 0x125fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_125fb0:
    // 0x125fb0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x125fb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_125fb4:
    // 0x125fb4: 0x26020e30  addiu       $v0, $s0, 0xE30
    ctx->pc = 0x125fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3632));
label_125fb8:
    // 0x125fb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x125fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_125fbc:
    // 0x125fbc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x125fbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_125fc0:
    // 0x125fc0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x125fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_125fc4:
    // 0x125fc4: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_125fc8:
    // 0x125fc8: 0xae000e30  sw          $zero, 0xE30($s0)
    ctx->pc = 0x125fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 0));
label_125fcc:
    // 0x125fcc: 0x26050d24  addiu       $a1, $s0, 0xD24
    ctx->pc = 0x125fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3364));
label_125fd0:
    // 0x125fd0: 0xc06802e  jal         func_1A00B8
label_125fd4:
    if (ctx->pc == 0x125FD4u) {
        ctx->pc = 0x125FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FD0u;
        // 0x125fd4: 0xc60c0e30  lwc1        $f12, 0xE30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FD8u;
        goto label_125fd8;
    }
    ctx->pc = 0x125FD0u;
    SET_GPR_U32(ctx, 31, 0x125FD8u);
    ctx->pc = 0x125FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FD0u;
    // 0x125fd4: 0xc60c0e30  lwc1        $f12, 0xE30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x125FD0u, 0x125FD8u)) {
        return;
    }
    ctx->pc = 0x125FD8u;
label_125fd8:
    // 0x125fd8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x125fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_125fdc:
    // 0x125fdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x125fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_125fe0:
    // 0x125fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125fe4:
    // 0x125fe4: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x125fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_125fe8:
    // 0x125fe8: 0x8c620294  lw          $v0, 0x294($v1)
    ctx->pc = 0x125fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_125fec:
    // 0x125fec: 0x40f809  jalr        $v0
label_125ff0:
    if (ctx->pc == 0x125FF0u) {
        ctx->pc = 0x125FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FECu;
        // 0x125ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FF4u;
        goto label_125ff4;
    }
    ctx->pc = 0x125FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125FF4u);
        ctx->pc = 0x125FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FECu;
        // 0x125ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125FECu, 0x125FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125FF4u;
label_125ff4:
    // 0x125ff4: 0xc08992e  jal         func_2264B8
label_125ff8:
    if (ctx->pc == 0x125FF8u) {
        ctx->pc = 0x125FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FF4u;
        // 0x125ff8: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FFCu;
        goto label_125ffc;
    }
    ctx->pc = 0x125FF4u;
    SET_GPR_U32(ctx, 31, 0x125FFCu);
    ctx->pc = 0x125FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FF4u;
    // 0x125ff8: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x125FF4u, 0x125FFCu)) {
        return;
    }
    ctx->pc = 0x125FFCu;
label_125ffc:
    // 0x125ffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x125ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126000:
    // 0x126000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126004:
    // 0x126004: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x126004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_126008:
    // 0x126008: 0x3e00008  jr          $ra
label_12600c:
    if (ctx->pc == 0x12600Cu) {
        ctx->pc = 0x12600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126008u;
        // 0x12600c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126010u;
        goto label_fallthrough_0x126008;
    }
    ctx->pc = 0x126008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126008u;
        // 0x12600c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x126008:
    ctx->pc = 0x126010u;
}
