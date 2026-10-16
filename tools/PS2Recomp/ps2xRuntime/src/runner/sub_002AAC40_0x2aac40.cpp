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

// Function: sub_002AAC40
// Address: 0x2aac40 - 0x2aad70
void sub_002AAC40_0x2aac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAC40_0x2aac40");
#endif

    switch (ctx->pc) {
        case 0x2aac70u: goto label_2aac70;
        default: break;
    }

    ctx->pc = 0x2aac40u;

    // 0x2aac40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aac44: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2aac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2aac48: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2aac48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac4c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2aac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2aac50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2aac50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2aac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2aac58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aac58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2aac5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aac64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aac64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac68: 0xc0aa7e0  jal         func_2A9F80
    ctx->pc = 0x2AAC68u;
    SET_GPR_U32(ctx, 31, 0x2AAC70u);
    ctx->pc = 0x2AAC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC68u;
    // 0x2aac6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9F80u, 0x2AAC68u, 0x2AAC70u)) {
        return;
    }
    ctx->pc = 0x2AAC70u;
label_2aac70:
    // 0x2aac70: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2AAC70u;
    {
        const bool branch_taken_0x2aac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC70u;
        // 0x2aac74: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac70) {
            ctx->pc = 0x2AAD54u;
            goto label_2aad54;
        }
    }
    ctx->pc = 0x2AAC78u;
    // 0x2aac78: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2aac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aac7c: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x2aac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2aac80: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x2aac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2aac84: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x2aac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2aac88: 0x460c39c1  sub.s       $f7, $f7, $f12
    ctx->pc = 0x2aac88u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x2aac8c: 0xc7a90008  lwc1        $f9, 0x8($sp)
    ctx->pc = 0x2aac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2aac90: 0x460d4201  sub.s       $f8, $f8, $f13
    ctx->pc = 0x2aac90u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[13]);
    // 0x2aac94: 0xc78080c4  lwc1        $f0, -0x7F3C($gp)
    ctx->pc = 0x2aac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aac98: 0x460e4a41  sub.s       $f9, $f9, $f14
    ctx->pc = 0x2aac98u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[14]);
    // 0x2aac9c: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x2aac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaca0: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2aaca0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2aaca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aaca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aaca8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2aaca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2aacac: 0x46004042  mul.s       $f1, $f8, $f0
    ctx->pc = 0x2aacacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2aacb0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2aacb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2aacb4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2aacb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2aacb8: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x2aacb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2aacbc: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2aacbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2aacc0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2aacc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2aacc4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2aacc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2aacc8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2aacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2aaccc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aacccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aacd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aacd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aacd4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2aacd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2aacd8: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x2aacd8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2aacdc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2aacdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2aace0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2aace0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2aace4: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2aace4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2aace8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2aace8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2aacec: 0x46000182  mul.s       $f6, $f0, $f0
    ctx->pc = 0x2aacecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2aacf0: 0xc78a80c8  lwc1        $f10, -0x7F38($gp)
    ctx->pc = 0x2aacf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2aacf4: 0x460b4a42  mul.s       $f9, $f9, $f11
    ctx->pc = 0x2aacf4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x2aacf8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2aacf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2aacfc: 0x460228c0  add.s       $f3, $f5, $f2
    ctx->pc = 0x2aacfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2aad00: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2aad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2aad04: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x2aad04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2aad08: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2aad08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2aad0c: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x2aad0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2aad10: 0x460b39c2  mul.s       $f7, $f7, $f11
    ctx->pc = 0x2aad10u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x2aad14: 0x460b4202  mul.s       $f8, $f8, $f11
    ctx->pc = 0x2aad14u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x2aad18: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x2aad18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x2aad1c: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2aad1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2aad20: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x2aad20u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2aad24: 0x46076300  add.s       $f12, $f12, $f7
    ctx->pc = 0x2aad24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[7]);
    // 0x2aad28: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2aad28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aad2c: 0x46086b40  add.s       $f13, $f13, $f8
    ctx->pc = 0x2aad2cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[8]);
    // 0x2aad30: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2aad30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2aad34: 0x46097380  add.s       $f14, $f14, $f9
    ctx->pc = 0x2aad34u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[9]);
    // 0x2aad38: 0xe6050004  swc1        $f5, 0x4($s0)
    ctx->pc = 0x2aad38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2aad3c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2aad3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2aad40: 0xe64c0000  swc1        $f12, 0x0($s2)
    ctx->pc = 0x2aad40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2aad44: 0xe64d0004  swc1        $f13, 0x4($s2)
    ctx->pc = 0x2aad44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2aad48: 0xe64e0008  swc1        $f14, 0x8($s2)
    ctx->pc = 0x2aad48u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2aad4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AAD4Cu;
    {
        const bool branch_taken_0x2aad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD4Cu;
        // 0x2aad50: 0x46002002  mul.s       $f0, $f4, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad4c) {
            ctx->pc = 0x2AAD58u;
            goto label_2aad58;
        }
    }
    ctx->pc = 0x2AAD54u;
label_2aad54:
    // 0x2aad54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aad54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aad58:
    // 0x2aad58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2aad58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aad5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2aad5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aad60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2aad60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aad64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aad64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aad68: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD68u;
        // 0x2aad6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAD70u;
}
