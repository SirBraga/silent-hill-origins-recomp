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

// Function: sub_00140A28
// Address: 0x140a28 - 0x140d98
void sub_00140A28_0x140a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140A28_0x140a28");
#endif

    switch (ctx->pc) {
        case 0x140a80u: goto label_140a80;
        case 0x140b04u: goto label_140b04;
        case 0x140bccu: goto label_140bcc;
        case 0x140c4cu: goto label_140c4c;
        case 0x140cf8u: goto label_140cf8;
        case 0x140d6cu: goto label_140d6c;
        default: break;
    }

    ctx->pc = 0x140a28u;

    // 0x140a28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x140a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x140a2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x140a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x140a30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x140a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x140a34: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x140a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x140a38: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x140a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x140a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x140a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x140a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x140a44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x140a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a48: 0x8c508468  lw          $s0, -0x7B98($v0)
    ctx->pc = 0x140a48u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338468u));
    // 0x140a4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x140a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x140a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x140a54: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x140a54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x140a58: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x140a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x140a5c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x140a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x140a60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x140a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x140a64: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x140a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x140a68: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x140a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x140a6c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x140a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x140a70: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x140a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x140a74: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x140A74u;
    {
        const bool branch_taken_0x140a74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A74u;
        // 0x140a78: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a74) {
            ctx->pc = 0x140BB8u;
            goto label_140bb8;
        }
    }
    ctx->pc = 0x140A7Cu;
    // 0x140a7c: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x140a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_140a80:
    // 0x140a80: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x140A80u;
    {
        const bool branch_taken_0x140a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a80) {
            ctx->pc = 0x140A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140A80u;
            // 0x140a84: 0x8e1000b4  lw          $s0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140BB0u;
            goto label_140bb0;
        }
    }
    ctx->pc = 0x140A88u;
    // 0x140a88: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x140a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a8c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x140a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140a90: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x140a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140a94: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x140a94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x140a98: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x140a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140a9c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x140a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x140aa0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x140aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140aa4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x140aa4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x140aa8: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x140aa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x140aac: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x140aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ab0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140ab0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140ab4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x140ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x140ab8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x140ab8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x140abc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x140abcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x140ac0: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x140ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ac4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x140ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x140ac8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x140ac8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x140acc: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x140accu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x140ad0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x140ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140ad4: 0x0  nop
    ctx->pc = 0x140ad4u;
    // NOP
    // 0x140ad8: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
    ctx->pc = 0x140AD8u;
    {
        const bool branch_taken_0x140ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140ad8) {
            ctx->pc = 0x140ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140AD8u;
            // 0x140adc: 0x8e1000b4  lw          $s0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140BB0u;
            goto label_140bb0;
        }
    }
    ctx->pc = 0x140AE0u;
    // 0x140ae0: 0x0  nop
    ctx->pc = 0x140ae0u;
    // NOP
    // 0x140ae4: 0x0  nop
    ctx->pc = 0x140ae4u;
    // NOP
    // 0x140ae8: 0x460c0044  c1          0xC0044
    ctx->pc = 0x140ae8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x140aec: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x140aecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140af0: 0x0  nop
    ctx->pc = 0x140af0u;
    // NOP
    // 0x140af4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x140AF4u;
    {
        const bool branch_taken_0x140af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140af4) {
            ctx->pc = 0x140AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140AF4u;
            // 0x140af8: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x140B10u;
            goto label_140b10;
        }
    }
    ctx->pc = 0x140AFCu;
    // 0x140afc: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x140AFCu;
    SET_GPR_U32(ctx, 31, 0x140B04u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x140AFCu, 0x140B04u)) {
        return;
    }
    ctx->pc = 0x140B04u;
label_140b04:
    // 0x140b04: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x140b04u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x140b08: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x140b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140b0c: 0x0  nop
    ctx->pc = 0x140b0cu;
    // NOP
label_140b10:
    // 0x140b10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140b14: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x140b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x140b18: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x140b18u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x140b1c: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x140b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140b20: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x140b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140b24: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x140b24u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x140b28: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x140b28u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x140b2c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x140b2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x140b30: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x140b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x140b34: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x140b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x140b38: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x140b38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x140b3c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x140b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140b40: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x140b40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x140b44: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x140b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140b48: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x140b48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x140b4c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x140b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140b50: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x140b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140b54: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x140b54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x140b58: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x140b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x140b5c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x140b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x140b60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x140b60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x140b64: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x140b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x140b68: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x140b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x140b6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x140b6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x140b70: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x140b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140b74: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x140b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140b78: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x140b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x140b7c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x140b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140b80: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x140b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140b84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x140b84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x140b88: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x140b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x140b8c: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x140b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140b90: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x140b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x140b94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x140b94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x140b98: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x140b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x140b9c: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x140b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ba0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x140ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x140ba4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x140ba4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x140ba8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x140ba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x140bac: 0x8e1000b4  lw          $s0, 0xB4($s0)
    ctx->pc = 0x140bacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_140bb0:
    // 0x140bb0: 0x5600ffb3  bnel        $s0, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x140BB0u;
    {
        const bool branch_taken_0x140bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bb0) {
            ctx->pc = 0x140BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140BB0u;
            // 0x140bb4: 0x8e0200d0  lw          $v0, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140a80;
        }
    }
    ctx->pc = 0x140BB8u;
label_140bb8:
    // 0x140bb8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x140BB8u;
    {
        const bool branch_taken_0x140bb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BB8u;
        // 0x140bbc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bb8) {
            ctx->pc = 0x140BDCu;
            goto label_140bdc;
        }
    }
    ctx->pc = 0x140BC0u;
    // 0x140bc0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x140bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x140bc4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x140BC4u;
    SET_GPR_U32(ctx, 31, 0x140BCCu);
    ctx->pc = 0x140BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BC4u;
    // 0x140bc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x140BC4u, 0x140BCCu)) {
        return;
    }
    ctx->pc = 0x140BCCu;
label_140bcc:
    // 0x140bcc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x140bccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140bd0: 0x0  nop
    ctx->pc = 0x140bd0u;
    // NOP
    // 0x140bd4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x140BD4u;
    {
        const bool branch_taken_0x140bd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x140BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BD4u;
        // 0x140bd8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bd4) {
            ctx->pc = 0x140BE8u;
            goto label_140be8;
        }
    }
    ctx->pc = 0x140BDCu;
label_140bdc:
    // 0x140bdc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x140bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x140be0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x140BE0u;
    {
        const bool branch_taken_0x140be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BE0u;
        // 0x140be4: 0xa0400002  sb          $zero, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140be0) {
            ctx->pc = 0x140D70u;
            goto label_140d70;
        }
    }
    ctx->pc = 0x140BE8u;
label_140be8:
    // 0x140be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140bec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x140becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x140bf0: 0x0  nop
    ctx->pc = 0x140bf0u;
    // NOP
    // 0x140bf4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x140bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140bf8: 0x0  nop
    ctx->pc = 0x140bf8u;
    // NOP
    // 0x140bfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x140BFCu;
    {
        const bool branch_taken_0x140bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140bfc) {
            ctx->pc = 0x140C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140BFCu;
            // 0x140c00: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x140C04u;
            goto label_140c04;
        }
    }
    ctx->pc = 0x140C04u;
label_140c04:
    // 0x140c04: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x140c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140c08: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x140c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140c0c: 0x0  nop
    ctx->pc = 0x140c0cu;
    // NOP
    // 0x140c10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x140C10u;
    {
        const bool branch_taken_0x140c10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140c10) {
            ctx->pc = 0x140C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140C10u;
            // 0x140c14: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x140C18u;
            goto label_140c18;
        }
    }
    ctx->pc = 0x140C18u;
label_140c18:
    // 0x140c18: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x140c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140c1c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x140c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140c20: 0x0  nop
    ctx->pc = 0x140c20u;
    // NOP
    // 0x140c24: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x140C24u;
    {
        const bool branch_taken_0x140c24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140c24) {
            ctx->pc = 0x140C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140C24u;
            // 0x140c28: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x140C2Cu;
            goto label_140c2c;
        }
    }
    ctx->pc = 0x140C2Cu;
label_140c2c:
    // 0x140c2c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x140c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x140c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140c34: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x140c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x140c38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x140c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c3c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x140c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x140c40: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x140c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x140c44: 0xc095c4a  jal         func_257128
    ctx->pc = 0x140C44u;
    SET_GPR_U32(ctx, 31, 0x140C4Cu);
    ctx->pc = 0x140C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C44u;
    // 0x140c48: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x140C44u, 0x140C4Cu)) {
        return;
    }
    ctx->pc = 0x140C4Cu;
label_140c4c:
    // 0x140c4c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x140c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140c50: 0xe4750010  swc1        $f21, 0x10($v1)
    ctx->pc = 0x140c50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x140c54: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x140c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140c58: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x140c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x140c5c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x140c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140c60: 0xe4750018  swc1        $f21, 0x18($v1)
    ctx->pc = 0x140c60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x140c64: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140c68: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x140c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x140c6c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x140c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x140c70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x140c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x140c74: 0xb0820027  sdl         $v0, 0x27($a0)
    ctx->pc = 0x140c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x140c78: 0xb4820020  sdr         $v0, 0x20($a0)
    ctx->pc = 0x140c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x140c7c: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x140c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x140c80: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x140c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140c84: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x140c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140c88: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x140c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140c8c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x140c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140c90: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x140c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140c94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x140c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x140c98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x140c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x140c9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140c9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140ca0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x140ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x140ca4: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140ca8: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x140ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140cac: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x140cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140cb0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x140cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140cb4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x140cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140cb8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x140cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x140cbc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x140cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x140cc0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140cc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140cc4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x140cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x140cc8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x140cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140ccc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x140cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140cd0: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x140cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140cd4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x140cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140cd8: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x140cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140cdc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x140cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x140ce0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x140ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x140ce4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140ce4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140ce8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x140ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x140cec: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x140cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140cf0: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x140CF0u;
    SET_GPR_U32(ctx, 31, 0x140CF8u);
    ctx->pc = 0x140CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CF0u;
    // 0x140cf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x140CF0u, 0x140CF8u)) {
        return;
    }
    ctx->pc = 0x140CF8u;
label_140cf8:
    // 0x140cf8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x140cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140cfc: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x140cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140d00: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x140d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140d04: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x140d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140d08: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x140d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140d0c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x140d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x140d10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x140d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x140d14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140d14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140d18: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x140d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x140d1c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x140d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140d20: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x140d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140d24: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x140d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140d28: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x140d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140d2c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x140d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140d30: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x140d30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x140d34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x140d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x140d38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140d38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140d3c: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x140d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x140d40: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x140d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x140d44: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x140d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140d48: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x140d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140d4c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x140d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140d50: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x140d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140d54: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x140d54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x140d58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x140d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x140d5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140d5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140d60: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x140d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x140d64: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x140D64u;
    SET_GPR_U32(ctx, 31, 0x140D6Cu);
    ctx->pc = 0x140D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D64u;
    // 0x140d68: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x140D64u, 0x140D6Cu)) {
        return;
    }
    ctx->pc = 0x140D6Cu;
label_140d6c:
    // 0x140d6c: 0x0  nop
    ctx->pc = 0x140d6cu;
    // NOP
label_140d70:
    // 0x140d70: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x140d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140d74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x140d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140d78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x140d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140d7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x140d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140d80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140d84: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x140d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x140d88: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x140d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x140d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x140D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D8Cu;
        // 0x140d90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140D94u;
    // 0x140d94: 0x0  nop
    ctx->pc = 0x140d94u;
    // NOP
    ctx->pc = 0x140d98u;
}
