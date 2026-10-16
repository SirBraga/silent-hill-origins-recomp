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

// Function: sub_001F5520
// Address: 0x1f5520 - 0x1f55d8
void sub_001F5520_0x1f5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5520_0x1f5520");
#endif

    switch (ctx->pc) {
        case 0x1f5560u: goto label_1f5560;
        case 0x1f5598u: goto label_1f5598;
        case 0x1f55acu: goto label_1f55ac;
        default: break;
    }

    ctx->pc = 0x1f5520u;

    // 0x1f5520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5524: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f5524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f5528: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f552c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f552cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f5530: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f5530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f5534: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f5534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5538: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f5538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f553c: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x1f553cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1f5540: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1f5540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1f5544: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f5544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f554c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1f554cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f5550: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1f5550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1f5554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5558: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1F5558u;
    SET_GPR_U32(ctx, 31, 0x1F5560u);
    ctx->pc = 0x1F555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5558u;
    // 0x1f555c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1F5558u, 0x1F5560u)) {
        return;
    }
    ctx->pc = 0x1F5560u;
label_1f5560:
    // 0x1f5560: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f5560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f5564: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f5564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5568: 0x8c43eafc  lw          $v1, -0x1504($v0)
    ctx->pc = 0x1f5568u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33EAFCu));
    // 0x1f556c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f5574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5578: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x1f5578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1f557c: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x1f557cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1f5580: 0xaa020003  swl         $v0, 0x3($s0)
    ctx->pc = 0x1f5580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f5584: 0xba020000  swr         $v0, 0x0($s0)
    ctx->pc = 0x1f5584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f5588: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x1f5588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f558c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x1f558cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1f5590: 0xc07d144  jal         func_1F4510
    ctx->pc = 0x1F5590u;
    SET_GPR_U32(ctx, 31, 0x1F5598u);
    ctx->pc = 0x1F5594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5590u;
    // 0x1f5594: 0xa6080004  sh          $t0, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4510u, 0x1F5590u, 0x1F5598u)) {
        return;
    }
    ctx->pc = 0x1F5598u;
label_1f5598:
    // 0x1f5598: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f559c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55a0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x1f55a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f55a4: 0xc074ce0  jal         func_1D3380
    ctx->pc = 0x1F55A4u;
    SET_GPR_U32(ctx, 31, 0x1F55ACu);
    ctx->pc = 0x1F55A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55A4u;
    // 0x1f55a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3380u, 0x1F55A4u, 0x1F55ACu)) {
        return;
    }
    ctx->pc = 0x1F55ACu;
label_1f55ac:
    // 0x1f55ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f55acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f55b0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1f55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1f55b4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1f55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f55b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f55b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f55bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f55bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f55c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f55c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f55c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f55c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f55c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f55c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f55cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F55CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55CCu;
        // 0x1f55d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F55CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F55D4u;
    // 0x1f55d4: 0x0  nop
    ctx->pc = 0x1f55d4u;
    // NOP
    ctx->pc = 0x1f55d8u;
}
