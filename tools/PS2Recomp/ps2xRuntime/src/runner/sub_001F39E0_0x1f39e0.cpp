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

// Function: sub_001F39E0
// Address: 0x1f39e0 - 0x1f3bc8
void sub_001F39E0_0x1f39e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F39E0_0x1f39e0");
#endif

    switch (ctx->pc) {
        case 0x1f3a34u: goto label_1f3a34;
        case 0x1f3a60u: goto label_1f3a60;
        case 0x1f3a70u: goto label_1f3a70;
        case 0x1f3a84u: goto label_1f3a84;
        case 0x1f3af4u: goto label_1f3af4;
        case 0x1f3b0cu: goto label_1f3b0c;
        case 0x1f3b70u: goto label_1f3b70;
        case 0x1f3b7cu: goto label_1f3b7c;
        default: break;
    }

    ctx->pc = 0x1f39e0u;

label_1f39e0:
    // 0x1f39e0: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x1f39e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x1f39e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f39e8: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x1f39e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
    // 0x1f39ec: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x1f39ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
    // 0x1f39f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f39f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39f4: 0x7fb40450  sq          $s4, 0x450($sp)
    ctx->pc = 0x1f39f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 20));
    // 0x1f39f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f39f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39fc: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x1f39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
    // 0x1f3a00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f3a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a04: 0x7fb30460  sq          $s3, 0x460($sp)
    ctx->pc = 0x1f3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 19));
    // 0x1f3a08: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x1f3a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1f3a0c: 0x7fb50440  sq          $s5, 0x440($sp)
    ctx->pc = 0x1f3a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 21));
    // 0x1f3a10: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f3a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f3a14: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x1f3a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x1f3a18: 0x24a52680  addiu       $a1, $a1, 0x2680
    ctx->pc = 0x1f3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9856));
    // 0x1f3a1c: 0xe7b404a0  swc1        $f20, 0x4A0($sp)
    ctx->pc = 0x1f3a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
    // 0x1f3a20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f3a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a24: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1f3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f3a28: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1f3a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3a2c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F3A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A34u);
    ctx->pc = 0x1F3A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A2Cu;
    // 0x1f3a30: 0x43300a  movz        $a2, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F3A2Cu, 0x1F3A34u)) {
        return;
    }
    ctx->pc = 0x1F3A34u;
label_1f3a34:
    // 0x1f3a34: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f3a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f3a38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3a3c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3A3Cu;
    {
        const bool branch_taken_0x1f3a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3a3c) {
            ctx->pc = 0x1F3A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3A3Cu;
            // 0x1f3a40: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3A64u;
            goto label_1f3a64;
        }
    }
    ctx->pc = 0x1F3A44u;
    // 0x1f3a44: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f3a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f3a48: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1f3a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1f3a4c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1f3a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3a50: 0x24a52688  addiu       $a1, $a1, 0x2688
    ctx->pc = 0x1f3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9864));
    // 0x1f3a54: 0x24c62690  addiu       $a2, $a2, 0x2690
    ctx->pc = 0x1f3a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9872));
    // 0x1f3a58: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F3A58u;
    SET_GPR_U32(ctx, 31, 0x1F3A60u);
    ctx->pc = 0x1F3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A58u;
    // 0x1f3a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F3A58u, 0x1F3A60u)) {
        return;
    }
    ctx->pc = 0x1F3A60u;
label_1f3a60:
    // 0x1f3a60: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f3a64:
    // 0x1f3a64: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x1f3a64u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x1f3a68: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1F3A68u;
    SET_GPR_U32(ctx, 31, 0x1F3A70u);
    ctx->pc = 0x1F3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A68u;
    // 0x1f3a6c: 0x248426a0  addiu       $a0, $a0, 0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1F3A68u, 0x1F3A70u)) {
        return;
    }
    ctx->pc = 0x1F3A70u;
label_1f3a70:
    // 0x1f3a70: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x1f3a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f3a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a7c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1F3A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A84u);
    ctx->pc = 0x1F3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A7Cu;
    // 0x1f3a80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1F3A7Cu, 0x1F3A84u)) {
        return;
    }
    ctx->pc = 0x1F3A84u;
label_1f3a84:
    // 0x1f3a84: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1f3a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3a88: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1f3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3a8c: 0xe7a00410  swc1        $f0, 0x410($sp)
    ctx->pc = 0x1f3a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
    // 0x1f3a90: 0xe7a10414  swc1        $f1, 0x414($sp)
    ctx->pc = 0x1f3a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1044), bits); }
    // 0x1f3a94: 0x6ba20417  ldl         $v0, 0x417($sp)
    ctx->pc = 0x1f3a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1047); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3a98: 0x6fa20410  ldr         $v0, 0x410($sp)
    ctx->pc = 0x1f3a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1040); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3a9c: 0xb3a20407  sdl         $v0, 0x407($sp)
    ctx->pc = 0x1f3a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1031); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3aa0: 0xb7a20400  sdr         $v0, 0x400($sp)
    ctx->pc = 0x1f3aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3aa8: 0xc7a10404  lwc1        $f1, 0x404($sp)
    ctx->pc = 0x1f3aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3aac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f3aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3ab0: 0x0  nop
    ctx->pc = 0x1f3ab0u;
    // NOP
    // 0x1f3ab4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1F3AB4u;
    {
        const bool branch_taken_0x1f3ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AB4u;
        // 0x1f3ab8: 0x27b30400  addiu       $s3, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ab4) {
            ctx->pc = 0x1F3B0Cu;
            goto label_1f3b0c;
        }
    }
    ctx->pc = 0x1F3ABCu;
    // 0x1f3abc: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1f3abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1f3ac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ac4: 0x0  nop
    ctx->pc = 0x1f3ac4u;
    // NOP
    // 0x1f3ac8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f3ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3acc: 0x0  nop
    ctx->pc = 0x1f3accu;
    // NOP
    // 0x1f3ad0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1F3AD0u;
    {
        const bool branch_taken_0x1f3ad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3ad0) {
            ctx->pc = 0x1F3B0Cu;
            goto label_1f3b0c;
        }
    }
    ctx->pc = 0x1F3AD8u;
    // 0x1f3ad8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3AD8u;
    {
        const bool branch_taken_0x1f3ad8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AD8u;
        // 0x1f3adc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ad8) {
            ctx->pc = 0x1F3B0Cu;
            goto label_1f3b0c;
        }
    }
    ctx->pc = 0x1F3AE0u;
    // 0x1f3ae0: 0xc6b4eaf4  lwc1        $f20, -0x150C($s5)
    ctx->pc = 0x1f3ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294961908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f3ae4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1f3ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1f3ae8: 0x8c44eaf8  lw          $a0, -0x1508($v0)
    ctx->pc = 0x1f3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961912)));
    // 0x1f3aec: 0xc07d0d6  jal         func_1F4358
    ctx->pc = 0x1F3AECu;
    SET_GPR_U32(ctx, 31, 0x1F3AF4u);
    ctx->pc = 0x1F3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3AECu;
    // 0x1f3af0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4358u, 0x1F3AECu, 0x1F3AF4u)) {
        return;
    }
    ctx->pc = 0x1F3AF4u;
label_1f3af4:
    // 0x1f3af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f3af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3af8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f3af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3afc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f3afcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f3b00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f3b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b04: 0xc085c64  jal         func_217190
    ctx->pc = 0x1F3B04u;
    SET_GPR_U32(ctx, 31, 0x1F3B0Cu);
    ctx->pc = 0x1F3B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B04u;
    // 0x1f3b08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217190u, 0x1F3B04u, 0x1F3B0Cu)) {
        return;
    }
    ctx->pc = 0x1F3B0Cu;
label_1f3b0c:
    // 0x1f3b0c: 0xc6a0eaf4  lwc1        $f0, -0x150C($s5)
    ctx->pc = 0x1f3b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294961908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3b10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f3b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f3b14: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1f3b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1f3b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3b1c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1f3b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3b20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f3b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f3b24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f3b24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f3b28: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f3b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f3b2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3b30: 0x0  nop
    ctx->pc = 0x1f3b30u;
    // NOP
    // 0x1f3b34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f3b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f3b38: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1f3b38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f3b3c: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x1f3b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f3b40: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1f3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1f3b44: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F3B44u;
    {
        const bool branch_taken_0x1f3b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b44) {
            ctx->pc = 0x1F3B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3B44u;
            // 0x1f3b48: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3B8Cu;
            goto label_1f3b8c;
        }
    }
    ctx->pc = 0x1F3B4Cu;
    // 0x1f3b4c: 0xc6a1eaf4  lwc1        $f1, -0x150C($s5)
    ctx->pc = 0x1f3b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294961908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3b50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f3b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f3b54: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1f3b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3b58: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x1f3b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f3b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f3b60: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3B60u;
    {
        const bool branch_taken_0x1f3b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B60u;
        // 0x1f3b64: 0xe7a00420  swc1        $f0, 0x420($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b60) {
            ctx->pc = 0x1F3B88u;
            goto label_1f3b88;
        }
    }
    ctx->pc = 0x1F3B68u;
    // 0x1f3b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b6c: 0x0  nop
    ctx->pc = 0x1f3b6cu;
    // NOP
label_1f3b70:
    // 0x1f3b70: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x1f3b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x1f3b74: 0xc07ce78  jal         func_1F39E0
    ctx->pc = 0x1F3B74u;
    SET_GPR_U32(ctx, 31, 0x1F3B7Cu);
    ctx->pc = 0x1F3B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B74u;
    // 0x1f3b78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F39E0u;
    goto label_1f39e0;
    ctx->pc = 0x1F3B7Cu;
label_1f3b7c:
    // 0x1f3b7c: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f3b80: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F3B80u;
    {
        const bool branch_taken_0x1f3b80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B80u;
        // 0x1f3b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b80) {
            ctx->pc = 0x1F3B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3b70;
        }
    }
    ctx->pc = 0x1F3B88u;
label_1f3b88:
    // 0x1f3b88: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x1f3b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_1f3b8c:
    // 0x1f3b8c: 0x7bb10480  lq          $s1, 0x480($sp)
    ctx->pc = 0x1f3b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x1f3b90: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x1f3b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1f3b94: 0x7bb30460  lq          $s3, 0x460($sp)
    ctx->pc = 0x1f3b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1f3b98: 0x7bb40450  lq          $s4, 0x450($sp)
    ctx->pc = 0x1f3b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1f3b9c: 0x7bb50440  lq          $s5, 0x440($sp)
    ctx->pc = 0x1f3b9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1f3ba0: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x1f3ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1f3ba4: 0xc7b404a0  lwc1        $f20, 0x4A0($sp)
    ctx->pc = 0x1f3ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f3ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BA8u;
        // 0x1f3bac: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3BB0u;
    // 0x1f3bb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f3bb4: 0x0  nop
    ctx->pc = 0x1f3bb4u;
    // NOP
    // 0x1f3bb8: 0x27bd0f90  addiu       $sp, $sp, 0xF90
    ctx->pc = 0x1f3bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3984));
    // 0x1f3bbc: 0x0  nop
    ctx->pc = 0x1f3bbcu;
    // NOP
    // 0x1f3bc0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x1f3bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1f3bc4: 0x0  nop
    ctx->pc = 0x1f3bc4u;
    // NOP
    ctx->pc = 0x1f3bc8u;
}
