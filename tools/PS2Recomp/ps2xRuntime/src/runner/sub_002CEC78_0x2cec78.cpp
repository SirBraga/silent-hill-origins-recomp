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

// Function: sub_002CEC78
// Address: 0x2cec78 - 0x2cecf8
void sub_002CEC78_0x2cec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEC78_0x2cec78");
#endif

    switch (ctx->pc) {
        case 0x2cecb0u: goto label_2cecb0;
        case 0x2cecd8u: goto label_2cecd8;
        default: break;
    }

    ctx->pc = 0x2cec78u;

    // 0x2cec78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cec78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cec7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cec80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cec84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cec84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cec88: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2cec88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2cec8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cec8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cec90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cec94: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2cec94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2cec98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cec9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cec9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceca0: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x2ceca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2ceca4: 0x2607010c  addiu       $a3, $s0, 0x10C
    ctx->pc = 0x2ceca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x2ceca8: 0xc0b3a42  jal         func_2CE908
    ctx->pc = 0x2CECA8u;
    SET_GPR_U32(ctx, 31, 0x2CECB0u);
    ctx->pc = 0x2CECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CECA8u;
    // 0x2cecac: 0x26080110  addiu       $t0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CE908u, 0x2CECA8u, 0x2CECB0u)) {
        return;
    }
    ctx->pc = 0x2CECB0u;
label_2cecb0:
    // 0x2cecb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CECB0u;
    {
        const bool branch_taken_0x2cecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECB0u;
        // 0x2cecb4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cecb0) {
            ctx->pc = 0x2CECDCu;
            goto label_2cecdc;
        }
    }
    ctx->pc = 0x2CECB8u;
    // 0x2cecb8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x2cecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cecbc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2cecbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cecc0: 0x0  nop
    ctx->pc = 0x2cecc0u;
    // NOP
    // 0x2cecc4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CECC4u;
    {
        const bool branch_taken_0x2cecc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECC4u;
        // 0x2cecc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cecc4) {
            ctx->pc = 0x2CECDCu;
            goto label_2cecdc;
        }
    }
    ctx->pc = 0x2CECCCu;
    // 0x2ceccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cecd0: 0xc0b1a32  jal         func_2C68C8
    ctx->pc = 0x2CECD0u;
    SET_GPR_U32(ctx, 31, 0x2CECD8u);
    ctx->pc = 0x2CECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CECD0u;
    // 0x2cecd4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C68C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C68C8u, 0x2CECD0u, 0x2CECD8u)) {
        return;
    }
    ctx->pc = 0x2CECD8u;
label_2cecd8:
    // 0x2cecd8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2cecd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cecdc:
    // 0x2cecdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cecdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cece0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cece0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cece4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cece4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cece8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cece8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cecec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2cececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cecf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECF0u;
        // 0x2cecf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CECF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CECF8u;
}
