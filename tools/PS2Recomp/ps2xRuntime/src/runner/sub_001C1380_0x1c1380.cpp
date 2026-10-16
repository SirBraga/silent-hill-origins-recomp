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

// Function: sub_001C1380
// Address: 0x1c1380 - 0x1c13f0
void sub_001C1380_0x1c1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1380_0x1c1380");
#endif

    switch (ctx->pc) {
        case 0x1c13dcu: goto label_1c13dc;
        default: break;
    }

    ctx->pc = 0x1c1380u;

    // 0x1c1380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1384: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c1384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c138c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1390: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c1390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c1394: 0x884402ab  lwl         $a0, 0x2AB($v0)
    ctx->pc = 0x1c1394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 683); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1c1398: 0x984402a8  lwr         $a0, 0x2A8($v0)
    ctx->pc = 0x1c1398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 680); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1c139c: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x1c139cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c13a0: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x1c13a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c13a4: 0x884802a7  lwl         $t0, 0x2A7($v0)
    ctx->pc = 0x1c13a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 679); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1c13a8: 0x984802a4  lwr         $t0, 0x2A4($v0)
    ctx->pc = 0x1c13a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 676); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1c13ac: 0xaba80013  swl         $t0, 0x13($sp)
    ctx->pc = 0x1c13acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c13b0: 0xbba80010  swr         $t0, 0x10($sp)
    ctx->pc = 0x1c13b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c13b4: 0x244702a0  addiu       $a3, $v0, 0x2A0
    ctx->pc = 0x1c13b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1c13b8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c13b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c13bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c13bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c13c0: 0x244402ac  addiu       $a0, $v0, 0x2AC
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 684));
    // 0x1c13c4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c13c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c13c8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1c13c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c13cc: 0xc44e02b0  lwc1        $f14, 0x2B0($v0)
    ctx->pc = 0x1c13ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c13d0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1c13d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c13d4: 0xc06d066  jal         func_1B4198
    ctx->pc = 0x1C13D4u;
    SET_GPR_U32(ctx, 31, 0x1C13DCu);
    ctx->pc = 0x1C13D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13D4u;
    // 0x1c13d8: 0xc33024  and         $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4198u, 0x1C13D4u, 0x1C13DCu)) {
        return;
    }
    ctx->pc = 0x1C13DCu;
label_1c13dc:
    // 0x1c13dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c13dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c13e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c13e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c13e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C13E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13E4u;
        // 0x1c13e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C13E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C13ECu;
    // 0x1c13ec: 0x0  nop
    ctx->pc = 0x1c13ecu;
    // NOP
    ctx->pc = 0x1c13f0u;
}
