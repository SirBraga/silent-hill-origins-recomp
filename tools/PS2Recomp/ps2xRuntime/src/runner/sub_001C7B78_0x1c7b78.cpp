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

// Function: sub_001C7B78
// Address: 0x1c7b78 - 0x1c7bf0
void sub_001C7B78_0x1c7b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7B78_0x1c7b78");
#endif

    switch (ctx->pc) {
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7bd8u: goto label_1c7bd8;
        default: break;
    }

    ctx->pc = 0x1c7b78u;

    // 0x1c7b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7b7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c7b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c7b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7b8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c7b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b90: 0xc071f14  jal         func_1C7C50
    ctx->pc = 0x1C7B90u;
    SET_GPR_U32(ctx, 31, 0x1C7B98u);
    ctx->pc = 0x1C7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B90u;
    // 0x1c7b94: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C7C50u, 0x1C7B90u, 0x1C7B98u)) {
        return;
    }
    ctx->pc = 0x1C7B98u;
label_1c7b98:
    // 0x1c7b98: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x1c7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x1c7b9c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C7B9Cu;
    {
        const bool branch_taken_0x1c7b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b9c) {
            ctx->pc = 0x1C7BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7B9Cu;
            // 0x1c7ba0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7BE0u;
            goto label_1c7be0;
        }
    }
    ctx->pc = 0x1C7BA4u;
    // 0x1c7ba4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1c7ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7ba8: 0xc60102a0  lwc1        $f1, 0x2A0($s0)
    ctx->pc = 0x1c7ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7bac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c7bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1c7bb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c7bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7bb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c7bb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c7bb8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1c7bb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7bbc: 0x0  nop
    ctx->pc = 0x1c7bbcu;
    // NOP
    // 0x1c7bc0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7BC0u;
    {
        const bool branch_taken_0x1c7bc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BC0u;
        // 0x1c7bc4: 0xe60102a0  swc1        $f1, 0x2A0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bc0) {
            ctx->pc = 0x1C7BDCu;
            goto label_1c7bdc;
        }
    }
    ctx->pc = 0x1C7BC8u;
    // 0x1c7bc8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c7bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c7bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7bd0: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1C7BD0u;
    SET_GPR_U32(ctx, 31, 0x1C7BD8u);
    ctx->pc = 0x1C7BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BD0u;
    // 0x1c7bd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1C7BD0u, 0x1C7BD8u)) {
        return;
    }
    ctx->pc = 0x1C7BD8u;
label_1c7bd8:
    // 0x1c7bd8: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1c7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
label_1c7bdc:
    // 0x1c7bdc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c7bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7be0:
    // 0x1c7be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BE8u;
        // 0x1c7bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7BF0u;
}
