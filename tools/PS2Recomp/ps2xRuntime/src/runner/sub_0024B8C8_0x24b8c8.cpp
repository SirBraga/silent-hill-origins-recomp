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

// Function: sub_0024B8C8
// Address: 0x24b8c8 - 0x24b9f0
void sub_0024B8C8_0x24b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B8C8_0x24b8c8");
#endif

    switch (ctx->pc) {
        case 0x24b980u: goto label_24b980;
        case 0x24b988u: goto label_24b988;
        case 0x24b990u: goto label_24b990;
        case 0x24b99cu: goto label_24b99c;
        case 0x24b9a4u: goto label_24b9a4;
        case 0x24b9acu: goto label_24b9ac;
        case 0x24b9ccu: goto label_24b9cc;
        default: break;
    }

    ctx->pc = 0x24b8c8u;

    // 0x24b8c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24b8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24b8cc: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x24b8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x24b8d0: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x24b8d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x24b8d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8d8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x24b8d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24b8dc: 0x46006542  mul.s       $f21, $f12, $f0
    ctx->pc = 0x24b8dcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x24b8e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24b8e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24b8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24b8e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b8f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24b8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8f4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x24b8f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24b8f8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b8fc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24b8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b900: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24b900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24b904: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24b904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b908: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24b908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24b90c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24b90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24b910: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24b910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24b914: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24b914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b918: 0x46010044  c1          0x10044
    ctx->pc = 0x24b918u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x24b91c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24b91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b920: 0x0  nop
    ctx->pc = 0x24b920u;
    // NOP
    // 0x24b924: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24b924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b928: 0x0  nop
    ctx->pc = 0x24b928u;
    // NOP
    // 0x24b92c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x24B92Cu;
    {
        const bool branch_taken_0x24b92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B92Cu;
        // 0x24b930: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b92c) {
            ctx->pc = 0x24B950u;
            goto label_24b950;
        }
    }
    ctx->pc = 0x24B934u;
    // 0x24b934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b93c: 0x0  nop
    ctx->pc = 0x24b93cu;
    // NOP
    // 0x24b940: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x24b940u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x24b944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B944u;
    {
        const bool branch_taken_0x24b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B944u;
        // 0x24b948: 0xc4a00008  lwc1        $f0, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b944) {
            ctx->pc = 0x24B958u;
            goto label_24b958;
        }
    }
    ctx->pc = 0x24B94Cu;
    // 0x24b94c: 0x0  nop
    ctx->pc = 0x24b94cu;
    // NOP
label_24b950:
    // 0x24b950: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24b950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b954: 0x0  nop
    ctx->pc = 0x24b954u;
    // NOP
label_24b958:
    // 0x24b958: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b95c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b960: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24b960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24b964: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x24b964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24b968: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x24b968u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x24b96c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x24b96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24b970: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24b970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24b974: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x24b974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24b978: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x24B978u;
    SET_GPR_U32(ctx, 31, 0x24B980u);
    ctx->pc = 0x24B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B978u;
    // 0x24b97c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x24B978u, 0x24B980u)) {
        return;
    }
    ctx->pc = 0x24B980u;
label_24b980:
    // 0x24b980: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x24B980u;
    SET_GPR_U32(ctx, 31, 0x24B988u);
    ctx->pc = 0x24B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B980u;
    // 0x24b984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26BF28u, 0x24B980u, 0x24B988u)) {
        return;
    }
    ctx->pc = 0x24B988u;
label_24b988:
    // 0x24b988: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x24B988u;
    SET_GPR_U32(ctx, 31, 0x24B990u);
    ctx->pc = 0x24B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B988u;
    // 0x24b98c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x24B988u, 0x24B990u)) {
        return;
    }
    ctx->pc = 0x24B990u;
label_24b990:
    // 0x24b990: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x24b990u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x24b994: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x24B994u;
    SET_GPR_U32(ctx, 31, 0x24B99Cu);
    ctx->pc = 0x24B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B994u;
    // 0x24b998: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x24B994u, 0x24B99Cu)) {
        return;
    }
    ctx->pc = 0x24B99Cu;
label_24b99c:
    // 0x24b99c: 0xc09af88  jal         func_26BE20
    ctx->pc = 0x24B99Cu;
    SET_GPR_U32(ctx, 31, 0x24B9A4u);
    ctx->pc = 0x24B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B99Cu;
    // 0x24b9a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BE20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26BE20u, 0x24B99Cu, 0x24B9A4u)) {
        return;
    }
    ctx->pc = 0x24B9A4u;
label_24b9a4:
    // 0x24b9a4: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x24B9A4u;
    SET_GPR_U32(ctx, 31, 0x24B9ACu);
    ctx->pc = 0x24B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9A4u;
    // 0x24b9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x24B9A4u, 0x24B9ACu)) {
        return;
    }
    ctx->pc = 0x24B9ACu;
label_24b9ac:
    // 0x24b9ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b9b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24b9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b9b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x24b9b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x24b9b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9c0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x24b9c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x24b9c4: 0xc092dc4  jal         func_24B710
    ctx->pc = 0x24B9C4u;
    SET_GPR_U32(ctx, 31, 0x24B9CCu);
    ctx->pc = 0x24B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9C4u;
    // 0x24b9c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B710u, 0x24B9C4u, 0x24B9CCu)) {
        return;
    }
    ctx->pc = 0x24B9CCu;
label_24b9cc:
    // 0x24b9cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24b9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24b9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b9d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24b9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b9d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b9dc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x24b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24b9e0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x24b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24b9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9E4u;
        // 0x24b9e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B9ECu;
    // 0x24b9ec: 0x0  nop
    ctx->pc = 0x24b9ecu;
    // NOP
    ctx->pc = 0x24b9f0u;
}
