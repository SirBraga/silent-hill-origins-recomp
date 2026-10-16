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

// Function: sub_001C6F50
// Address: 0x1c6f50 - 0x1c6fd8
void sub_001C6F50_0x1c6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6F50_0x1c6f50");
#endif

    switch (ctx->pc) {
        case 0x1c6f6cu: goto label_1c6f6c;
        case 0x1c6fb0u: goto label_1c6fb0;
        case 0x1c6fc0u: goto label_1c6fc0;
        default: break;
    }

    ctx->pc = 0x1c6f50u;

    // 0x1c6f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6f54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c6f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c6f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6f64: 0xc06bbf8  jal         func_1AEFE0
    ctx->pc = 0x1C6F64u;
    SET_GPR_U32(ctx, 31, 0x1C6F6Cu);
    ctx->pc = 0x1C6F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F64u;
    // 0x1c6f68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1C6F64u, 0x1C6F6Cu)) {
        return;
    }
    ctx->pc = 0x1C6F6Cu;
label_1c6f6c:
    // 0x1c6f6c: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x1c6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x1c6f70: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6F70u;
    {
        const bool branch_taken_0x1c6f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f70) {
            ctx->pc = 0x1C6F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6F70u;
            // 0x1c6f74: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6FB8u;
            goto label_1c6fb8;
        }
    }
    ctx->pc = 0x1C6F78u;
    // 0x1c6f78: 0xc6000298  lwc1        $f0, 0x298($s0)
    ctx->pc = 0x1c6f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6f7c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1c6f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6f80: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c6f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c6f84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6f88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6f8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6f90: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1c6f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6f94: 0x0  nop
    ctx->pc = 0x1c6f94u;
    // NOP
    // 0x1c6f98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6F98u;
    {
        const bool branch_taken_0x1c6f98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F98u;
        // 0x1c6f9c: 0xe6000298  swc1        $f0, 0x298($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f98) {
            ctx->pc = 0x1C6FB4u;
            goto label_1c6fb4;
        }
    }
    ctx->pc = 0x1C6FA0u;
    // 0x1c6fa0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c6fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c6fa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6fa8: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1C6FA8u;
    SET_GPR_U32(ctx, 31, 0x1C6FB0u);
    ctx->pc = 0x1C6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FA8u;
    // 0x1c6fac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1C6FA8u, 0x1C6FB0u)) {
        return;
    }
    ctx->pc = 0x1C6FB0u;
label_1c6fb0:
    // 0x1c6fb0: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1c6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
label_1c6fb4:
    // 0x1c6fb4: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c6fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6fb8:
    // 0x1c6fb8: 0xc071ae2  jal         func_1C6B88
    ctx->pc = 0x1C6FB8u;
    SET_GPR_U32(ctx, 31, 0x1C6FC0u);
    ctx->pc = 0x1C6FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FB8u;
    // 0x1c6fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6B88u, 0x1C6FB8u, 0x1C6FC0u)) {
        return;
    }
    ctx->pc = 0x1C6FC0u;
label_1c6fc0:
    // 0x1c6fc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c6fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6fc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FCCu;
        // 0x1c6fd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6FD4u;
    // 0x1c6fd4: 0x0  nop
    ctx->pc = 0x1c6fd4u;
    // NOP
    ctx->pc = 0x1c6fd8u;
}
