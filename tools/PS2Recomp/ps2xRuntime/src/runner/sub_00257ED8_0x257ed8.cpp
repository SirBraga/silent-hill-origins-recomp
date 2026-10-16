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

// Function: sub_00257ED8
// Address: 0x257ed8 - 0x2580c8
void sub_00257ED8_0x257ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257ED8_0x257ed8");
#endif

    switch (ctx->pc) {
        case 0x257f08u: goto label_257f08;
        case 0x257f34u: goto label_257f34;
        case 0x257f44u: goto label_257f44;
        case 0x257f78u: goto label_257f78;
        case 0x257fccu: goto label_257fcc;
        case 0x257fdcu: goto label_257fdc;
        case 0x257ffcu: goto label_257ffc;
        case 0x258010u: goto label_258010;
        case 0x258024u: goto label_258024;
        case 0x258050u: goto label_258050;
        case 0x258060u: goto label_258060;
        case 0x25807cu: goto label_25807c;
        case 0x258098u: goto label_258098;
        case 0x2580a8u: goto label_2580a8;
        default: break;
    }

    ctx->pc = 0x257ed8u;

    // 0x257ed8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x257ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x257edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257ee0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x257ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x257ee4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x257ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257ee8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x257ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x257eec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x257eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ef0: 0x27b30044  addiu       $s3, $sp, 0x44
    ctx->pc = 0x257ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x257ef4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x257ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x257ef8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x257ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x257efc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x257efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x257f00: 0xc09270a  jal         func_249C28
    ctx->pc = 0x257F00u;
    SET_GPR_U32(ctx, 31, 0x257F08u);
    ctx->pc = 0x257F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F00u;
    // 0x257f04: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x257F00u, 0x257F08u)) {
        return;
    }
    ctx->pc = 0x257F08u;
label_257f08:
    // 0x257f08: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x257F08u;
    {
        const bool branch_taken_0x257f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F08u;
        // 0x257f0c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f08) {
            ctx->pc = 0x2580A8u;
            goto label_2580a8;
        }
    }
    ctx->pc = 0x257F10u;
    // 0x257f10: 0x3c11fffc  lui         $s1, 0xFFFC
    ctx->pc = 0x257f10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65532 << 16));
    // 0x257f14: 0x3631b000  ori         $s1, $s1, 0xB000
    ctx->pc = 0x257f14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)45056);
    // 0x257f18: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x257f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x257f1c: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x257f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x257f20: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x257F20u;
    {
        const bool branch_taken_0x257f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F20u;
        // 0x257f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f20) {
            ctx->pc = 0x258084u;
            goto label_258084;
        }
    }
    ctx->pc = 0x257F28u;
    // 0x257f28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x257f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f2c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x257F2Cu;
    SET_GPR_U32(ctx, 31, 0x257F34u);
    ctx->pc = 0x257F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F2Cu;
    // 0x257f30: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x257F2Cu, 0x257F34u)) {
        return;
    }
    ctx->pc = 0x257F34u;
label_257f34:
    // 0x257f34: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x257f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x257f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f3c: 0xc093546  jal         func_24D518
    ctx->pc = 0x257F3Cu;
    SET_GPR_U32(ctx, 31, 0x257F44u);
    ctx->pc = 0x257F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F3Cu;
    // 0x257f40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x257F3Cu, 0x257F44u)) {
        return;
    }
    ctx->pc = 0x257F44u;
label_257f44:
    // 0x257f44: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x257f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257f48: 0x14430058  bne         $v0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x257F48u;
    {
        const bool branch_taken_0x257f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x257F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F48u;
        // 0x257f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f48) {
            ctx->pc = 0x2580ACu;
            goto label_2580ac;
        }
    }
    ctx->pc = 0x257F50u;
    // 0x257f50: 0x8ba20007  lwl         $v0, 0x7($sp)
    ctx->pc = 0x257f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x257f54: 0x9ba20004  lwr         $v0, 0x4($sp)
    ctx->pc = 0x257f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x257f58: 0xaba20023  swl         $v0, 0x23($sp)
    ctx->pc = 0x257f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257f5c: 0xbba20020  swr         $v0, 0x20($sp)
    ctx->pc = 0x257f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257f60: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x257f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x257f64: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x257f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x257f68: 0xaba20007  swl         $v0, 0x7($sp)
    ctx->pc = 0x257f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257f6c: 0xbba20004  swr         $v0, 0x4($sp)
    ctx->pc = 0x257f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257f70: 0xc095f18  jal         func_257C60
    ctx->pc = 0x257F70u;
    SET_GPR_U32(ctx, 31, 0x257F78u);
    ctx->pc = 0x257C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257C60u, 0x257F70u, 0x257F78u)) {
        return;
    }
    ctx->pc = 0x257F78u;
label_257f78:
    // 0x257f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f7c: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x257F7Cu;
    {
        const bool branch_taken_0x257f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F7Cu;
        // 0x257f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f7c) {
            ctx->pc = 0x2580ACu;
            goto label_2580ac;
        }
    }
    ctx->pc = 0x257F84u;
    // 0x257f84: 0x8ba20007  lwl         $v0, 0x7($sp)
    ctx->pc = 0x257f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x257f88: 0x9ba20004  lwr         $v0, 0x4($sp)
    ctx->pc = 0x257f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x257f8c: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x257f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257f90: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x257f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257f94: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x257f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x257f98: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x257f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x257f9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x257f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257fa0: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x257fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257fa4: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x257fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257fa8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x257fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x257fac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x257facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x257fb0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x257fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x257fb4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x257FB4u;
    {
        const bool branch_taken_0x257fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FB4u;
        // 0x257fb8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fb4) {
            ctx->pc = 0x258028u;
            goto label_258028;
        }
    }
    ctx->pc = 0x257FBCu;
    // 0x257fbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x257fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257fc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x257fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x257fc4: 0xc09270a  jal         func_249C28
    ctx->pc = 0x257FC4u;
    SET_GPR_U32(ctx, 31, 0x257FCCu);
    ctx->pc = 0x257FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FC4u;
    // 0x257fc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x257FC4u, 0x257FCCu)) {
        return;
    }
    ctx->pc = 0x257FCCu;
label_257fcc:
    // 0x257fcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257FCCu;
    {
        const bool branch_taken_0x257fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FCCu;
        // 0x257fd0: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fcc) {
            ctx->pc = 0x257FE4u;
            goto label_257fe4;
        }
    }
    ctx->pc = 0x257FD4u;
    // 0x257fd4: 0xc095f48  jal         func_257D20
    ctx->pc = 0x257FD4u;
    SET_GPR_U32(ctx, 31, 0x257FDCu);
    ctx->pc = 0x257FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FD4u;
    // 0x257fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257D20u, 0x257FD4u, 0x257FDCu)) {
        return;
    }
    ctx->pc = 0x257FDCu;
label_257fdc:
    // 0x257fdc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x257FDCu;
    {
        const bool branch_taken_0x257fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FDCu;
        // 0x257fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fdc) {
            ctx->pc = 0x2580ACu;
            goto label_2580ac;
        }
    }
    ctx->pc = 0x257FE4u;
label_257fe4:
    // 0x257fe4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x257fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x257fe8: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x257fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x257fec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x257FECu;
    {
        const bool branch_taken_0x257fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257fec) {
            ctx->pc = 0x25801Cu;
            goto label_25801c;
        }
    }
    ctx->pc = 0x257FF4u;
    // 0x257ff4: 0xc095f48  jal         func_257D20
    ctx->pc = 0x257FF4u;
    SET_GPR_U32(ctx, 31, 0x257FFCu);
    ctx->pc = 0x257FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FF4u;
    // 0x257ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257D20u, 0x257FF4u, 0x257FFCu)) {
        return;
    }
    ctx->pc = 0x257FFCu;
label_257ffc:
    // 0x257ffc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x257ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258000: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x258004: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x258004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x258008: 0xc092848  jal         func_24A120
    ctx->pc = 0x258008u;
    SET_GPR_U32(ctx, 31, 0x258010u);
    ctx->pc = 0x25800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258008u;
    // 0x25800c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x258008u, 0x258010u)) {
        return;
    }
    ctx->pc = 0x258010u;
label_258010:
    // 0x258010: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x258010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x258014: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x258014u;
    {
        const bool branch_taken_0x258014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258014u;
        // 0x258018: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258014) {
            ctx->pc = 0x2580A0u;
            goto label_2580a0;
        }
    }
    ctx->pc = 0x25801Cu;
label_25801c:
    // 0x25801c: 0xc088cf4  jal         func_2233D0
    ctx->pc = 0x25801Cu;
    SET_GPR_U32(ctx, 31, 0x258024u);
    ctx->pc = 0x258020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25801Cu;
    // 0x258020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2233D0u, 0x25801Cu, 0x258024u)) {
        return;
    }
    ctx->pc = 0x258024u;
label_258024:
    // 0x258024: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x258024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_258028:
    // 0x258028: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x258028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x25802c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25802cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258030: 0x24511240  addiu       $s1, $v0, 0x1240
    ctx->pc = 0x258030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x258034: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x258034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x258038: 0xac203fd0  sw          $zero, 0x3FD0($at)
    ctx->pc = 0x258038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3FD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FD0u, _value); } while (0);
    // 0x25803c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x25803cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x258040: 0xac203fd4  sw          $zero, 0x3FD4($at)
    ctx->pc = 0x258040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3FD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FD4u, _value); } while (0);
    // 0x258044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258048: 0xc093708  jal         func_24DC20
    ctx->pc = 0x258048u;
    SET_GPR_U32(ctx, 31, 0x258050u);
    ctx->pc = 0x25804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258048u;
    // 0x25804c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x258048u, 0x258050u)) {
        return;
    }
    ctx->pc = 0x258050u;
label_258050:
    // 0x258050: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258050u;
    {
        const bool branch_taken_0x258050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258050u;
        // 0x258054: 0x8f858f60  lw          $a1, -0x70A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258050) {
            ctx->pc = 0x258068u;
            goto label_258068;
        }
    }
    ctx->pc = 0x258058u;
    // 0x258058: 0xc095f48  jal         func_257D20
    ctx->pc = 0x258058u;
    SET_GPR_U32(ctx, 31, 0x258060u);
    ctx->pc = 0x25805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258058u;
    // 0x25805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257D20u, 0x258058u, 0x258060u)) {
        return;
    }
    ctx->pc = 0x258060u;
label_258060:
    // 0x258060: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x258060u;
    {
        const bool branch_taken_0x258060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258060u;
        // 0x258064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258060) {
            ctx->pc = 0x2580ACu;
            goto label_2580ac;
        }
    }
    ctx->pc = 0x258068u;
label_258068:
    // 0x258068: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x258068u;
    {
        const bool branch_taken_0x258068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258068u;
        // 0x25806c: 0x8f878f64  lw          $a3, -0x709C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258068) {
            ctx->pc = 0x25807Cu;
            goto label_25807c;
        }
    }
    ctx->pc = 0x258070u;
    // 0x258070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258074: 0xc09376c  jal         func_24DDB0
    ctx->pc = 0x258074u;
    SET_GPR_U32(ctx, 31, 0x25807Cu);
    ctx->pc = 0x258078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258074u;
    // 0x258078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DDB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DDB0u, 0x258074u, 0x25807Cu)) {
        return;
    }
    ctx->pc = 0x25807Cu;
label_25807c:
    // 0x25807c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25807Cu;
    {
        const bool branch_taken_0x25807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25807Cu;
        // 0x258080: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25807c) {
            ctx->pc = 0x2580ACu;
            goto label_2580ac;
        }
    }
    ctx->pc = 0x258084u;
label_258084:
    // 0x258084: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258088: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x258088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x25808c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x25808cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x258090: 0xc092848  jal         func_24A120
    ctx->pc = 0x258090u;
    SET_GPR_U32(ctx, 31, 0x258098u);
    ctx->pc = 0x258094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258090u;
    // 0x258094: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x258090u, 0x258098u)) {
        return;
    }
    ctx->pc = 0x258098u;
label_258098:
    // 0x258098: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x258098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x25809c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x25809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2580a0:
    // 0x2580a0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2580A0u;
    SET_GPR_U32(ctx, 31, 0x2580A8u);
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2580A0u, 0x2580A8u)) {
        return;
    }
    ctx->pc = 0x2580A8u;
label_2580a8:
    // 0x2580a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2580a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2580ac:
    // 0x2580ac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2580acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2580b0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2580b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2580b4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2580b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2580b8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2580b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2580bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2580bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2580c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2580C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2580C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580C0u;
        // 0x2580c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2580C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2580C8u;
}
