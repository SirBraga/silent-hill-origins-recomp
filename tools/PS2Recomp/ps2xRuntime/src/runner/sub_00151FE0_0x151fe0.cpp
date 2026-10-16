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

// Function: sub_00151FE0
// Address: 0x151fe0 - 0x152148
void sub_00151FE0_0x151fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151FE0_0x151fe0");
#endif

    switch (ctx->pc) {
        case 0x152014u: goto label_152014;
        case 0x152030u: goto label_152030;
        case 0x152060u: goto label_152060;
        case 0x152098u: goto label_152098;
        case 0x1520e0u: goto label_1520e0;
        case 0x1520fcu: goto label_1520fc;
        default: break;
    }

    ctx->pc = 0x151fe0u;

    // 0x151fe0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x151fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x151fe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x151fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x151fe8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x151fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fec: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x151fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x151ff0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x151ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x151ff4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x151ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x151ff8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x151ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x151ffc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x151ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x152000: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x152000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x152004: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x152004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x152008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15200c: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x15200Cu;
    SET_GPR_U32(ctx, 31, 0x152014u);
    ctx->pc = 0x152010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15200Cu;
    // 0x152010: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x15200Cu, 0x152014u)) {
        return;
    }
    ctx->pc = 0x152014u;
label_152014:
    // 0x152014: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x152014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152018: 0x1240003f  beqz        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x152018u;
    {
        const bool branch_taken_0x152018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152018u;
        // 0x15201c: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152018) {
            ctx->pc = 0x152118u;
            goto label_152118;
        }
    }
    ctx->pc = 0x152020u;
    // 0x152020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152024: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x152024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
    // 0x152028: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x152028u;
    SET_GPR_U32(ctx, 31, 0x152030u);
    ctx->pc = 0x15202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152028u;
    // 0x15202c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x152028u, 0x152030u)) {
        return;
    }
    ctx->pc = 0x152030u;
label_152030:
    // 0x152030: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x152034: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x152034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x152038: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x152038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x15203c: 0xc46c853c  lwc1        $f12, -0x7AC4($v1)
    ctx->pc = 0x15203cu;
    { uint32_t bits = FAST_READ32(0x33853Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152040: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x152040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x152044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x152044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152048: 0x24c68548  addiu       $a2, $a2, -0x7AB8
    ctx->pc = 0x152048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935880));
    // 0x15204c: 0x24e724e8  addiu       $a3, $a3, 0x24E8
    ctx->pc = 0x15204cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9448));
    // 0x152050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152054: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x152054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152058: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x152058u;
    SET_GPR_U32(ctx, 31, 0x152060u);
    ctx->pc = 0x15205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152058u;
    // 0x15205c: 0x3c160069  lui         $s6, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x152058u, 0x152060u)) {
        return;
    }
    ctx->pc = 0x152060u;
label_152060:
    // 0x152060: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x152060u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x152064: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x152064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x152068: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x152068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x15206c: 0x244785a8  addiu       $a3, $v0, -0x7A58
    ctx->pc = 0x15206cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935976));
    // 0x152070: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x152070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x152074: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x152074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x152078: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x152078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x15207c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x15207cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x152080: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x152080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152084: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x152084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152088: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x152088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15208c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x15208cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152090: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x152090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x152094: 0x24718598  addiu       $s1, $v1, -0x7A68
    ctx->pc = 0x152094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935960));
label_152098:
    // 0x152098: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x152098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x15209c: 0x26e624f0  addiu       $a2, $s7, 0x24F0
    ctx->pc = 0x15209cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 9456));
    // 0x1520a0: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x1520a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1520a4: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x1520a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1520a8: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x1520a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1520ac: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x1520acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1520b0: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1520B0u;
    {
        const bool branch_taken_0x1520b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1520b0) {
            ctx->pc = 0x1520B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1520B0u;
            // 0x1520b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1520D0u;
            goto label_1520d0;
        }
    }
    ctx->pc = 0x1520B8u;
    // 0x1520b8: 0x26c424f8  addiu       $a0, $s6, 0x24F8
    ctx->pc = 0x1520b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 9464));
    // 0x1520bc: 0x88870003  lwl         $a3, 0x3($a0)
    ctx->pc = 0x1520bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1520c0: 0x98870000  lwr         $a3, 0x0($a0)
    ctx->pc = 0x1520c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1520c4: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x1520c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1520c8: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x1520c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1520cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1520ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1520d0:
    // 0x1520d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1520d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1520d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1520d8: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1520D8u;
    SET_GPR_U32(ctx, 31, 0x1520E0u);
    ctx->pc = 0x1520DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1520D8u;
    // 0x1520dc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1520D8u, 0x1520E0u)) {
        return;
    }
    ctx->pc = 0x1520E0u;
label_1520e0:
    // 0x1520e0: 0xc66c8540  lwc1        $f12, -0x7AC0($s3)
    ctx->pc = 0x1520e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1520e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1520e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1520e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1520ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1520f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520f4: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x1520F4u;
    SET_GPR_U32(ctx, 31, 0x1520FCu);
    ctx->pc = 0x1520F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1520F4u;
    // 0x1520f8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1520F4u, 0x1520FCu)) {
        return;
    }
    ctx->pc = 0x1520FCu;
label_1520fc:
    // 0x1520fc: 0xc6608540  lwc1        $f0, -0x7AC0($s3)
    ctx->pc = 0x1520fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152100: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x152100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x152104: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x152104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152108: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x152108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15210c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15210cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x152110: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x152110u;
    {
        const bool branch_taken_0x152110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152110u;
        // 0x152114: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152110) {
            ctx->pc = 0x152098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152098;
        }
    }
    ctx->pc = 0x152118u;
label_152118:
    // 0x152118: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x152118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15211c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x15211cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152120: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x152120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152124: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x152124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152128: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x152128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15212c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15212cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152130: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x152130u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152134: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x152134u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15213c: 0x3e00008  jr          $ra
    ctx->pc = 0x15213Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15213Cu;
        // 0x152140: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15213Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152144u;
    // 0x152144: 0x0  nop
    ctx->pc = 0x152144u;
    // NOP
    ctx->pc = 0x152148u;
}
