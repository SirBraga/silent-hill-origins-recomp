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

// Function: sub_001F1A90
// Address: 0x1f1a90 - 0x1f1c98
void sub_001F1A90_0x1f1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1A90_0x1f1a90");
#endif

    switch (ctx->pc) {
        case 0x1f1ae0u: goto label_1f1ae0;
        case 0x1f1ba8u: goto label_1f1ba8;
        case 0x1f1bf8u: goto label_1f1bf8;
        default: break;
    }

    ctx->pc = 0x1f1a90u;

    // 0x1f1a90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f1a94: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f1a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1f1a98: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1f1a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1f1a9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1aa0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f1aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1f1aa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f1aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1aa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f1aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f1aac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f1aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ab0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1f1ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1f1ab4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f1ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ab8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f1ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1f1abc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1f1abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1f1ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1ac4: 0x8c832720  lw          $v1, 0x2720($a0)
    ctx->pc = 0x1f1ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10016)));
    // 0x1f1ac8: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F1AC8u;
    {
        const bool branch_taken_0x1f1ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AC8u;
        // 0x1f1acc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ac8) {
            ctx->pc = 0x1F1B94u;
            goto label_1f1b94;
        }
    }
    ctx->pc = 0x1F1AD0u;
    // 0x1f1ad0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1f1ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f1ad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1ad8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f1ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1adc: 0x0  nop
    ctx->pc = 0x1f1adcu;
    // NOP
label_1f1ae0:
    // 0x1f1ae0: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1f1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f1ae4: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x1f1ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f1ae8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1f1ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1aec: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1f1aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f1af0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1f1af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1af4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1f1af4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1f1af8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1f1af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f1afc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1f1afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1f1b00: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f1b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1b04: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x1f1b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f1b08: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1f1b08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f1b0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f1b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1f1b10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f1b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f1b14: 0x46040040  add.s       $f1, $f0, $f4
    ctx->pc = 0x1f1b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1f1b18: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x1f1b18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1b1c: 0x0  nop
    ctx->pc = 0x1f1b1cu;
    // NOP
    // 0x1f1b20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1B20u;
    {
        const bool branch_taken_0x1f1b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B20u;
        // 0x1f1b24: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b20) {
            ctx->pc = 0x1F1B30u;
            goto label_1f1b30;
        }
    }
    ctx->pc = 0x1F1B28u;
    // 0x1f1b28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1B28u;
    {
        const bool branch_taken_0x1f1b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B28u;
        // 0x1f1b2c: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b28) {
            ctx->pc = 0x1F1B50u;
            goto label_1f1b50;
        }
    }
    ctx->pc = 0x1F1B30u;
label_1f1b30:
    // 0x1f1b30: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x1f1b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1b34: 0x0  nop
    ctx->pc = 0x1f1b34u;
    // NOP
    // 0x1f1b38: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1B38u;
    {
        const bool branch_taken_0x1f1b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1b38) {
            ctx->pc = 0x1F1B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B38u;
            // 0x1f1b3c: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B4Cu;
            goto label_1f1b4c;
        }
    }
    ctx->pc = 0x1F1B40u;
    // 0x1f1b40: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x1f1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x1f1b44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1B44u;
    {
        const bool branch_taken_0x1f1b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B44u;
        // 0x1f1b48: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b44) {
            ctx->pc = 0x1F1B50u;
            goto label_1f1b50;
        }
    }
    ctx->pc = 0x1F1B4Cu;
label_1f1b4c:
    // 0x1f1b4c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f1b4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f1b50:
    // 0x1f1b50: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1f1b54: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f1b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1f1b58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f1b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f1b5c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f1b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f1b60: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1f1b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f1b64: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f1b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1b68: 0x0  nop
    ctx->pc = 0x1f1b68u;
    // NOP
    // 0x1f1b6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1B6Cu;
    {
        const bool branch_taken_0x1f1b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1b6c) {
            ctx->pc = 0x1F1B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B6Cu;
            // 0x1f1b70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B74u;
            goto label_1f1b74;
        }
    }
    ctx->pc = 0x1F1B74u;
label_1f1b74:
    // 0x1f1b74: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1f1b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f1b78: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1f1b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1b7c: 0x0  nop
    ctx->pc = 0x1f1b7cu;
    // NOP
    // 0x1f1b80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1B80u;
    {
        const bool branch_taken_0x1f1b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1b80) {
            ctx->pc = 0x1F1B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B80u;
            // 0x1f1b84: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B88u;
            goto label_1f1b88;
        }
    }
    ctx->pc = 0x1F1B88u;
label_1f1b88:
    // 0x1f1b88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1b8c: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1F1B8Cu;
    {
        const bool branch_taken_0x1f1b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B8Cu;
        // 0x1f1b90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b8c) {
            ctx->pc = 0x1F1AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1ae0;
        }
    }
    ctx->pc = 0x1F1B94u;
label_1f1b94:
    // 0x1f1b94: 0x8c90271c  lw          $s0, 0x271C($a0)
    ctx->pc = 0x1f1b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10012)));
    // 0x1f1b98: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F1B98u;
    {
        const bool branch_taken_0x1f1b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b98) {
            ctx->pc = 0x1F1C40u;
            goto label_1f1c40;
        }
    }
    ctx->pc = 0x1F1BA0u;
    // 0x1f1ba0: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1f1ba0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1ba4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1ba8:
    // 0x1f1ba8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1bac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1f1bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1bb0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1f1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1bb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f1bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f1bb8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f1bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f1bbc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f1bc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1bc4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1f1bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1bc8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1f1bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1bcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f1bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f1bd0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1f1bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f1bd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f1bd8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f1bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1bdc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f1bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1be0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1be4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f1be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f1be8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f1be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f1bec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bf0: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1F1BF0u;
    SET_GPR_U32(ctx, 31, 0x1F1BF8u);
    ctx->pc = 0x1F1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BF0u;
    // 0x1f1bf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1F1BF0u, 0x1F1BF8u)) {
        return;
    }
    ctx->pc = 0x1F1BF8u;
label_1f1bf8:
    // 0x1f1bf8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1bfc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1c00: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1C00u;
    {
        const bool branch_taken_0x1f1c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C00u;
        // 0x1f1c04: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c00) {
            ctx->pc = 0x1F1C14u;
            goto label_1f1c14;
        }
    }
    ctx->pc = 0x1F1C08u;
    // 0x1f1c08: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1c0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1C0Cu;
    {
        const bool branch_taken_0x1f1c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C0Cu;
        // 0x1f1c10: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c0c) {
            ctx->pc = 0x1F1C34u;
            goto label_1f1c34;
        }
    }
    ctx->pc = 0x1F1C14u;
label_1f1c14:
    // 0x1f1c14: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1c18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1C18u;
    {
        const bool branch_taken_0x1f1c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c18) {
            ctx->pc = 0x1F1C28u;
            goto label_1f1c28;
        }
    }
    ctx->pc = 0x1F1C20u;
    // 0x1f1c20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1C20u;
    {
        const bool branch_taken_0x1f1c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C20u;
        // 0x1f1c24: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c20) {
            ctx->pc = 0x1F1C34u;
            goto label_1f1c34;
        }
    }
    ctx->pc = 0x1F1C28u;
label_1f1c28:
    // 0x1f1c28: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1C28u;
    {
        const bool branch_taken_0x1f1c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1c28) {
            ctx->pc = 0x1F1C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1C28u;
            // 0x1f1c2c: 0xae16000c  sw          $s6, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1C34u;
            goto label_1f1c34;
        }
    }
    ctx->pc = 0x1F1C30u;
    // 0x1f1c30: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1f1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1f1c34:
    // 0x1f1c34: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1f1c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f1c38: 0x5600ffdb  bnel        $s0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1F1C38u;
    {
        const bool branch_taken_0x1f1c38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c38) {
            ctx->pc = 0x1F1C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1C38u;
            // 0x1f1c3c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1ba8;
        }
    }
    ctx->pc = 0x1F1C40u;
label_1f1c40:
    // 0x1f1c40: 0x12510006  beq         $s2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1C40u;
    {
        const bool branch_taken_0x1f1c40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x1F1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C40u;
        // 0x1f1c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c40) {
            ctx->pc = 0x1F1C5Cu;
            goto label_1f1c5c;
        }
    }
    ctx->pc = 0x1F1C48u;
    // 0x1f1c48: 0x12710004  beq         $s3, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1C48u;
    {
        const bool branch_taken_0x1f1c48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x1F1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C48u;
        // 0x1f1c4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c48) {
            ctx->pc = 0x1F1C5Cu;
            goto label_1f1c5c;
        }
    }
    ctx->pc = 0x1F1C50u;
    // 0x1f1c50: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1C50u;
    {
        const bool branch_taken_0x1f1c50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C50u;
        // 0x1f1c54: 0x15100b  movn        $v0, $zero, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c50) {
            ctx->pc = 0x1F1C5Cu;
            goto label_1f1c5c;
        }
    }
    ctx->pc = 0x1F1C58u;
    // 0x1f1c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1c5c:
    // 0x1f1c5c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f1c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f1c60: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f1c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1c64: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1f1c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1c68: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f1c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1c6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f1c6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1c70: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1f1c70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1c74: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1f1c74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C7Cu;
        // 0x1f1c80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1C84u;
    // 0x1f1c84: 0x0  nop
    ctx->pc = 0x1f1c84u;
    // NOP
    // 0x1f1c88: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1f1c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f1c8c: 0x0  nop
    ctx->pc = 0x1f1c8cu;
    // NOP
    // 0x1f1c90: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1f1c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f1c94: 0x0  nop
    ctx->pc = 0x1f1c94u;
    // NOP
    ctx->pc = 0x1f1c98u;
}
