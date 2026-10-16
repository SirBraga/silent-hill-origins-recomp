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

// Function: sub_0015E9A8
// Address: 0x15e9a8 - 0x15ed90
void sub_0015E9A8_0x15e9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E9A8_0x15e9a8");
#endif

    switch (ctx->pc) {
        case 0x15ea1cu: goto label_15ea1c;
        case 0x15ea24u: goto label_15ea24;
        case 0x15ea3cu: goto label_15ea3c;
        case 0x15ea44u: goto label_15ea44;
        case 0x15ea6cu: goto label_15ea6c;
        case 0x15eab0u: goto label_15eab0;
        case 0x15eb04u: goto label_15eb04;
        case 0x15eb4cu: goto label_15eb4c;
        case 0x15eb6cu: goto label_15eb6c;
        case 0x15eb98u: goto label_15eb98;
        case 0x15ebacu: goto label_15ebac;
        case 0x15ec04u: goto label_15ec04;
        case 0x15ec24u: goto label_15ec24;
        case 0x15ec44u: goto label_15ec44;
        case 0x15ec90u: goto label_15ec90;
        case 0x15eca8u: goto label_15eca8;
        default: break;
    }

    ctx->pc = 0x15e9a8u;

    // 0x15e9a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15e9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15e9ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15e9b0: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x15e9b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15e9b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e9b8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x15e9b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15e9bc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x15e9bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15e9c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15e9c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15e9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15e9c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15e9cc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15e9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x15e9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e9d4: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x15e9d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x15e9d8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x15e9d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15e9dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15e9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15e9e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15e9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15e9e4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x15e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x15e9e8: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x15e9e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x15e9ec: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x15e9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15e9f0: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x15E9F0u;
    {
        const bool branch_taken_0x15e9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9F0u;
        // 0x15e9f4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9f0) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15E9F8u;
    // 0x15e9f8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15e9fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15ea00: 0x244233e0  addiu       $v0, $v0, 0x33E0
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13280));
    // 0x15ea04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ea08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ea0c: 0x800008  jr          $a0
    ctx->pc = 0x15EA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15EA14u: goto label_15ea14;
            case 0x15EA30u: goto label_15ea30;
            case 0x15EA60u: goto label_15ea60;
            case 0x15EAA4u: goto label_15eaa4;
            case 0x15EAF0u: goto label_15eaf0;
            case 0x15EBA0u: goto label_15eba0;
            case 0x15EC54u: goto label_15ec54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15EA14u;
label_15ea14:
    // 0x15ea14: 0xc07922e  jal         func_1E48B8
    ctx->pc = 0x15EA14u;
    SET_GPR_U32(ctx, 31, 0x15EA1Cu);
    ctx->pc = 0x15EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA14u;
    // 0x15ea18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48B8u, 0x15EA14u, 0x15EA1Cu)) {
        return;
    }
    ctx->pc = 0x15EA1Cu;
label_15ea1c:
    // 0x15ea1c: 0xc079246  jal         func_1E4918
    ctx->pc = 0x15EA1Cu;
    SET_GPR_U32(ctx, 31, 0x15EA24u);
    ctx->pc = 0x15EA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA1Cu;
    // 0x15ea20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4918u, 0x15EA1Cu, 0x15EA24u)) {
        return;
    }
    ctx->pc = 0x15EA24u;
label_15ea24:
    // 0x15ea24: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x15ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x15ea28: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x15EA28u;
    {
        const bool branch_taken_0x15ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA28u;
        // 0x15ea2c: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea28) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EA30u;
label_15ea30:
    // 0x15ea30: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15ea34: 0xc07922e  jal         func_1E48B8
    ctx->pc = 0x15EA34u;
    SET_GPR_U32(ctx, 31, 0x15EA3Cu);
    ctx->pc = 0x15EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA34u;
    // 0x15ea38: 0x2484f180  addiu       $a0, $a0, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48B8u, 0x15EA34u, 0x15EA3Cu)) {
        return;
    }
    ctx->pc = 0x15EA3Cu;
label_15ea3c:
    // 0x15ea3c: 0xc079246  jal         func_1E4918
    ctx->pc = 0x15EA3Cu;
    SET_GPR_U32(ctx, 31, 0x15EA44u);
    ctx->pc = 0x15EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA3Cu;
    // 0x15ea40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4918u, 0x15EA3Cu, 0x15EA44u)) {
        return;
    }
    ctx->pc = 0x15EA44u;
label_15ea44:
    // 0x15ea44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15ea44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15ea48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ea48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ea4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ea50: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x15ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x15ea54: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x15ea54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x15ea58: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x15EA58u;
    {
        const bool branch_taken_0x15ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA58u;
        // 0x15ea5c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea58) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EA60u;
label_15ea60:
    // 0x15ea60: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15ea64: 0xc07922e  jal         func_1E48B8
    ctx->pc = 0x15EA64u;
    SET_GPR_U32(ctx, 31, 0x15EA6Cu);
    ctx->pc = 0x15EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA64u;
    // 0x15ea68: 0x2484f180  addiu       $a0, $a0, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48B8u, 0x15EA64u, 0x15EA6Cu)) {
        return;
    }
    ctx->pc = 0x15EA6Cu;
label_15ea6c:
    // 0x15ea6c: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x15ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ea70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ea74: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x15ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ea78: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x15ea78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x15ea7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15ea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15ea80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15ea80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15ea84: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x15ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x15ea88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15ea88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ea8c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x15ea8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ea90: 0x0  nop
    ctx->pc = 0x15ea90u;
    // NOP
    // 0x15ea94: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x15EA94u;
    {
        const bool branch_taken_0x15ea94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA94u;
        // 0x15ea98: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea94) {
            ctx->pc = 0x15EAE8u;
            goto label_15eae8;
        }
    }
    ctx->pc = 0x15EA9Cu;
    // 0x15ea9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15EA9Cu;
    {
        const bool branch_taken_0x15ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA9Cu;
        // 0x15eaa0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea9c) {
            ctx->pc = 0x15EAE0u;
            goto label_15eae0;
        }
    }
    ctx->pc = 0x15EAA4u;
label_15eaa4:
    // 0x15eaa4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15eaa8: 0xc07922e  jal         func_1E48B8
    ctx->pc = 0x15EAA8u;
    SET_GPR_U32(ctx, 31, 0x15EAB0u);
    ctx->pc = 0x15EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAA8u;
    // 0x15eaac: 0x2484f180  addiu       $a0, $a0, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48B8u, 0x15EAA8u, 0x15EAB0u)) {
        return;
    }
    ctx->pc = 0x15EAB0u;
label_15eab0:
    // 0x15eab0: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x15eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eab8: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x15eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15eabc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x15eabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x15eac0: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x15eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x15eac4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15eac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15eac8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15eac8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15eacc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x15eaccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ead0: 0x0  nop
    ctx->pc = 0x15ead0u;
    // NOP
    // 0x15ead4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15EAD4u;
    {
        const bool branch_taken_0x15ead4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD4u;
        // 0x15ead8: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ead4) {
            ctx->pc = 0x15EAE8u;
            goto label_15eae8;
        }
    }
    ctx->pc = 0x15EADCu;
    // 0x15eadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15eae0:
    // 0x15eae0: 0xe6020058  swc1        $f2, 0x58($s0)
    ctx->pc = 0x15eae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x15eae4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x15eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_15eae8:
    // 0x15eae8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x15EAE8u;
    {
        const bool branch_taken_0x15eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE8u;
        // 0x15eaec: 0xc6150058  lwc1        $f21, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eae8) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EAF0u;
label_15eaf0:
    // 0x15eaf0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15eaf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15eaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15eaf8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x15eaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x15eafc: 0xc07922e  jal         func_1E48B8
    ctx->pc = 0x15EAFCu;
    SET_GPR_U32(ctx, 31, 0x15EB04u);
    ctx->pc = 0x15EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAFCu;
    // 0x15eb00: 0x2484f180  addiu       $a0, $a0, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48B8u, 0x15EAFCu, 0x15EB04u)) {
        return;
    }
    ctx->pc = 0x15EB04u;
label_15eb04:
    // 0x15eb04: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x15eb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15eb08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eb0c: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x15eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eb10: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x15eb10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x15eb14: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x15eb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x15eb18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15eb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15eb1c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x15eb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15eb20: 0x0  nop
    ctx->pc = 0x15eb20u;
    // NOP
    // 0x15eb24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15EB24u;
    {
        const bool branch_taken_0x15eb24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB24u;
        // 0x15eb28: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb24) {
            ctx->pc = 0x15EB38u;
            goto label_15eb38;
        }
    }
    ctx->pc = 0x15EB2Cu;
    // 0x15eb2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15eb30: 0xe6160058  swc1        $f22, 0x58($s0)
    ctx->pc = 0x15eb30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x15eb34: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x15eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_15eb38:
    // 0x15eb38: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x15eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15eb3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15eb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15eb40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15eb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15eb44: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x15EB44u;
    SET_GPR_U32(ctx, 31, 0x15EB4Cu);
    ctx->pc = 0x15EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB44u;
    // 0x15eb48: 0xc60d0078  lwc1        $f13, 0x78($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x15EB44u, 0x15EB4Cu)) {
        return;
    }
    ctx->pc = 0x15EB4Cu;
label_15eb4c:
    // 0x15eb4c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x15eb4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x15eb50: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x15eb50u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x15eb54: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x15eb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x15eb58: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x15eb58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x15eb5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15eb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eb60: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x15eb60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x15eb64: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x15EB64u;
    SET_GPR_U32(ctx, 31, 0x15EB6Cu);
    ctx->pc = 0x15EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB64u;
    // 0x15eb68: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x15EB64u, 0x15EB6Cu)) {
        return;
    }
    ctx->pc = 0x15EB6Cu;
label_15eb6c:
    // 0x15eb6c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x15eb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x15eb70: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x15eb70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15eb74: 0x0  nop
    ctx->pc = 0x15eb74u;
    // NOP
    // 0x15eb78: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15EB78u;
    {
        const bool branch_taken_0x15eb78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB78u;
        // 0x15eb7c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb78) {
            ctx->pc = 0x15EB8Cu;
            goto label_15eb8c;
        }
    }
    ctx->pc = 0x15EB80u;
    // 0x15eb80: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x15eb80u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x15eb84: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15EB84u;
    {
        const bool branch_taken_0x15eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB84u;
        // 0x15eb88: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb84) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EB8Cu;
label_15eb8c:
    // 0x15eb8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eb90: 0xc079246  jal         func_1E4918
    ctx->pc = 0x15EB90u;
    SET_GPR_U32(ctx, 31, 0x15EB98u);
    ctx->pc = 0x15EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB90u;
    // 0x15eb94: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4918u, 0x15EB90u, 0x15EB98u)) {
        return;
    }
    ctx->pc = 0x15EB98u;
label_15eb98:
    // 0x15eb98: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x15EB98u;
    {
        const bool branch_taken_0x15eb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB98u;
        // 0x15eb9c: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb98) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EBA0u;
label_15eba0:
    // 0x15eba0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15eba4: 0xc07922e  jal         func_1E48B8
    ctx->pc = 0x15EBA4u;
    SET_GPR_U32(ctx, 31, 0x15EBACu);
    ctx->pc = 0x15EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBA4u;
    // 0x15eba8: 0x2484f180  addiu       $a0, $a0, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48B8u, 0x15EBA4u, 0x15EBACu)) {
        return;
    }
    ctx->pc = 0x15EBACu;
label_15ebac:
    // 0x15ebac: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x15ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ebb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ebb4: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x15ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ebb8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x15ebb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x15ebbc: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x15ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x15ebc0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15ebc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15ebc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15ebc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15ebc8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x15ebc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ebcc: 0x0  nop
    ctx->pc = 0x15ebccu;
    // NOP
    // 0x15ebd0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15EBD0u;
    {
        const bool branch_taken_0x15ebd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBD0u;
        // 0x15ebd4: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebd0) {
            ctx->pc = 0x15EBE4u;
            goto label_15ebe4;
        }
    }
    ctx->pc = 0x15EBD8u;
    // 0x15ebd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ebdc: 0xe6020058  swc1        $f2, 0x58($s0)
    ctx->pc = 0x15ebdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x15ebe0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x15ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_15ebe4:
    // 0x15ebe4: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x15ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ebe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15ebe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15ebec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x15ebecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x15ebf0: 0xc60d0078  lwc1        $f13, 0x78($s0)
    ctx->pc = 0x15ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ebf4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15ebf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15ebf8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15ebf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15ebfc: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x15EBFCu;
    SET_GPR_U32(ctx, 31, 0x15EC04u);
    ctx->pc = 0x15EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBFCu;
    // 0x15ec00: 0x460cb301  sub.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x15EBFCu, 0x15EC04u)) {
        return;
    }
    ctx->pc = 0x15EC04u;
label_15ec04:
    // 0x15ec04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x15ec04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x15ec08: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x15ec08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x15ec0c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x15ec0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x15ec10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x15ec10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x15ec14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ec14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ec18: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x15ec18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x15ec1c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x15EC1Cu;
    SET_GPR_U32(ctx, 31, 0x15EC24u);
    ctx->pc = 0x15EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC1Cu;
    // 0x15ec20: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x15EC1Cu, 0x15EC24u)) {
        return;
    }
    ctx->pc = 0x15EC24u;
label_15ec24:
    // 0x15ec24: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x15ec24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x15ec28: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x15ec28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ec2c: 0x0  nop
    ctx->pc = 0x15ec2cu;
    // NOP
    // 0x15ec30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15EC30u;
    {
        const bool branch_taken_0x15ec30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC30u;
        // 0x15ec34: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec30) {
            ctx->pc = 0x15EC4Cu;
            goto label_15ec4c;
        }
    }
    ctx->pc = 0x15EC38u;
    // 0x15ec38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15ec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec3c: 0xc079246  jal         func_1E4918
    ctx->pc = 0x15EC3Cu;
    SET_GPR_U32(ctx, 31, 0x15EC44u);
    ctx->pc = 0x15EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC3Cu;
    // 0x15ec40: 0x4600b5c6  mov.s       $f23, $f22 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4918u, 0x15EC3Cu, 0x15EC44u)) {
        return;
    }
    ctx->pc = 0x15EC44u;
label_15ec44:
    // 0x15ec44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15EC44u;
    {
        const bool branch_taken_0x15ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC44u;
        // 0x15ec48: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec44) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EC4Cu;
label_15ec4c:
    // 0x15ec4c: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x15ec4cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    // 0x15ec50: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x15ec50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
label_15ec54:
    // 0x15ec54: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x15ec58: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x15EC58u;
    {
        const bool branch_taken_0x15ec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC58u;
        // 0x15ec5c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec58) {
            ctx->pc = 0x15ED5Cu;
            goto label_15ed5c;
        }
    }
    ctx->pc = 0x15EC60u;
    // 0x15ec60: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x15ec60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x15ec64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ec64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ec68: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x15ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ec6c: 0x2452f180  addiu       $s2, $v0, -0xE80
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
    // 0x15ec70: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x15ec70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x15ec74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15ec74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15ec78: 0x0  nop
    ctx->pc = 0x15ec78u;
    // NOP
    // 0x15ec7c: 0x0  nop
    ctx->pc = 0x15ec7cu;
    // NOP
    // 0x15ec80: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x15ec80u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x15ec84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15ec84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec88: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x15ec88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15ec8c: 0x26510002  addiu       $s1, $s2, 0x2
    ctx->pc = 0x15ec8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_15ec90:
    // 0x15ec90: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x15ec90u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ec94: 0x0  nop
    ctx->pc = 0x15ec94u;
    // NOP
    // 0x15ec98: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x15ec98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ec9c: 0xc60d0054  lwc1        $f13, 0x54($s0)
    ctx->pc = 0x15ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15eca0: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x15ECA0u;
    SET_GPR_U32(ctx, 31, 0x15ECA8u);
    ctx->pc = 0x15ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ECA0u;
    // 0x15eca4: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x15ECA0u, 0x15ECA8u)) {
        return;
    }
    ctx->pc = 0x15ECA8u;
label_15eca8:
    // 0x15eca8: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x15eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ecac: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x15ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ecb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15ecb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15ecb4: 0x46020100  add.s       $f4, $f0, $f2
    ctx->pc = 0x15ecb4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15ecb8: 0x46182034  c.lt.s      $f4, $f24
    ctx->pc = 0x15ecb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ecbc: 0x0  nop
    ctx->pc = 0x15ecbcu;
    // NOP
    // 0x15ecc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15ECC0u;
    {
        const bool branch_taken_0x15ecc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECC0u;
        // 0x15ecc4: 0xc6020068  lwc1        $f2, 0x68($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecc0) {
            ctx->pc = 0x15ECCCu;
            goto label_15eccc;
        }
    }
    ctx->pc = 0x15ECC8u;
    // 0x15ecc8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x15ecc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_15eccc:
    // 0x15eccc: 0x4614a8c2  mul.s       $f3, $f21, $f20
    ctx->pc = 0x15ecccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x15ecd0: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x15ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ecd4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15ecd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15ecd8: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x15ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ecdc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x15ecdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15ece0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15ece0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15ece4: 0x2a680100  slti        $t0, $s3, 0x100
    ctx->pc = 0x15ece4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15ece8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x15ece8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15ecec: 0x46171080  add.s       $f2, $f2, $f23
    ctx->pc = 0x15ececu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
    // 0x15ecf0: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x15ecf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x15ecf4: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x15ecf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x15ecf8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x15ecf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x15ecfc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15ecfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15ed00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15ed00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15ed04: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15ed04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x15ed08: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x15ed08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15ed0c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15ed0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x15ed10: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15ed10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15ed14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15ed14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15ed18: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15ed18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15ed1c: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x15ed1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15ed20: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15ed20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15ed24: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x15ed24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x15ed28: 0x282180a  movz        $v1, $s4, $v0
    ctx->pc = 0x15ed28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20));
    // 0x15ed2c: 0x28860100  slti        $a2, $a0, 0x100
    ctx->pc = 0x15ed2cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15ed30: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x15ed30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15ed34: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x15ed34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ed38: 0x286200a  movz        $a0, $s4, $a2
    ctx->pc = 0x15ed38u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20));
    // 0x15ed3c: 0x282280a  movz        $a1, $s4, $v0
    ctx->pc = 0x15ed3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20));
    // 0x15ed40: 0xa224ffff  sb          $a0, -0x1($s1)
    ctx->pc = 0x15ed40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294967295), (uint8_t)GPR_U32(ctx, 4));
    // 0x15ed44: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x15ed44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x15ed48: 0xa2470003  sb          $a3, 0x3($s2)
    ctx->pc = 0x15ed48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x15ed4c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15ed4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x15ed50: 0x1500ffcf  bnez        $t0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x15ED50u;
    {
        const bool branch_taken_0x15ed50 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED50u;
        // 0x15ed54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed50) {
            ctx->pc = 0x15EC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ec90;
        }
    }
    ctx->pc = 0x15ED58u;
    // 0x15ed58: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x15ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_15ed5c:
    // 0x15ed5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15ed5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ed60: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15ed60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ed64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15ed64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ed68: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15ed68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ed6c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15ed6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ed70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ed70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ed74: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x15ed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x15ed78: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x15ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15ed7c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x15ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15ed80: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x15ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15ed84: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x15ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15ed88: 0x3e00008  jr          $ra
    ctx->pc = 0x15ED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED88u;
        // 0x15ed8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ED90u;
}
