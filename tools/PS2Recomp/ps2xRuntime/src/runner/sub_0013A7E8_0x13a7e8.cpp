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

// Function: sub_0013A7E8
// Address: 0x13a7e8 - 0x13a910
void sub_0013A7E8_0x13a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A7E8_0x13a7e8");
#endif

    switch (ctx->pc) {
        case 0x13a800u: goto label_13a800;
        case 0x13a820u: goto label_13a820;
        case 0x13a844u: goto label_13a844;
        case 0x13a87cu: goto label_13a87c;
        case 0x13a884u: goto label_13a884;
        default: break;
    }

    ctx->pc = 0x13a7e8u;

    // 0x13a7e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13a7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13a7ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13a7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13a7f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13a7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13a7f8: 0xc04a3fa  jal         func_128FE8
    ctx->pc = 0x13A7F8u;
    SET_GPR_U32(ctx, 31, 0x13A800u);
    ctx->pc = 0x13A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A7F8u;
    // 0x13a7fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128FE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x128FE8u, 0x13A7F8u, 0x13A800u)) {
        return;
    }
    ctx->pc = 0x13A800u;
label_13a800:
    // 0x13a800: 0x8e022d9c  lw          $v0, 0x2D9C($s0)
    ctx->pc = 0x13a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11676)));
    // 0x13a804: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A804u;
    {
        const bool branch_taken_0x13a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a804) {
            ctx->pc = 0x13A808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A804u;
            // 0x13a808: 0x8e022d98  lw          $v0, 0x2D98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A828u;
            goto label_13a828;
        }
    }
    ctx->pc = 0x13A80Cu;
    // 0x13a80c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x13a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x13a810: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13a810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a814: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13a814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a818: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x13A818u;
    SET_GPR_U32(ctx, 31, 0x13A820u);
    ctx->pc = 0x13A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A818u;
    // 0x13a81c: 0x8c650020  lw          $a1, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x13A818u, 0x13A820u)) {
        return;
    }
    ctx->pc = 0x13A820u;
label_13a820:
    // 0x13a820: 0xae022d9c  sw          $v0, 0x2D9C($s0)
    ctx->pc = 0x13a820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11676), GPR_U32(ctx, 2));
    // 0x13a824: 0x8e022d98  lw          $v0, 0x2D98($s0)
    ctx->pc = 0x13a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11672)));
label_13a828:
    // 0x13a828: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A828u;
    {
        const bool branch_taken_0x13a828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A828u;
        // 0x13a82c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a828) {
            ctx->pc = 0x13A84Cu;
            goto label_13a84c;
        }
    }
    ctx->pc = 0x13A830u;
    // 0x13a830: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x13a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x13a834: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a838: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13a838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a83c: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x13A83Cu;
    SET_GPR_U32(ctx, 31, 0x13A844u);
    ctx->pc = 0x13A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A83Cu;
    // 0x13a840: 0x8c650020  lw          $a1, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x13A83Cu, 0x13A844u)) {
        return;
    }
    ctx->pc = 0x13A844u;
label_13a844:
    // 0x13a844: 0xae022d98  sw          $v0, 0x2D98($s0)
    ctx->pc = 0x13a844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11672), GPR_U32(ctx, 2));
    // 0x13a848: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13a848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_13a84c:
    // 0x13a84c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x13a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x13a850: 0x8c4545f8  lw          $a1, 0x45F8($v0)
    ctx->pc = 0x13a850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17912)));
    // 0x13a854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a858: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x13a858u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x13a85c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x13a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x13a860: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A860u;
    {
        const bool branch_taken_0x13a860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A860u;
        // 0x13a864: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a860) {
            ctx->pc = 0x13A87Cu;
            goto label_13a87c;
        }
    }
    ctx->pc = 0x13A868u;
    // 0x13a868: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13a86c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A86Cu;
    {
        const bool branch_taken_0x13a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a86c) {
            ctx->pc = 0x13A87Cu;
            goto label_13a87c;
        }
    }
    ctx->pc = 0x13A874u;
    // 0x13a874: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x13A874u;
    SET_GPR_U32(ctx, 31, 0x13A87Cu);
    ctx->pc = 0x13A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A874u;
    // 0x13a878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x13A874u, 0x13A87Cu)) {
        return;
    }
    ctx->pc = 0x13A87Cu;
label_13a87c:
    // 0x13a87c: 0xc0c580c  jal         func_316030
    ctx->pc = 0x13A87Cu;
    SET_GPR_U32(ctx, 31, 0x13A884u);
    ctx->pc = 0x13A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A87Cu;
    // 0x13a880: 0x26111510  addiu       $s1, $s0, 0x1510 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x13A87Cu, 0x13A884u)) {
        return;
    }
    ctx->pc = 0x13A884u;
label_13a884:
    // 0x13a884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a888: 0x0  nop
    ctx->pc = 0x13a888u;
    // NOP
    // 0x13a88c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a890: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x13a890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x13a894: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13a894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13a898: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13a898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a89c: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x13a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x13a8a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13a8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13a8a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13a8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13a8a8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x13a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13a8ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13a8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13a8b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x13a8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13a8b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a8b8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x13a8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x13a8bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a8c0: 0x0  nop
    ctx->pc = 0x13a8c0u;
    // NOP
    // 0x13a8c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13A8C4u;
    {
        const bool branch_taken_0x13a8c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8C4u;
        // 0x13a8c8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8c4) {
            ctx->pc = 0x13A8D0u;
            goto label_13a8d0;
        }
    }
    ctx->pc = 0x13A8CCu;
    // 0x13a8cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13a8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13a8d0:
    // 0x13a8d0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x13a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a8d4: 0xc600285c  lwc1        $f0, 0x285C($s0)
    ctx->pc = 0x13a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8d8: 0x2602285c  addiu       $v0, $s0, 0x285C
    ctx->pc = 0x13a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10332));
    // 0x13a8dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13a8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a8e0: 0x0  nop
    ctx->pc = 0x13a8e0u;
    // NOP
    // 0x13a8e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13A8E4u;
    {
        const bool branch_taken_0x13a8e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8E4u;
        // 0x13a8e8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8e4) {
            ctx->pc = 0x13A8F0u;
            goto label_13a8f0;
        }
    }
    ctx->pc = 0x13A8ECu;
    // 0x13a8ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13a8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13a8f0:
    // 0x13a8f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13a8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a8f8: 0xe620134c  swc1        $f0, 0x134C($s1)
    ctx->pc = 0x13a8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4940), bits); }
    // 0x13a8fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13a8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a904: 0x3e00008  jr          $ra
    ctx->pc = 0x13A904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A904u;
        // 0x13a908: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A90Cu;
    // 0x13a90c: 0x0  nop
    ctx->pc = 0x13a90cu;
    // NOP
    ctx->pc = 0x13a910u;
}
