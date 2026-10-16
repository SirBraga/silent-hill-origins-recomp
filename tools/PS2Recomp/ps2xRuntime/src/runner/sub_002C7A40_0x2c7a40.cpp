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

// Function: sub_002C7A40
// Address: 0x2c7a40 - 0x2c7cf0
void sub_002C7A40_0x2c7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7A40_0x2c7a40");
#endif

    switch (ctx->pc) {
        case 0x2c7afcu: goto label_2c7afc;
        case 0x2c7ba0u: goto label_2c7ba0;
        case 0x2c7bc0u: goto label_2c7bc0;
        default: break;
    }

    ctx->pc = 0x2c7a40u;

    // 0x2c7a40: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2c7a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2c7a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7a48: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x2c7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x2c7a4c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x2c7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x2c7a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a54: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x2c7a54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2c7a58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a5c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x2c7a5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2c7a60: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2c7a60u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2c7a64: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x2c7a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x2c7a68: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2c7a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2c7a6c: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x2c7a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7a70: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x2c7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7a74: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x2c7a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a78: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x2c7a78u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c7a7c: 0x96080054  lhu         $t0, 0x54($s0)
    ctx->pc = 0x2c7a7cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2c7a80: 0x960700d4  lhu         $a3, 0xD4($s0)
    ctx->pc = 0x2c7a80u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2c7a84: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x2c7a84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c7a88: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2c7a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2c7a8c: 0x11030006  beq         $t0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7A8Cu;
    {
        const bool branch_taken_0x2c7a8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A8Cu;
        // 0x2c7a90: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a8c) {
            ctx->pc = 0x2C7AA8u;
            goto label_2c7aa8;
        }
    }
    ctx->pc = 0x2C7A94u;
    // 0x2c7a94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7a98: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7A98u;
    {
        const bool branch_taken_0x2c7a98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7a98) {
            ctx->pc = 0x2C7A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7A98u;
            // 0x2c7a9c: 0xafa20114  sw          $v0, 0x114($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7AB0u;
            goto label_2c7ab0;
        }
    }
    ctx->pc = 0x2C7AA0u;
    // 0x2c7aa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7AA0u;
    {
        const bool branch_taken_0x2c7aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AA0u;
        // 0x2c7aa4: 0xafa30114  sw          $v1, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7aa0) {
            ctx->pc = 0x2C7AB0u;
            goto label_2c7ab0;
        }
    }
    ctx->pc = 0x2C7AA8u;
label_2c7aa8:
    // 0x2c7aa8: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2c7aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2c7aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7ab0:
    // 0x2c7ab0: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7AB0u;
    {
        const bool branch_taken_0x2c7ab0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AB0u;
        // 0x2c7ab4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ab0) {
            ctx->pc = 0x2C7AC8u;
            goto label_2c7ac8;
        }
    }
    ctx->pc = 0x2C7AB8u;
    // 0x2c7ab8: 0x54e20004  bnel        $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7AB8u;
    {
        const bool branch_taken_0x2c7ab8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7ab8) {
            ctx->pc = 0x2C7ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7AB8u;
            // 0x2c7abc: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7ACCu;
            goto label_2c7acc;
        }
    }
    ctx->pc = 0x2C7AC0u;
    // 0x2c7ac0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7AC0u;
    {
        const bool branch_taken_0x2c7ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AC0u;
        // 0x2c7ac4: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ac0) {
            ctx->pc = 0x2C7ACCu;
            goto label_2c7acc;
        }
    }
    ctx->pc = 0x2C7AC8u;
label_2c7ac8:
    // 0x2c7ac8: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x2c7ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_2c7acc:
    // 0x2c7acc: 0x8e0600d0  lw          $a2, 0xD0($s0)
    ctx->pc = 0x2c7accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2c7ad0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2c7ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7ad4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2c7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2c7ad8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2c7ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7adc: 0xc60d010c  lwc1        $f13, 0x10C($s0)
    ctx->pc = 0x2c7adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c7ae0: 0x26080100  addiu       $t0, $s0, 0x100
    ctx->pc = 0x2c7ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2c7ae4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2c7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2c7ae8: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x2c7ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2c7aec: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x2c7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x2c7af0: 0x27aa0114  addiu       $t2, $sp, 0x114
    ctx->pc = 0x2c7af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2c7af4: 0xc0b33d0  jal         func_2CCF40
    ctx->pc = 0x2C7AF4u;
    SET_GPR_U32(ctx, 31, 0x2C7AFCu);
    ctx->pc = 0x2C7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7AF4u;
    // 0x2c7af8: 0x27ab0118  addiu       $t3, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CCF40u, 0x2C7AF4u, 0x2C7AFCu)) {
        return;
    }
    ctx->pc = 0x2C7AFCu;
label_2c7afc:
    // 0x2c7afc: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2c7afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7b00: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2c7b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2c7b04: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2c7b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7b08: 0x0  nop
    ctx->pc = 0x2c7b08u;
    // NOP
    // 0x2c7b0c: 0x4501006f  bc1t        . + 4 + (0x6F << 2)
    ctx->pc = 0x2C7B0Cu;
    {
        const bool branch_taken_0x2c7b0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B0Cu;
        // 0x2c7b10: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b0c) {
            ctx->pc = 0x2C7CCCu;
            goto label_2c7ccc;
        }
    }
    ctx->pc = 0x2C7B14u;
    // 0x2c7b14: 0x10c0006d  beqz        $a2, . + 4 + (0x6D << 2)
    ctx->pc = 0x2C7B14u;
    {
        const bool branch_taken_0x2c7b14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B14u;
        // 0x2c7b18: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b14) {
            ctx->pc = 0x2C7CCCu;
            goto label_2c7ccc;
        }
    }
    ctx->pc = 0x2C7B1Cu;
    // 0x2c7b1c: 0x6a020107  ldl         $v0, 0x107($s0)
    ctx->pc = 0x2c7b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c7b20: 0x6e020100  ldr         $v0, 0x100($s0)
    ctx->pc = 0x2c7b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c7b24: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x2c7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2c7b28: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2c7b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7b2c: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2c7b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7b30: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2c7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2c7b34: 0x6a07005f  ldl         $a3, 0x5F($s0)
    ctx->pc = 0x2c7b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c7b38: 0x6e070058  ldr         $a3, 0x58($s0)
    ctx->pc = 0x2c7b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c7b3c: 0xb22700bb  sdl         $a3, 0xBB($s1)
    ctx->pc = 0x2c7b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7b40: 0xb62700b4  sdr         $a3, 0xB4($s1)
    ctx->pc = 0x2c7b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7b44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c7b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b48: 0x6a0700df  ldl         $a3, 0xDF($s0)
    ctx->pc = 0x2c7b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c7b4c: 0x6e0700d8  ldr         $a3, 0xD8($s0)
    ctx->pc = 0x2c7b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c7b50: 0xb22700c3  sdl         $a3, 0xC3($s1)
    ctx->pc = 0x2c7b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 195); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7b54: 0xb62700bc  sdr         $a3, 0xBC($s1)
    ctx->pc = 0x2c7b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 188); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7b58: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2c7b58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2c7b5c: 0x93a30114  lbu         $v1, 0x114($sp)
    ctx->pc = 0x2c7b5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2c7b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b64: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x2c7b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7b68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c7b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b6c: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2c7b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7b70: 0x93a20118  lbu         $v0, 0x118($sp)
    ctx->pc = 0x2c7b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2c7b74: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2c7b74u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2c7b78: 0xa62000ce  sh          $zero, 0xCE($s1)
    ctx->pc = 0x2c7b78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 206), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c7b7c: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x2c7b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x2c7b80: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x2c7b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
    // 0x2c7b84: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x2c7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7b88: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x2c7b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7b8c: 0xa22300cc  sb          $v1, 0xCC($s1)
    ctx->pc = 0x2c7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7b90: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2c7b90u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2c7b94: 0xa22200cd  sb          $v0, 0xCD($s1)
    ctx->pc = 0x2c7b94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 205), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c7b98: 0xc0b1be4  jal         func_2C6F90
    ctx->pc = 0x2C7B98u;
    SET_GPR_U32(ctx, 31, 0x2C7BA0u);
    ctx->pc = 0x2C7B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B98u;
    // 0x2c7b9c: 0xe62000c8  swc1        $f0, 0xC8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6F90u, 0x2C7B98u, 0x2C7BA0u)) {
        return;
    }
    ctx->pc = 0x2C7BA0u;
label_2c7ba0:
    // 0x2c7ba0: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2c7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2c7ba4: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C7BA4u;
    {
        const bool branch_taken_0x2c7ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ba4) {
            ctx->pc = 0x2C7BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7BA4u;
            // 0x2c7ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7CD0u;
            goto label_2c7cd0;
        }
    }
    ctx->pc = 0x2C7BACu;
    // 0x2c7bac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C7BACu;
    {
        const bool branch_taken_0x2c7bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BACu;
        // 0x2c7bb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7bac) {
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7BB4u;
    // 0x2c7bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7bb8: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2c7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c7bbc: 0x0  nop
    ctx->pc = 0x2c7bbcu;
    // NOP
label_2c7bc0:
    // 0x2c7bc0: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c7bc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c7bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c7bc8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2c7bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2c7bcc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2c7bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2c7bd0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2c7bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2c7bd4: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x2c7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2c7bd8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c7bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c7bdc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2c7bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2c7be0: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2c7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2c7be4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c7be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7be8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C7BE8u;
    {
        const bool branch_taken_0x2c7be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BE8u;
        // 0x2c7bec: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7be8) {
            ctx->pc = 0x2C7BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7bc0;
        }
    }
    ctx->pc = 0x2C7BF0u;
label_2c7bf0:
    // 0x2c7bf0: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x2c7bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2c7bf4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2c7bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2c7bf8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C7BF8u;
    {
        const bool branch_taken_0x2c7bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BF8u;
        // 0x2c7bfc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7bf8) {
            ctx->pc = 0x2C7C64u;
            goto label_2c7c64;
        }
    }
    ctx->pc = 0x2C7C00u;
    // 0x2c7c00: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x2c7c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x2c7c04: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C7C04u;
    {
        const bool branch_taken_0x2c7c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C04u;
        // 0x2c7c08: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c04) {
            ctx->pc = 0x2C7C64u;
            goto label_2c7c64;
        }
    }
    ctx->pc = 0x2C7C0Cu;
    // 0x2c7c0c: 0x96020056  lhu         $v0, 0x56($s0)
    ctx->pc = 0x2c7c0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2c7c10: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x2c7c10u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2c7c14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c7c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c7c18: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C7C18u;
    {
        const bool branch_taken_0x2c7c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c18) {
            ctx->pc = 0x2C7C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7C18u;
            // 0x2c7c1c: 0xc6000060  lwc1        $f0, 0x60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7C40u;
            goto label_2c7c40;
        }
    }
    ctx->pc = 0x2C7C20u;
    // 0x2c7c20: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x2c7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2c7c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7c28: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C7C28u;
    {
        const bool branch_taken_0x2c7c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C28u;
        // 0x2c7c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c28) {
            ctx->pc = 0x2C7CD0u;
            goto label_2c7cd0;
        }
    }
    ctx->pc = 0x2C7C30u;
    // 0x2c7c30: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c7c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c7c34: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C7C34u;
    {
        const bool branch_taken_0x2c7c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C34u;
        // 0x2c7c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c34) {
            ctx->pc = 0x2C7CD0u;
            goto label_2c7cd0;
        }
    }
    ctx->pc = 0x2C7C3Cu;
    // 0x2c7c3c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2c7c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c7c40:
    // 0x2c7c40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2c7c40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2c7c44: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c7c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c7c48: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x2c7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7c4c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c7c4cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2c7c50: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c7c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c7c54: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2c7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2c7c58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2c7c5c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C7C5Cu;
    {
        const bool branch_taken_0x2c7c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C5Cu;
        // 0x2c7c60: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c5c) {
            ctx->pc = 0x2C7CC4u;
            goto label_2c7cc4;
        }
    }
    ctx->pc = 0x2C7C64u;
label_2c7c64:
    // 0x2c7c64: 0x960200fc  lhu         $v0, 0xFC($s0)
    ctx->pc = 0x2c7c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2c7c68: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2c7c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2c7c6c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C7C6Cu;
    {
        const bool branch_taken_0x2c7c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C6Cu;
        // 0x2c7c70: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c6c) {
            ctx->pc = 0x2C7CC4u;
            goto label_2c7cc4;
        }
    }
    ctx->pc = 0x2C7C74u;
    // 0x2c7c74: 0x960300fe  lhu         $v1, 0xFE($s0)
    ctx->pc = 0x2c7c74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 254)));
    // 0x2c7c78: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C7C78u;
    {
        const bool branch_taken_0x2c7c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C78u;
        // 0x2c7c7c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c78) {
            ctx->pc = 0x2C7CC4u;
            goto label_2c7cc4;
        }
    }
    ctx->pc = 0x2C7C80u;
    // 0x2c7c80: 0x960200d6  lhu         $v0, 0xD6($s0)
    ctx->pc = 0x2c7c80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 214)));
    // 0x2c7c84: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x2c7c84u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2c7c88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c7c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c7c8c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7C8Cu;
    {
        const bool branch_taken_0x2c7c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C8Cu;
        // 0x2c7c90: 0x8fa30118  lw          $v1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c8c) {
            ctx->pc = 0x2C7CACu;
            goto label_2c7cac;
        }
    }
    ctx->pc = 0x2C7C94u;
    // 0x2c7c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7c98: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C7C98u;
    {
        const bool branch_taken_0x2c7c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C98u;
        // 0x2c7c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c98) {
            ctx->pc = 0x2C7CD0u;
            goto label_2c7cd0;
        }
    }
    ctx->pc = 0x2C7CA0u;
    // 0x2c7ca0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c7ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c7ca4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C7CA4u;
    {
        const bool branch_taken_0x2c7ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CA4u;
        // 0x2c7ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ca4) {
            ctx->pc = 0x2C7CD0u;
            goto label_2c7cd0;
        }
    }
    ctx->pc = 0x2C7CACu;
label_2c7cac:
    // 0x2c7cac: 0x6a0500e7  ldl         $a1, 0xE7($s0)
    ctx->pc = 0x2c7cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c7cb0: 0x6e0500e0  ldr         $a1, 0xE0($s0)
    ctx->pc = 0x2c7cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c7cb4: 0x8e0700e8  lw          $a3, 0xE8($s0)
    ctx->pc = 0x2c7cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2c7cb8: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x2c7cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7cbc: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x2c7cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7cc0: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x2c7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
label_2c7cc4:
    // 0x2c7cc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7CC4u;
    {
        const bool branch_taken_0x2c7cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CC4u;
        // 0x2c7cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7cc4) {
            ctx->pc = 0x2C7CD0u;
            goto label_2c7cd0;
        }
    }
    ctx->pc = 0x2C7CCCu;
label_2c7ccc:
    // 0x2c7ccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cd0:
    // 0x2c7cd0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x2c7cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c7cd4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x2c7cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c7cd8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x2c7cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c7cdc: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2c7cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c7ce0: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x2c7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c7ce4: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x2c7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CE8u;
        // 0x2c7cec: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7CF0u;
}
