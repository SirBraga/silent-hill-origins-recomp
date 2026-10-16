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

// Function: sub_002E2FF0
// Address: 0x2e2ff0 - 0x2e3148
void sub_002E2FF0_0x2e2ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2FF0_0x2e2ff0");
#endif

    switch (ctx->pc) {
        case 0x2e3018u: goto label_2e3018;
        case 0x2e3078u: goto label_2e3078;
        case 0x2e30d0u: goto label_2e30d0;
        default: break;
    }

    ctx->pc = 0x2e2ff0u;

    // 0x2e2ff0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e2ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ff4: 0x68430053  ldl         $v1, 0x53($v0)
    ctx->pc = 0x2e2ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e2ff8: 0x6c43004c  ldr         $v1, 0x4C($v0)
    ctx->pc = 0x2e2ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e2ffc: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2e2ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2e3000: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x2e3000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3004: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x2e3004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3008: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2e3008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x2e300c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3014u;
    // 0x2e3014: 0x0  nop
    ctx->pc = 0x2e3014u;
    // NOP
label_2e3018:
    // 0x2e3018: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e3018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e301c: 0x68c30017  ldl         $v1, 0x17($a2)
    ctx->pc = 0x2e301cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3020: 0x6cc30010  ldr         $v1, 0x10($a2)
    ctx->pc = 0x2e3020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e3024: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x2e3024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2e3028: 0xb043005f  sdl         $v1, 0x5F($v0)
    ctx->pc = 0x2e3028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e302c: 0xb4430058  sdr         $v1, 0x58($v0)
    ctx->pc = 0x2e302cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3030: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x2e3030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
    // 0x2e3034: 0x68c30027  ldl         $v1, 0x27($a2)
    ctx->pc = 0x2e3034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3038: 0x6cc30020  ldr         $v1, 0x20($a2)
    ctx->pc = 0x2e3038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e303c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x2e303cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2e3040: 0xb043006b  sdl         $v1, 0x6B($v0)
    ctx->pc = 0x2e3040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3044: 0xb4430064  sdr         $v1, 0x64($v0)
    ctx->pc = 0x2e3044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3048: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x2e3048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x2e304c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2e304cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3050: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2e3050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e3054: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2e3054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e3058: 0xb0430077  sdl         $v1, 0x77($v0)
    ctx->pc = 0x2e3058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e305c: 0xb4430070  sdr         $v1, 0x70($v0)
    ctx->pc = 0x2e305cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3060: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x2e3060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x2e3064: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e3064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e3068: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x2e3068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x2e306c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E306Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E306Cu;
        // 0x2e3070: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E306Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3074u;
    // 0x2e3074: 0x0  nop
    ctx->pc = 0x2e3074u;
    // NOP
label_2e3078:
    // 0x2e3078: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e3078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e307c: 0x6843005f  ldl         $v1, 0x5F($v0)
    ctx->pc = 0x2e307cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3080: 0x6c430058  ldr         $v1, 0x58($v0)
    ctx->pc = 0x2e3080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e3084: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x2e3084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2e3088: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x2e3088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e308c: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x2e308cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3090: 0xacc40018  sw          $a0, 0x18($a2)
    ctx->pc = 0x2e3090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 4));
    // 0x2e3094: 0x6843006b  ldl         $v1, 0x6B($v0)
    ctx->pc = 0x2e3094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3098: 0x6c430064  ldr         $v1, 0x64($v0)
    ctx->pc = 0x2e3098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e309c: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x2e309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e30a0: 0xb0c30027  sdl         $v1, 0x27($a2)
    ctx->pc = 0x2e30a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e30a4: 0xb4c30020  sdr         $v1, 0x20($a2)
    ctx->pc = 0x2e30a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e30a8: 0xacc40028  sw          $a0, 0x28($a2)
    ctx->pc = 0x2e30a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
    // 0x2e30ac: 0x68430077  ldl         $v1, 0x77($v0)
    ctx->pc = 0x2e30acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e30b0: 0x6c430070  ldr         $v1, 0x70($v0)
    ctx->pc = 0x2e30b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e30b4: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x2e30b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2e30b8: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x2e30b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e30bc: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x2e30bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e30c0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2e30c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x2e30c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E30C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E30C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E30CCu;
    // 0x2e30cc: 0x0  nop
    ctx->pc = 0x2e30ccu;
    // NOP
label_2e30d0:
    // 0x2e30d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e30d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30d4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2e30d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e30d8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2e30d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e30dc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2e30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e30e0: 0xb043005f  sdl         $v1, 0x5F($v0)
    ctx->pc = 0x2e30e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e30e4: 0xb4430058  sdr         $v1, 0x58($v0)
    ctx->pc = 0x2e30e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e30e8: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x2e30e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
    // 0x2e30ec: 0xc444005c  lwc1        $f4, 0x5C($v0)
    ctx->pc = 0x2e30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e30f0: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x2e30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e30f4: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x2e30f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e30f8: 0xc446006c  lwc1        $f6, 0x6C($v0)
    ctx->pc = 0x2e30f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2e30fc: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x2e30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3100: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x2e3100u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e3104: 0xc4430064  lwc1        $f3, 0x64($v0)
    ctx->pc = 0x2e3104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3108: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x2e3108u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2e310c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e310cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e3110: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2e3110u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2e3114: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2e3114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2e3118: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2e3118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2e311c: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2e311cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2e3120: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2e3120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2e3124: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2e3124u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2e3128: 0xe4450070  swc1        $f5, 0x70($v0)
    ctx->pc = 0x2e3128u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2e312c: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2e312cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2e3130: 0xe4420074  swc1        $f2, 0x74($v0)
    ctx->pc = 0x2e3130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2e3134: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e3134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e3138: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2e3138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2e313c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E313Cu;
        // 0x2e3140: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E313Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3144u;
    // 0x2e3144: 0x0  nop
    ctx->pc = 0x2e3144u;
    // NOP
    ctx->pc = 0x2e3148u;
}
