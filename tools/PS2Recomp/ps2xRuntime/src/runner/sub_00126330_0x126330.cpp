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

// Function: sub_00126330
// Address: 0x126330 - 0x126438
void sub_00126330_0x126330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126330_0x126330");
#endif

    switch (ctx->pc) {
        case 0x12635cu: goto label_12635c;
        case 0x126374u: goto label_126374;
        case 0x12638cu: goto label_12638c;
        case 0x1263b0u: goto label_1263b0;
        case 0x126424u: goto label_126424;
        default: break;
    }

    ctx->pc = 0x126330u;

    // 0x126330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126338: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x126338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12633c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12633cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x126340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126348: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x126348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12634c: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x12634Cu;
    {
        const bool branch_taken_0x12634c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12634Cu;
        // 0x126350: 0xae220c80  sw          $v0, 0xC80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12634c) {
            ctx->pc = 0x126424u;
            goto label_126424;
        }
    }
    ctx->pc = 0x126354u;
    // 0x126354: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x126354u;
    SET_GPR_U32(ctx, 31, 0x12635Cu);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x126354u, 0x12635Cu)) {
        return;
    }
    ctx->pc = 0x12635Cu;
label_12635c:
    // 0x12635c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126364: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x126364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126368: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x126368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12636c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x12636Cu;
    SET_GPR_U32(ctx, 31, 0x126374u);
    ctx->pc = 0x126370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12636Cu;
    // 0x126370: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12636Cu, 0x126374u)) {
        return;
    }
    ctx->pc = 0x126374u;
label_126374:
    // 0x126374: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x126374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12637c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126380: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x126380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x126384: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x126384u;
    SET_GPR_U32(ctx, 31, 0x12638Cu);
    ctx->pc = 0x126388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126384u;
    // 0x126388: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x126384u, 0x12638Cu)) {
        return;
    }
    ctx->pc = 0x12638Cu;
label_12638c:
    // 0x12638c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126390: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x126390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126394: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x126394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x126398: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x126398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12639c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1263a0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1263a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1263a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263a8: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1263A8u;
    SET_GPR_U32(ctx, 31, 0x1263B0u);
    ctx->pc = 0x1263ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1263A8u;
    // 0x1263ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1263A8u, 0x1263B0u)) {
        return;
    }
    ctx->pc = 0x1263B0u;
label_1263b0:
    // 0x1263b0: 0x0  nop
    ctx->pc = 0x1263b0u;
    // NOP
    // 0x1263b4: 0x0  nop
    ctx->pc = 0x1263b4u;
    // NOP
    // 0x1263b8: 0x46000044  c1          0x44
    ctx->pc = 0x1263b8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1263bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1263bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1263c0: 0x0  nop
    ctx->pc = 0x1263c0u;
    // NOP
    // 0x1263c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1263c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1263c8: 0x0  nop
    ctx->pc = 0x1263c8u;
    // NOP
    // 0x1263cc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1263CCu;
    {
        const bool branch_taken_0x1263cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1263D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263CCu;
        // 0x1263d0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263cc) {
            ctx->pc = 0x1263F0u;
            goto label_1263f0;
        }
    }
    ctx->pc = 0x1263D4u;
    // 0x1263d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1263d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1263d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1263d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1263dc: 0x0  nop
    ctx->pc = 0x1263dcu;
    // NOP
    // 0x1263e0: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1263e0u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1263e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1263E4u;
    {
        const bool branch_taken_0x1263e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263E4u;
        // 0x1263e8: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263e4) {
            ctx->pc = 0x1263F8u;
            goto label_1263f8;
        }
    }
    ctx->pc = 0x1263ECu;
    // 0x1263ec: 0x0  nop
    ctx->pc = 0x1263ecu;
    // NOP
label_1263f0:
    // 0x1263f0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1263f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1263f4: 0x0  nop
    ctx->pc = 0x1263f4u;
    // NOP
label_1263f8:
    // 0x1263f8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1263f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1263fc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1263fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126400: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x126400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x126404: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x126404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x126408: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x126408u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x12640c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12640cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x126410: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x126410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x126414: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x126414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x126418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12641c: 0xc049a14  jal         func_126850
    ctx->pc = 0x12641Cu;
    SET_GPR_U32(ctx, 31, 0x126424u);
    ctx->pc = 0x126420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12641Cu;
    // 0x126420: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126850u, 0x12641Cu, 0x126424u)) {
        return;
    }
    ctx->pc = 0x126424u;
label_126424:
    // 0x126424: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x126424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126428: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x126428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12642c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12642cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126430: 0x3e00008  jr          $ra
    ctx->pc = 0x126430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126430u;
        // 0x126434: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126438u;
}
