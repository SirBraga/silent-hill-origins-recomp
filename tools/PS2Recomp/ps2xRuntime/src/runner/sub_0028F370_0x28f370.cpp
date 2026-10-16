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

// Function: sub_0028F370
// Address: 0x28f370 - 0x28f428
void sub_0028F370_0x28f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F370_0x28f370");
#endif

    switch (ctx->pc) {
        case 0x28f398u: goto label_28f398;
        case 0x28f404u: goto label_28f404;
        default: break;
    }

    ctx->pc = 0x28f370u;

    // 0x28f370: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28f374: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x28f374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x28f378: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x28f37c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x28f380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f384: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28f384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f388: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28f38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f390: 0xc093546  jal         func_24D518
    ctx->pc = 0x28F390u;
    SET_GPR_U32(ctx, 31, 0x28F398u);
    ctx->pc = 0x28F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F390u;
    // 0x28f394: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x28F390u, 0x28F398u)) {
        return;
    }
    ctx->pc = 0x28F398u;
label_28f398:
    // 0x28f398: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x28f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x28f39c: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28F39Cu;
    {
        const bool branch_taken_0x28f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F39Cu;
        // 0x28f3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f39c) {
            ctx->pc = 0x28F408u;
            goto label_28f408;
        }
    }
    ctx->pc = 0x28F3A4u;
    // 0x28f3a4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x28f3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f3a8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x28f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f3ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28f3b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x28f3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x28f3b4: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x28f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f3b8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f3b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28f3bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28f3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28f3c0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x28f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f3c4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f3c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28f3c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x28f3c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28f3cc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f3ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28f3d0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28f3d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28f3d4: 0xa2050060  sb          $a1, 0x60($s0)
    ctx->pc = 0x28f3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x28f3d8: 0xa2020061  sb          $v0, 0x61($s0)
    ctx->pc = 0x28f3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x28f3dc: 0xa2030062  sb          $v1, 0x62($s0)
    ctx->pc = 0x28f3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x28f3e0: 0xa2040063  sb          $a0, 0x63($s0)
    ctx->pc = 0x28f3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 4));
    // 0x28f3e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f3ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F3ECu;
    {
        const bool branch_taken_0x28f3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3ECu;
        // 0x28f3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3ec) {
            ctx->pc = 0x28F408u;
            goto label_28f408;
        }
    }
    ctx->pc = 0x28F3F4u;
    // 0x28f3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28f3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3fc: 0xc0a3b62  jal         func_28ED88
    ctx->pc = 0x28F3FCu;
    SET_GPR_U32(ctx, 31, 0x28F404u);
    ctx->pc = 0x28F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F3FCu;
    // 0x28f400: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28ED88u, 0x28F3FCu, 0x28F404u)) {
        return;
    }
    ctx->pc = 0x28F404u;
label_28f404:
    // 0x28f404: 0x0  nop
    ctx->pc = 0x28f404u;
    // NOP
label_28f408:
    // 0x28f408: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28f408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f40c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28f40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f410: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28f410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f414: 0x3e00008  jr          $ra
    ctx->pc = 0x28F414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F414u;
        // 0x28f418: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F41Cu;
    // 0x28f41c: 0x0  nop
    ctx->pc = 0x28f41cu;
    // NOP
    // 0x28f420: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x28f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x28f424: 0x0  nop
    ctx->pc = 0x28f424u;
    // NOP
    ctx->pc = 0x28f428u;
}
