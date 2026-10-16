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

// Function: sub_0028FE18
// Address: 0x28fe18 - 0x2906a8
void sub_0028FE18_0x28fe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FE18_0x28fe18");
#endif

    switch (ctx->pc) {
        case 0x28fe78u: goto label_28fe78;
        case 0x28fe8cu: goto label_28fe8c;
        case 0x28ff18u: goto label_28ff18;
        case 0x28ff34u: goto label_28ff34;
        case 0x290000u: goto label_290000;
        case 0x290018u: goto label_290018;
        case 0x290048u: goto label_290048;
        case 0x290098u: goto label_290098;
        case 0x290460u: goto label_290460;
        case 0x290488u: goto label_290488;
        case 0x2904acu: goto label_2904ac;
        case 0x2904d0u: goto label_2904d0;
        case 0x2904e8u: goto label_2904e8;
        case 0x290510u: goto label_290510;
        case 0x290528u: goto label_290528;
        case 0x29054cu: goto label_29054c;
        case 0x290570u: goto label_290570;
        case 0x2905a4u: goto label_2905a4;
        case 0x2905c0u: goto label_2905c0;
        case 0x2905f0u: goto label_2905f0;
        case 0x290600u: goto label_290600;
        case 0x29063cu: goto label_29063c;
        default: break;
    }

    ctx->pc = 0x28fe18u;

    // 0x28fe18: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x28fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x28fe1c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x28fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x28fe20: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x28fe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x28fe24: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28fe24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe28: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x28fe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x28fe2c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x28fe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x28fe30: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x28fe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x28fe34: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x28fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x28fe38: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x28fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x28fe3c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x28fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x28fe40: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x28fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x28fe44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28fe48: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x28fe48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x28fe4c: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x28fe4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x28fe50: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x28fe50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x28fe54: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x28fe54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x28fe58: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x28fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x28fe5c: 0x8ec2006c  lw          $v0, 0x6C($s6)
    ctx->pc = 0x28fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x28fe60: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x28fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x28fe64: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x28fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x28fe68: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28FE68u;
    {
        const bool branch_taken_0x28fe68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE68u;
        // 0x28fe6c: 0xafa8004c  sw          $t0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe68) {
            ctx->pc = 0x28FEECu;
            goto label_28feec;
        }
    }
    ctx->pc = 0x28FE70u;
    // 0x28fe70: 0xc095f18  jal         func_257C60
    ctx->pc = 0x28FE70u;
    SET_GPR_U32(ctx, 31, 0x28FE78u);
    ctx->pc = 0x257C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257C60u, 0x28FE70u, 0x28FE78u)) {
        return;
    }
    ctx->pc = 0x28FE78u;
label_28fe78:
    // 0x28fe78: 0x8ec50068  lw          $a1, 0x68($s6)
    ctx->pc = 0x28fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x28fe7c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FE7Cu;
    {
        const bool branch_taken_0x28fe7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE7Cu;
        // 0x28fe80: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe7c) {
            ctx->pc = 0x28FE8Cu;
            goto label_28fe8c;
        }
    }
    ctx->pc = 0x28FE84u;
    // 0x28fe84: 0xc095f6a  jal         func_257DA8
    ctx->pc = 0x28FE84u;
    SET_GPR_U32(ctx, 31, 0x28FE8Cu);
    ctx->pc = 0x28FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE84u;
    // 0x28fe88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257DA8u, 0x28FE84u, 0x28FE8Cu)) {
        return;
    }
    ctx->pc = 0x28FE8Cu;
label_28fe8c:
    // 0x28fe8c: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x28fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x28fe90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28fe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28fe94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28FE94u;
    {
        const bool branch_taken_0x28fe94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE94u;
        // 0x28fe98: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe94) {
            ctx->pc = 0x28FECCu;
            goto label_28fecc;
        }
    }
    ctx->pc = 0x28FE9Cu;
    // 0x28fe9c: 0x24463a10  addiu       $a2, $v0, 0x3A10
    ctx->pc = 0x28fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x28fea0: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x28fea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x28fea4: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x28fea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x28fea8: 0xaba30033  swl         $v1, 0x33($sp)
    ctx->pc = 0x28fea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28feac: 0xbba30030  swr         $v1, 0x30($sp)
    ctx->pc = 0x28feacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28feb0: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x28feb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28feb4: 0x8bab0033  lwl         $t3, 0x33($sp)
    ctx->pc = 0x28feb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
    // 0x28feb8: 0x9bab0030  lwr         $t3, 0x30($sp)
    ctx->pc = 0x28feb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x28febc: 0xa94b0007  swl         $t3, 0x7($t2)
    ctx->pc = 0x28febcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28fec0: 0xb94b0004  swr         $t3, 0x4($t2)
    ctx->pc = 0x28fec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28fec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FEC4u;
    {
        const bool branch_taken_0x28fec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEC4u;
        // 0x28fec8: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fec4) {
            ctx->pc = 0x28FEE4u;
            goto label_28fee4;
        }
    }
    ctx->pc = 0x28FECCu;
label_28fecc:
    // 0x28fecc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x28feccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28fed0: 0x8ac60063  lwl         $a2, 0x63($s6)
    ctx->pc = 0x28fed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x28fed4: 0x9ac60060  lwr         $a2, 0x60($s6)
    ctx->pc = 0x28fed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x28fed8: 0xa8a60007  swl         $a2, 0x7($a1)
    ctx->pc = 0x28fed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28fedc: 0xb8a60004  swr         $a2, 0x4($a1)
    ctx->pc = 0x28fedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28fee0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x28fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_28fee4:
    // 0x28fee4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28FEE4u;
    {
        const bool branch_taken_0x28fee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEE4u;
        // 0x28fee8: 0xaec3006c  sw          $v1, 0x6C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fee4) {
            ctx->pc = 0x28FF00u;
            goto label_28ff00;
        }
    }
    ctx->pc = 0x28FEECu;
label_28feec:
    // 0x28feec: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x28feecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x28fef0: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x28fef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x28fef4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x28fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28fef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28fefc: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x28fefcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_28ff00:
    // 0x28ff00: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x28ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ff04: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x28ff04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ff08: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x28ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x28ff0c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x28ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x28ff10: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x28ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x28ff14: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x28ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_28ff18:
    // 0x28ff18: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x28ff18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ff1c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x28ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28ff20: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FF20u;
    {
        const bool branch_taken_0x28ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x28FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF20u;
        // 0x28ff24: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff20) {
            ctx->pc = 0x28FF38u;
            goto label_28ff38;
        }
    }
    ctx->pc = 0x28FF28u;
    // 0x28ff28: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x28ff28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ff2c: 0xc09294c  jal         func_24A530
    ctx->pc = 0x28FF2Cu;
    SET_GPR_U32(ctx, 31, 0x28FF34u);
    ctx->pc = 0x28FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF2Cu;
    // 0x28ff30: 0x8d440000  lw          $a0, 0x0($t2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28FF2Cu, 0x28FF34u)) {
        return;
    }
    ctx->pc = 0x28FF34u;
label_28ff34:
    // 0x28ff34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28ff34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ff38:
    // 0x28ff38: 0x8fab0064  lw          $t3, 0x64($sp)
    ctx->pc = 0x28ff38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x28ff3c: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x28ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x28ff40: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x28ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ff44: 0x2562fffe  addiu       $v0, $t3, -0x2
    ctx->pc = 0x28ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x28ff48: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x28ff48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ff4c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x28ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28ff50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ff54: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x28ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x28ff58: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x28ff58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x28ff5c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x28ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x28ff60: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x28ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ff64: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x28ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x28ff68: 0x1486ffeb  bne         $a0, $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28FF68u;
    {
        const bool branch_taken_0x28ff68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x28FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF68u;
        // 0x28ff6c: 0xafaa0060  sw          $t2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff68) {
            ctx->pc = 0x28FF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ff18;
        }
    }
    ctx->pc = 0x28FF70u;
    // 0x28ff70: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x28ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x28ff74: 0x8fab0064  lw          $t3, 0x64($sp)
    ctx->pc = 0x28ff74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x28ff78: 0x244263b0  addiu       $v0, $v0, 0x63B0
    ctx->pc = 0x28ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x28ff7c: 0xc6d60070  lwc1        $f22, 0x70($s6)
    ctx->pc = 0x28ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28ff80: 0x116001ac  beqz        $t3, . + 4 + (0x1AC << 2)
    ctx->pc = 0x28FF80u;
    {
        const bool branch_taken_0x28ff80 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF80u;
        // 0x28ff84: 0xc45506f8  lwc1        $f21, 0x6F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff80) {
            ctx->pc = 0x290634u;
            goto label_290634;
        }
    }
    ctx->pc = 0x28FF88u;
    // 0x28ff88: 0x114001aa  beqz        $t2, . + 4 + (0x1AA << 2)
    ctx->pc = 0x28FF88u;
    {
        const bool branch_taken_0x28ff88 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF88u;
        // 0x28ff8c: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff88) {
            ctx->pc = 0x290634u;
            goto label_290634;
        }
    }
    ctx->pc = 0x28FF90u;
    // 0x28ff90: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x28ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28ff94: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x28ff94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x28ff98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ff9c: 0x8d45005c  lw          $a1, 0x5C($t2)
    ctx->pc = 0x28ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x28ffa0: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x28ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x28ffa4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x28ffa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28ffa8: 0x8fab004c  lw          $t3, 0x4C($sp)
    ctx->pc = 0x28ffa8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x28ffac: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x28ffacu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28ffb0: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x28ffb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x28ffb4: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x28ffb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28ffb8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x28ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x28ffbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28ffbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffc0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x28ffc4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x28ffc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x28ffc8: 0x8ca9002c  lw          $t1, 0x2C($a1)
    ctx->pc = 0x28ffc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x28ffcc: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x28ffccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x28ffd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28ffd4: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x28ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x28ffd8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x28ffd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x28ffdc: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x28ffdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x28ffe0: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x28ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
    // 0x28ffe4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x28ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x28ffe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28ffec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x28ffecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x28fff0: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x28fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x28fff4: 0xafa6006c  sw          $a2, 0x6C($sp)
    ctx->pc = 0x28fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
    // 0x28fff8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x28fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x28fffc: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x28fffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_290000:
    // 0x290000: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x290000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290004: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x290004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x290008: 0x144a0005  bne         $v0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x290008u;
    {
        const bool branch_taken_0x290008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x29000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290008u;
        // 0x29000c: 0xc4d40010  lwc1        $f20, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290008) {
            ctx->pc = 0x290020u;
            goto label_290020;
        }
    }
    ctx->pc = 0x290010u;
    // 0x290010: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x290010u;
    SET_GPR_U32(ctx, 31, 0x290018u);
    ctx->pc = 0x290014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290010u;
    // 0x290014: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x290010u, 0x290018u)) {
        return;
    }
    ctx->pc = 0x290018u;
label_290018:
    // 0x290018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x290018u;
    {
        const bool branch_taken_0x290018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290018u;
        // 0x29001c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290018) {
            ctx->pc = 0x290028u;
            goto label_290028;
        }
    }
    ctx->pc = 0x290020u;
label_290020:
    // 0x290020: 0x8fab0050  lw          $t3, 0x50($sp)
    ctx->pc = 0x290020u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290024: 0x8d700000  lw          $s0, 0x0($t3)
    ctx->pc = 0x290024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_290028:
    // 0x290028: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x290028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29002c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290030: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290034: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290034u;
    {
        const bool branch_taken_0x290034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x290038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290034u;
        // 0x290038: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290034) {
            ctx->pc = 0x29004Cu;
            goto label_29004c;
        }
    }
    ctx->pc = 0x29003Cu;
    // 0x29003c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x29003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290040: 0xc09294c  jal         func_24A530
    ctx->pc = 0x290040u;
    SET_GPR_U32(ctx, 31, 0x290048u);
    ctx->pc = 0x290044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290040u;
    // 0x290044: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x290040u, 0x290048u)) {
        return;
    }
    ctx->pc = 0x290048u;
label_290048:
    // 0x290048: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x290048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29004c:
    // 0x29004c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x29004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x290050: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x290050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x290054: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x290054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x290058: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x290058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x29005c: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x29005cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x290060: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x290060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x290064: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x290064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x290068: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x290068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29006c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x29006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x290070: 0x4600b9c3  div.s       $f7, $f23, $f0
    ctx->pc = 0x290070u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[0]);
    // 0x290074: 0x110000e0  beqz        $t0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x290074u;
    {
        const bool branch_taken_0x290074 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x290078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290074u;
        // 0x290078: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290074) {
            ctx->pc = 0x2903F8u;
            goto label_2903f8;
        }
    }
    ctx->pc = 0x29007Cu;
    // 0x29007c: 0x4614b200  add.s       $f8, $f22, $f20
    ctx->pc = 0x29007cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x290080: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x290080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x290084: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x290084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290088: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x290088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29008c: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x290090: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x290090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x290094: 0x0  nop
    ctx->pc = 0x290094u;
    // NOP
label_290098:
    // 0x290098: 0xc482fff8  lwc1        $f2, -0x8($a0)
    ctx->pc = 0x290098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29009c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x29009cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2900a0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2900a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2900a4: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x2900a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2900a8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2900a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2900ac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2900acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2900b0: 0xc481fff0  lwc1        $f1, -0x10($a0)
    ctx->pc = 0x2900b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2900b4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2900b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2900b8: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2900b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2900bc: 0xc482fff4  lwc1        $f2, -0xC($a0)
    ctx->pc = 0x2900bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2900c0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2900c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2900c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2900c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2900c8: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2900c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2900cc: 0xe4d50008  swc1        $f21, 0x8($a2)
    ctx->pc = 0x2900ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2900d0: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x2900d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x2900d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2900d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2900d8: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2900D8u;
    {
        const bool branch_taken_0x2900d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2900d8) {
            ctx->pc = 0x2900DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2900D8u;
            // 0x2900dc: 0xa0a90000  sb          $t1, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2901A8u;
            goto label_2901a8;
        }
    }
    ctx->pc = 0x2900E0u;
    // 0x2900e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2900e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2900e4: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x2900e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2900e8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2900e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2900ec: 0xc6c4001c  lwc1        $f4, 0x1C($s6)
    ctx->pc = 0x2900ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2900f0: 0xc6c50020  lwc1        $f5, 0x20($s6)
    ctx->pc = 0x2900f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2900f4: 0xc6c60024  lwc1        $f6, 0x24($s6)
    ctx->pc = 0x2900f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2900f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2900f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2900fc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2900fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x290100: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x290100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290104: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x290104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x290108: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x290108u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x29010c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x29010cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x290110: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x290110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290114: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x290114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x290118: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x290118u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x29011c: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x29011cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x290120: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x290120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290124: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x290124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x290128: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x290128u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x29012c: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x29012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290130: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x290130u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x290134: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x290134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290138: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x290138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29013c: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x29013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290140: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x290140u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x290144: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x290144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x290148: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x290148u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29014c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x29014cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x290150: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x290150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x290154: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x290154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x290158: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x290158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x29015c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29015cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x290160: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x290160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290164: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x290164u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x290168: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x290168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x29016c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x29016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290170: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x290170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x290174: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x290174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x290178: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x290178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29017c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29017cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290180: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x290180u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x290184: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x290184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290188: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x290188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29018c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29018cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290190: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x290190u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x290194: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x290194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290198: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x290198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29019c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29019cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2901a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2901A0u;
    {
        const bool branch_taken_0x2901a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901A0u;
        // 0x2901a4: 0xa0a20003  sb          $v0, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901a0) {
            ctx->pc = 0x2901C0u;
            goto label_2901c0;
        }
    }
    ctx->pc = 0x2901A8u;
label_2901a8:
    // 0x2901a8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x2901a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2901ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2901acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2901b0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2901b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2901b4: 0xa0a90001  sb          $t1, 0x1($a1)
    ctx->pc = 0x2901b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x2901b8: 0xa0a90002  sb          $t1, 0x2($a1)
    ctx->pc = 0x2901b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2901bc: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x2901bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
label_2901c0:
    // 0x2901c0: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x2901c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x2901c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2901c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2901c8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2901C8u;
    {
        const bool branch_taken_0x2901c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901C8u;
        // 0x2901cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901c8) {
            ctx->pc = 0x290228u;
            goto label_290228;
        }
    }
    ctx->pc = 0x2901D0u;
    // 0x2901d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2901d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2901d4: 0xc6c20028  lwc1        $f2, 0x28($s6)
    ctx->pc = 0x2901d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2901d8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2901d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2901dc: 0xc6c3002c  lwc1        $f3, 0x2C($s6)
    ctx->pc = 0x2901dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2901e0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2901e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2901e4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2901e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2901e8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2901e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2901ec: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2901ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2901f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2901f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2901f4: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x2901f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2901f8: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x2901f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2901fc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2901fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x290200: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x290200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x290204: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x290204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x290208: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x290208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29020c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x29020cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x290210: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x290210u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290214: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x290214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290218: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x290218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x29021c: 0xafaa0070  sw          $t2, 0x70($sp)
    ctx->pc = 0x29021cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
    // 0x290220: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x290220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x290224: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x290224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_290228:
    // 0x290228: 0x8fab0068  lw          $t3, 0x68($sp)
    ctx->pc = 0x290228u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29022c: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x29022cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x290230: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x290230u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x290234: 0xafab0068  sw          $t3, 0x68($sp)
    ctx->pc = 0x290234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 11));
    // 0x290238: 0x4614b041  sub.s       $f1, $f22, $f20
    ctx->pc = 0x290238u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x29023c: 0xc482fff8  lwc1        $f2, -0x8($a0)
    ctx->pc = 0x29023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290240: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x290240u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290244: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x290244u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x290248: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x290248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29024c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29024cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290250: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x290250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x290254: 0xc481fff0  lwc1        $f1, -0x10($a0)
    ctx->pc = 0x290254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290258: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x290258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29025c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x29025cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x290260: 0xc482fff4  lwc1        $f2, -0xC($a0)
    ctx->pc = 0x290260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290264: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x290264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290268: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x290268u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29026c: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x29026cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x290270: 0xe4d50008  swc1        $f21, 0x8($a2)
    ctx->pc = 0x290270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x290274: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x290274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x290278: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29027c: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x29027Cu;
    {
        const bool branch_taken_0x29027c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29027c) {
            ctx->pc = 0x290280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29027Cu;
            // 0x290280: 0xa0a90000  sb          $t1, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290350u;
            goto label_290350;
        }
    }
    ctx->pc = 0x290284u;
    // 0x290284: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x290284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290288: 0xc6c10048  lwc1        $f1, 0x48($s6)
    ctx->pc = 0x290288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29028c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x29028cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x290290: 0xc6c4004c  lwc1        $f4, 0x4C($s6)
    ctx->pc = 0x290290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290294: 0xc6c50050  lwc1        $f5, 0x50($s6)
    ctx->pc = 0x290294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x290298: 0xc6c60054  lwc1        $f6, 0x54($s6)
    ctx->pc = 0x290298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29029c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29029cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2902a0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2902a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2902a4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2902a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2902a8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2902a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2902ac: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2902acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2902b0: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2902b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2902b4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2902b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2902b8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2902b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2902bc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2902bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2902c0: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2902c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2902c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2902c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2902c8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2902c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2902cc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2902ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2902d0: 0xc6c30030  lwc1        $f3, 0x30($s6)
    ctx->pc = 0x2902d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2902d4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2902d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2902d8: 0xc6c20034  lwc1        $f2, 0x34($s6)
    ctx->pc = 0x2902d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2902dc: 0xc6c00038  lwc1        $f0, 0x38($s6)
    ctx->pc = 0x2902dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2902e0: 0xc6c1003c  lwc1        $f1, 0x3C($s6)
    ctx->pc = 0x2902e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2902e4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2902e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2902e8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2902e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2902ec: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2902ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2902f0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2902f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2902f4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2902f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2902f8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2902f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2902fc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2902fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x290300: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x290300u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x290304: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x290304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290308: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x290308u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29030c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x29030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x290310: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x290310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290314: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x290314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x290318: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x290318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x29031c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29031cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x290320: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x290320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290324: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x290324u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x290328: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x290328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29032c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29032cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x290330: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x290330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290334: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x290334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x290338: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x290338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29033c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29033cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x290340: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x290340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290344: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x290344u;
    {
        const bool branch_taken_0x290344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290344u;
        // 0x290348: 0xa0a20003  sb          $v0, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290344) {
            ctx->pc = 0x290368u;
            goto label_290368;
        }
    }
    ctx->pc = 0x29034Cu;
    // 0x29034c: 0x0  nop
    ctx->pc = 0x29034cu;
    // NOP
label_290350:
    // 0x290350: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x290350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x290354: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x290354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x290358: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x290358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x29035c: 0xa0a90001  sb          $t1, 0x1($a1)
    ctx->pc = 0x29035cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x290360: 0xa0a90002  sb          $t1, 0x2($a1)
    ctx->pc = 0x290360u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x290364: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x290364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
label_290368:
    // 0x290368: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x290368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x29036c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29036cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x290370: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x290370u;
    {
        const bool branch_taken_0x290370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290370u;
        // 0x290374: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290370) {
            ctx->pc = 0x2903D0u;
            goto label_2903d0;
        }
    }
    ctx->pc = 0x290378u;
    // 0x290378: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x290378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29037c: 0xc6c20058  lwc1        $f2, 0x58($s6)
    ctx->pc = 0x29037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290380: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x290380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x290384: 0xc6c3005c  lwc1        $f3, 0x5C($s6)
    ctx->pc = 0x290384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290388: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x290388u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29038c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x29038cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x290390: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x290390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290394: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x290394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x290398: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x290398u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x29039c: 0xc6c10040  lwc1        $f1, 0x40($s6)
    ctx->pc = 0x29039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2903a0: 0xc6c00044  lwc1        $f0, 0x44($s6)
    ctx->pc = 0x2903a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2903a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2903a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2903a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2903a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2903ac: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2903acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2903b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2903b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2903b4: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x2903b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2903b8: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x2903b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2903bc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2903bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2903c0: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2903c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x2903c4: 0xafaa0070  sw          $t2, 0x70($sp)
    ctx->pc = 0x2903c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
    // 0x2903c8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2903c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2903cc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2903ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2903d0:
    // 0x2903d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2903d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2903d4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2903d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2903d8: 0x8fab005c  lw          $t3, 0x5C($sp)
    ctx->pc = 0x2903d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2903dc: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x2903dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2903e0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2903e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2903e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2903e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2903e8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x2903e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x2903ec: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x2903ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2903f0: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x2903F0u;
    {
        const bool branch_taken_0x2903f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2903F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903F0u;
        // 0x2903f4: 0xafab005c  sw          $t3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903f0) {
            ctx->pc = 0x290098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290098;
        }
    }
    ctx->pc = 0x2903F8u;
label_2903f8:
    // 0x2903f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2903f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2903fc: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x2903fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290400: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x290400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x290404: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x290404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x290408: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x290408u;
    {
        const bool branch_taken_0x290408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290408u;
        // 0x29040c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290408) {
            ctx->pc = 0x290614u;
            goto label_290614;
        }
    }
    ctx->pc = 0x290410u;
    // 0x290410: 0x26640003  addiu       $a0, $s3, 0x3
    ctx->pc = 0x290410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x290414: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x290414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x290418: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x290418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x29041c: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x29041cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x290420: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x290420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x290424: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290424u;
    {
        const bool branch_taken_0x290424 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x290428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290424u;
        // 0x290428: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290424) {
            ctx->pc = 0x290434u;
            goto label_290434;
        }
    }
    ctx->pc = 0x29042Cu;
    // 0x29042c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x29042Cu;
    {
        const bool branch_taken_0x29042c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29042Cu;
        // 0x290430: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29042c) {
            ctx->pc = 0x2904E8u;
            goto label_2904e8;
        }
    }
    ctx->pc = 0x290434u;
label_290434:
    // 0x290434: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x290434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290438: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x290438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29043c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x29043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x290440: 0x3212ffff  andi        $s2, $s0, 0xFFFF
    ctx->pc = 0x290440u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x290444: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x290444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x290448: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x290448u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x29044c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29044cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290450: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x290450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290454: 0x3266ffff  andi        $a2, $s3, 0xFFFF
    ctx->pc = 0x290454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x290458: 0xc095930  jal         func_2564C0
    ctx->pc = 0x290458u;
    SET_GPR_U32(ctx, 31, 0x290460u);
    ctx->pc = 0x29045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290458u;
    // 0x29045c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x290458u, 0x290460u)) {
        return;
    }
    ctx->pc = 0x290460u;
label_290460:
    // 0x290460: 0x26770004  addiu       $s7, $s3, 0x4
    ctx->pc = 0x290460u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x290464: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x290464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x290468: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x290468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29046c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x29046cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x290470: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x290470u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290474: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x290474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290478: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x290478u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x29047c: 0xafaa005c  sw          $t2, 0x5C($sp)
    ctx->pc = 0x29047cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 10));
    // 0x290480: 0xc095936  jal         func_2564D8
    ctx->pc = 0x290480u;
    SET_GPR_U32(ctx, 31, 0x290488u);
    ctx->pc = 0x290484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290480u;
    // 0x290484: 0xafab0054  sw          $t3, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x290480u, 0x290488u)) {
        return;
    }
    ctx->pc = 0x290488u;
label_290488:
    // 0x290488: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x290488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x29048c: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x29048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x290490: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x290490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x290494: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x290494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290498: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x290498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x29049c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x29049cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2904a0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2904a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2904a4: 0xc095930  jal         func_2564C0
    ctx->pc = 0x2904A4u;
    SET_GPR_U32(ctx, 31, 0x2904ACu);
    ctx->pc = 0x2904A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904A4u;
    // 0x2904a8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x2904A4u, 0x2904ACu)) {
        return;
    }
    ctx->pc = 0x2904ACu;
label_2904ac:
    // 0x2904ac: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2904acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2904b0: 0x26640005  addiu       $a0, $s3, 0x5
    ctx->pc = 0x2904b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x2904b4: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x2904b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x2904b8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2904b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904bc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2904bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2904c0: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2904c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x2904c4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2904c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2904c8: 0xc095936  jal         func_2564D8
    ctx->pc = 0x2904C8u;
    SET_GPR_U32(ctx, 31, 0x2904D0u);
    ctx->pc = 0x2904CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904C8u;
    // 0x2904cc: 0xafaa0054  sw          $t2, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x2904C8u, 0x2904D0u)) {
        return;
    }
    ctx->pc = 0x2904D0u;
label_2904d0:
    // 0x2904d0: 0x8fab005c  lw          $t3, 0x5C($sp)
    ctx->pc = 0x2904d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2904d4: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2904d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2904d8: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x2904d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2904dc: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x2904DCu;
    {
        const bool branch_taken_0x2904dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2904dc) {
            ctx->pc = 0x2904E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2904DCu;
            // 0x2904e0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290618u;
            goto label_290618;
        }
    }
    ctx->pc = 0x2904E4u;
    // 0x2904e4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2904e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2904e8:
    // 0x2904e8: 0x32f0ffff  andi        $s0, $s7, 0xFFFF
    ctx->pc = 0x2904e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x2904ec: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2904ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2904f0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2904f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904f4: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x2904f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2904f8: 0x33c6ffff  andi        $a2, $fp, 0xFFFF
    ctx->pc = 0x2904f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x2904fc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2904fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x290500: 0x24b20008  addiu       $s2, $a1, 0x8
    ctx->pc = 0x290500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x290504: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x290504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290508: 0xc095930  jal         func_2564C0
    ctx->pc = 0x290508u;
    SET_GPR_U32(ctx, 31, 0x290510u);
    ctx->pc = 0x29050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290508u;
    // 0x29050c: 0x26f40002  addiu       $s4, $s7, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x290508u, 0x290510u)) {
        return;
    }
    ctx->pc = 0x290510u;
label_290510:
    // 0x290510: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x290510u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290514: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x290514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x290518: 0x27d70004  addiu       $s7, $fp, 0x4
    ctx->pc = 0x290518u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x29051c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x29051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x290520: 0xc095936  jal         func_2564D8
    ctx->pc = 0x290520u;
    SET_GPR_U32(ctx, 31, 0x290528u);
    ctx->pc = 0x290524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290520u;
    // 0x290524: 0x8fa60058  lw          $a2, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x290520u, 0x290528u)) {
        return;
    }
    ctx->pc = 0x290528u;
label_290528:
    // 0x290528: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x290528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x29052c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29052cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290530: 0x8faa007c  lw          $t2, 0x7C($sp)
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x290534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x290534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290538: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x290538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x29053c: 0x24b30010  addiu       $s3, $a1, 0x10
    ctx->pc = 0x29053cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x290540: 0x3147ffff  andi        $a3, $t2, 0xFFFF
    ctx->pc = 0x290540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x290544: 0xc095930  jal         func_2564C0
    ctx->pc = 0x290544u;
    SET_GPR_U32(ctx, 31, 0x29054Cu);
    ctx->pc = 0x290548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290544u;
    // 0x290548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x290544u, 0x29054Cu)) {
        return;
    }
    ctx->pc = 0x29054Cu;
label_29054c:
    // 0x29054c: 0x3291ffff  andi        $s1, $s4, 0xFFFF
    ctx->pc = 0x29054cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x290550: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x290550u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x290554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x290554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290558: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x290558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x29055c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x29055cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x290560: 0x25750018  addiu       $s5, $t3, 0x18
    ctx->pc = 0x290560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x290564: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x290564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290568: 0xc095936  jal         func_2564D8
    ctx->pc = 0x290568u;
    SET_GPR_U32(ctx, 31, 0x290570u);
    ctx->pc = 0x29056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290568u;
    // 0x29056c: 0x24520002  addiu       $s2, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x290568u, 0x290570u)) {
        return;
    }
    ctx->pc = 0x290570u;
label_290570:
    // 0x290570: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x290570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290574: 0x33c6ffff  andi        $a2, $fp, 0xFFFF
    ctx->pc = 0x290574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x290578: 0x8faa005c  lw          $t2, 0x5C($sp)
    ctx->pc = 0x290578u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x29057c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29057cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290580: 0x24700002  addiu       $s0, $v1, 0x2
    ctx->pc = 0x290580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x290584: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x290584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x290588: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x290588u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x29058c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x29058cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x290590: 0xafaa005c  sw          $t2, 0x5C($sp)
    ctx->pc = 0x290590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 10));
    // 0x290594: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x290594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290598: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x290598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29059c: 0xc095930  jal         func_2564C0
    ctx->pc = 0x29059Cu;
    SET_GPR_U32(ctx, 31, 0x2905A4u);
    ctx->pc = 0x2905A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29059Cu;
    // 0x2905a0: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x29059Cu, 0x2905A4u)) {
        return;
    }
    ctx->pc = 0x2905A4u;
label_2905a4:
    // 0x2905a4: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x2905a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2905a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2905a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905ac: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2905acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2905b0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2905b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2905b4: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x2905b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x2905b8: 0xc095936  jal         func_2564D8
    ctx->pc = 0x2905B8u;
    SET_GPR_U32(ctx, 31, 0x2905C0u);
    ctx->pc = 0x2905BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905B8u;
    // 0x2905bc: 0xafab0054  sw          $t3, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x2905B8u, 0x2905C0u)) {
        return;
    }
    ctx->pc = 0x2905C0u;
label_2905c0:
    // 0x2905c0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2905c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2905c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2905c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905c8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2905c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2905cc: 0x3247ffff  andi        $a3, $s2, 0xFFFF
    ctx->pc = 0x2905ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2905d0: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2905d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2905d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2905d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2905d8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2905d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2905dc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2905dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2905e0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2905e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2905e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905e8: 0xc095930  jal         func_2564C0
    ctx->pc = 0x2905E8u;
    SET_GPR_U32(ctx, 31, 0x2905F0u);
    ctx->pc = 0x2905ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905E8u;
    // 0x2905ec: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x2905E8u, 0x2905F0u)) {
        return;
    }
    ctx->pc = 0x2905F0u;
label_2905f0:
    // 0x2905f0: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2905f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2905f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2905f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905f8: 0xc095936  jal         func_2564D8
    ctx->pc = 0x2905F8u;
    SET_GPR_U32(ctx, 31, 0x290600u);
    ctx->pc = 0x2905FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905F8u;
    // 0x2905fc: 0x8fa60058  lw          $a2, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x2905F8u, 0x290600u)) {
        return;
    }
    ctx->pc = 0x290600u;
label_290600:
    // 0x290600: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x290600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x290604: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x290604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x290608: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x290608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x29060c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x29060Cu;
    {
        const bool branch_taken_0x29060c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29060Cu;
        // 0x290610: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29060c) {
            ctx->pc = 0x2904E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2904e8;
        }
    }
    ctx->pc = 0x290614u;
label_290614:
    // 0x290614: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x290614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_290618:
    // 0x290618: 0x8faa0040  lw          $t2, 0x40($sp)
    ctx->pc = 0x290618u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29061c: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x29061cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x290620: 0x8fb30078  lw          $s3, 0x78($sp)
    ctx->pc = 0x290620u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x290624: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x290624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x290628: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x290628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x29062c: 0x14c2fe74  bne         $a2, $v0, . + 4 + (-0x18C << 2)
    ctx->pc = 0x29062Cu;
    {
        const bool branch_taken_0x29062c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x290630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29062Cu;
        // 0x290630: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29062c) {
            ctx->pc = 0x290000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290000;
        }
    }
    ctx->pc = 0x290634u;
label_290634:
    // 0x290634: 0xc095f48  jal         func_257D20
    ctx->pc = 0x290634u;
    SET_GPR_U32(ctx, 31, 0x29063Cu);
    ctx->pc = 0x290638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290634u;
    // 0x290638: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257D20u, 0x290634u, 0x29063Cu)) {
        return;
    }
    ctx->pc = 0x29063Cu;
label_29063c:
    // 0x29063c: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x29063cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290640: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x290640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290644: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x290644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x290648: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x290648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29064c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x29064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x290650: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x290650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x290654: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x290654u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x290658: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x290658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x29065c: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x29065cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x290660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x290660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x290664: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x290664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x290668: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x290668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29066c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x29066cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x290670: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x290670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x290674: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x290674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x290678: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x290678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29067c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x29067cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x290680: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x290680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290684: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x290684u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x290688: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x290688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29068c: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x29068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x290690: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x290690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x290694: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x290694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x290698: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x290698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29069c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29069cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2906a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2906A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2906A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906A0u;
        // 0x2906a4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2906A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2906A8u;
}
