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

// Function: sub_001CB7C0
// Address: 0x1cb7c0 - 0x1cb918
void sub_001CB7C0_0x1cb7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB7C0_0x1cb7c0");
#endif

    switch (ctx->pc) {
        case 0x1cb7e8u: goto label_1cb7e8;
        case 0x1cb820u: goto label_1cb820;
        case 0x1cb8f4u: goto label_1cb8f4;
        case 0x1cb900u: goto label_1cb900;
        default: break;
    }

    ctx->pc = 0x1cb7c0u;

    // 0x1cb7c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb7c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb7c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cb7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cb7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb7d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cb7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7d8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1cb7d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cb7dc: 0x26230274  addiu       $v1, $s1, 0x274
    ctx->pc = 0x1cb7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 628));
    // 0x1cb7e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cb7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb7e4: 0x0  nop
    ctx->pc = 0x1cb7e4u;
    // NOP
label_1cb7e8:
    // 0x1cb7e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb7ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cb7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cb7f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cb7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1cb7f4: 0x0  nop
    ctx->pc = 0x1cb7f4u;
    // NOP
    // 0x1cb7f8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB7F8u;
    {
        const bool branch_taken_0x1cb7f8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1CB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F8u;
        // 0x1cb7fc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7f8) {
            ctx->pc = 0x1CB7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7e8;
        }
    }
    ctx->pc = 0x1CB800u;
    // 0x1cb800: 0x5a000040  blezl       $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1CB800u;
    {
        const bool branch_taken_0x1cb800 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x1cb800) {
            ctx->pc = 0x1CB804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB800u;
            // 0x1cb804: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB904u;
            goto label_1cb904;
        }
    }
    ctx->pc = 0x1CB808u;
    // 0x1cb808: 0x8e220290  lw          $v0, 0x290($s1)
    ctx->pc = 0x1cb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x1cb80c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB80Cu;
    {
        const bool branch_taken_0x1cb80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB80Cu;
        // 0x1cb810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb80c) {
            ctx->pc = 0x1CB820u;
            goto label_1cb820;
        }
    }
    ctx->pc = 0x1CB814u;
    // 0x1cb814: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1cb814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1cb818: 0xc05d3e8  jal         func_174FA0
    ctx->pc = 0x1CB818u;
    SET_GPR_U32(ctx, 31, 0x1CB820u);
    ctx->pc = 0x1CB81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB818u;
    // 0x1cb81c: 0xae220290  sw          $v0, 0x290($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174FA0u, 0x1CB818u, 0x1CB820u)) {
        return;
    }
    ctx->pc = 0x1CB820u;
label_1cb820:
    // 0x1cb820: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1cb820u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb824: 0x0  nop
    ctx->pc = 0x1cb824u;
    // NOP
    // 0x1cb828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb82c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1cb82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1cb830: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb834: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cb834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb838: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cb83c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cb83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb840: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1cb840u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x1cb844: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cb844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cb848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb84c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb850: 0x0  nop
    ctx->pc = 0x1cb850u;
    // NOP
    // 0x1cb854: 0x0  nop
    ctx->pc = 0x1cb854u;
    // NOP
    // 0x1cb858: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1cb858u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x1cb85c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1cb85cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1cb860: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x1cb860u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cb864: 0x46036036  c.le.s      $f12, $f3
    ctx->pc = 0x1cb864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb868: 0x0  nop
    ctx->pc = 0x1cb868u;
    // NOP
    // 0x1cb86c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB86Cu;
    {
        const bool branch_taken_0x1cb86c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB86Cu;
        // 0x1cb870: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb86c) {
            ctx->pc = 0x1CB888u;
            goto label_1cb888;
        }
    }
    ctx->pc = 0x1CB874u;
    // 0x1cb874: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x1cb874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb878: 0x0  nop
    ctx->pc = 0x1cb878u;
    // NOP
    // 0x1cb87c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB87Cu;
    {
        const bool branch_taken_0x1cb87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB87Cu;
        // 0x1cb880: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb87c) {
            ctx->pc = 0x1CB888u;
            goto label_1cb888;
        }
    }
    ctx->pc = 0x1CB884u;
    // 0x1cb884: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x1cb884u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
label_1cb888:
    // 0x1cb888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb88c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1cb88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1cb890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb894: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1cb894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1cb898: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1cb898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1cb89c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb8a0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1cb8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1cb8a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cb8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb8a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb8ac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1cb8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1cb8b0: 0x0  nop
    ctx->pc = 0x1cb8b0u;
    // NOP
    // 0x1cb8b4: 0x0  nop
    ctx->pc = 0x1cb8b4u;
    // NOP
    // 0x1cb8b8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1cb8b8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x1cb8bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb8c0: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x1cb8c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cb8c4: 0x46036036  c.le.s      $f12, $f3
    ctx->pc = 0x1cb8c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb8c8: 0x0  nop
    ctx->pc = 0x1cb8c8u;
    // NOP
    // 0x1cb8cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB8CCu;
    {
        const bool branch_taken_0x1cb8cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8CCu;
        // 0x1cb8d0: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8cc) {
            ctx->pc = 0x1CB8E8u;
            goto label_1cb8e8;
        }
    }
    ctx->pc = 0x1CB8D4u;
    // 0x1cb8d4: 0x460c2836  c.le.s      $f5, $f12
    ctx->pc = 0x1cb8d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb8d8: 0x0  nop
    ctx->pc = 0x1cb8d8u;
    // NOP
    // 0x1cb8dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB8DCu;
    {
        const bool branch_taken_0x1cb8dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8DCu;
        // 0x1cb8e0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8dc) {
            ctx->pc = 0x1CB8E8u;
            goto label_1cb8e8;
        }
    }
    ctx->pc = 0x1CB8E4u;
    // 0x1cb8e4: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1cb8e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1cb8e8:
    // 0x1cb8e8: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1cb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1cb8ec: 0xc05d406  jal         func_175018
    ctx->pc = 0x1CB8ECu;
    SET_GPR_U32(ctx, 31, 0x1CB8F4u);
    ctx->pc = 0x1CB8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8ECu;
    // 0x1cb8f0: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175018u, 0x1CB8ECu, 0x1CB8F4u)) {
        return;
    }
    ctx->pc = 0x1CB8F4u;
label_1cb8f4:
    // 0x1cb8f4: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1cb8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1cb8f8: 0xc05d410  jal         func_175040
    ctx->pc = 0x1CB8F8u;
    SET_GPR_U32(ctx, 31, 0x1CB900u);
    ctx->pc = 0x1CB8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8F8u;
    // 0x1cb8fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175040u, 0x1CB8F8u, 0x1CB900u)) {
        return;
    }
    ctx->pc = 0x1CB900u;
label_1cb900:
    // 0x1cb900: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cb900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb904:
    // 0x1cb904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb90c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1cb90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb910: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB910u;
        // 0x1cb914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB918u;
}
