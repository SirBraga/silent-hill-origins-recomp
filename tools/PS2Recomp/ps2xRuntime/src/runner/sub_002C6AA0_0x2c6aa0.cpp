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

// Function: sub_002C6AA0
// Address: 0x2c6aa0 - 0x2c6f90
void sub_002C6AA0_0x2c6aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6AA0_0x2c6aa0");
#endif

    switch (ctx->pc) {
        case 0x2c6b98u: goto label_2c6b98;
        case 0x2c6c88u: goto label_2c6c88;
        case 0x2c6cd8u: goto label_2c6cd8;
        case 0x2c6d30u: goto label_2c6d30;
        case 0x2c6d70u: goto label_2c6d70;
        default: break;
    }

    ctx->pc = 0x2c6aa0u;

    // 0x2c6aa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c6aa4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c6aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c6aa8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2c6aa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6aac: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2c6aacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ab0: 0xc4413b38  lwc1        $f1, 0x3B38($v0)
    ctx->pc = 0x2c6ab0u;
    { uint32_t bits = FAST_READ32(0x6B3B38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6ab4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2c6ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ab8: 0x10c00068  beqz        $a2, . + 4 + (0x68 << 2)
    ctx->pc = 0x2C6AB8u;
    {
        const bool branch_taken_0x2c6ab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AB8u;
        // 0x2c6abc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ab8) {
            ctx->pc = 0x2C6C5Cu;
            goto label_2c6c5c;
        }
    }
    ctx->pc = 0x2C6AC0u;
    // 0x2c6ac0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c6ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c6ac4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c6ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6acc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c6accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ad0: 0x18c00022  blez        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C6AD0u;
    {
        const bool branch_taken_0x2c6ad0 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2C6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AD0u;
        // 0x2c6ad4: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ad0) {
            ctx->pc = 0x2C6B5Cu;
            goto label_2c6b5c;
        }
    }
    ctx->pc = 0x2C6AD8u;
    // 0x2c6ad8: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C6AD8u;
    {
        const bool branch_taken_0x2c6ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AD8u;
        // 0x2c6adc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ad8) {
            ctx->pc = 0x2C6B94u;
            goto label_2c6b94;
        }
    }
    ctx->pc = 0x2C6AE0u;
    // 0x2c6ae0: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C6AE0u;
    {
        const bool branch_taken_0x2c6ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ae0) {
            ctx->pc = 0x2C6AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6AE0u;
            // 0x2c6ae4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6AE8u;
    // 0x2c6ae8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c6ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c6aec: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C6AECu;
    {
        const bool branch_taken_0x2c6aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6aec) {
            ctx->pc = 0x2C6AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6AECu;
            // 0x2c6af0: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6B28u;
            goto label_2c6b28;
        }
    }
    ctx->pc = 0x2C6AF4u;
    // 0x2c6af4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2c6af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6af8: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c6af8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6afc: 0x0  nop
    ctx->pc = 0x2c6afcu;
    // NOP
    // 0x2c6b00: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6B00u;
    {
        const bool branch_taken_0x2c6b00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B00u;
        // 0x2c6b04: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b00) {
            ctx->pc = 0x2C6B1Cu;
            goto label_2c6b1c;
        }
    }
    ctx->pc = 0x2C6B08u;
    // 0x2c6b08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6b0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6B0Cu;
    {
        const bool branch_taken_0x2c6b0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6b0c) {
            ctx->pc = 0x2C6B1Cu;
            goto label_2c6b1c;
        }
    }
    ctx->pc = 0x2C6B14u;
    // 0x2c6b14: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c6b14u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6b18: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2c6b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b1c:
    // 0x2c6b1c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2c6b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2c6b20: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c6b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c6b24: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6b28:
    // 0x2c6b28: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c6b28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6b2c: 0x0  nop
    ctx->pc = 0x2c6b2cu;
    // NOP
    // 0x2c6b30: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6B30u;
    {
        const bool branch_taken_0x2c6b30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6b30) {
            ctx->pc = 0x2C6B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6B30u;
            // 0x2c6b34: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6B54u;
            goto label_2c6b54;
        }
    }
    ctx->pc = 0x2C6B38u;
    // 0x2c6b38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6b3c: 0x0  nop
    ctx->pc = 0x2c6b3cu;
    // NOP
    // 0x2c6b40: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6B40u;
    {
        const bool branch_taken_0x2c6b40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6b40) {
            ctx->pc = 0x2C6B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6B40u;
            // 0x2c6b44: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6B54u;
            goto label_2c6b54;
        }
    }
    ctx->pc = 0x2C6B48u;
    // 0x2c6b48: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c6b48u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6b4c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c6b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2c6b54:
    // 0x2c6b54: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2c6b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2c6b58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c6b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c6b5c:
    // 0x2c6b5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6b60:
    // 0x2c6b60: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c6b60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6b64: 0x0  nop
    ctx->pc = 0x2c6b64u;
    // NOP
    // 0x2c6b68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6B68u;
    {
        const bool branch_taken_0x2c6b68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B68u;
        // 0x2c6b6c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b68) {
            ctx->pc = 0x2C6B84u;
            goto label_2c6b84;
        }
    }
    ctx->pc = 0x2C6B70u;
    // 0x2c6b70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6b74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6B74u;
    {
        const bool branch_taken_0x2c6b74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6b74) {
            ctx->pc = 0x2C6B84u;
            goto label_2c6b84;
        }
    }
    ctx->pc = 0x2C6B7Cu;
    // 0x2c6b7c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c6b7cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6b80: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c6b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b84:
    // 0x2c6b84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c6b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c6b88: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2c6b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c6b8c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C6B8Cu;
    {
        const bool branch_taken_0x2c6b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B8Cu;
        // 0x2c6b90: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b8c) {
            ctx->pc = 0x2C6C5Cu;
            goto label_2c6c5c;
        }
    }
    ctx->pc = 0x2C6B94u;
label_2c6b94:
    // 0x2c6b94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c6b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b98:
    // 0x2c6b98: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c6b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b9c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c6b9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6ba0: 0x0  nop
    ctx->pc = 0x2c6ba0u;
    // NOP
    // 0x2c6ba4: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6BA4u;
    {
        const bool branch_taken_0x2c6ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6ba4) {
            ctx->pc = 0x2C6BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6BA4u;
            // 0x2c6ba8: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6BC8u;
            goto label_2c6bc8;
        }
    }
    ctx->pc = 0x2C6BACu;
    // 0x2c6bac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6bb0: 0x0  nop
    ctx->pc = 0x2c6bb0u;
    // NOP
    // 0x2c6bb4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6BB4u;
    {
        const bool branch_taken_0x2c6bb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6bb4) {
            ctx->pc = 0x2C6BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6BB4u;
            // 0x2c6bb8: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6BC8u;
            goto label_2c6bc8;
        }
    }
    ctx->pc = 0x2C6BBCu;
    // 0x2c6bbc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c6bbcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6bc0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c6bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bc4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2c6bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6bc8:
    // 0x2c6bc8: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c6bc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6bcc: 0x0  nop
    ctx->pc = 0x2c6bccu;
    // NOP
    // 0x2c6bd0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6BD0u;
    {
        const bool branch_taken_0x2c6bd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BD0u;
        // 0x2c6bd4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bd0) {
            ctx->pc = 0x2C6BF0u;
            goto label_2c6bf0;
        }
    }
    ctx->pc = 0x2C6BD8u;
    // 0x2c6bd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6bdc: 0x0  nop
    ctx->pc = 0x2c6bdcu;
    // NOP
    // 0x2c6be0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6BE0u;
    {
        const bool branch_taken_0x2c6be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6be0) {
            ctx->pc = 0x2C6BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6BE0u;
            // 0x2c6be4: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6BF4u;
            goto label_2c6bf4;
        }
    }
    ctx->pc = 0x2C6BE8u;
    // 0x2c6be8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c6be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c6becu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c6bf0:
    // 0x2c6bf0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c6bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6bf4:
    // 0x2c6bf4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c6bf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6bf8: 0x0  nop
    ctx->pc = 0x2c6bf8u;
    // NOP
    // 0x2c6bfc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6BFCu;
    {
        const bool branch_taken_0x2c6bfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BFCu;
        // 0x2c6c00: 0x24a20002  addiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bfc) {
            ctx->pc = 0x2C6C1Cu;
            goto label_2c6c1c;
        }
    }
    ctx->pc = 0x2C6C04u;
    // 0x2c6c04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6c08: 0x0  nop
    ctx->pc = 0x2c6c08u;
    // NOP
    // 0x2c6c0c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6C0Cu;
    {
        const bool branch_taken_0x2c6c0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6c0c) {
            ctx->pc = 0x2C6C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6C0Cu;
            // 0x2c6c10: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6C20u;
            goto label_2c6c20;
        }
    }
    ctx->pc = 0x2C6C14u;
    // 0x2c6c14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c6c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c18: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c6c18u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c6c1c:
    // 0x2c6c1c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2c6c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6c20:
    // 0x2c6c20: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c6c20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6c24: 0x0  nop
    ctx->pc = 0x2c6c24u;
    // NOP
    // 0x2c6c28: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6C28u;
    {
        const bool branch_taken_0x2c6c28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C28u;
        // 0x2c6c2c: 0x24a20003  addiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c28) {
            ctx->pc = 0x2C6C48u;
            goto label_2c6c48;
        }
    }
    ctx->pc = 0x2C6C30u;
    // 0x2c6c30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6c34: 0x0  nop
    ctx->pc = 0x2c6c34u;
    // NOP
    // 0x2c6c38: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6C38u;
    {
        const bool branch_taken_0x2c6c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6c38) {
            ctx->pc = 0x2C6C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6C38u;
            // 0x2c6c3c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6C4Cu;
            goto label_2c6c4c;
        }
    }
    ctx->pc = 0x2C6C40u;
    // 0x2c6c40: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c6c40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c44: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c6c44u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c6c48:
    // 0x2c6c48: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c6c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2c6c4c:
    // 0x2c6c4c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c6c50: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2c6c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c6c54: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2C6C54u;
    {
        const bool branch_taken_0x2c6c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C54u;
        // 0x2c6c58: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c54) {
            ctx->pc = 0x2C6B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6b98;
        }
    }
    ctx->pc = 0x2C6C5Cu;
label_2c6c5c:
    // 0x2c6c5c: 0x110600ca  beq         $t0, $a2, . + 4 + (0xCA << 2)
    ctx->pc = 0x2C6C5Cu;
    {
        const bool branch_taken_0x2c6c5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C5Cu;
        // 0x2c6c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c5c) {
            ctx->pc = 0x2C6F88u;
            goto label_2c6f88;
        }
    }
    ctx->pc = 0x2C6C64u;
    // 0x2c6c64: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2c6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2c6c68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c6c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c6c6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c6c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6c70: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x2c6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c6c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c78: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c6c78u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6c7c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c6c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c6c80: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2c6c80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c88:
    // 0x2c6c88: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2c6c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c6c8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6C8Cu;
    {
        const bool branch_taken_0x2c6c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C8Cu;
        // 0x2c6c90: 0x160482d  daddu       $t1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c8c) {
            ctx->pc = 0x2C6CD0u;
            goto label_2c6cd0;
        }
    }
    ctx->pc = 0x2C6C94u;
    // 0x2c6c94: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2c6c94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2c6c98: 0x166102b  sltu        $v0, $t3, $a2
    ctx->pc = 0x2c6c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c6c9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6C9Cu;
    {
        const bool branch_taken_0x2c6c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C9Cu;
        // 0x2c6ca0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c9c) {
            ctx->pc = 0x2C6CB4u;
            goto label_2c6cb4;
        }
    }
    ctx->pc = 0x2C6CA4u;
    // 0x2c6ca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c6ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ca8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2c6ca8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6CACu;
    {
        const bool branch_taken_0x2c6cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CACu;
        // 0x2c6cb0: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cac) {
            ctx->pc = 0x2C6CB8u;
            goto label_2c6cb8;
        }
    }
    ctx->pc = 0x2C6CB4u;
label_2c6cb4:
    // 0x2c6cb4: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x2c6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_2c6cb8:
    // 0x2c6cb8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cbc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c6cbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6cc0: 0x0  nop
    ctx->pc = 0x2c6cc0u;
    // NOP
    // 0x2c6cc4: 0x4501fff0  bc1t        . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C6CC4u;
    {
        const bool branch_taken_0x2c6cc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CC4u;
        // 0x2c6cc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cc4) {
            ctx->pc = 0x2C6C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6c88;
        }
    }
    ctx->pc = 0x2C6CCCu;
    // 0x2c6ccc: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x2c6cccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2c6cd0:
    // 0x2c6cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cd4: 0x96080  sll         $t4, $t1, 2
    ctx->pc = 0x2c6cd4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2c6cd8:
    // 0x2c6cd8: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2c6cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c6cdc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6CDCu;
    {
        const bool branch_taken_0x2c6cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6cdc) {
            ctx->pc = 0x2C6D20u;
            goto label_2c6d20;
        }
    }
    ctx->pc = 0x2C6CE4u;
    // 0x2c6ce4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2c6ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2c6ce8: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x2c6ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c6cec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6CECu;
    {
        const bool branch_taken_0x2c6cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CECu;
        // 0x2c6cf0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cec) {
            ctx->pc = 0x2C6D00u;
            goto label_2c6d00;
        }
    }
    ctx->pc = 0x2C6CF4u;
    // 0x2c6cf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c6cf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6CF8u;
    {
        const bool branch_taken_0x2c6cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CF8u;
        // 0x2c6cfc: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cf8) {
            ctx->pc = 0x2C6D04u;
            goto label_2c6d04;
        }
    }
    ctx->pc = 0x2C6D00u;
label_2c6d00:
    // 0x2c6d00: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2c6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_2c6d04:
    // 0x2c6d04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c6d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d08: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c6d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c6d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c6d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6d10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c6d10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6d14: 0x0  nop
    ctx->pc = 0x2c6d14u;
    // NOP
    // 0x2c6d18: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C6D18u;
    {
        const bool branch_taken_0x2c6d18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D18u;
        // 0x2c6d1c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d18) {
            ctx->pc = 0x2C6CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6cd8;
        }
    }
    ctx->pc = 0x2C6D20u;
label_2c6d20:
    // 0x2c6d20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c6d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c6d24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6d28: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2c6d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d30:
    // 0x2c6d30: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2c6d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c6d34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6D34u;
    {
        const bool branch_taken_0x2c6d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D34u;
        // 0x2c6d38: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d34) {
            ctx->pc = 0x2C6D68u;
            goto label_2c6d68;
        }
    }
    ctx->pc = 0x2C6D3Cu;
    // 0x2c6d3c: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6D3Cu;
    {
        const bool branch_taken_0x2c6d3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D3Cu;
        // 0x2c6d40: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d3c) {
            ctx->pc = 0x2C6D48u;
            goto label_2c6d48;
        }
    }
    ctx->pc = 0x2C6D44u;
    // 0x2c6d44: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x2c6d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2c6d48:
    // 0x2c6d48: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2c6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c6d4c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2c6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2c6d50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d54: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c6d54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6d58: 0x0  nop
    ctx->pc = 0x2c6d58u;
    // NOP
    // 0x2c6d5c: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x2C6D5Cu;
    {
        const bool branch_taken_0x2c6d5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D5Cu;
        // 0x2c6d60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d5c) {
            ctx->pc = 0x2C6D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6d30;
        }
    }
    ctx->pc = 0x2C6D64u;
    // 0x2c6d64: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2c6d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d68:
    // 0x2c6d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d6c: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2c6d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2c6d70:
    // 0x2c6d70: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2c6d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c6d74: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C6D74u;
    {
        const bool branch_taken_0x2c6d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6d74) {
            ctx->pc = 0x2C6D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6D74u;
            // 0x2c6d78: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6DB0u;
            goto label_2c6db0;
        }
    }
    ctx->pc = 0x2C6D7Cu;
    // 0x2c6d7c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6D7Cu;
    {
        const bool branch_taken_0x2c6d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D7Cu;
        // 0x2c6d80: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d7c) {
            ctx->pc = 0x2C6D88u;
            goto label_2c6d88;
        }
    }
    ctx->pc = 0x2C6D84u;
    // 0x2c6d84: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2c6d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2c6d88:
    // 0x2c6d88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6d8c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2c6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2c6d90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c6d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d94: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c6d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c6d98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c6d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6d9c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c6d9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6da0: 0x0  nop
    ctx->pc = 0x2c6da0u;
    // NOP
    // 0x2c6da4: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x2C6DA4u;
    {
        const bool branch_taken_0x2c6da4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DA4u;
        // 0x2c6da8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6da4) {
            ctx->pc = 0x2C6D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6d70;
        }
    }
    ctx->pc = 0x2C6DACu;
    // 0x2c6dac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2c6dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2c6db0:
    // 0x2c6db0: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x2c6db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c6db4: 0xe53018  mult        $a2, $a3, $a1
    ctx->pc = 0x2c6db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2c6db8: 0x1651818  mult        $v1, $t3, $a1
    ctx->pc = 0x2c6db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c6dbc: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2c6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2c6dc0: 0x6d2021  addu        $a0, $v1, $t5
    ctx->pc = 0x2c6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2c6dc4: 0xcd1821  addu        $v1, $a2, $t5
    ctx->pc = 0x2c6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x2c6dc8: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x2c6dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c6dcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6dd0: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2c6dd0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c6dd4: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x2c6dd4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6dd8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c6dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ddc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2c6ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6de0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c6de0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c6de4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c6de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c6de8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2c6de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6dec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6df0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6df0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6df4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c6df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6df8: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x2c6df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c6dfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6e00: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x2c6e00u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2c6e04: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x2c6e04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6e08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c6e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6e0c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2c6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6e10: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c6e10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c6e14: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2c6e14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6e18: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2c6e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6e1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6e20: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c6e20u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c6e24: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2c6e24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6e28: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x2c6e28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2c6e2c: 0x46070a02  mul.s       $f8, $f1, $f7
    ctx->pc = 0x2c6e2cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2c6e30: 0x46033242  mul.s       $f9, $f6, $f3
    ctx->pc = 0x2c6e30u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2c6e34: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2c6e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c6e38: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c6e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c6e3c: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x2c6e3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2c6e40: 0x46024a41  sub.s       $f9, $f9, $f2
    ctx->pc = 0x2c6e40u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x2c6e44: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2c6e44u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2c6e48: 0x46064201  sub.s       $f8, $f8, $f6
    ctx->pc = 0x2c6e48u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
    // 0x2c6e4c: 0xe7a90008  swc1        $f9, 0x8($sp)
    ctx->pc = 0x2c6e4cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6e50: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2c6e50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6e54: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x2c6e54u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6e58: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x2c6e58u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2c6e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6e60: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2c6e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2c6e64: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c6e64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c6e68: 0x1251018  mult        $v0, $t1, $a1
    ctx->pc = 0x2c6e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c6e6c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c6e6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c6e70: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x2c6e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c6e74: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c6e74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c6e78: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x2c6e78u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x2c6e7c: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x2c6e7cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2c6e80: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x2c6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2c6e84: 0x46094a42  mul.s       $f9, $f9, $f9
    ctx->pc = 0x2c6e84u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x2c6e88: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2c6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2c6e8c: 0x46043800  add.s       $f0, $f7, $f4
    ctx->pc = 0x2c6e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x2c6e90: 0x1652018  mult        $a0, $t3, $a1
    ctx->pc = 0x2c6e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c6e94: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x2c6e94u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x2c6e98: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6e9c: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x2c6e9cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2c6ea0: 0x8d2821  addu        $a1, $a0, $t5
    ctx->pc = 0x2c6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2c6ea4: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x2c6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2c6ea8: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x2c6ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2c6eac: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x2c6eacu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[0]);
    // 0x2c6eb0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2c6eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c6eb4: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x2c6eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c6eb8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ebc: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x2c6ebcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2c6ec0: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x2c6ec0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c6ec4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c6ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ec8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2c6ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6ecc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c6eccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c6ed0: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2c6ed0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c6ed4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c6ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6ed8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6edc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6edcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6ee0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2c6ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c6ee4: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x2c6ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c6ee8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6eec: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2c6eecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c6ef0: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x2c6ef0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c6ef4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ef8: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2c6ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6efc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c6efcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c6f00: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x2c6f00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c6f04: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2c6f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6f08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6f0c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c6f0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c6f10: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2c6f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c6f14: 0x46021942  mul.s       $f5, $f3, $f2
    ctx->pc = 0x2c6f14u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c6f18: 0x46060a02  mul.s       $f8, $f1, $f6
    ctx->pc = 0x2c6f18u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c6f1c: 0x46043a42  mul.s       $f9, $f7, $f4
    ctx->pc = 0x2c6f1cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2c6f20: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2c6f20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2c6f24: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c6f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c6f28: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x2c6f28u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2c6f2c: 0x46034a41  sub.s       $f9, $f9, $f3
    ctx->pc = 0x2c6f2cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x2c6f30: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2c6f30u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2c6f34: 0x46074201  sub.s       $f8, $f8, $f7
    ctx->pc = 0x2c6f34u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x2c6f38: 0xe7a90038  swc1        $f9, 0x38($sp)
    ctx->pc = 0x2c6f38u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c6f3c: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2c6f3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6f40: 0xe7a80034  swc1        $f8, 0x34($sp)
    ctx->pc = 0x2c6f40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6f44: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x2c6f44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2c6f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6f4c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c6f4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c6f50: 0x18a1821  addu        $v1, $t4, $t2
    ctx->pc = 0x2c6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2c6f54: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c6f54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c6f58: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c6f58u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c6f5c: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x2c6f5cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x2c6f60: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x2c6f60u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2c6f64: 0x46094a42  mul.s       $f9, $f9, $f9
    ctx->pc = 0x2c6f64u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x2c6f68: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x2c6f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2c6f6c: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x2c6f6cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x2c6f70: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6f74: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x2c6f74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2c6f78: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x2c6f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2c6f7c: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x2c6f7cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[0]);
    // 0x2c6f80: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c6f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c6f84: 0x0  nop
    ctx->pc = 0x2c6f84u;
    // NOP
label_2c6f88:
    // 0x2c6f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F88u;
        // 0x2c6f8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6F90u;
}
