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

// Function: sub_002B4740
// Address: 0x2b4740 - 0x2b47d0
void sub_002B4740_0x2b4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4740_0x2b4740");
#endif

    switch (ctx->pc) {
        case 0x2b4768u: goto label_2b4768;
        case 0x2b4788u: goto label_2b4788;
        case 0x2b47a4u: goto label_2b47a4;
        default: break;
    }

    ctx->pc = 0x2b4740u;

    // 0x2b4740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b4744: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b4744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b4748: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b4748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b474c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b474cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4750: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4750u;
    {
        const bool branch_taken_0x2b4750 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4750u;
        // 0x2b4754: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4750) {
            ctx->pc = 0x2B4760u;
            goto label_2b4760;
        }
    }
    ctx->pc = 0x2B4758u;
    // 0x2b4758: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B4758u;
    {
        const bool branch_taken_0x2b4758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4758u;
        // 0x2b475c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4758) {
            ctx->pc = 0x2B47BCu;
            goto label_2b47bc;
        }
    }
    ctx->pc = 0x2B4760u;
label_2b4760:
    // 0x2b4760: 0xc092d2e  jal         func_24B4B8
    ctx->pc = 0x2B4760u;
    SET_GPR_U32(ctx, 31, 0x2B4768u);
    ctx->pc = 0x2B4764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4760u;
    // 0x2b4764: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B4B8u, 0x2B4760u, 0x2B4768u)) {
        return;
    }
    ctx->pc = 0x2B4768u;
label_2b4768:
    // 0x2b4768: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4768u;
    {
        const bool branch_taken_0x2b4768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4768u;
        // 0x2b476c: 0x3222000f  andi        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4768) {
            ctx->pc = 0x2B477Cu;
            goto label_2b477c;
        }
    }
    ctx->pc = 0x2B4770u;
    // 0x2b4770: 0xc7808134  lwc1        $f0, -0x7ECC($gp)
    ctx->pc = 0x2b4770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4774: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b4774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b4778: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2b4778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2b477c:
    // 0x2b477c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4780: 0xc092c88  jal         func_24B220
    ctx->pc = 0x2B4780u;
    SET_GPR_U32(ctx, 31, 0x2B4788u);
    ctx->pc = 0x2B4784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4780u;
    // 0x2b4784: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B220u, 0x2B4780u, 0x2B4788u)) {
        return;
    }
    ctx->pc = 0x2B4788u;
label_2b4788:
    // 0x2b4788: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2b4788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b478c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b478cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4790: 0x0  nop
    ctx->pc = 0x2b4790u;
    // NOP
    // 0x2b4794: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B4794u;
    {
        const bool branch_taken_0x2b4794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4794) {
            ctx->pc = 0x2B4798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4794u;
            // 0x2b4798: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B479Cu;
            goto label_2b479c;
        }
    }
    ctx->pc = 0x2B479Cu;
label_2b479c:
    // 0x2b479c: 0xc092c62  jal         func_24B188
    ctx->pc = 0x2B479Cu;
    SET_GPR_U32(ctx, 31, 0x2B47A4u);
    ctx->pc = 0x2B47A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B479Cu;
    // 0x2b47a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B188u, 0x2B479Cu, 0x2B47A4u)) {
        return;
    }
    ctx->pc = 0x2B47A4u;
label_2b47a4:
    // 0x2b47a4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2b47a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b47a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b47a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b47ac: 0x0  nop
    ctx->pc = 0x2b47acu;
    // NOP
    // 0x2b47b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B47B0u;
    {
        const bool branch_taken_0x2b47b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b47b0) {
            ctx->pc = 0x2B47B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B47B0u;
            // 0x2b47b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B47B8u;
            goto label_2b47b8;
        }
    }
    ctx->pc = 0x2B47B8u;
label_2b47b8:
    // 0x2b47b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b47b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b47bc:
    // 0x2b47bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b47bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b47c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b47c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b47c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b47c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b47c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B47C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47C8u;
        // 0x2b47cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B47C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B47D0u;
}
