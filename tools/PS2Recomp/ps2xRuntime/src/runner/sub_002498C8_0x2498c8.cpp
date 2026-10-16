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

// Function: sub_002498C8
// Address: 0x2498c8 - 0x249a40
void sub_002498C8_0x2498c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002498C8_0x2498c8");
#endif

    switch (ctx->pc) {
        case 0x249a08u: goto label_249a08;
        case 0x249a14u: goto label_249a14;
        default: break;
    }

    ctx->pc = 0x2498c8u;

    // 0x2498c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2498c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2498cc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2498ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2498d0: 0x11000046  beqz        $t0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2498D0u;
    {
        const bool branch_taken_0x2498d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2498D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498D0u;
        // 0x2498d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498d0) {
            ctx->pc = 0x2499ECu;
            goto label_2499ec;
        }
    }
    ctx->pc = 0x2498D8u;
    // 0x2498d8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2498dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2498e0: 0x24450fc8  addiu       $a1, $v0, 0xFC8
    ctx->pc = 0x2498e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2498e4: 0x8ca30124  lw          $v1, 0x124($a1)
    ctx->pc = 0x2498e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7310ECu));
    // 0x2498e8: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2498E8u;
    {
        const bool branch_taken_0x2498e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2498ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498E8u;
        // 0x2498ec: 0x8f829120  lw          $v0, -0x6EE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498e8) {
            ctx->pc = 0x249954u;
            goto label_249954;
        }
    }
    ctx->pc = 0x2498F0u;
    // 0x2498f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2498f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2498f4: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x2498f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2498f8: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x2498f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2498fc: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x2498fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x249900: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x249900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x249904: 0x6845001b  ldl         $a1, 0x1B($v0)
    ctx->pc = 0x249904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x249908: 0x6c450014  ldr         $a1, 0x14($v0)
    ctx->pc = 0x249908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24990c: 0x68460023  ldl         $a2, 0x23($v0)
    ctx->pc = 0x24990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x249910: 0x6c46001c  ldr         $a2, 0x1C($v0)
    ctx->pc = 0x249910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x249914: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x249914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249918: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x249918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24991c: 0xb104000f  sdl         $a0, 0xF($t0)
    ctx->pc = 0x24991cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249920: 0xb5040008  sdr         $a0, 0x8($t0)
    ctx->pc = 0x249920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249924: 0xb1050017  sdl         $a1, 0x17($t0)
    ctx->pc = 0x249924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249928: 0xb5050010  sdr         $a1, 0x10($t0)
    ctx->pc = 0x249928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24992c: 0xb106001f  sdl         $a2, 0x1F($t0)
    ctx->pc = 0x24992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249930: 0xb5060018  sdr         $a2, 0x18($t0)
    ctx->pc = 0x249930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249934: 0x6843002b  ldl         $v1, 0x2B($v0)
    ctx->pc = 0x249934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x249938: 0x6c430024  ldr         $v1, 0x24($v0)
    ctx->pc = 0x249938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24993c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x24993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x249940: 0xb1030027  sdl         $v1, 0x27($t0)
    ctx->pc = 0x249940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249944: 0xb5030020  sdr         $v1, 0x20($t0)
    ctx->pc = 0x249944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249948: 0xad040028  sw          $a0, 0x28($t0)
    ctx->pc = 0x249948u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 4));
    // 0x24994c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x24994Cu;
    {
        const bool branch_taken_0x24994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24994Cu;
        // 0x249950: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24994c) {
            ctx->pc = 0x249A18u;
            goto label_249a18;
        }
    }
    ctx->pc = 0x249954u;
label_249954:
    // 0x249954: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x249954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x249958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24995c: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24995Cu;
    {
        const bool branch_taken_0x24995c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x249960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24995Cu;
        // 0x249960: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24995c) {
            ctx->pc = 0x249978u;
            goto label_249978;
        }
    }
    ctx->pc = 0x249964u;
    // 0x249964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249968: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24996c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x249970: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x249970u;
    {
        const bool branch_taken_0x249970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249970u;
        // 0x249974: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249970) {
            ctx->pc = 0x249A00u;
            goto label_249a00;
        }
    }
    ctx->pc = 0x249978u;
label_249978:
    // 0x249978: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x249978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24997c: 0x24ac3598  addiu       $t4, $a1, 0x3598
    ctx->pc = 0x24997cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 13720));
    // 0x249980: 0x89890003  lwl         $t1, 0x3($t4)
    ctx->pc = 0x249980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x249984: 0x99890000  lwr         $t1, 0x0($t4)
    ctx->pc = 0x249984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x249988: 0xaba90003  swl         $t1, 0x3($sp)
    ctx->pc = 0x249988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24998c: 0xbba90000  swr         $t1, 0x0($sp)
    ctx->pc = 0x24998cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x249990: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x249990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249994: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x249994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x249998: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x249998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24999c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x24999cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2499a0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2499a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2499a4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x2499a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x2499a8: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x2499a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x2499ac: 0xad070018  sw          $a3, 0x18($t0)
    ctx->pc = 0x2499acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 7));
    // 0x2499b0: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x2499b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x2499b4: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x2499b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x2499b8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x2499b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x2499bc: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x2499bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x2499c0: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2499c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2499c4: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2499c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2499c8: 0xa9020023  swl         $v0, 0x23($t0)
    ctx->pc = 0x2499c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2499cc: 0xb9020020  swr         $v0, 0x20($t0)
    ctx->pc = 0x2499ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2499d0: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x2499d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
    // 0x2499d4: 0x8ba60003  lwl         $a2, 0x3($sp)
    ctx->pc = 0x2499d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2499d8: 0x9ba60000  lwr         $a2, 0x0($sp)
    ctx->pc = 0x2499d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2499dc: 0xa906002b  swl         $a2, 0x2B($t0)
    ctx->pc = 0x2499dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2499e0: 0xb9060028  swr         $a2, 0x28($t0)
    ctx->pc = 0x2499e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2499e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2499E4u;
    {
        const bool branch_taken_0x2499e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2499E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499E4u;
        // 0x2499e8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499e4) {
            ctx->pc = 0x249A18u;
            goto label_249a18;
        }
    }
    ctx->pc = 0x2499ECu;
label_2499ec:
    // 0x2499ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2499ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2499f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2499f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2499f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2499f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2499f8: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x2499f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    // 0x2499fc: 0x0  nop
    ctx->pc = 0x2499fcu;
    // NOP
label_249a00:
    // 0x249a00: 0xc092848  jal         func_24A120
    ctx->pc = 0x249A00u;
    SET_GPR_U32(ctx, 31, 0x249A08u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x249A00u, 0x249A08u)) {
        return;
    }
    ctx->pc = 0x249A08u;
label_249a08:
    // 0x249a08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a0c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x249A0Cu;
    SET_GPR_U32(ctx, 31, 0x249A14u);
    ctx->pc = 0x249A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A0Cu;
    // 0x249a10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x249A0Cu, 0x249A14u)) {
        return;
    }
    ctx->pc = 0x249A14u;
label_249a14:
    // 0x249a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249a18:
    // 0x249a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x249A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A1Cu;
        // 0x249a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249A24u;
    // 0x249a24: 0x0  nop
    ctx->pc = 0x249a24u;
    // NOP
    // 0x249a28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x249a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x249a2c: 0x0  nop
    ctx->pc = 0x249a2cu;
    // NOP
    // 0x249a30: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x249a34: 0x0  nop
    ctx->pc = 0x249a34u;
    // NOP
    // 0x249a38: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x249a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x249a3c: 0x0  nop
    ctx->pc = 0x249a3cu;
    // NOP
    ctx->pc = 0x249a40u;
}
