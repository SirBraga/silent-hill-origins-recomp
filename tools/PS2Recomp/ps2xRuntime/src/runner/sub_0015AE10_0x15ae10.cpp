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

// Function: sub_0015AE10
// Address: 0x15ae10 - 0x15c300
void sub_0015AE10_0x15ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AE10_0x15ae10");
#endif

    switch (ctx->pc) {
        case 0x15aea0u: goto label_15aea0;
        case 0x15aed4u: goto label_15aed4;
        case 0x15af38u: goto label_15af38;
        case 0x15af40u: goto label_15af40;
        case 0x15af94u: goto label_15af94;
        case 0x15af9cu: goto label_15af9c;
        case 0x15afc4u: goto label_15afc4;
        case 0x15afccu: goto label_15afcc;
        case 0x15afe8u: goto label_15afe8;
        case 0x15b1a8u: goto label_15b1a8;
        case 0x15b3e8u: goto label_15b3e8;
        case 0x15b4a4u: goto label_15b4a4;
        case 0x15b4e0u: goto label_15b4e0;
        case 0x15b54cu: goto label_15b54c;
        case 0x15b614u: goto label_15b614;
        case 0x15b620u: goto label_15b620;
        case 0x15b6c0u: goto label_15b6c0;
        case 0x15b72cu: goto label_15b72c;
        case 0x15b7f4u: goto label_15b7f4;
        case 0x15b800u: goto label_15b800;
        case 0x15b8a8u: goto label_15b8a8;
        case 0x15b920u: goto label_15b920;
        case 0x15bb00u: goto label_15bb00;
        case 0x15bb84u: goto label_15bb84;
        case 0x15bba8u: goto label_15bba8;
        case 0x15bbe8u: goto label_15bbe8;
        case 0x15bc54u: goto label_15bc54;
        case 0x15bd1cu: goto label_15bd1c;
        case 0x15bd28u: goto label_15bd28;
        case 0x15be2cu: goto label_15be2c;
        case 0x15be40u: goto label_15be40;
        case 0x15bea8u: goto label_15bea8;
        case 0x15bf30u: goto label_15bf30;
        case 0x15c000u: goto label_15c000;
        case 0x15c080u: goto label_15c080;
        case 0x15c254u: goto label_15c254;
        case 0x15c278u: goto label_15c278;
        case 0x15c2b0u: goto label_15c2b0;
        case 0x15c2c4u: goto label_15c2c4;
        default: break;
    }

    ctx->pc = 0x15ae10u;

    // 0x15ae10: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x15ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x15ae14: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x15ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x15ae18: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x15ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x15ae1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15ae1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae20: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x15ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x15ae24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15ae24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae28: 0xe7b601f0  swc1        $f22, 0x1F0($sp)
    ctx->pc = 0x15ae28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x15ae2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15ae2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae30: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x15ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x15ae34: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x15ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x15ae38: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x15ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x15ae3c: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x15ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
    // 0x15ae40: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x15ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
    // 0x15ae44: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x15ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x15ae48: 0xe7b501e8  swc1        $f21, 0x1E8($sp)
    ctx->pc = 0x15ae48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x15ae4c: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x15ae4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x15ae50: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x15ae54: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x15AE54u;
    {
        const bool branch_taken_0x15ae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE54u;
        // 0x15ae58: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae54) {
            ctx->pc = 0x15AED4u;
            goto label_15aed4;
        }
    }
    ctx->pc = 0x15AE5Cu;
    // 0x15ae5c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE5Cu;
    {
        const bool branch_taken_0x15ae5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE5Cu;
        // 0x15ae60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae5c) {
            ctx->pc = 0x15AE6Cu;
            goto label_15ae6c;
        }
    }
    ctx->pc = 0x15AE64u;
    // 0x15ae64: 0x10000517  b           . + 4 + (0x517 << 2)
    ctx->pc = 0x15AE64u;
    {
        const bool branch_taken_0x15ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE64u;
        // 0x15ae68: 0xae820038  sw          $v0, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae64) {
            ctx->pc = 0x15C2C4u;
            goto label_15c2c4;
        }
    }
    ctx->pc = 0x15AE6Cu;
label_15ae6c:
    // 0x15ae6c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x15AE6Cu;
    {
        const bool branch_taken_0x15ae6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE6Cu;
        // 0x15ae70: 0x26850098  addiu       $a1, $s4, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae6c) {
            ctx->pc = 0x15AEA8u;
            goto label_15aea8;
        }
    }
    ctx->pc = 0x15AE74u;
    // 0x15ae74: 0xae800094  sw          $zero, 0x94($s4)
    ctx->pc = 0x15ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
    // 0x15ae78: 0x6a020037  ldl         $v0, 0x37($s0)
    ctx->pc = 0x15ae78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15ae7c: 0x6e020030  ldr         $v0, 0x30($s0)
    ctx->pc = 0x15ae7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15ae80: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x15ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x15ae84: 0xb282009f  sdl         $v0, 0x9F($s4)
    ctx->pc = 0x15ae84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15ae88: 0xb6820098  sdr         $v0, 0x98($s4)
    ctx->pc = 0x15ae88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15ae8c: 0xae8300a0  sw          $v1, 0xA0($s4)
    ctx->pc = 0x15ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
    // 0x15ae90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ae90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae94: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x15ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x15ae98: 0xc0899d8  jal         func_226760
    ctx->pc = 0x15AE98u;
    SET_GPR_U32(ctx, 31, 0x15AEA0u);
    ctx->pc = 0x15AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE98u;
    // 0x15ae9c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x15AE98u, 0x15AEA0u)) {
        return;
    }
    ctx->pc = 0x15AEA0u;
label_15aea0:
    // 0x15aea0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15AEA0u;
    {
        const bool branch_taken_0x15aea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aea0) {
            ctx->pc = 0x15AED4u;
            goto label_15aed4;
        }
    }
    ctx->pc = 0x15AEA8u;
label_15aea8:
    // 0x15aea8: 0xae800094  sw          $zero, 0x94($s4)
    ctx->pc = 0x15aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
    // 0x15aeac: 0x6a280007  ldl         $t0, 0x7($s1)
    ctx->pc = 0x15aeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x15aeb0: 0x6e280000  ldr         $t0, 0x0($s1)
    ctx->pc = 0x15aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x15aeb4: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x15aeb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15aeb8: 0xb288009f  sdl         $t0, 0x9F($s4)
    ctx->pc = 0x15aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15aebc: 0xb6880098  sdr         $t0, 0x98($s4)
    ctx->pc = 0x15aebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15aec0: 0xae8900a0  sw          $t1, 0xA0($s4)
    ctx->pc = 0x15aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 9));
    // 0x15aec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15aec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aec8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x15aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x15aecc: 0xc0899d8  jal         func_226760
    ctx->pc = 0x15AECCu;
    SET_GPR_U32(ctx, 31, 0x15AED4u);
    ctx->pc = 0x15AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AECCu;
    // 0x15aed0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x15AECCu, 0x15AED4u)) {
        return;
    }
    ctx->pc = 0x15AED4u;
label_15aed4:
    // 0x15aed4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15AED4u;
    {
        const bool branch_taken_0x15aed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED4u;
        // 0x15aed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aed4) {
            ctx->pc = 0x15AF40u;
            goto label_15af40;
        }
    }
    ctx->pc = 0x15AEDCu;
    // 0x15aedc: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x15aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15aee0: 0xc6830098  lwc1        $f3, 0x98($s4)
    ctx->pc = 0x15aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15aee4: 0xc685009c  lwc1        $f5, 0x9C($s4)
    ctx->pc = 0x15aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15aee8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x15aee8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15aeec: 0xc68400a0  lwc1        $f4, 0xA0($s4)
    ctx->pc = 0x15aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15aef0: 0xe68200a8  swc1        $f2, 0xA8($s4)
    ctx->pc = 0x15aef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 168), bits); }
    // 0x15aef4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x15aef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15aef8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x15aef8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x15aefc: 0xe68100ac  swc1        $f1, 0xAC($s4)
    ctx->pc = 0x15aefcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 172), bits); }
    // 0x15af00: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x15af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15af04: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x15af04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x15af08: 0xe68000b0  swc1        $f0, 0xB0($s4)
    ctx->pc = 0x15af08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 176), bits); }
    // 0x15af0c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x15af0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15af10: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x15af10u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x15af14: 0xe6830098  swc1        $f3, 0x98($s4)
    ctx->pc = 0x15af14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 152), bits); }
    // 0x15af18: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15af18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15af1c: 0xe685009c  swc1        $f5, 0x9C($s4)
    ctx->pc = 0x15af1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
    // 0x15af20: 0xe68400a0  swc1        $f4, 0xA0($s4)
    ctx->pc = 0x15af20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 160), bits); }
    // 0x15af24: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x15af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x15af28: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x15af28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15af2c: 0x26850098  addiu       $a1, $s4, 0x98
    ctx->pc = 0x15af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
    // 0x15af30: 0xc0899d8  jal         func_226760
    ctx->pc = 0x15AF30u;
    SET_GPR_U32(ctx, 31, 0x15AF38u);
    ctx->pc = 0x15AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF30u;
    // 0x15af34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x15AF30u, 0x15AF38u)) {
        return;
    }
    ctx->pc = 0x15AF38u;
label_15af38:
    // 0x15af38: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x15AF38u;
    SET_GPR_U32(ctx, 31, 0x15AF40u);
    ctx->pc = 0x15AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF38u;
    // 0x15af3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x15AF38u, 0x15AF40u)) {
        return;
    }
    ctx->pc = 0x15AF40u;
label_15af40:
    // 0x15af40: 0x8e8200a4  lw          $v0, 0xA4($s4)
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x15af44: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15AF44u;
    {
        const bool branch_taken_0x15af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF44u;
        // 0x15af48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af44) {
            ctx->pc = 0x15AFA0u;
            goto label_15afa0;
        }
    }
    ctx->pc = 0x15AF4Cu;
    // 0x15af4c: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x15af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x15af50: 0xc6800098  lwc1        $f0, 0x98($s4)
    ctx->pc = 0x15af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15af54: 0xc681009c  lwc1        $f1, 0x9C($s4)
    ctx->pc = 0x15af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15af58: 0xc68200a0  lwc1        $f2, 0xA0($s4)
    ctx->pc = 0x15af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15af5c: 0xc68300a8  lwc1        $f3, 0xA8($s4)
    ctx->pc = 0x15af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15af60: 0xc68400ac  lwc1        $f4, 0xAC($s4)
    ctx->pc = 0x15af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15af64: 0xc68500b0  lwc1        $f5, 0xB0($s4)
    ctx->pc = 0x15af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15af68: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x15af68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x15af6c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x15af6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x15af70: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x15af70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x15af74: 0xe6800098  swc1        $f0, 0x98($s4)
    ctx->pc = 0x15af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 152), bits); }
    // 0x15af78: 0xe681009c  swc1        $f1, 0x9C($s4)
    ctx->pc = 0x15af78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
    // 0x15af7c: 0xe68200a0  swc1        $f2, 0xA0($s4)
    ctx->pc = 0x15af7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 160), bits); }
    // 0x15af80: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x15af80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x15af84: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x15af84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15af88: 0x26850098  addiu       $a1, $s4, 0x98
    ctx->pc = 0x15af88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
    // 0x15af8c: 0xc0899d8  jal         func_226760
    ctx->pc = 0x15AF8Cu;
    SET_GPR_U32(ctx, 31, 0x15AF94u);
    ctx->pc = 0x15AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF8Cu;
    // 0x15af90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x15AF8Cu, 0x15AF94u)) {
        return;
    }
    ctx->pc = 0x15AF94u;
label_15af94:
    // 0x15af94: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x15AF94u;
    SET_GPR_U32(ctx, 31, 0x15AF9Cu);
    ctx->pc = 0x15AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF94u;
    // 0x15af98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x15AF94u, 0x15AF9Cu)) {
        return;
    }
    ctx->pc = 0x15AF9Cu;
label_15af9c:
    // 0x15af9c: 0x0  nop
    ctx->pc = 0x15af9cu;
    // NOP
label_15afa0:
    // 0x15afa0: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x15afa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15AFA4u;
    {
        const bool branch_taken_0x15afa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA4u;
        // 0x15afa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afa4) {
            ctx->pc = 0x15AFD4u;
            goto label_15afd4;
        }
    }
    ctx->pc = 0x15AFACu;
    // 0x15afac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x15afacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x15afb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15afb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15afb4: 0x0  nop
    ctx->pc = 0x15afb4u;
    // NOP
    // 0x15afb8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x15afb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x15afbc: 0xc057306  jal         func_15CC18
    ctx->pc = 0x15AFBCu;
    SET_GPR_U32(ctx, 31, 0x15AFC4u);
    ctx->pc = 0x15AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFBCu;
    // 0x15afc0: 0xe6800044  swc1        $f0, 0x44($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15CC18u, 0x15AFBCu, 0x15AFC4u)) {
        return;
    }
    ctx->pc = 0x15AFC4u;
label_15afc4:
    // 0x15afc4: 0xc057206  jal         func_15C818
    ctx->pc = 0x15AFC4u;
    SET_GPR_U32(ctx, 31, 0x15AFCCu);
    ctx->pc = 0x15AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFC4u;
    // 0x15afc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15C818u, 0x15AFC4u, 0x15AFCCu)) {
        return;
    }
    ctx->pc = 0x15AFCCu;
label_15afcc:
    // 0x15afcc: 0x100004be  b           . + 4 + (0x4BE << 2)
    ctx->pc = 0x15AFCCu;
    {
        const bool branch_taken_0x15afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFCCu;
        // 0x15afd0: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afcc) {
            ctx->pc = 0x15C2C8u;
            goto label_15c2c8;
        }
    }
    ctx->pc = 0x15AFD4u;
label_15afd4:
    // 0x15afd4: 0x92820030  lbu         $v0, 0x30($s4)
    ctx->pc = 0x15afd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x15afd8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15AFD8u;
    {
        const bool branch_taken_0x15afd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFD8u;
        // 0x15afdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afd8) {
            ctx->pc = 0x15B030u;
            goto label_15b030;
        }
    }
    ctx->pc = 0x15AFE0u;
    // 0x15afe0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x15afe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afe4: 0x0  nop
    ctx->pc = 0x15afe4u;
    // NOP
label_15afe8:
    // 0x15afe8: 0xc6800098  lwc1        $f0, 0x98($s4)
    ctx->pc = 0x15afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15afec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15aff0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x15aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15aff4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15aff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15aff8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x15aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15affc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x15affcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15b000: 0xc680009c  lwc1        $f0, 0x9C($s4)
    ctx->pc = 0x15b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b004: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15b004u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15b008: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x15b008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x15b00c: 0xc68000a0  lwc1        $f0, 0xA0($s4)
    ctx->pc = 0x15b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b010: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x15b010u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x15b014: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x15b014u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15b018: 0x92820030  lbu         $v0, 0x30($s4)
    ctx->pc = 0x15b018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x15b01c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15b020: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x15b020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b024: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15B024u;
    {
        const bool branch_taken_0x15b024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B024u;
        // 0x15b028: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b024) {
            ctx->pc = 0x15AFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15afe8;
        }
    }
    ctx->pc = 0x15B02Cu;
    // 0x15b02c: 0x0  nop
    ctx->pc = 0x15b02cu;
    // NOP
label_15b030:
    // 0x15b030: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x15b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x15b034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15b034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15b038: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15b038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15b03c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x15b03cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15b040: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x15B040u;
    {
        const bool branch_taken_0x15b040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b040) {
            ctx->pc = 0x15B044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B040u;
            // 0x15b044: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B0E8u;
            goto label_15b0e8;
        }
    }
    ctx->pc = 0x15B048u;
    // 0x15b048: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x15b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15b04c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x15b04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x15b050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15b050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b054: 0x0  nop
    ctx->pc = 0x15b054u;
    // NOP
    // 0x15b058: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x15b058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b05c: 0x0  nop
    ctx->pc = 0x15b05cu;
    // NOP
    // 0x15b060: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15B060u;
    {
        const bool branch_taken_0x15b060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b060) {
            ctx->pc = 0x15B09Cu;
            goto label_15b09c;
        }
    }
    ctx->pc = 0x15B068u;
    // 0x15b068: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x15b068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x15b06c: 0x3c014198  lui         $at, 0x4198
    ctx->pc = 0x15b06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16792 << 16));
    // 0x15b070: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15b070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b074: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x15b074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x15b078: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15b078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15b07c: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x15b07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x15b080: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15b080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15b084: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15b084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15b088: 0xe6840048  swc1        $f4, 0x48($s4)
    ctx->pc = 0x15b088u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x15b08c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x15b08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15b090: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15b090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15b094: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15B094u;
    {
        const bool branch_taken_0x15b094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B094u;
        // 0x15b098: 0xe680004c  swc1        $f0, 0x4C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b094) {
            ctx->pc = 0x15B0DCu;
            goto label_15b0dc;
        }
    }
    ctx->pc = 0x15B09Cu;
label_15b09c:
    // 0x15b09c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15b09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15b0a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15b0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b0a4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x15b0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x15b0a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15b0a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x15b0ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15b0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b0b0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x15b0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15b0b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15b0b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b0b8: 0x0  nop
    ctx->pc = 0x15b0b8u;
    // NOP
    // 0x15b0bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B0BCu;
    {
        const bool branch_taken_0x15b0bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0BCu;
        // 0x15b0c0: 0xe6800048  swc1        $f0, 0x48($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0bc) {
            ctx->pc = 0x15B0CCu;
            goto label_15b0cc;
        }
    }
    ctx->pc = 0x15B0C4u;
    // 0x15b0c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15B0C4u;
    {
        const bool branch_taken_0x15b0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0C4u;
        // 0x15b0c8: 0xe6810048  swc1        $f1, 0x48($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0c4) {
            ctx->pc = 0x15B0DCu;
            goto label_15b0dc;
        }
    }
    ctx->pc = 0x15B0CCu;
label_15b0cc:
    // 0x15b0cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15b0ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b0d0: 0x0  nop
    ctx->pc = 0x15b0d0u;
    // NOP
    // 0x15b0d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15B0D4u;
    {
        const bool branch_taken_0x15b0d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b0d4) {
            ctx->pc = 0x15B0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B0D4u;
            // 0x15b0d8: 0xe6820048  swc1        $f2, 0x48($s4) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B0DCu;
            goto label_15b0dc;
        }
    }
    ctx->pc = 0x15B0DCu;
label_15b0dc:
    // 0x15b0dc: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x15b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x15b0e0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x15b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b0e4: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b0e8:
    // 0x15b0e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15b0ec: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15B0ECu;
    {
        const bool branch_taken_0x15b0ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0ECu;
        // 0x15b0f0: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0ec) {
            ctx->pc = 0x15B178u;
            goto label_15b178;
        }
    }
    ctx->pc = 0x15B0F4u;
    // 0x15b0f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0f8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x15b0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b0fc: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x15b0fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x15b100: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x15b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15b104: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b108: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15b108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b10c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B10Cu;
    {
        const bool branch_taken_0x15b10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B10Cu;
        // 0x15b110: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b10c) {
            ctx->pc = 0x15B128u;
            goto label_15b128;
        }
    }
    ctx->pc = 0x15B114u;
    // 0x15b114: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x15b114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15b118: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b11c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x15b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B120u;
    {
        const bool branch_taken_0x15b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B120u;
        // 0x15b124: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b120) {
            ctx->pc = 0x15B12Cu;
            goto label_15b12c;
        }
    }
    ctx->pc = 0x15B128u;
label_15b128:
    // 0x15b128: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x15b128u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b12c:
    // 0x15b12c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15b130: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15b134: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15b134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b138: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15b138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b13c: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x15b13cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x15b140: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x15b140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15b144: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b148: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x15b148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x15b14c: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x15b14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x15b150: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x15b150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15b154: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x15b154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15b158: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x15b158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15b15c: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x15b15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b160: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x15b160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b164: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x15b164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b168: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x15b168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b16c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x15b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x15b170: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b174: 0x46160140  add.s       $f5, $f0, $f22
    ctx->pc = 0x15b174u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_15b178:
    // 0x15b178: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x15b17c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x15b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15b180: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x15b180u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x15b184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b188: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15b18c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x15b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b190: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x15b190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15b194: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x15b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15b198: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15B198u;
    {
        const bool branch_taken_0x15b198 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B198u;
        // 0x15b19c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b198) {
            ctx->pc = 0x15B1E0u;
            goto label_15b1e0;
        }
    }
    ctx->pc = 0x15B1A0u;
    // 0x15b1a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15b1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15b1a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1a8:
    // 0x15b1a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b1ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15b1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15b1b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b1b4: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x15b1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x15b1b8: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x15b1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x15b1bc: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x15b1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15b1c0: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x15b1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b1c4: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x15b1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b1c8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x15b1cc: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x15b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x15b1d0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x15b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15b1d4: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x15b1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b1d8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15B1D8u;
    {
        const bool branch_taken_0x15b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1D8u;
        // 0x15b1dc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1d8) {
            ctx->pc = 0x15B1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b1a8;
        }
    }
    ctx->pc = 0x15B1E0u;
label_15b1e0:
    // 0x15b1e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15b1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b1e4: 0x0  nop
    ctx->pc = 0x15b1e4u;
    // NOP
    // 0x15b1e8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15b1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b1ec: 0x0  nop
    ctx->pc = 0x15b1ecu;
    // NOP
    // 0x15b1f0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x15B1F0u;
    {
        const bool branch_taken_0x15b1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b1f0) {
            ctx->pc = 0x15B1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B1F0u;
            // 0x15b1f4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B218u;
            goto label_15b218;
        }
    }
    ctx->pc = 0x15B1F8u;
    // 0x15b1f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15b1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15b1fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15b1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b200: 0x0  nop
    ctx->pc = 0x15b200u;
    // NOP
    // 0x15b204: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15b204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b208: 0x0  nop
    ctx->pc = 0x15b208u;
    // NOP
    // 0x15b20c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x15B20Cu;
    {
        const bool branch_taken_0x15b20c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b20c) {
            ctx->pc = 0x15B210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B20Cu;
            // 0x15b210: 0xe4850008  swc1        $f5, 0x8($a0) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B21Cu;
            goto label_15b21c;
        }
    }
    ctx->pc = 0x15B214u;
    // 0x15b214: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x15b214u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_15b218:
    // 0x15b218: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x15b218u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_15b21c:
    // 0x15b21c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x15b21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15b220: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15b224: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x15b224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15b228: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x15b228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x15b22c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b230: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15b230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b234: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B234u;
    {
        const bool branch_taken_0x15b234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B234u;
        // 0x15b238: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b234) {
            ctx->pc = 0x15B244u;
            goto label_15b244;
        }
    }
    ctx->pc = 0x15B23Cu;
    // 0x15b23c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x15b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15b240: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x15b240u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_15b244:
    // 0x15b244: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x15b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15b248: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x15b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x15b24c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x15B24Cu;
    {
        const bool branch_taken_0x15b24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b24c) {
            ctx->pc = 0x15B250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B24Cu;
            // 0x15b250: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B254u;
            goto label_15b254;
        }
    }
    ctx->pc = 0x15B254u;
label_15b254:
    // 0x15b254: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x15b258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b25c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15b260: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x15b260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b264: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x15b264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x15b268: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15b26c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x15b26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b270: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x15b270u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
    // 0x15b274: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x15b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b278: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x15b278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b27c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B27Cu;
    {
        const bool branch_taken_0x15b27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B27Cu;
        // 0x15b280: 0x24e3ffff  addiu       $v1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b27c) {
            ctx->pc = 0x15B294u;
            goto label_15b294;
        }
    }
    ctx->pc = 0x15B284u;
    // 0x15b284: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x15b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x15b288: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b28c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B28Cu;
    {
        const bool branch_taken_0x15b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B28Cu;
        // 0x15b290: 0x623823  subu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b28c) {
            ctx->pc = 0x15B29Cu;
            goto label_15b29c;
        }
    }
    ctx->pc = 0x15B294u;
label_15b294:
    // 0x15b294: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x15b294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x15b298: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x15b298u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b29c:
    // 0x15b29c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15b2a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x15b2a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b2a4: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x15b2a8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15b2ac: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x15b2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b2b0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b2b4: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x15b2b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
    // 0x15b2b8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b2bc: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x15b2bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b2c0: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x15b2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15b2c4: 0x83480a  movz        $t1, $a0, $v1
    ctx->pc = 0x15b2c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4));
    // 0x15b2c8: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x15b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x15b2cc: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x15b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15b2d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15b2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b2d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B2D4u;
    {
        const bool branch_taken_0x15b2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2D4u;
        // 0x15b2d8: 0xc59821  addu        $s3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2d4) {
            ctx->pc = 0x15B2F0u;
            goto label_15b2f0;
        }
    }
    ctx->pc = 0x15B2DCu;
    // 0x15b2dc: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x15b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x15b2e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b2e4: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x15b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15b2e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B2E8u;
    {
        const bool branch_taken_0x15b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2E8u;
        // 0x15b2ec: 0x623823  subu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2e8) {
            ctx->pc = 0x15B2F8u;
            goto label_15b2f8;
        }
    }
    ctx->pc = 0x15B2F0u;
label_15b2f0:
    // 0x15b2f0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x15b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b2f4: 0x493823  subu        $a3, $v0, $t1
    ctx->pc = 0x15b2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_15b2f8:
    // 0x15b2f8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x15b2fc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15b300: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x15b300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b304: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x15b304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15b308: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x15b308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b30c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x15b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15b310: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x15b310u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
    // 0x15b314: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x15b314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b318: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x15b318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15b31c: 0xa2480a  movz        $t1, $a1, $v0
    ctx->pc = 0x15b31cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5));
    // 0x15b320: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x15b324: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x15b324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15b328: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15b328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b32c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B32Cu;
    {
        const bool branch_taken_0x15b32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B32Cu;
        // 0x15b330: 0xc48821  addu        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b32c) {
            ctx->pc = 0x15B348u;
            goto label_15b348;
        }
    }
    ctx->pc = 0x15B334u;
    // 0x15b334: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x15b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x15b338: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b33c: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x15b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15b340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B340u;
    {
        const bool branch_taken_0x15b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B340u;
        // 0x15b344: 0x623823  subu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b340) {
            ctx->pc = 0x15B350u;
            goto label_15b350;
        }
    }
    ctx->pc = 0x15B348u;
label_15b348:
    // 0x15b348: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b34c: 0x493823  subu        $a3, $v0, $t1
    ctx->pc = 0x15b34cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_15b350:
    // 0x15b350: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x15b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x15b354: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15b354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15b358: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x15b358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15b35c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x15b35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15b360: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x15b360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b364: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x15b364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15b368: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x15b368u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
    // 0x15b36c: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x15b36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b370: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x15b370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15b374: 0xa2480a  movz        $t1, $a1, $v0
    ctx->pc = 0x15b374u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5));
    // 0x15b378: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x15b37c: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15b380: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15b380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b384: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B384u;
    {
        const bool branch_taken_0x15b384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B384u;
        // 0x15b388: 0xc49021  addu        $s2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b384) {
            ctx->pc = 0x15B3A0u;
            goto label_15b3a0;
        }
    }
    ctx->pc = 0x15B38Cu;
    // 0x15b38c: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x15b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x15b390: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b394: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x15b394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15b398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B398u;
    {
        const bool branch_taken_0x15b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B398u;
        // 0x15b39c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b398) {
            ctx->pc = 0x15B3A8u;
            goto label_15b3a8;
        }
    }
    ctx->pc = 0x15B3A0u;
label_15b3a0:
    // 0x15b3a0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x15b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b3a4: 0x492823  subu        $a1, $v0, $t1
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_15b3a8:
    // 0x15b3a8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x15b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x15b3ac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15b3b0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15b3b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3b8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15b3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b3bc: 0x92880030  lbu         $t0, 0x30($s4)
    ctx->pc = 0x15b3bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x15b3c0: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x15b3c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x15b3c4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x15b3c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15b3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b3cc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x15b3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15b3d0: 0x1100002b  beqz        $t0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15B3D0u;
    {
        const bool branch_taken_0x15b3d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3D0u;
        // 0x15b3d4: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3d0) {
            ctx->pc = 0x15B480u;
            goto label_15b480;
        }
    }
    ctx->pc = 0x15B3D8u;
    // 0x15b3d8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x15b3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3dc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15b3e0: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x15b3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15b3e4: 0x0  nop
    ctx->pc = 0x15b3e4u;
    // NOP
label_15b3e8:
    // 0x15b3e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b3ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b3f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15b3f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b3f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15b3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b3fc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x15b3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15b400: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x15b400u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x15b404: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x15b404u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15b408: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b40c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b410: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15b414: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b418: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x15b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b41c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b420: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15b420u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15b424: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x15b424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15b428: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b42c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b430: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15b434: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b438: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x15b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b43c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x15b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b440: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15b440u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15b444: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x15b444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15b448: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x15b448u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x15b44c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x15b44cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x15b450: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x15b450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x15b454: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x15b454u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15b458: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x15b458u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x15b45c: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x15b45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b460: 0x0  nop
    ctx->pc = 0x15b460u;
    // NOP
    // 0x15b464: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15B464u;
    {
        const bool branch_taken_0x15b464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b464) {
            ctx->pc = 0x15B468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B464u;
            // 0x15b468: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B46Cu;
            goto label_15b46c;
        }
    }
    ctx->pc = 0x15B46Cu;
label_15b46c:
    // 0x15b46c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x15b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15b470: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x15b470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b474: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x15b474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15b478: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x15B478u;
    {
        const bool branch_taken_0x15b478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B478u;
        // 0x15b47c: 0xe52018  mult        $a0, $a3, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b478) {
            ctx->pc = 0x15B3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b3e8;
        }
    }
    ctx->pc = 0x15B480u;
label_15b480:
    // 0x15b480: 0x0  nop
    ctx->pc = 0x15b480u;
    // NOP
    // 0x15b484: 0x0  nop
    ctx->pc = 0x15b484u;
    // NOP
    // 0x15b488: 0x460c0544  c1          0xC0544
    ctx->pc = 0x15b488u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[12]);
    // 0x15b48c: 0x4615a832  c.eq.s      $f21, $f21
    ctx->pc = 0x15b48cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b490: 0x0  nop
    ctx->pc = 0x15b490u;
    // NOP
    // 0x15b494: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x15B494u;
    {
        const bool branch_taken_0x15b494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b494) {
            ctx->pc = 0x15B498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B494u;
            // 0x15b498: 0x8e820090  lw          $v0, 0x90($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B4ACu;
            goto label_15b4ac;
        }
    }
    ctx->pc = 0x15B49Cu;
    // 0x15b49c: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x15B49Cu;
    SET_GPR_U32(ctx, 31, 0x15B4A4u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x15B49Cu, 0x15B4A4u)) {
        return;
    }
    ctx->pc = 0x15B4A4u;
label_15b4a4:
    // 0x15b4a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x15b4a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x15b4a8: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_15b4ac:
    // 0x15b4ac: 0x104001a9  beqz        $v0, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x15B4ACu;
    {
        const bool branch_taken_0x15b4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4ACu;
        // 0x15b4b0: 0x27a30034  addiu       $v1, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4ac) {
            ctx->pc = 0x15BB54u;
            goto label_15bb54;
        }
    }
    ctx->pc = 0x15B4B4u;
    // 0x15b4b4: 0x92820030  lbu         $v0, 0x30($s4)
    ctx->pc = 0x15b4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x15b4b8: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x15b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x15b4bc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15b4bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4c0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x15b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x15b4c4: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x15b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x15b4c8: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x15b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x15b4cc: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x15b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x15b4d0: 0x18400077  blez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x15B4D0u;
    {
        const bool branch_taken_0x15b4d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4D0u;
        // 0x15b4d4: 0xafb5002c  sw          $s5, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4d0) {
            ctx->pc = 0x15B6B0u;
            goto label_15b6b0;
        }
    }
    ctx->pc = 0x15B4D8u;
    // 0x15b4d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15b4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4dc: 0x0  nop
    ctx->pc = 0x15b4dcu;
    // NOP
label_15b4e0:
    // 0x15b4e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b4e4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x15b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15b4e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b4ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b4f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15b4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b4f4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15b4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b4f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b4fc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15b4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x15b500: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b504: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15b508: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b50c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b510: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b514: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b518: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b51c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x15b51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x15b520: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b524: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15b528: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b52c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b530: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b534: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b538: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b53c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x15b53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15b540: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15b544: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x15B544u;
    SET_GPR_U32(ctx, 31, 0x15B54Cu);
    ctx->pc = 0x15B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B544u;
    // 0x15b548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x15B544u, 0x15B54Cu)) {
        return;
    }
    ctx->pc = 0x15B54Cu;
label_15b54c:
    // 0x15b54c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b550: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b554: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b558: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b55c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b560: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b564: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15b564u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15b568: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x15b568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x15b56c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b570: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b574: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b578: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b57c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b580: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b584: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b588: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x15b588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x15b58c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b590: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b594: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b598: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b59c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b5a0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b5a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b5a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b5a8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x15b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x15b5ac: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x15b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15b5b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b5b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b5b8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b5bc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b5c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b5c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15b5c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15b5c8: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x15b5c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x15b5cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x15b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15b5d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b5d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b5d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b5dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b5e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b5e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b5e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b5e8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x15b5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x15b5ec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x15b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15b5f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b5f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b5f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b5fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b600: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b604: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b604u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b608: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x15b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x15b60c: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15B60Cu;
    SET_GPR_U32(ctx, 31, 0x15B614u);
    ctx->pc = 0x15B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B60Cu;
    // 0x15b610: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15B60Cu, 0x15B614u)) {
        return;
    }
    ctx->pc = 0x15B614u;
label_15b614:
    // 0x15b614: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15b614u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15b618: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15B618u;
    SET_GPR_U32(ctx, 31, 0x15B620u);
    ctx->pc = 0x15B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B618u;
    // 0x15b61c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15B618u, 0x15B620u)) {
        return;
    }
    ctx->pc = 0x15B620u;
label_15b620:
    // 0x15b620: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x15b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x15b624: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x15b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b628: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b62c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15b62cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15b630: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x15b630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15b634: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x15b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b638: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x15b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x15b63c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x15b63cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x15b640: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b644: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x15b644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15b648: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b64c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x15b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x15b650: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15b650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15b654: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b658: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x15b658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15b65c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x15b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15b660: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x15b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b664: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b668: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15b668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b66c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x15b66cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15b670: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x15b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b674: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x15b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15b678: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15b678u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15b67c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b680: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x15b680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15b684: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b688: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x15b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15b68c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15b68cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b690: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b694: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x15b694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15b698: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b69c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x15b6a0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x15b6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b6a4: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x15B6A4u;
    {
        const bool branch_taken_0x15b6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6A4u;
        // 0x15b6a8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6a4) {
            ctx->pc = 0x15B4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b4e0;
        }
    }
    ctx->pc = 0x15B6ACu;
    // 0x15b6ac: 0x0  nop
    ctx->pc = 0x15b6acu;
    // NOP
label_15b6b0:
    // 0x15b6b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b6b4: 0x18400076  blez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x15B6B4u;
    {
        const bool branch_taken_0x15b6b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6B4u;
        // 0x15b6b8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6b4) {
            ctx->pc = 0x15B890u;
            goto label_15b890;
        }
    }
    ctx->pc = 0x15B6BCu;
    // 0x15b6bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15b6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b6c0:
    // 0x15b6c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b6c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b6c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b6cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b6d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15b6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b6d4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b6d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b6d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b6dc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15b6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x15b6e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b6e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b6e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b6ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b6f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b6f4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b6f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b6f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b6fc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x15b6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x15b700: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b704: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b708: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b70c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b710: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15b710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b714: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15b714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b718: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b71c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x15b71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15b720: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15b724: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x15B724u;
    SET_GPR_U32(ctx, 31, 0x15B72Cu);
    ctx->pc = 0x15B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B724u;
    // 0x15b728: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x15B724u, 0x15B72Cu)) {
        return;
    }
    ctx->pc = 0x15B72Cu;
label_15b72c:
    // 0x15b72c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b730: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b734: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b738: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b73c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b740: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15b740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b744: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15b744u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15b748: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x15b748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x15b74c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b750: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b754: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b758: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b75c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b760: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b764: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b768: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x15b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x15b76c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b770: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b774: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b778: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b77c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15b77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b780: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b784: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b788: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x15b788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x15b78c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b790: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b794: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b798: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b79c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b7a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b7a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15b7a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15b7a8: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x15b7a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x15b7ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b7b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b7b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b7b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b7bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b7c0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b7c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b7c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b7c8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x15b7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x15b7cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b7d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b7d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b7d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b7dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15b7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b7e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b7e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b7e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b7e8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x15b7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x15b7ec: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15B7ECu;
    SET_GPR_U32(ctx, 31, 0x15B7F4u);
    ctx->pc = 0x15B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B7ECu;
    // 0x15b7f0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15B7ECu, 0x15B7F4u)) {
        return;
    }
    ctx->pc = 0x15B7F4u;
label_15b7f4:
    // 0x15b7f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15b7f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15b7f8: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15B7F8u;
    SET_GPR_U32(ctx, 31, 0x15B800u);
    ctx->pc = 0x15B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B7F8u;
    // 0x15b7fc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15B7F8u, 0x15B800u)) {
        return;
    }
    ctx->pc = 0x15B800u;
label_15b800:
    // 0x15b800: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15b804: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x15b804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b808: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b80c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15b80cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15b810: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x15b810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15b814: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x15b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b818: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15b81c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x15b81cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x15b820: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b824: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x15b824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15b828: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15b828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b82c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15b830: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15b830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15b834: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b838: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x15b838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15b83c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x15b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15b840: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x15b840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b844: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b848: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15b848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b84c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x15b84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15b850: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x15b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b854: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15b854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15b858: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15b858u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15b85c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b860: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x15b860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15b864: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b868: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15b86c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15b86cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b870: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b874: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x15b874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15b878: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b87c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15b87cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x15b880: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x15b880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b884: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x15B884u;
    {
        const bool branch_taken_0x15b884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B884u;
        // 0x15b888: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b884) {
            ctx->pc = 0x15B6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b6c0;
        }
    }
    ctx->pc = 0x15B88Cu;
    // 0x15b88c: 0x0  nop
    ctx->pc = 0x15b88cu;
    // NOP
label_15b890:
    // 0x15b890: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15b894: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x15B894u;
    {
        const bool branch_taken_0x15b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B894u;
        // 0x15b898: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b894) {
            ctx->pc = 0x15BB54u;
            goto label_15bb54;
        }
    }
    ctx->pc = 0x15B89Cu;
    // 0x15b89c: 0x27a90094  addiu       $t1, $sp, 0x94
    ctx->pc = 0x15b89cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x15b8a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15b8a4: 0x0  nop
    ctx->pc = 0x15b8a4u;
    // NOP
label_15b8a8:
    // 0x15b8a8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x15b8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x15b8ac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x15b8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15b8b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15b8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8b4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x15b8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x15b8b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x15b8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15b8bc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15b8c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15b8c4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x15b8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15b8c8: 0xc4470054  lwc1        $f7, 0x54($v0)
    ctx->pc = 0x15b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b8cc: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x15b8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b8d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8d8: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x15b8d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x15b8dc: 0x46071002  mul.s       $f0, $f2, $f7
    ctx->pc = 0x15b8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x15b8e0: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x15b8e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x15b8e4: 0x460210c0  add.s       $f3, $f2, $f2
    ctx->pc = 0x15b8e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x15b8e8: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x15b8e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15b8ec: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x15b8ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15b8f0: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x15b8f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15b8f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x15b8f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x15b8f8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x15b8f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x15b8fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x15b8fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x15b900: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x15b900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x15b904: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x15b904u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x15b908: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x15b908u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15b90c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x15b90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x15b910: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x15b910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15b914: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x15B914u;
    {
        const bool branch_taken_0x15b914 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B914u;
        // 0x15b918: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b914) {
            ctx->pc = 0x15BAB0u;
            goto label_15bab0;
        }
    }
    ctx->pc = 0x15B91Cu;
    // 0x15b91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b920:
    // 0x15b920: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x15b920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x15b924: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15b928: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b92c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b930: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15b930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b934: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b938: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x15b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b93c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15b93cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15b940: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15b940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15b944: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15b944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b948: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b94c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b950: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b954: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15b958: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x15b958u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x15b95c: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x15b95cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15b960: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15b960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b964: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15b964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b96c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b970: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x15b970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15b974: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x15b974u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15b978: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x15b978u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15b97c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15b980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15b980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b984: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x15b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b988: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b98c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b990: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15b990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15b994: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15b994u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15b998: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15b998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15b99c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x15b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15b9a0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x15b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b9a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b9a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b9ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b9b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15b9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15b9b4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15b9b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15b9b8: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x15b9b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15b9bc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x15b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15b9c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x15b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b9c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b9c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b9cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b9d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15b9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15b9d4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15b9d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15b9d8: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x15b9d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15b9dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b9e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x15b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b9e4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x15b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b9e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b9ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b9f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15b9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15b9f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15b9f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15b9f8: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15b9f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15b9fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ba00: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x15ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ba04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15ba08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15ba0c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ba10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15ba10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15ba14: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15ba14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15ba18: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x15ba18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15ba1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ba20: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x15ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ba24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15ba28: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15ba2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ba30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15ba30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15ba34: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15ba34u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15ba38: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x15ba38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15ba3c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x15ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15ba40: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15ba44: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x15ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ba48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15ba4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ba50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15ba50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15ba54: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15ba54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15ba58: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15ba58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15ba5c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x15ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15ba60: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x15ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ba64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x15ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15ba68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15ba6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ba70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15ba70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15ba74: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15ba74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15ba78: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x15ba78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15ba7c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x15ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15ba80: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x15ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ba84: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x15ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15ba88: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15ba8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ba90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15ba90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15ba94: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15ba94u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15ba98: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x15ba98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15ba9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15baa0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15baa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15baa4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15baa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15baa8: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x15BAA8u;
    {
        const bool branch_taken_0x15baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA8u;
        // 0x15baac: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baa8) {
            ctx->pc = 0x15B920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b920;
        }
    }
    ctx->pc = 0x15BAB0u;
label_15bab0:
    // 0x15bab0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x15bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15bab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15bab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15babc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bac0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bac4: 0x92840030  lbu         $a0, 0x30($s4)
    ctx->pc = 0x15bac4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x15bac8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bacc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x15baccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15bad0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15bad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15bad4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x15bad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x15bad8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x15bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15badc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x15badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bae0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bae4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x15bae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15bae8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15bae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15baec: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15BAECu;
    {
        const bool branch_taken_0x15baec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAECu;
        // 0x15baf0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baec) {
            ctx->pc = 0x15BB40u;
            goto label_15bb40;
        }
    }
    ctx->pc = 0x15BAF4u;
    // 0x15baf4: 0x26820050  addiu       $v0, $s4, 0x50
    ctx->pc = 0x15baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x15baf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15baf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bafc: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x15bafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_15bb00:
    // 0x15bb00: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x15bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15bb04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15bb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15bb08: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x15bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15bb0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15bb10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15bb14: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15bb18: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x15bb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x15bb1c: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x15bb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x15bb20: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x15bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15bb24: 0xb04c0007  sdl         $t4, 0x7($v0)
    ctx->pc = 0x15bb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15bb28: 0xb44c0000  sdr         $t4, 0x0($v0)
    ctx->pc = 0x15bb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15bb2c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x15bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x15bb30: 0x92820030  lbu         $v0, 0x30($s4)
    ctx->pc = 0x15bb30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x15bb34: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x15bb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15bb38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15BB38u;
    {
        const bool branch_taken_0x15bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB38u;
        // 0x15bb3c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb38) {
            ctx->pc = 0x15BB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bb00;
        }
    }
    ctx->pc = 0x15BB40u;
label_15bb40:
    // 0x15bb40: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15bb44: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x15bb44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb48: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x15bb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15bb4c: 0x1440ff56  bnez        $v0, . + 4 + (-0xAA << 2)
    ctx->pc = 0x15BB4Cu;
    {
        const bool branch_taken_0x15bb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB4Cu;
        // 0x15bb50: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb4c) {
            ctx->pc = 0x15B8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b8a8;
        }
    }
    ctx->pc = 0x15BB54u;
label_15bb54:
    // 0x15bb54: 0xc680004c  lwc1        $f0, 0x4C($s4)
    ctx->pc = 0x15bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bb58: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x15bb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bb5c: 0x0  nop
    ctx->pc = 0x15bb5cu;
    // NOP
    // 0x15bb60: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x15BB60u;
    {
        const bool branch_taken_0x15bb60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB60u;
        // 0x15bb64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb60) {
            ctx->pc = 0x15BB7Cu;
            goto label_15bb7c;
        }
    }
    ctx->pc = 0x15BB68u;
    // 0x15bb68: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x15bb6c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x15bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15bb70: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x15bb70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15bb74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BB74u;
    {
        const bool branch_taken_0x15bb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB74u;
        // 0x15bb78: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb74) {
            ctx->pc = 0x15BB8Cu;
            goto label_15bb8c;
        }
    }
    ctx->pc = 0x15BB7Cu;
label_15bb7c:
    // 0x15bb7c: 0xc05733a  jal         func_15CCE8
    ctx->pc = 0x15BB7Cu;
    SET_GPR_U32(ctx, 31, 0x15BB84u);
    ctx->pc = 0x15BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BB7Cu;
    // 0x15bb80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15CCE8u, 0x15BB7Cu, 0x15BB84u)) {
        return;
    }
    ctx->pc = 0x15BB84u;
label_15bb84:
    // 0x15bb84: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x15BB84u;
    {
        const bool branch_taken_0x15bb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB84u;
        // 0x15bb88: 0xae800090  sw          $zero, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb84) {
            ctx->pc = 0x15C270u;
            goto label_15c270;
        }
    }
    ctx->pc = 0x15BB8Cu;
label_15bb8c:
    // 0x15bb8c: 0x0  nop
    ctx->pc = 0x15bb8cu;
    // NOP
    // 0x15bb90: 0x0  nop
    ctx->pc = 0x15bb90u;
    // NOP
    // 0x15bb94: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x15bb94u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x15bb98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15bb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15bb9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15bb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15bba0: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x15BBA0u;
    SET_GPR_U32(ctx, 31, 0x15BBA8u);
    ctx->pc = 0x15BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BBA0u;
    // 0x15bba4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x15BBA0u, 0x15BBA8u)) {
        return;
    }
    ctx->pc = 0x15BBA8u;
label_15bba8:
    // 0x15bba8: 0x92850030  lbu         $a1, 0x30($s4)
    ctx->pc = 0x15bba8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x15bbac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x15bbacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbb0: 0x2ee40009  sltiu       $a0, $s7, 0x9
    ctx->pc = 0x15bbb0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x15bbb4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15bbb8: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x15bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x15bbbc: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x15bbbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbc0: 0x44b80a  movz        $s7, $v0, $a0
    ctx->pc = 0x15bbc0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2));
    // 0x15bbc4: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x15bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x15bbc8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x15bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x15bbcc: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x15bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x15bbd0: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x15bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x15bbd4: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x15bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x15bbd8: 0x10a00077  beqz        $a1, . + 4 + (0x77 << 2)
    ctx->pc = 0x15BBD8u;
    {
        const bool branch_taken_0x15bbd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBD8u;
        // 0x15bbdc: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbd8) {
            ctx->pc = 0x15BDB8u;
            goto label_15bdb8;
        }
    }
    ctx->pc = 0x15BBE0u;
    // 0x15bbe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15bbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbe4: 0x0  nop
    ctx->pc = 0x15bbe4u;
    // NOP
label_15bbe8:
    // 0x15bbe8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15bbec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15bbf0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bbf4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bbf8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bbfc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bc00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bc04: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x15bc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x15bc08: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15bc0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15bc10: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bc14: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bc18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bc1c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bc20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bc24: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x15bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x15bc28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15bc2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15bc30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bc34: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bc38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bc3c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bc40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bc44: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x15bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x15bc48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15bc4c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x15BC4Cu;
    SET_GPR_U32(ctx, 31, 0x15BC54u);
    ctx->pc = 0x15BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC4Cu;
    // 0x15bc50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x15BC4Cu, 0x15BC54u)) {
        return;
    }
    ctx->pc = 0x15BC54u;
label_15bc54:
    // 0x15bc54: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15bc58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15bc5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bc60: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc64: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bc68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bc6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15bc6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15bc70: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x15bc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x15bc74: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15bc78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15bc7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bc80: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bc84: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15bc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bc88: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bc8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bc90: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x15bc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x15bc94: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15bc98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15bc9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bca0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bca4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bca8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bcac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bcacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bcb0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x15bcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x15bcb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15bcb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15bcbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bcc0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bcc4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bcc8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bccc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15bcccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15bcd0: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x15bcd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x15bcd4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15bcd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15bcdc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bce0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bce4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bce8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bcec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bcecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bcf0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x15bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x15bcf4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15bcf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15bcfc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bd00: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bd04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bd08: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bd0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15bd0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15bd10: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x15bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x15bd14: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15BD14u;
    SET_GPR_U32(ctx, 31, 0x15BD1Cu);
    ctx->pc = 0x15BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD14u;
    // 0x15bd18: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15BD14u, 0x15BD1Cu)) {
        return;
    }
    ctx->pc = 0x15BD1Cu;
label_15bd1c:
    // 0x15bd1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15bd1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15bd20: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15BD20u;
    SET_GPR_U32(ctx, 31, 0x15BD28u);
    ctx->pc = 0x15BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD20u;
    // 0x15bd24: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15BD20u, 0x15BD28u)) {
        return;
    }
    ctx->pc = 0x15BD28u;
label_15bd28:
    // 0x15bd28: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15bd2c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x15bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bd30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bd34: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15bd34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15bd38: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x15bd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15bd3c: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x15bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15bd40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15bd44: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x15bd44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x15bd48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bd4c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x15bd4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15bd50: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x15bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bd54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15bd58: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15bd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15bd5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bd60: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x15bd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15bd64: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x15bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15bd68: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x15bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bd6c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bd70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15bd70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15bd74: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x15bd74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15bd78: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x15bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15bd7c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15bd80: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15bd80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15bd84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bd88: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x15bd88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15bd8c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x15bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bd90: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15bd94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15bd94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15bd98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bd9c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x15bd9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15bda0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x15bda4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x15bda4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x15bda8: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x15bda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15bdac: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x15BDACu;
    {
        const bool branch_taken_0x15bdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDACu;
        // 0x15bdb0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdac) {
            ctx->pc = 0x15BBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bbe8;
        }
    }
    ctx->pc = 0x15BDB4u;
    // 0x15bdb4: 0x0  nop
    ctx->pc = 0x15bdb4u;
    // NOP
label_15bdb8:
    // 0x15bdb8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x15bdbc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15bdc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x15bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15bdc4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x15bdc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15bdc8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15bdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bdcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bdd0: 0xc440fff4  lwc1        $f0, -0xC($v0)
    ctx->pc = 0x15bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bdd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15bdd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15bdd8: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x15bdd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x15bddc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x15bde0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x15bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15bde4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x15bde4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15bde8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bdf0: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x15bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bdf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15bdf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15bdf8: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x15bdf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x15bdfc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x15be00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x15be00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15be04: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x15be04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15be08: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15be10: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x15be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15be14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15be18: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x15be18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x15be1c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x15be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x15be20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15be20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be24: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x15BE24u;
    SET_GPR_U32(ctx, 31, 0x15BE2Cu);
    ctx->pc = 0x15BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE24u;
    // 0x15be28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x15BE24u, 0x15BE2Cu)) {
        return;
    }
    ctx->pc = 0x15BE2Cu;
label_15be2c:
    // 0x15be2c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x15be30: 0x1840005b  blez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x15BE30u;
    {
        const bool branch_taken_0x15be30 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x15be30) {
            ctx->pc = 0x15BFA0u;
            goto label_15bfa0;
        }
    }
    ctx->pc = 0x15BE38u;
    // 0x15be38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15be38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be3c: 0x0  nop
    ctx->pc = 0x15be3cu;
    // NOP
label_15be40:
    // 0x15be40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15be44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15be44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15be48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15be4c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15be50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be54: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15be58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15be5c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x15be5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x15be60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15be64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15be64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15be68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15be6c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15be70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15be70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be74: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15be78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15be7c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x15be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x15be80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15be84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15be84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15be88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15be88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15be8c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15be90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be94: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15be98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15be9c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x15be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x15bea0: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15BEA0u;
    SET_GPR_U32(ctx, 31, 0x15BEA8u);
    ctx->pc = 0x15BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BEA0u;
    // 0x15bea4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15BEA0u, 0x15BEA8u)) {
        return;
    }
    ctx->pc = 0x15BEA8u;
label_15bea8:
    // 0x15bea8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15bea8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15beac: 0xc7a60124  lwc1        $f6, 0x124($sp)
    ctx->pc = 0x15beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15beb0: 0xc7a70118  lwc1        $f7, 0x118($sp)
    ctx->pc = 0x15beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15beb4: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x15beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15beb8: 0xc7a50114  lwc1        $f5, 0x114($sp)
    ctx->pc = 0x15beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15bebc: 0x460730c2  mul.s       $f3, $f6, $f7
    ctx->pc = 0x15bebcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x15bec0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x15bec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bec4: 0xc7a40110  lwc1        $f4, 0x110($sp)
    ctx->pc = 0x15bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15bec8: 0x46051202  mul.s       $f8, $f2, $f5
    ctx->pc = 0x15bec8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x15becc: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x15beccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x15bed0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x15bed0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15bed4: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x15bed4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x15bed8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x15bed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15bedc: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x15bedcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x15bee0: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x15bee0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x15bee4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15bee4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15bee8: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x15bee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x15beec: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x15beecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x15bef0: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x15bef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x15bef4: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x15bef4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x15bef8: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x15bef8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x15befc: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x15befcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15bf00: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x15bf00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x15bf04: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x15bf04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15bf08: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x15bf08u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x15bf0c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x15bf0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x15bf10: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x15bf10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x15bf14: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x15bf14u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x15bf18: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x15bf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x15bf1c: 0xe7a30144  swc1        $f3, 0x144($sp)
    ctx->pc = 0x15bf1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x15bf20: 0xe7a60140  swc1        $f6, 0x140($sp)
    ctx->pc = 0x15bf20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x15bf24: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x15bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x15bf28: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x15BF28u;
    SET_GPR_U32(ctx, 31, 0x15BF30u);
    ctx->pc = 0x15BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF28u;
    // 0x15bf2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x15BF28u, 0x15BF30u)) {
        return;
    }
    ctx->pc = 0x15BF30u;
label_15bf30:
    // 0x15bf30: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x15bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15bf34: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bf38: 0x6bac0147  ldl         $t4, 0x147($sp)
    ctx->pc = 0x15bf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x15bf3c: 0x6fac0140  ldr         $t4, 0x140($sp)
    ctx->pc = 0x15bf3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x15bf40: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x15bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x15bf44: 0xb04c0007  sdl         $t4, 0x7($v0)
    ctx->pc = 0x15bf44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15bf48: 0xb44c0000  sdr         $t4, 0x0($v0)
    ctx->pc = 0x15bf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15bf4c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x15bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x15bf50: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x15bf54: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x15bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bf58: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15bf5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15bf5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15bf60: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x15bf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15bf64: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x15bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bf68: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x15bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x15bf6c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15bf6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15bf70: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bf74: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x15bf74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15bf78: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x15bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bf7c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x15bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x15bf80: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15bf80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15bf84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bf88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x15bf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15bf8c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x15bf90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15bf90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15bf94: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15bf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15bf98: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x15BF98u;
    {
        const bool branch_taken_0x15bf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF98u;
        // 0x15bf9c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf98) {
            ctx->pc = 0x15BE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15be40;
        }
    }
    ctx->pc = 0x15BFA0u;
label_15bfa0:
    // 0x15bfa0: 0x6e00006  bltz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BFA0u;
    {
        const bool branch_taken_0x15bfa0 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x15BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFA0u;
        // 0x15bfa4: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfa0) {
            ctx->pc = 0x15BFBCu;
            goto label_15bfbc;
        }
    }
    ctx->pc = 0x15BFA8u;
    // 0x15bfa8: 0x44971800  mtc1        $s7, $f3
    ctx->pc = 0x15bfa8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15bfac: 0x0  nop
    ctx->pc = 0x15bfacu;
    // NOP
    // 0x15bfb0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x15bfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x15bfb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15BFB4u;
    {
        const bool branch_taken_0x15bfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bfb4) {
            ctx->pc = 0x15BFD4u;
            goto label_15bfd4;
        }
    }
    ctx->pc = 0x15BFBCu;
label_15bfbc:
    // 0x15bfbc: 0x171842  srl         $v1, $s7, 1
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
    // 0x15bfc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15bfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15bfc4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15bfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15bfc8: 0x0  nop
    ctx->pc = 0x15bfc8u;
    // NOP
    // 0x15bfcc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x15bfccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x15bfd0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x15bfd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_15bfd4:
    // 0x15bfd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15bfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15bfd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15bfd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bfdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15bfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfe0: 0x0  nop
    ctx->pc = 0x15bfe0u;
    // NOP
    // 0x15bfe4: 0x0  nop
    ctx->pc = 0x15bfe4u;
    // NOP
    // 0x15bfe8: 0x460301c3  div.s       $f7, $f0, $f3
    ctx->pc = 0x15bfe8u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x15bfec: 0x12e0009f  beqz        $s7, . + 4 + (0x9F << 2)
    ctx->pc = 0x15BFECu;
    {
        const bool branch_taken_0x15bfec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFECu;
        // 0x15bff0: 0x46003d46  mov.s       $f21, $f7 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfec) {
            ctx->pc = 0x15C26Cu;
            goto label_15c26c;
        }
    }
    ctx->pc = 0x15BFF4u;
    // 0x15bff4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15bff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bff8: 0x26930050  addiu       $s3, $s4, 0x50
    ctx->pc = 0x15bff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x15bffc: 0x0  nop
    ctx->pc = 0x15bffcu;
    // NOP
label_15c000:
    // 0x15c000: 0x460738c2  mul.s       $f3, $f7, $f7
    ctx->pc = 0x15c000u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x15c004: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x15c004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x15c008: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x15c008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15c00c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x15c00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x15c010: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x15c010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15c014: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x15c014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15c018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15c018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15c01c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x15c01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15c020: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c024: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x15c024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x15c028: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15c02c: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x15c02cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15c030: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15c030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c034: 0x46031880  add.s       $f2, $f3, $f3
    ctx->pc = 0x15c034u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x15c038: 0xe4470054  swc1        $f7, 0x54($v0)
    ctx->pc = 0x15c038u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x15c03c: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x15c03cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15c040: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c044: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x15c044u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15c048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c04c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x15c04cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x15c050: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x15c050u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x15c054: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x15c054u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x15c058: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15c058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15c05c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x15c05cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x15c060: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x15c060u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x15c064: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x15c064u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x15c068: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x15c068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x15c06c: 0x46153d00  add.s       $f20, $f7, $f21
    ctx->pc = 0x15c06cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x15c070: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x15c070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x15c074: 0x18600066  blez        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x15C074u;
    {
        const bool branch_taken_0x15c074 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C074u;
        // 0x15c078: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c074) {
            ctx->pc = 0x15C210u;
            goto label_15c210;
        }
    }
    ctx->pc = 0x15C07Cu;
    // 0x15c07c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c080:
    // 0x15c080: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x15c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x15c084: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15c084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15c088: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15c088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15c08c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c090: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x15c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c094: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15c094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15c098: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x15c098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15c09c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15c09cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15c0a0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15c0a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15c0a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15c0a8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x15c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c0ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c0b0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c0b4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15c0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15c0b8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x15c0b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x15c0bc: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x15c0bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15c0c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15c0c4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x15c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c0c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c0cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c0d0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x15c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15c0d4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x15c0d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15c0d8: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x15c0d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15c0dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c0e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c0e4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x15c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c0e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15c0ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15c0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c0f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c0f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15c0f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15c0f8: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15c0f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15c0fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c100: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x15c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c104: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c108: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c10c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c110: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c114: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15c114u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15c118: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x15c118u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15c11c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c120: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x15c120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c124: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c128: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c12c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c130: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c134: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15c134u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15c138: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x15c138u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15c13c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c140: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x15c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15c144: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x15c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c148: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15c148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15c14c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c150: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c154: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15c154u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15c158: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15c158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15c15c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c160: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x15c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c164: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15c168: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c16c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15c16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c170: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c174: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15c174u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15c178: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x15c178u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15c17c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c180: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x15c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c184: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15c188: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c18c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c190: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c194: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15c194u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15c198: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x15c198u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15c19c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15c1a0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c1a4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x15c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15c1ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c1b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15c1b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15c1b8: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15c1b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15c1bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15c1c0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x15c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x15c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15c1c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c1cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c1d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c1d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15c1d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15c1d8: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x15c1d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15c1dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15c1e0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x15c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x15c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15c1e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c1ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15c1f4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15c1f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15c1f8: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x15c1f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15c1fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15c200: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15c200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15c204: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15c204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15c208: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x15C208u;
    {
        const bool branch_taken_0x15c208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C208u;
        // 0x15c20c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c208) {
            ctx->pc = 0x15C080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c080;
        }
    }
    ctx->pc = 0x15C210u;
label_15c210:
    // 0x15c210: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15c214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c218: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15c21c: 0x26050074  addiu       $a1, $s0, 0x74
    ctx->pc = 0x15c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x15c220: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c224: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c228: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15c228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15c22c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x15c22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15c230: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15c230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15c234: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x15c234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x15c238: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x15c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c23c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x15c23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15c240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15c244: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x15c244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15c248: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15c248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15c24c: 0xc05733a  jal         func_15CCE8
    ctx->pc = 0x15C24Cu;
    SET_GPR_U32(ctx, 31, 0x15C254u);
    ctx->pc = 0x15C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C24Cu;
    // 0x15c250: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15CCE8u, 0x15C24Cu, 0x15C254u)) {
        return;
    }
    ctx->pc = 0x15C254u;
label_15c254:
    // 0x15c254: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x15c254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x15c258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c25c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x15c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x15c260: 0x97102b  sltu        $v0, $a0, $s7
    ctx->pc = 0x15c260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x15c264: 0x1440ff66  bnez        $v0, . + 4 + (-0x9A << 2)
    ctx->pc = 0x15C264u;
    {
        const bool branch_taken_0x15c264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C264u;
        // 0x15c268: 0x4600a1c6  mov.s       $f7, $f20 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c264) {
            ctx->pc = 0x15C000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c000;
        }
    }
    ctx->pc = 0x15C26Cu;
label_15c26c:
    // 0x15c26c: 0xae970090  sw          $s7, 0x90($s4)
    ctx->pc = 0x15c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 23));
label_15c270:
    // 0x15c270: 0xc057206  jal         func_15C818
    ctx->pc = 0x15C270u;
    SET_GPR_U32(ctx, 31, 0x15C278u);
    ctx->pc = 0x15C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C270u;
    // 0x15c274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15C818u, 0x15C270u, 0x15C278u)) {
        return;
    }
    ctx->pc = 0x15C278u;
label_15c278:
    // 0x15c278: 0x8e900028  lw          $s0, 0x28($s4)
    ctx->pc = 0x15c278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x15c27c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15C27Cu;
    {
        const bool branch_taken_0x15c27c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C27Cu;
        // 0x15c280: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c27c) {
            ctx->pc = 0x15C2C4u;
            goto label_15c2c4;
        }
    }
    ctx->pc = 0x15C284u;
    // 0x15c284: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x15c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15c288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c28c: 0x4602a000  add.s       $f0, $f20, $f2
    ctx->pc = 0x15c28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x15c290: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x15c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c298: 0x0  nop
    ctx->pc = 0x15c298u;
    // NOP
    // 0x15c29c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15C29Cu;
    {
        const bool branch_taken_0x15c29c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c29c) {
            ctx->pc = 0x15C2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C29Cu;
            // 0x15c2a0: 0x46020d01  sub.s       $f20, $f1, $f2 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C2A4u;
            goto label_15c2a4;
        }
    }
    ctx->pc = 0x15C2A4u;
label_15c2a4:
    // 0x15c2a4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15c2a8: 0xc09d64c  jal         func_275930
    ctx->pc = 0x15C2A8u;
    SET_GPR_U32(ctx, 31, 0x15C2B0u);
    ctx->pc = 0x15C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C2A8u;
    // 0x15c2ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x15C2A8u, 0x15C2B0u)) {
        return;
    }
    ctx->pc = 0x15C2B0u;
label_15c2b0:
    // 0x15c2b0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2b8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x15c2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x15c2bc: 0xc0572b8  jal         func_15CAE0
    ctx->pc = 0x15C2BCu;
    SET_GPR_U32(ctx, 31, 0x15C2C4u);
    ctx->pc = 0x15C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C2BCu;
    // 0x15c2c0: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CAE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15CAE0u, 0x15C2BCu, 0x15C2C4u)) {
        return;
    }
    ctx->pc = 0x15C2C4u;
label_15c2c4:
    // 0x15c2c4: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x15c2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_15c2c8:
    // 0x15c2c8: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x15c2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x15c2cc: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x15c2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x15c2d0: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x15c2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x15c2d4: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x15c2d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x15c2d8: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x15c2d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15c2dc: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x15c2dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15c2e0: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x15c2e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15c2e4: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x15c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15c2e8: 0xc7b601f0  lwc1        $f22, 0x1F0($sp)
    ctx->pc = 0x15c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15c2ec: 0xc7b501e8  lwc1        $f21, 0x1E8($sp)
    ctx->pc = 0x15c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15c2f0: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x15c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15c2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x15C2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2F4u;
        // 0x15c2f8: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C2FCu;
    // 0x15c2fc: 0x0  nop
    ctx->pc = 0x15c2fcu;
    // NOP
    ctx->pc = 0x15c300u;
}
