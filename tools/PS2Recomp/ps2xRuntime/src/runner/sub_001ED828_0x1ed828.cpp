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

// Function: sub_001ED828
// Address: 0x1ed828 - 0x1ed958
void sub_001ED828_0x1ed828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED828_0x1ed828");
#endif

    switch (ctx->pc) {
        case 0x1ed8d8u: goto label_1ed8d8;
        case 0x1ed8fcu: goto label_1ed8fc;
        case 0x1ed910u: goto label_1ed910;
        case 0x1ed924u: goto label_1ed924;
        default: break;
    }

    ctx->pc = 0x1ed828u;

    // 0x1ed828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed82c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ed82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ed830: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ed830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ed834: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x1ed834u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x1ed838: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1ed838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed83c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ed83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ed840: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ed840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ed844: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ed844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ed848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ed84c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED84Cu;
    {
        const bool branch_taken_0x1ed84c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED84Cu;
        // 0x1ed850: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed84c) {
            ctx->pc = 0x1ED870u;
            goto label_1ed870;
        }
    }
    ctx->pc = 0x1ED854u;
    // 0x1ed854: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ed854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ed858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed85c: 0x0  nop
    ctx->pc = 0x1ed85cu;
    // NOP
    // 0x1ed860: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1ed860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed864: 0x0  nop
    ctx->pc = 0x1ed864u;
    // NOP
    // 0x1ed868: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED868u;
    {
        const bool branch_taken_0x1ed868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed868) {
            ctx->pc = 0x1ED87Cu;
            goto label_1ed87c;
        }
    }
    ctx->pc = 0x1ED870u;
label_1ed870:
    // 0x1ed870: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ed870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1ed874: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ed874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ed878: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ed878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ed87c:
    // 0x1ed87c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed880: 0x0  nop
    ctx->pc = 0x1ed880u;
    // NOP
    // 0x1ed884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed888: 0x0  nop
    ctx->pc = 0x1ed888u;
    // NOP
    // 0x1ed88c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED88Cu;
    {
        const bool branch_taken_0x1ed88c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed88c) {
            ctx->pc = 0x1ED8B0u;
            goto label_1ed8b0;
        }
    }
    ctx->pc = 0x1ED894u;
    // 0x1ed894: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ed894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ed898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed89c: 0x0  nop
    ctx->pc = 0x1ed89cu;
    // NOP
    // 0x1ed8a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ed8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed8a4: 0x0  nop
    ctx->pc = 0x1ed8a4u;
    // NOP
    // 0x1ed8a8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED8A8u;
    {
        const bool branch_taken_0x1ed8a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed8a8) {
            ctx->pc = 0x1ED8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED8A8u;
            // 0x1ed8ac: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED8C0u;
            goto label_1ed8c0;
        }
    }
    ctx->pc = 0x1ED8B0u;
label_1ed8b0:
    // 0x1ed8b0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1ed8b4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ed8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ed8b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ed8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed8bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ed8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1ed8c0:
    // 0x1ed8c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ed8c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed8c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1ed8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ed8c8: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x1ed8c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ed8cc: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ED8CCu;
    {
        const bool branch_taken_0x1ed8cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1ED8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8CCu;
        // 0x1ed8d0: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8cc) {
            ctx->pc = 0x1ED938u;
            goto label_1ed938;
        }
    }
    ctx->pc = 0x1ED8D4u;
    // 0x1ed8d4: 0x0  nop
    ctx->pc = 0x1ed8d4u;
    // NOP
label_1ed8d8:
    // 0x1ed8d8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1ed8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ed8dc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ed8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed8e0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x1ed8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed8e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ed8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed8e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ed8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ed8ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED8ECu;
    {
        const bool branch_taken_0x1ed8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8ECu;
        // 0x1ed8f0: 0xe600012c  swc1        $f0, 0x12C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8ec) {
            ctx->pc = 0x1ED8FCu;
            goto label_1ed8fc;
        }
    }
    ctx->pc = 0x1ED8F4u;
    // 0x1ed8f4: 0xc07b1be  jal         func_1EC6F8
    ctx->pc = 0x1ED8F4u;
    SET_GPR_U32(ctx, 31, 0x1ED8FCu);
    ctx->pc = 0x1ED8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED8F4u;
    // 0x1ed8f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC6F8u, 0x1ED8F4u, 0x1ED8FCu)) {
        return;
    }
    ctx->pc = 0x1ED8FCu;
label_1ed8fc:
    // 0x1ed8fc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed900: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED900u;
    {
        const bool branch_taken_0x1ed900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed900) {
            ctx->pc = 0x1ED904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED900u;
            // 0x1ed904: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED914u;
            goto label_1ed914;
        }
    }
    ctx->pc = 0x1ED908u;
    // 0x1ed908: 0xc07b51e  jal         func_1ED478
    ctx->pc = 0x1ED908u;
    SET_GPR_U32(ctx, 31, 0x1ED910u);
    ctx->pc = 0x1ED90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED908u;
    // 0x1ed90c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED478u, 0x1ED908u, 0x1ED910u)) {
        return;
    }
    ctx->pc = 0x1ED910u;
label_1ed910:
    // 0x1ed910: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ed910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ed914:
    // 0x1ed914: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED914u;
    {
        const bool branch_taken_0x1ed914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed914) {
            ctx->pc = 0x1ED918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED914u;
            // 0x1ed918: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED928u;
            goto label_1ed928;
        }
    }
    ctx->pc = 0x1ED91Cu;
    // 0x1ed91c: 0xc07b51e  jal         func_1ED478
    ctx->pc = 0x1ED91Cu;
    SET_GPR_U32(ctx, 31, 0x1ED924u);
    ctx->pc = 0x1ED920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED91Cu;
    // 0x1ed920: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED478u, 0x1ED91Cu, 0x1ED924u)) {
        return;
    }
    ctx->pc = 0x1ED924u;
label_1ed924:
    // 0x1ed924: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ed924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1ed928:
    // 0x1ed928: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ed92c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ed92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ed930: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1ED930u;
    {
        const bool branch_taken_0x1ed930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED930u;
        // 0x1ed934: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed930) {
            ctx->pc = 0x1ED8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed8d8;
        }
    }
    ctx->pc = 0x1ED938u;
label_1ed938:
    // 0x1ed938: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ed938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed93c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ed93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed940: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ed940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed944: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ed944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed94c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED94Cu;
        // 0x1ed950: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED954u;
    // 0x1ed954: 0x0  nop
    ctx->pc = 0x1ed954u;
    // NOP
    ctx->pc = 0x1ed958u;
}
