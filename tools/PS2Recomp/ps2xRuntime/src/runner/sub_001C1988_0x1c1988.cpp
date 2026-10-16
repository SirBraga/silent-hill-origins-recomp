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

// Function: sub_001C1988
// Address: 0x1c1988 - 0x1c19f0
void sub_001C1988_0x1c1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1988_0x1c1988");
#endif

    switch (ctx->pc) {
        case 0x1c19b8u: goto label_1c19b8;
        case 0x1c19e4u: goto label_1c19e4;
        default: break;
    }

    ctx->pc = 0x1c1988u;

    // 0x1c1988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c198c: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C198Cu;
    {
        const bool branch_taken_0x1c198c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C198Cu;
        // 0x1c1990: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c198c) {
            ctx->pc = 0x1C19C0u;
            goto label_1c19c0;
        }
    }
    ctx->pc = 0x1C1994u;
    // 0x1c1994: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c1994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c1998: 0x2448dc00  addiu       $t0, $v0, -0x2400
    ctx->pc = 0x1c1998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
    // 0x1c199c: 0x89030003  lwl         $v1, 0x3($t0)
    ctx->pc = 0x1c199cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1c19a0: 0x99030000  lwr         $v1, 0x0($t0)
    ctx->pc = 0x1c19a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1c19a4: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x1c19a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c19a8: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x1c19a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c19ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c19acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19b0: 0xc0701f0  jal         func_1C07C0
    ctx->pc = 0x1C19B0u;
    SET_GPR_U32(ctx, 31, 0x1C19B8u);
    ctx->pc = 0x1C19B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19B0u;
    // 0x1c19b4: 0x8c860454  lw          $a2, 0x454($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C07C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C07C0u, 0x1C19B0u, 0x1C19B8u)) {
        return;
    }
    ctx->pc = 0x1C19B8u;
label_1c19b8:
    // 0x1c19b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C19B8u;
    {
        const bool branch_taken_0x1c19b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19B8u;
        // 0x1c19bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19b8) {
            ctx->pc = 0x1C19E8u;
            goto label_1c19e8;
        }
    }
    ctx->pc = 0x1C19C0u;
label_1c19c0:
    // 0x1c19c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c19c4: 0x2448dc08  addiu       $t0, $v0, -0x23F8
    ctx->pc = 0x1c19c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958088));
    // 0x1c19c8: 0x89030003  lwl         $v1, 0x3($t0)
    ctx->pc = 0x1c19c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1c19cc: 0x99030000  lwr         $v1, 0x0($t0)
    ctx->pc = 0x1c19ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1c19d0: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x1c19d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c19d4: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x1c19d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c19d8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c19d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19dc: 0xc0701f0  jal         func_1C07C0
    ctx->pc = 0x1C19DCu;
    SET_GPR_U32(ctx, 31, 0x1C19E4u);
    ctx->pc = 0x1C19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19DCu;
    // 0x1c19e0: 0x8c860454  lw          $a2, 0x454($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C07C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C07C0u, 0x1C19DCu, 0x1C19E4u)) {
        return;
    }
    ctx->pc = 0x1C19E4u;
label_1c19e4:
    // 0x1c19e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c19e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c19e8:
    // 0x1c19e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C19E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19E8u;
        // 0x1c19ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C19E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C19F0u;
}
