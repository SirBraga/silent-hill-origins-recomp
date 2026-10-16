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

// Function: sub_001722D0
// Address: 0x1722d0 - 0x172420
void sub_001722D0_0x1722d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001722D0_0x1722d0");
#endif

    switch (ctx->pc) {
        case 0x1722f4u: goto label_1722f4;
        case 0x172308u: goto label_172308;
        case 0x172328u: goto label_172328;
        case 0x1723c0u: goto label_1723c0;
        case 0x1723ccu: goto label_1723cc;
        case 0x1723d8u: goto label_1723d8;
        case 0x1723f4u: goto label_1723f4;
        default: break;
    }

    ctx->pc = 0x1722d0u;

    // 0x1722d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1722d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1722d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1722d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1722d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1722d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1722dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1722dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1722e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1722e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1722e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1722e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1722e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1722ec: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1722ECu;
    SET_GPR_U32(ctx, 31, 0x1722F4u);
    ctx->pc = 0x1722F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1722ECu;
    // 0x1722f0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1722ECu, 0x1722F4u)) {
        return;
    }
    ctx->pc = 0x1722F4u;
label_1722f4:
    // 0x1722f4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1722f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1722f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1722f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722fc: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1722fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x172300: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x172300u;
    SET_GPR_U32(ctx, 31, 0x172308u);
    ctx->pc = 0x172304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172300u;
    // 0x172304: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x172300u, 0x172308u)) {
        return;
    }
    ctx->pc = 0x172308u;
label_172308:
    // 0x172308: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x172308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17230c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172310: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x172310u;
    {
        const bool branch_taken_0x172310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172310u;
        // 0x172314: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172310) {
            ctx->pc = 0x172404u;
            goto label_172404;
        }
    }
    ctx->pc = 0x172318u;
    // 0x172318: 0x26510050  addiu       $s1, $s2, 0x50
    ctx->pc = 0x172318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x17231c: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x17231cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x172320: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x172320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172324: 0x0  nop
    ctx->pc = 0x172324u;
    // NOP
label_172328:
    // 0x172328: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x172328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17232c: 0x1453002c  bne         $v0, $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x17232Cu;
    {
        const bool branch_taken_0x17232c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x172330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17232Cu;
        // 0x172330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17232c) {
            ctx->pc = 0x1723E0u;
            goto label_1723e0;
        }
    }
    ctx->pc = 0x172334u;
    // 0x172334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172338: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x172338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17233c: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x17233cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x172340: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x172340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x172344: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x172344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x172348: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x172348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17234c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x17234cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x172350: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x172350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x172354: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x172354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x172358: 0xb2420057  sdl         $v0, 0x57($s2)
    ctx->pc = 0x172358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17235c: 0xb6420050  sdr         $v0, 0x50($s2)
    ctx->pc = 0x17235cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172360: 0xb246005f  sdl         $a2, 0x5F($s2)
    ctx->pc = 0x172360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172364: 0xb6460058  sdr         $a2, 0x58($s2)
    ctx->pc = 0x172364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172368: 0xb2470067  sdl         $a3, 0x67($s2)
    ctx->pc = 0x172368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17236c: 0xb6470060  sdr         $a3, 0x60($s2)
    ctx->pc = 0x17236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172370: 0xb248006f  sdl         $t0, 0x6F($s2)
    ctx->pc = 0x172370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172374: 0xb6480068  sdr         $t0, 0x68($s2)
    ctx->pc = 0x172374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172378: 0x6862002f  ldl         $v0, 0x2F($v1)
    ctx->pc = 0x172378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17237c: 0x6c620028  ldr         $v0, 0x28($v1)
    ctx->pc = 0x17237cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x172380: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x172380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x172384: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x172384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x172388: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x172388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17238c: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x17238cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x172390: 0x68680047  ldl         $t0, 0x47($v1)
    ctx->pc = 0x172390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x172394: 0x6c680040  ldr         $t0, 0x40($v1)
    ctx->pc = 0x172394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x172398: 0xb2420077  sdl         $v0, 0x77($s2)
    ctx->pc = 0x172398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17239c: 0xb6420070  sdr         $v0, 0x70($s2)
    ctx->pc = 0x17239cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1723a0: 0xb246007f  sdl         $a2, 0x7F($s2)
    ctx->pc = 0x1723a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1723a4: 0xb6460078  sdr         $a2, 0x78($s2)
    ctx->pc = 0x1723a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1723a8: 0xb2470087  sdl         $a3, 0x87($s2)
    ctx->pc = 0x1723a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1723ac: 0xb6470080  sdr         $a3, 0x80($s2)
    ctx->pc = 0x1723acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1723b0: 0xb248008f  sdl         $t0, 0x8F($s2)
    ctx->pc = 0x1723b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1723b4: 0xb6480088  sdr         $t0, 0x88($s2)
    ctx->pc = 0x1723b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1723b8: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x1723B8u;
    SET_GPR_U32(ctx, 31, 0x1723C0u);
    ctx->pc = 0x1723BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723B8u;
    // 0x1723bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x1723B8u, 0x1723C0u)) {
        return;
    }
    ctx->pc = 0x1723C0u;
label_1723c0:
    // 0x1723c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1723c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723c4: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x1723C4u;
    SET_GPR_U32(ctx, 31, 0x1723CCu);
    ctx->pc = 0x1723C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723C4u;
    // 0x1723c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x1723C4u, 0x1723CCu)) {
        return;
    }
    ctx->pc = 0x1723CCu;
label_1723cc:
    // 0x1723cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1723ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723d0: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x1723D0u;
    SET_GPR_U32(ctx, 31, 0x1723D8u);
    ctx->pc = 0x1723D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723D0u;
    // 0x1723d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x1723D0u, 0x1723D8u)) {
        return;
    }
    ctx->pc = 0x1723D8u;
label_1723d8:
    // 0x1723d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1723d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1723dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1723e0:
    // 0x1723e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1723e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1723e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1723e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1723ec: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1723ECu;
    SET_GPR_U32(ctx, 31, 0x1723F4u);
    ctx->pc = 0x1723F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723ECu;
    // 0x1723f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1723ECu, 0x1723F4u)) {
        return;
    }
    ctx->pc = 0x1723F4u;
label_1723f4:
    // 0x1723f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1723f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1723f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1723fc: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1723FCu;
    {
        const bool branch_taken_0x1723fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723FCu;
        // 0x172400: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1723fc) {
            ctx->pc = 0x172328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172328;
        }
    }
    ctx->pc = 0x172404u;
label_172404:
    // 0x172404: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x172404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172408: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x172408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17240c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17240cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172410: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x172410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172418: 0x3e00008  jr          $ra
    ctx->pc = 0x172418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172418u;
        // 0x17241c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172420u;
}
