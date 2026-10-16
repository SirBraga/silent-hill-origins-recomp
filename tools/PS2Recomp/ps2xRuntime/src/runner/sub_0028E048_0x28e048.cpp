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

// Function: sub_0028E048
// Address: 0x28e048 - 0x28e1a0
void sub_0028E048_0x28e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E048_0x28e048");
#endif

    switch (ctx->pc) {
        case 0x28e098u: goto label_28e098;
        case 0x28e0acu: goto label_28e0ac;
        case 0x28e0fcu: goto label_28e0fc;
        default: break;
    }

    ctx->pc = 0x28e048u;

    // 0x28e048: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28e04c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28e04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x28e050: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x28e050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x28e054: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28e054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e058: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x28e058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x28e05c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x28e060: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28e060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x28e064: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28e064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x28e068: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x28e068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x28e06c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28e06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28e070: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28e070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x28e074: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x28e074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28e078: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28e078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28e07c: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x28e07cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e080: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x28e080u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28e084: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x28e084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28e088: 0x12110038  beq         $s0, $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x28E088u;
    {
        const bool branch_taken_0x28e088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E088u;
        // 0x28e08c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e088) {
            ctx->pc = 0x28E16Cu;
            goto label_28e16c;
        }
    }
    ctx->pc = 0x28E090u;
    // 0x28e090: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x28e090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28e094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e098:
    // 0x28e098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e09c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28e09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0a0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x28e0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0a4: 0xc0a3708  jal         func_28DC20
    ctx->pc = 0x28E0A4u;
    SET_GPR_U32(ctx, 31, 0x28E0ACu);
    ctx->pc = 0x28E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0A4u;
    // 0x28e0a8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28DC20u, 0x28E0A4u, 0x28E0ACu)) {
        return;
    }
    ctx->pc = 0x28E0ACu;
label_28e0ac:
    // 0x28e0ac: 0x5456002d  bnel        $v0, $s6, . + 4 + (0x2D << 2)
    ctx->pc = 0x28E0ACu;
    {
        const bool branch_taken_0x28e0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x28e0ac) {
            ctx->pc = 0x28E0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E0ACu;
            // 0x28e0b0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E164u;
            goto label_28e164;
        }
    }
    ctx->pc = 0x28E0B4u;
    // 0x28e0b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28e0b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28e0bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28e0c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28e0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0c4: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x28e0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x28e0c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28e0cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e0d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28e0d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28e0d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e0dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28e0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e0e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28e0e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28e0e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x28e0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28e0e8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e0ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e0f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28e0f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28e0f4: 0xc093abc  jal         func_24EAF0
    ctx->pc = 0x28E0F4u;
    SET_GPR_U32(ctx, 31, 0x28E0FCu);
    ctx->pc = 0x28E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0F4u;
    // 0x28e0f8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAF0u, 0x28E0F4u, 0x28E0FCu)) {
        return;
    }
    ctx->pc = 0x28E0FCu;
label_28e0fc:
    // 0x28e0fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28e100: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28e104: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x28e104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x28e108: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28e108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e10c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28e110: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x28e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28e118: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28e11c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28e11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e120: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x28e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e124: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x28e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e128: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28e128u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e12c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28e12cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28e130: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28e130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28e134: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28e134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e138: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28e138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e13c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28e13cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28e140: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x28e140u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28e144: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x28e144u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x28e148: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x28e148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e14c: 0x0  nop
    ctx->pc = 0x28e14cu;
    // NOP
    // 0x28e150: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28E150u;
    {
        const bool branch_taken_0x28e150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E150u;
        // 0x28e154: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e150) {
            ctx->pc = 0x28E160u;
            goto label_28e160;
        }
    }
    ctx->pc = 0x28E158u;
    // 0x28e158: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x28e158u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x28e15c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x28e15cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e160:
    // 0x28e160: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x28e160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28e164:
    // 0x28e164: 0x1611ffcc  bne         $s0, $s1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x28E164u;
    {
        const bool branch_taken_0x28e164 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E164u;
        // 0x28e168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e164) {
            ctx->pc = 0x28E098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e098;
        }
    }
    ctx->pc = 0x28E16Cu;
label_28e16c:
    // 0x28e16c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x28e16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e170: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28e170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e174: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28e174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e178: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28e178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e17c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28e17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e180: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28e180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e184: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x28e184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e188: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x28e188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e18c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28e18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e190: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x28e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e194: 0x3e00008  jr          $ra
    ctx->pc = 0x28E194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E194u;
        // 0x28e198: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E19Cu;
    // 0x28e19c: 0x0  nop
    ctx->pc = 0x28e19cu;
    // NOP
    ctx->pc = 0x28e1a0u;
}
