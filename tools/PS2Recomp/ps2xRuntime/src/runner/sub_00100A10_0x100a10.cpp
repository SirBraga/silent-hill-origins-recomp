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

// Function: sub_00100A10
// Address: 0x100a10 - 0x100e50
void sub_00100A10_0x100a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100A10_0x100a10");
#endif

    switch (ctx->pc) {
        case 0x100a80u: goto label_100a80;
        case 0x100bc8u: goto label_100bc8;
        case 0x100bd8u: goto label_100bd8;
        case 0x100c18u: goto label_100c18;
        case 0x100c4cu: goto label_100c4c;
        case 0x100c88u: goto label_100c88;
        case 0x100ca4u: goto label_100ca4;
        case 0x100cb4u: goto label_100cb4;
        case 0x100df4u: goto label_100df4;
        case 0x100e04u: goto label_100e04;
        default: break;
    }

    ctx->pc = 0x100a10u;

    // 0x100a10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x100a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x100a14: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x100a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x100a18: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x100a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x100a1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100a20: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x100a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x100a24: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x100a24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x100a28: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x100a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x100a2c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x100a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x100a30: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x100a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x100a34: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x100a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x100a38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x100a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x100a40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x100a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a44: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x100a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x100a48: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x100a48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a4c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x100a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x100a50: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x100a50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a54: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x100a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x100a58: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x100a58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100a60: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x100a60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a64: 0x45000067  bc1f        . + 4 + (0x67 << 2)
    ctx->pc = 0x100A64u;
    {
        const bool branch_taken_0x100a64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x100A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A64u;
        // 0x100a68: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a64) {
            ctx->pc = 0x100C04u;
            goto label_100c04;
        }
    }
    ctx->pc = 0x100A6Cu;
    // 0x100a6c: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x100a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x100a70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x100A70u;
    {
        const bool branch_taken_0x100a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a70) {
            ctx->pc = 0x100A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100A70u;
            // 0x100a74: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100A84u;
            goto label_100a84;
        }
    }
    ctx->pc = 0x100A78u;
    // 0x100a78: 0xc04056e  jal         func_1015B8
    ctx->pc = 0x100A78u;
    SET_GPR_U32(ctx, 31, 0x100A80u);
    ctx->pc = 0x1015B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1015B8u, 0x100A78u, 0x100A80u)) {
        return;
    }
    ctx->pc = 0x100A80u;
label_100a80:
    // 0x100a80: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x100a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_100a84:
    // 0x100a84: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x100a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x100a88: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x100a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x100a8c: 0x8e0601d0  lw          $a2, 0x1D0($s0)
    ctx->pc = 0x100a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x100a90: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x100a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x100a94: 0xae1201a0  sw          $s2, 0x1A0($s0)
    ctx->pc = 0x100a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 18));
    // 0x100a98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x100a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x100a9c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x100a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x100aa0: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x100aa4: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x100aa8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x100aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x100aac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x100aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x100ab0: 0xae0401a4  sw          $a0, 0x1A4($s0)
    ctx->pc = 0x100ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 4));
    // 0x100ab4: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x100ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x100ab8: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x100ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x100abc: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x100abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x100ac0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x100AC0u;
    {
        const bool branch_taken_0x100ac0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x100AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AC0u;
        // 0x100ac4: 0xae030180  sw          $v1, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ac0) {
            ctx->pc = 0x100AD0u;
            goto label_100ad0;
        }
    }
    ctx->pc = 0x100AC8u;
    // 0x100ac8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x100acc: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x100accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
label_100ad0:
    // 0x100ad0: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100ad4: 0xac73002c  sw          $s3, 0x2C($v1)
    ctx->pc = 0x100ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 19));
    // 0x100ad8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100adc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x100adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x100ae0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x100ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x100ae4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x100ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x100ae8: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100aec: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x100aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x100af0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x100af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x100af4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x100af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x100af8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x100af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x100afc: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100b00: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x100b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x100b04: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100b08: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x100b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x100b0c: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100b10: 0xac540030  sw          $s4, 0x30($v0)
    ctx->pc = 0x100b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 20));
    // 0x100b14: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100b18: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x100B18u;
    {
        const bool branch_taken_0x100b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B18u;
        // 0x100b1c: 0xac710034  sw          $s1, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b18) {
            ctx->pc = 0x100BA4u;
            goto label_100ba4;
        }
    }
    ctx->pc = 0x100B20u;
    // 0x100b20: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x100b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x100b24: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x100b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x100b28: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x100b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x100b2c: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x100b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x100b30: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x100b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x100b34: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x100b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x100b38: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x100b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x100b3c: 0x6846002f  ldl         $a2, 0x2F($v0)
    ctx->pc = 0x100b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x100b40: 0x6c460028  ldr         $a2, 0x28($v0)
    ctx->pc = 0x100b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x100b44: 0xb20302c7  sdl         $v1, 0x2C7($s0)
    ctx->pc = 0x100b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b48: 0xb60302c0  sdr         $v1, 0x2C0($s0)
    ctx->pc = 0x100b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b4c: 0xb20402cf  sdl         $a0, 0x2CF($s0)
    ctx->pc = 0x100b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b50: 0xb60402c8  sdr         $a0, 0x2C8($s0)
    ctx->pc = 0x100b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 712); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b54: 0xb20502d7  sdl         $a1, 0x2D7($s0)
    ctx->pc = 0x100b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b58: 0xb60502d0  sdr         $a1, 0x2D0($s0)
    ctx->pc = 0x100b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b5c: 0xb20602df  sdl         $a2, 0x2DF($s0)
    ctx->pc = 0x100b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 735); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b60: 0xb60602d8  sdr         $a2, 0x2D8($s0)
    ctx->pc = 0x100b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b64: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x100b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x100b68: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x100b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x100b6c: 0x6844003f  ldl         $a0, 0x3F($v0)
    ctx->pc = 0x100b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x100b70: 0x6c440038  ldr         $a0, 0x38($v0)
    ctx->pc = 0x100b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x100b74: 0x68450047  ldl         $a1, 0x47($v0)
    ctx->pc = 0x100b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x100b78: 0x6c450040  ldr         $a1, 0x40($v0)
    ctx->pc = 0x100b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x100b7c: 0x6846004f  ldl         $a2, 0x4F($v0)
    ctx->pc = 0x100b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x100b80: 0x6c460048  ldr         $a2, 0x48($v0)
    ctx->pc = 0x100b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x100b84: 0xb20302e7  sdl         $v1, 0x2E7($s0)
    ctx->pc = 0x100b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b88: 0xb60302e0  sdr         $v1, 0x2E0($s0)
    ctx->pc = 0x100b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b8c: 0xb20402ef  sdl         $a0, 0x2EF($s0)
    ctx->pc = 0x100b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b90: 0xb60402e8  sdr         $a0, 0x2E8($s0)
    ctx->pc = 0x100b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b94: 0xb20502f7  sdl         $a1, 0x2F7($s0)
    ctx->pc = 0x100b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b98: 0xb60502f0  sdr         $a1, 0x2F0($s0)
    ctx->pc = 0x100b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 752); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100b9c: 0xb20602ff  sdl         $a2, 0x2FF($s0)
    ctx->pc = 0x100b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100ba0: 0xb60602f8  sdr         $a2, 0x2F8($s0)
    ctx->pc = 0x100ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 760); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_100ba4:
    // 0x100ba4: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x100ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x100ba8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x100ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x100bac: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x100bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100bb0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x100bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x100bb4: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x100bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100bb8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x100bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x100bbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x100bc0: 0xc09d55c  jal         func_275570
    ctx->pc = 0x100BC0u;
    SET_GPR_U32(ctx, 31, 0x100BC8u);
    ctx->pc = 0x100BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BC0u;
    // 0x100bc4: 0x8c650024  lw          $a1, 0x24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x100BC0u, 0x100BC8u)) {
        return;
    }
    ctx->pc = 0x100BC8u;
label_100bc8:
    // 0x100bc8: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x100bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100bcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x100bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x100bd0: 0xc09d926  jal         func_276498
    ctx->pc = 0x100BD0u;
    SET_GPR_U32(ctx, 31, 0x100BD8u);
    ctx->pc = 0x100BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BD0u;
    // 0x100bd4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x100BD0u, 0x100BD8u)) {
        return;
    }
    ctx->pc = 0x100BD8u;
label_100bd8:
    // 0x100bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100bdc: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100be0: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x100be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x100be4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x100be8: 0xae1501e0  sw          $s5, 0x1E0($s0)
    ctx->pc = 0x100be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 21));
    // 0x100bec: 0xae040198  sw          $a0, 0x198($s0)
    ctx->pc = 0x100becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 4));
    // 0x100bf0: 0xae0302a8  sw          $v1, 0x2A8($s0)
    ctx->pc = 0x100bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
    // 0x100bf4: 0x16c00089  bnez        $s6, . + 4 + (0x89 << 2)
    ctx->pc = 0x100BF4u;
    {
        const bool branch_taken_0x100bf4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x100BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BF4u;
        // 0x100bf8: 0xae0301c8  sw          $v1, 0x1C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bf4) {
            ctx->pc = 0x100E1Cu;
            goto label_100e1c;
        }
    }
    ctx->pc = 0x100BFCu;
    // 0x100bfc: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x100BFCu;
    {
        const bool branch_taken_0x100bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BFCu;
        // 0x100c00: 0xae0002a4  sw          $zero, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bfc) {
            ctx->pc = 0x100E1Cu;
            goto label_100e1c;
        }
    }
    ctx->pc = 0x100C04u;
label_100c04:
    // 0x100c04: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x100c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x100c08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100C08u;
    {
        const bool branch_taken_0x100c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100c08) {
            ctx->pc = 0x100C18u;
            goto label_100c18;
        }
    }
    ctx->pc = 0x100C10u;
    // 0x100c10: 0xc04056e  jal         func_1015B8
    ctx->pc = 0x100C10u;
    SET_GPR_U32(ctx, 31, 0x100C18u);
    ctx->pc = 0x100C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C10u;
    // 0x100c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1015B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1015B8u, 0x100C10u, 0x100C18u)) {
        return;
    }
    ctx->pc = 0x100C18u;
label_100c18:
    // 0x100c18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x100c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x100c1c: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x100c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x100c20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x100c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x100c24: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x100C24u;
    {
        const bool branch_taken_0x100c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x100c24) {
            ctx->pc = 0x100CACu;
            goto label_100cac;
        }
    }
    ctx->pc = 0x100C2Cu;
    // 0x100c2c: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x100c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x100c30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x100C30u;
    {
        const bool branch_taken_0x100c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C30u;
        // 0x100c34: 0xae0301a0  sw          $v1, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c30) {
            ctx->pc = 0x100C90u;
            goto label_100c90;
        }
    }
    ctx->pc = 0x100C38u;
    // 0x100c38: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x100c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100c3c: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100c40: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x100c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x100c44: 0xc09d918  jal         func_276460
    ctx->pc = 0x100C44u;
    SET_GPR_U32(ctx, 31, 0x100C4Cu);
    ctx->pc = 0x100C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C44u;
    // 0x100c48: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x100C44u, 0x100C4Cu)) {
        return;
    }
    ctx->pc = 0x100C4Cu;
label_100c4c:
    // 0x100c4c: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100c50: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x100c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x100c54: 0x8c670028  lw          $a3, 0x28($v1)
    ctx->pc = 0x100c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x100c58: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100c5c: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x100c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x100c60: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x100c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x100c64: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x100c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x100c68: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x100c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x100c6c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x100c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x100c70: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x100c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100c74: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x100c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100c78: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x100c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x100c7c: 0x3012  mflo        $a2
    ctx->pc = 0x100c7cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x100c80: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x100C80u;
    SET_GPR_U32(ctx, 31, 0x100C88u);
    ctx->pc = 0x100C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C80u;
    // 0x100c84: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x100C80u, 0x100C88u)) {
        return;
    }
    ctx->pc = 0x100C88u;
label_100c88:
    // 0x100c88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x100C88u;
    {
        const bool branch_taken_0x100c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C88u;
        // 0x100c8c: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c88) {
            ctx->pc = 0x100CB8u;
            goto label_100cb8;
        }
    }
    ctx->pc = 0x100C90u;
label_100c90:
    // 0x100c90: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100c94: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x100c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x100c98: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x100c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x100c9c: 0xc09d918  jal         func_276460
    ctx->pc = 0x100C9Cu;
    SET_GPR_U32(ctx, 31, 0x100CA4u);
    ctx->pc = 0x100CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C9Cu;
    // 0x100ca0: 0x8c650028  lw          $a1, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x100C9Cu, 0x100CA4u)) {
        return;
    }
    ctx->pc = 0x100CA4u;
label_100ca4:
    // 0x100ca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x100CA4u;
    {
        const bool branch_taken_0x100ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CA4u;
        // 0x100ca8: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ca4) {
            ctx->pc = 0x100CB8u;
            goto label_100cb8;
        }
    }
    ctx->pc = 0x100CACu;
label_100cac:
    // 0x100cac: 0xc040896  jal         func_102258
    ctx->pc = 0x100CACu;
    SET_GPR_U32(ctx, 31, 0x100CB4u);
    ctx->pc = 0x100CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CACu;
    // 0x100cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102258u, 0x100CACu, 0x100CB4u)) {
        return;
    }
    ctx->pc = 0x100CB4u;
label_100cb4:
    // 0x100cb4: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x100cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_100cb8:
    // 0x100cb8: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x100cbc: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x100cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x100cc0: 0xae1201a4  sw          $s2, 0x1A4($s0)
    ctx->pc = 0x100cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 18));
    // 0x100cc4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x100cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x100cc8: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x100cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x100ccc: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x100cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x100cd0: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x100cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x100cd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x100cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x100cd8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x100cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x100cdc: 0xe61401b4  swc1        $f20, 0x1B4($s0)
    ctx->pc = 0x100cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
    // 0x100ce0: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x100ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x100ce4: 0xe61401b0  swc1        $f20, 0x1B0($s0)
    ctx->pc = 0x100ce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x100ce8: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x100ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x100cec: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100CECu;
    {
        const bool branch_taken_0x100cec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x100CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CECu;
        // 0x100cf0: 0xae030180  sw          $v1, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cec) {
            ctx->pc = 0x100CFCu;
            goto label_100cfc;
        }
    }
    ctx->pc = 0x100CF4u;
    // 0x100cf4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x100cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x100cf8: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x100cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
label_100cfc:
    // 0x100cfc: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100d00: 0xac73002c  sw          $s3, 0x2C($v1)
    ctx->pc = 0x100d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 19));
    // 0x100d04: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100d08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x100d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x100d0c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x100d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x100d10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x100d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x100d14: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100d18: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x100d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x100d1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x100d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x100d20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x100d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x100d24: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x100d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x100d28: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100d2c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x100d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x100d30: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100d34: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x100d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x100d38: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100d3c: 0xac540030  sw          $s4, 0x30($v0)
    ctx->pc = 0x100d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 20));
    // 0x100d40: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100d44: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x100D44u;
    {
        const bool branch_taken_0x100d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D44u;
        // 0x100d48: 0xac710034  sw          $s1, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d44) {
            ctx->pc = 0x100DD0u;
            goto label_100dd0;
        }
    }
    ctx->pc = 0x100D4Cu;
    // 0x100d4c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x100d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x100d50: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x100d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x100d54: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x100d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x100d58: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x100d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x100d5c: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x100d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x100d60: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x100d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x100d64: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x100d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x100d68: 0x6846002f  ldl         $a2, 0x2F($v0)
    ctx->pc = 0x100d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x100d6c: 0x6c460028  ldr         $a2, 0x28($v0)
    ctx->pc = 0x100d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x100d70: 0xb20302c7  sdl         $v1, 0x2C7($s0)
    ctx->pc = 0x100d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100d74: 0xb60302c0  sdr         $v1, 0x2C0($s0)
    ctx->pc = 0x100d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100d78: 0xb20402cf  sdl         $a0, 0x2CF($s0)
    ctx->pc = 0x100d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100d7c: 0xb60402c8  sdr         $a0, 0x2C8($s0)
    ctx->pc = 0x100d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 712); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100d80: 0xb20502d7  sdl         $a1, 0x2D7($s0)
    ctx->pc = 0x100d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100d84: 0xb60502d0  sdr         $a1, 0x2D0($s0)
    ctx->pc = 0x100d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100d88: 0xb20602df  sdl         $a2, 0x2DF($s0)
    ctx->pc = 0x100d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 735); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100d8c: 0xb60602d8  sdr         $a2, 0x2D8($s0)
    ctx->pc = 0x100d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100d90: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x100d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x100d94: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x100d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x100d98: 0x6844003f  ldl         $a0, 0x3F($v0)
    ctx->pc = 0x100d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x100d9c: 0x6c440038  ldr         $a0, 0x38($v0)
    ctx->pc = 0x100d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x100da0: 0x68450047  ldl         $a1, 0x47($v0)
    ctx->pc = 0x100da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x100da4: 0x6c450040  ldr         $a1, 0x40($v0)
    ctx->pc = 0x100da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x100da8: 0x6846004f  ldl         $a2, 0x4F($v0)
    ctx->pc = 0x100da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x100dac: 0x6c460048  ldr         $a2, 0x48($v0)
    ctx->pc = 0x100dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x100db0: 0xb20302e7  sdl         $v1, 0x2E7($s0)
    ctx->pc = 0x100db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100db4: 0xb60302e0  sdr         $v1, 0x2E0($s0)
    ctx->pc = 0x100db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100db8: 0xb20402ef  sdl         $a0, 0x2EF($s0)
    ctx->pc = 0x100db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100dbc: 0xb60402e8  sdr         $a0, 0x2E8($s0)
    ctx->pc = 0x100dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100dc0: 0xb20502f7  sdl         $a1, 0x2F7($s0)
    ctx->pc = 0x100dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100dc4: 0xb60502f0  sdr         $a1, 0x2F0($s0)
    ctx->pc = 0x100dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 752); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100dc8: 0xb20602ff  sdl         $a2, 0x2FF($s0)
    ctx->pc = 0x100dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x100dcc: 0xb60602f8  sdr         $a2, 0x2F8($s0)
    ctx->pc = 0x100dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 760); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_100dd0:
    // 0x100dd0: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x100dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x100dd4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x100dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x100dd8: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x100dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100ddc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x100ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x100de0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x100de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100de4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x100de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x100de8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x100de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x100dec: 0xc09d55c  jal         func_275570
    ctx->pc = 0x100DECu;
    SET_GPR_U32(ctx, 31, 0x100DF4u);
    ctx->pc = 0x100DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DECu;
    // 0x100df0: 0x8c650024  lw          $a1, 0x24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x100DECu, 0x100DF4u)) {
        return;
    }
    ctx->pc = 0x100DF4u;
label_100df4:
    // 0x100df4: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x100df8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x100df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x100dfc: 0xc09d926  jal         func_276498
    ctx->pc = 0x100DFCu;
    SET_GPR_U32(ctx, 31, 0x100E04u);
    ctx->pc = 0x100E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DFCu;
    // 0x100e00: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x100DFCu, 0x100E04u)) {
        return;
    }
    ctx->pc = 0x100E04u;
label_100e04:
    // 0x100e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100e08: 0xae1501e0  sw          $s5, 0x1E0($s0)
    ctx->pc = 0x100e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 21));
    // 0x100e0c: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x100E0Cu;
    {
        const bool branch_taken_0x100e0c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x100E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E0Cu;
        // 0x100e10: 0xae0201c8  sw          $v0, 0x1C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e0c) {
            ctx->pc = 0x100E18u;
            goto label_100e18;
        }
    }
    ctx->pc = 0x100E14u;
    // 0x100e14: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x100e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
label_100e18:
    // 0x100e18: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x100e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
label_100e1c:
    // 0x100e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100e20: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x100e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x100e24: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x100e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x100e28: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x100e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100e2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x100e2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100e30: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x100e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100e34: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x100e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100e38: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x100e38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100e40: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x100e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x100e44: 0x3e00008  jr          $ra
    ctx->pc = 0x100E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E44u;
        // 0x100e48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100E4Cu;
    // 0x100e4c: 0x0  nop
    ctx->pc = 0x100e4cu;
    // NOP
    ctx->pc = 0x100e50u;
}
