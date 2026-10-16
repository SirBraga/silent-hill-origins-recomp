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

// Function: sub_002AA760
// Address: 0x2aa760 - 0x2aa858
void sub_002AA760_0x2aa760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA760_0x2aa760");
#endif

    switch (ctx->pc) {
        case 0x2aa7fcu: goto label_2aa7fc;
        case 0x2aa808u: goto label_2aa808;
        case 0x2aa83cu: goto label_2aa83c;
        default: break;
    }

    ctx->pc = 0x2aa760u;

    // 0x2aa760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa764: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2aa764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa768: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aa768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aa76c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2aa76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa774: 0xc78380c0  lwc1        $f3, -0x7F40($gp)
    ctx->pc = 0x2aa774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa778: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2aa778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa77c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aa77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa780: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x2aa780u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2aa784: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2aa784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa788: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2aa788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2aa78c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2aa78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2aa790: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aa790u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aa794: 0x46001140  add.s       $f5, $f2, $f0
    ctx->pc = 0x2aa794u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2aa798: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x2aa798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa79c: 0x0  nop
    ctx->pc = 0x2aa79cu;
    // NOP
    // 0x2aa7a0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2AA7A0u;
    {
        const bool branch_taken_0x2aa7a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7A0u;
        // 0x2aa7a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7a0) {
            ctx->pc = 0x2AA7E0u;
            goto label_2aa7e0;
        }
    }
    ctx->pc = 0x2AA7A8u;
    // 0x2aa7a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa7ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa7b0: 0x46050016  rsqrt.s     $f0, $f0, $f5
    ctx->pc = 0x2aa7b0u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[0], ctx->f[5]);
    // 0x2aa7b4: 0x46002082  mul.s       $f2, $f4, $f0
    ctx->pc = 0x2aa7b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2aa7b8: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2aa7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2aa7bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aa7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa7c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa7c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa7c4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2aa7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2aa7c8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2aa7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa7cc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2aa7ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2aa7d0: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2aa7d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aa7d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2AA7D4u;
    {
        const bool branch_taken_0x2aa7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7D4u;
        // 0x2aa7d8: 0x46050002  mul.s       $f0, $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7d4) {
            ctx->pc = 0x2AA844u;
            goto label_2aa844;
        }
    }
    ctx->pc = 0x2AA7DCu;
    // 0x2aa7dc: 0x0  nop
    ctx->pc = 0x2aa7dcu;
    // NOP
label_2aa7e0:
    // 0x2aa7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aa7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa7e4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2aa7e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa7e8: 0x0  nop
    ctx->pc = 0x2aa7e8u;
    // NOP
    // 0x2aa7ec: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA7ECu;
    {
        const bool branch_taken_0x2aa7ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aa7ec) {
            ctx->pc = 0x2AA7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA7ECu;
            // 0x2aa7f0: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA810u;
            goto label_2aa810;
        }
    }
    ctx->pc = 0x2AA7F4u;
    // 0x2aa7f4: 0xc0ad22e  jal         func_2B48B8
    ctx->pc = 0x2AA7F4u;
    SET_GPR_U32(ctx, 31, 0x2AA7FCu);
    ctx->pc = 0x2AA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7F4u;
    // 0x2aa7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B48B8u, 0x2AA7F4u, 0x2AA7FCu)) {
        return;
    }
    ctx->pc = 0x2AA7FCu;
label_2aa7fc:
    // 0x2aa7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa800: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2AA800u;
    SET_GPR_U32(ctx, 31, 0x2AA808u);
    ctx->pc = 0x2AA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA800u;
    // 0x2aa804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2AA800u, 0x2AA808u)) {
        return;
    }
    ctx->pc = 0x2AA808u;
label_2aa808:
    // 0x2aa808: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AA808u;
    {
        const bool branch_taken_0x2aa808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa808) {
            ctx->pc = 0x2AA840u;
            goto label_2aa840;
        }
    }
    ctx->pc = 0x2AA810u;
label_2aa810:
    // 0x2aa810: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2aa810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aa814: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2aa814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2aa818: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2aa818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa81c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2aa81cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2aa820: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2aa820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2aa824: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2aa824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa828: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2aa828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aa82c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2aa82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aa830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa834: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2AA834u;
    SET_GPR_U32(ctx, 31, 0x2AA83Cu);
    ctx->pc = 0x2AA838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA834u;
    // 0x2aa838: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2AA834u, 0x2AA83Cu)) {
        return;
    }
    ctx->pc = 0x2AA83Cu;
label_2aa83c:
    // 0x2aa83c: 0x0  nop
    ctx->pc = 0x2aa83cu;
    // NOP
label_2aa840:
    // 0x2aa840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aa840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aa844:
    // 0x2aa844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2aa844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA84Cu;
        // 0x2aa850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA854u;
    // 0x2aa854: 0x0  nop
    ctx->pc = 0x2aa854u;
    // NOP
    ctx->pc = 0x2aa858u;
}
