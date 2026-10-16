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

// Function: sub_00105B48
// Address: 0x105b48 - 0x106178
void sub_00105B48_0x105b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105B48_0x105b48");
#endif

    switch (ctx->pc) {
        case 0x105be8u: goto label_105be8;
        case 0x105c50u: goto label_105c50;
        case 0x105c80u: goto label_105c80;
        case 0x105cb0u: goto label_105cb0;
        case 0x105d70u: goto label_105d70;
        case 0x105da0u: goto label_105da0;
        case 0x105e58u: goto label_105e58;
        case 0x105e90u: goto label_105e90;
        case 0x106058u: goto label_106058;
        case 0x106090u: goto label_106090;
        case 0x106114u: goto label_106114;
        default: break;
    }

    ctx->pc = 0x105b48u;

    // 0x105b48: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x105b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x105b4c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x105b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x105b50: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x105b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x105b54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x105b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x105b58: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x105b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x105b5c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x105b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x105b60: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x105b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x105b64: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x105b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x105b68: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x105b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x105b6c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x105b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x105b70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x105b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x105b74: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x105b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x105b78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x105b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x105b7c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x105b7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x105b80: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x105b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x105b84: 0x8c970018  lw          $s7, 0x18($a0)
    ctx->pc = 0x105b84u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x105b88: 0x8ca23860  lw          $v0, 0x3860($a1)
    ctx->pc = 0x105b88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3860u));
    // 0x105b8c: 0x8c64386c  lw          $a0, 0x386C($v1)
    ctx->pc = 0x105b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B386Cu));
    // 0x105b90: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x105b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x105b94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x105b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105b98: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x105b98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105b9c: 0x12600168  beqz        $s3, . + 4 + (0x168 << 2)
    ctx->pc = 0x105B9Cu;
    {
        const bool branch_taken_0x105b9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B9Cu;
        // 0x105ba0: 0x64a021  addu        $s4, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b9c) {
            ctx->pc = 0x106140u;
            goto label_106140;
        }
    }
    ctx->pc = 0x105BA4u;
    // 0x105ba4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x105ba8: 0x10400166  beqz        $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x105BA8u;
    {
        const bool branch_taken_0x105ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BA8u;
        // 0x105bac: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ba8) {
            ctx->pc = 0x106144u;
            goto label_106144;
        }
    }
    ctx->pc = 0x105BB0u;
    // 0x105bb0: 0x8ee2005c  lw          $v0, 0x5C($s7)
    ctx->pc = 0x105bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
    // 0x105bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105bb8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x105bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x105bbc: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x105bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x105bc0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x105bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x105bc4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x105bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x105bc8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x105bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x105bcc: 0x8ee60030  lw          $a2, 0x30($s7)
    ctx->pc = 0x105bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x105bd0: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x105bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x105bd4: 0x8ef20034  lw          $s2, 0x34($s7)
    ctx->pc = 0x105bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x105bd8: 0x10600159  beqz        $v1, . + 4 + (0x159 << 2)
    ctx->pc = 0x105BD8u;
    {
        const bool branch_taken_0x105bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BD8u;
        // 0x105bdc: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bd8) {
            ctx->pc = 0x106140u;
            goto label_106140;
        }
    }
    ctx->pc = 0x105BE0u;
    // 0x105be0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x105be4: 0x0  nop
    ctx->pc = 0x105be4u;
    // NOP
label_105be8:
    // 0x105be8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x105be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x105bec: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x105becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x105bf0: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x105bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x105bf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x105bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105bf8: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x105bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x105bfc: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x105bfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x105c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x105c04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x105c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105c08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x105c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105c0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105c0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105c10: 0x0  nop
    ctx->pc = 0x105c10u;
    // NOP
    // 0x105c14: 0x45030140  bc1tl       . + 4 + (0x140 << 2)
    ctx->pc = 0x105C14u;
    {
        const bool branch_taken_0x105c14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105c14) {
            ctx->pc = 0x105C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105C14u;
            // 0x105c18: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106118u;
            goto label_106118;
        }
    }
    ctx->pc = 0x105C1Cu;
    // 0x105c1c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x105c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x105c20: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x105c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x105c24: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x105c24u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x105c28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x105c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c2c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x105c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105c30: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x105c30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x105c34: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x105c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x105c38: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x105c38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x105c3c: 0x8e360024  lw          $s6, 0x24($s1)
    ctx->pc = 0x105c3cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x105c40: 0x8e3e0028  lw          $fp, 0x28($s1)
    ctx->pc = 0x105c40u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x105c44: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x105c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x105c48: 0xc095988  jal         func_256620
    ctx->pc = 0x105C48u;
    SET_GPR_U32(ctx, 31, 0x105C50u);
    ctx->pc = 0x105C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C48u;
    // 0x105c4c: 0x7faf0020  sq          $t7, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x105C48u, 0x105C50u)) {
        return;
    }
    ctx->pc = 0x105C50u;
label_105c50:
    // 0x105c50: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x105c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x105c54: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x105c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x105c58: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x105C58u;
    {
        const bool branch_taken_0x105c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C58u;
        // 0x105c5c: 0x7baf0020  lq          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c58) {
            ctx->pc = 0x105D40u;
            goto label_105d40;
        }
    }
    ctx->pc = 0x105C60u;
    // 0x105c60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x105c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105c64: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x105c64u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105c68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c6c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x105C6Cu;
    {
        const bool branch_taken_0x105c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C6Cu;
        // 0x105c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c6c) {
            ctx->pc = 0x105D40u;
            goto label_105d40;
        }
    }
    ctx->pc = 0x105C74u;
    // 0x105c74: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x105c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x105c78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105c80:
    // 0x105c80: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x105c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x105c84: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x105c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105c88: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x105c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x105c8c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x105C8Cu;
    {
        const bool branch_taken_0x105c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C8Cu;
        // 0x105c90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c8c) {
            ctx->pc = 0x105D24u;
            goto label_105d24;
        }
    }
    ctx->pc = 0x105C94u;
    // 0x105c94: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x105c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x105c98: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x105C98u;
    {
        const bool branch_taken_0x105c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C98u;
        // 0x105c9c: 0x252b0001  addiu       $t3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c98) {
            ctx->pc = 0x105D30u;
            goto label_105d30;
        }
    }
    ctx->pc = 0x105CA0u;
    // 0x105ca0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x105ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105ca4: 0xd22821  addu        $a1, $a2, $s2
    ctx->pc = 0x105ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x105ca8: 0x400013  mtlo        $v0
    ctx->pc = 0x105ca8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x105cac: 0x71872000  madd        $a0, $t4, $a3
    ctx->pc = 0x105cacu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_105cb0:
    // 0x105cb0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x105cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105cb4: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x105cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x105cb8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x105cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105cbc: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x105cbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x105cc0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x105cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x105cc4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x105cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105cc8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x105cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105ccc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x105cccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x105cd0: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x105cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x105cd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x105cd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105cd8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x105cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x105cdc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x105cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105ce0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x105ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x105ce4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x105ce4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x105ce8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x105ce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x105cec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x105cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105cf0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x105cf4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x105cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x105cf8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x105cf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x105cfc: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x105cfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x105d00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105d04: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x105d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x105d08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x105d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105d0c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x105d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x105d10: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x105d10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x105d14: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x105D14u;
    {
        const bool branch_taken_0x105d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D14u;
        // 0x105d18: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d14) {
            ctx->pc = 0x105CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105cb0;
        }
    }
    ctx->pc = 0x105D1Cu;
    // 0x105d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x105D1Cu;
    {
        const bool branch_taken_0x105d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D1Cu;
        // 0x105d20: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d1c) {
            ctx->pc = 0x105D30u;
            goto label_105d30;
        }
    }
    ctx->pc = 0x105D24u;
label_105d24:
    // 0x105d24: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x105d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x105d28: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x105d28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x105d2c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x105d2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_105d30:
    // 0x105d30: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x105d30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d34: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x105d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x105d38: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x105D38u;
    {
        const bool branch_taken_0x105d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105d38) {
            ctx->pc = 0x105D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105D38u;
            // 0x105d3c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105c80;
        }
    }
    ctx->pc = 0x105D40u;
label_105d40:
    // 0x105d40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x105d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x105d44: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x105d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x105d48: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x105D48u;
    {
        const bool branch_taken_0x105d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105d48) {
            ctx->pc = 0x105D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105D48u;
            // 0x105d4c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E34u;
            goto label_105e34;
        }
    }
    ctx->pc = 0x105D50u;
    // 0x105d50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x105d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105d54: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x105d54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105d58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d5c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x105D5Cu;
    {
        const bool branch_taken_0x105d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D5Cu;
        // 0x105d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d5c) {
            ctx->pc = 0x105E30u;
            goto label_105e30;
        }
    }
    ctx->pc = 0x105D64u;
    // 0x105d64: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x105d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x105d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105d70:
    // 0x105d70: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x105d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x105d74: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x105d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105d78: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x105d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x105d7c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x105D7Cu;
    {
        const bool branch_taken_0x105d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D7Cu;
        // 0x105d80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d7c) {
            ctx->pc = 0x105E14u;
            goto label_105e14;
        }
    }
    ctx->pc = 0x105D84u;
    // 0x105d84: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x105d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x105d88: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x105D88u;
    {
        const bool branch_taken_0x105d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D88u;
        // 0x105d8c: 0x252b0001  addiu       $t3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d88) {
            ctx->pc = 0x105E20u;
            goto label_105e20;
        }
    }
    ctx->pc = 0x105D90u;
    // 0x105d90: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x105d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105d94: 0xd62821  addu        $a1, $a2, $s6
    ctx->pc = 0x105d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x105d98: 0x400013  mtlo        $v0
    ctx->pc = 0x105d98u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x105d9c: 0x71872000  madd        $a0, $t4, $a3
    ctx->pc = 0x105d9cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_105da0:
    // 0x105da0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x105da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105da4: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x105da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x105da8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x105da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105dac: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x105dacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x105db0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x105db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x105db4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x105db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105db8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x105db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105dbc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x105dbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x105dc0: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x105dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x105dc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x105dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105dc8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x105dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x105dcc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x105dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105dd0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x105dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x105dd4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x105dd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x105dd8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x105dd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x105ddc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x105ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105de0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x105de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x105de4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x105de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x105de8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x105de8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x105dec: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x105decu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x105df0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105df4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x105df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x105df8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x105df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105dfc: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x105dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x105e00: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x105e00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x105e04: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x105E04u;
    {
        const bool branch_taken_0x105e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E04u;
        // 0x105e08: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e04) {
            ctx->pc = 0x105DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105da0;
        }
    }
    ctx->pc = 0x105E0Cu;
    // 0x105e0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x105E0Cu;
    {
        const bool branch_taken_0x105e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E0Cu;
        // 0x105e10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e0c) {
            ctx->pc = 0x105E20u;
            goto label_105e20;
        }
    }
    ctx->pc = 0x105E14u;
label_105e14:
    // 0x105e14: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x105e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x105e18: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x105e18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x105e1c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x105e1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_105e20:
    // 0x105e20: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x105e20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e24: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x105e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x105e28: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x105E28u;
    {
        const bool branch_taken_0x105e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105e28) {
            ctx->pc = 0x105E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E28u;
            // 0x105e2c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105d70;
        }
    }
    ctx->pc = 0x105E30u;
label_105e30:
    // 0x105e30: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x105e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_105e34:
    // 0x105e34: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x105e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x105e38: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x105E38u;
    {
        const bool branch_taken_0x105e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E38u;
        // 0x105e3c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e38) {
            ctx->pc = 0x10602Cu;
            goto label_10602c;
        }
    }
    ctx->pc = 0x105E40u;
    // 0x105e40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x105e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105e44: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x105e44u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e4c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x105E4Cu;
    {
        const bool branch_taken_0x105e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E4Cu;
        // 0x105e50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e4c) {
            ctx->pc = 0x10602Cu;
            goto label_10602c;
        }
    }
    ctx->pc = 0x105E54u;
    // 0x105e54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105e58:
    // 0x105e58: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x105e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x105e5c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x105e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105e60: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x105e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x105e64: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x105E64u;
    {
        const bool branch_taken_0x105e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E64u;
        // 0x105e68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e64) {
            ctx->pc = 0x106010u;
            goto label_106010;
        }
    }
    ctx->pc = 0x105E6Cu;
    // 0x105e6c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x105e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x105e70: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x105E70u;
    {
        const bool branch_taken_0x105e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E70u;
        // 0x105e74: 0x252b0001  addiu       $t3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e70) {
            ctx->pc = 0x10601Cu;
            goto label_10601c;
        }
    }
    ctx->pc = 0x105E78u;
    // 0x105e78: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x105e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x105e7c: 0xe1080  sll         $v0, $t6, 2
    ctx->pc = 0x105e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x105e80: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x105e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x105e84: 0x5e4021  addu        $t0, $v0, $fp
    ctx->pc = 0x105e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x105e88: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x105e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x105e8c: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x105e8cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_105e90:
    // 0x105e90: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x105e90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x105e94: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x105e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x105e98: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x105e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x105e9c: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x105e9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x105ea0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x105ea0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105ea4: 0x0  nop
    ctx->pc = 0x105ea4u;
    // NOP
    // 0x105ea8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105eac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x105eb0: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x105eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x105eb4: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x105eb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x105eb8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x105eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105ebc: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x105ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x105ec0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x105ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105ec4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x105ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x105ec8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x105ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x105ecc: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x105eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x105ed0: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x105ed0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x105ed4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x105ed4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x105ed8: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x105ed8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x105edc: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105edcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x105ee0: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x105ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x105ee4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x105ee8: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x105ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x105eec: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x105eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x105ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x105ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105ef4: 0x0  nop
    ctx->pc = 0x105ef4u;
    // NOP
    // 0x105ef8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105efc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x105efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x105f00: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x105f04: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x105f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x105f08: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x105f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105f0c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x105f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x105f10: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x105f10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x105f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x105f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105f18: 0x0  nop
    ctx->pc = 0x105f18u;
    // NOP
    // 0x105f1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105f20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x105f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x105f24: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105f24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x105f28: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x105f28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x105f2c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x105f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x105f30: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x105f30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x105f34: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x105f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x105f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x105f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105f3c: 0x0  nop
    ctx->pc = 0x105f3cu;
    // NOP
    // 0x105f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105f44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x105f44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x105f48: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x105f4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x105f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x105f50: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x105f50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x105f54: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x105f54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x105f58: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x105f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x105f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x105f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105f60: 0x0  nop
    ctx->pc = 0x105f60u;
    // NOP
    // 0x105f64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105f68: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x105f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x105f6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105f6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x105f70: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x105f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x105f74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x105f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x105f78: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x105f78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x105f7c: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x105f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x105f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x105f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105f84: 0x0  nop
    ctx->pc = 0x105f84u;
    // NOP
    // 0x105f88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105f8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x105f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x105f90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105f90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x105f94: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x105f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x105f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x105f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105f9c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x105f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x105fa0: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x105fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x105fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x105fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105fa8: 0x0  nop
    ctx->pc = 0x105fa8u;
    // NOP
    // 0x105fac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105fb0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x105fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x105fb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x105fb8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x105fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x105fbc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x105fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x105fc0: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x105fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x105fc4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x105fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x105fc8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x105fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x105fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x105fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105fd0: 0x0  nop
    ctx->pc = 0x105fd0u;
    // NOP
    // 0x105fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105fd8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x105fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x105fdc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105fdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x105fe0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x105fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x105fe4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x105fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x105fe8: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x105fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x105fec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105ff0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x105ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x105ff4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x105ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105ff8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x105ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x105ffc: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x105ffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x106000: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
    ctx->pc = 0x106000u;
    {
        const bool branch_taken_0x106000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106000u;
        // 0x106004: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106000) {
            ctx->pc = 0x105E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105e90;
        }
    }
    ctx->pc = 0x106008u;
    // 0x106008: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x106008u;
    {
        const bool branch_taken_0x106008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106008u;
        // 0x10600c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106008) {
            ctx->pc = 0x10601Cu;
            goto label_10601c;
        }
    }
    ctx->pc = 0x106010u;
label_106010:
    // 0x106010: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x106010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x106014: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x106014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x106018: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x106018u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_10601c:
    // 0x10601c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x10601cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106020: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x106020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x106024: 0x5440ff8c  bnel        $v0, $zero, . + 4 + (-0x74 << 2)
    ctx->pc = 0x106024u;
    {
        const bool branch_taken_0x106024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106024) {
            ctx->pc = 0x106028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106024u;
            // 0x106028: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105e58;
        }
    }
    ctx->pc = 0x10602Cu;
label_10602c:
    // 0x10602c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106030: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x106030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x106034: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x106034u;
    {
        const bool branch_taken_0x106034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106034u;
        // 0x106038: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106034) {
            ctx->pc = 0x10610Cu;
            goto label_10610c;
        }
    }
    ctx->pc = 0x10603Cu;
    // 0x10603c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x106040: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x106040u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106044: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106048: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x106048u;
    {
        const bool branch_taken_0x106048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106048u;
        // 0x10604c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106048) {
            ctx->pc = 0x10610Cu;
            goto label_10610c;
        }
    }
    ctx->pc = 0x106050u;
    // 0x106050: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106054: 0x0  nop
    ctx->pc = 0x106054u;
    // NOP
label_106058:
    // 0x106058: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x106058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x10605c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x10605cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106060: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x106060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x106064: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x106064u;
    {
        const bool branch_taken_0x106064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106064u;
        // 0x106068: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106064) {
            ctx->pc = 0x1060F0u;
            goto label_1060f0;
        }
    }
    ctx->pc = 0x10606Cu;
    // 0x10606c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x10606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x106070: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x106070u;
    {
        const bool branch_taken_0x106070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106070u;
        // 0x106074: 0x252b0001  addiu       $t3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106070) {
            ctx->pc = 0x1060FCu;
            goto label_1060fc;
        }
    }
    ctx->pc = 0x106078u;
    // 0x106078: 0xe10c0  sll         $v0, $t6, 3
    ctx->pc = 0x106078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x10607c: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x10607cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x106080: 0x4f2821  addu        $a1, $v0, $t7
    ctx->pc = 0x106080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x106084: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106088: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x106088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10608c: 0x0  nop
    ctx->pc = 0x10608cu;
    // NOP
label_106090:
    // 0x106090: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x106090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106094: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x106094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x106098: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x106098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10609c: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x10609cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1060a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1060a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1060a4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1060a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1060a8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1060a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1060ac: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1060acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1060b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1060b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1060b4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1060b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1060b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1060b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1060bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1060bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1060c0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1060c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1060c4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1060c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1060c8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1060c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1060cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1060ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1060d0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1060d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1060d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1060d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1060d8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1060d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1060dc: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x1060dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1060e0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1060E0u;
    {
        const bool branch_taken_0x1060e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1060E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060E0u;
        // 0x1060e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060e0) {
            ctx->pc = 0x106090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106090;
        }
    }
    ctx->pc = 0x1060E8u;
    // 0x1060e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1060E8u;
    {
        const bool branch_taken_0x1060e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060E8u;
        // 0x1060ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060e8) {
            ctx->pc = 0x1060FCu;
            goto label_1060fc;
        }
    }
    ctx->pc = 0x1060F0u;
label_1060f0:
    // 0x1060f0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1060f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1060f4: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x1060f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1060f8: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x1060f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_1060fc:
    // 0x1060fc: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1060fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106100: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x106100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x106104: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x106104u;
    {
        const bool branch_taken_0x106104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106104) {
            ctx->pc = 0x106108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106104u;
            // 0x106108: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106058;
        }
    }
    ctx->pc = 0x10610Cu;
label_10610c:
    // 0x10610c: 0xc09599c  jal         func_256670
    ctx->pc = 0x10610Cu;
    SET_GPR_U32(ctx, 31, 0x106114u);
    ctx->pc = 0x106110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10610Cu;
    // 0x106110: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x10610Cu, 0x106114u)) {
        return;
    }
    ctx->pc = 0x106114u;
label_106114:
    // 0x106114: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x106114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_106118:
    // 0x106118: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x106118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10611c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x10611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x106120: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x106120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x106124: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x106124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106128: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x106128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x10612c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x10612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x106130: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106134: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x106134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106138: 0x5440feab  bnel        $v0, $zero, . + 4 + (-0x155 << 2)
    ctx->pc = 0x106138u;
    {
        const bool branch_taken_0x106138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106138) {
            ctx->pc = 0x10613Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106138u;
            // 0x10613c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105be8;
        }
    }
    ctx->pc = 0x106140u;
label_106140:
    // 0x106140: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x106140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106144:
    // 0x106144: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x106144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x106148: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x106148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10614c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x10614cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106150: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x106150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106154: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x106154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106158: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x106158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10615c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x10615cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106160: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x106160u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106164: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x106164u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x106168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10616c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x10616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x106170: 0x3e00008  jr          $ra
    ctx->pc = 0x106170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106170u;
        // 0x106174: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106178u;
}
