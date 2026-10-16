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

// Function: sub_003267C8
// Address: 0x3267c8 - 0x3268c8
void sub_003267C8_0x3267c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003267C8_0x3267c8");
#endif

    switch (ctx->pc) {
        case 0x3267f0u: goto label_3267f0;
        case 0x326804u: goto label_326804;
        case 0x326848u: goto label_326848;
        case 0x326888u: goto label_326888;
        default: break;
    }

    ctx->pc = 0x3267c8u;

    // 0x3267c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3267c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3267cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3267ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3267d0: 0x3c120068  lui         $s2, 0x68
    ctx->pc = 0x3267d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    // 0x3267d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3267d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3267d8: 0x8e4275f8  lw          $v0, 0x75F8($s2)
    ctx->pc = 0x3267d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6875F8u));
    // 0x3267dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3267dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3267e0: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3267E0u;
    {
        const bool branch_taken_0x3267e0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3267E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267E0u;
        // 0x3267e4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3267e0) {
            ctx->pc = 0x3268ACu;
            goto label_3268ac;
        }
    }
    ctx->pc = 0x3267E8u;
    // 0x3267e8: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x3267e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x3267ec: 0x2630d680  addiu       $s0, $s1, -0x2980
    ctx->pc = 0x3267ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
label_3267f0:
    // 0x3267f0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3267f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3267f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3267f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267f8: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x3267f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x3267fc: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x3267FCu;
    SET_GPR_U32(ctx, 31, 0x326804u);
    ctx->pc = 0x326800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3267FCu;
    // 0x326800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x3267FCu, 0x326804u)) {
        return;
    }
    ctx->pc = 0x326804u;
label_326804:
    // 0x326804: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326804u;
    {
        const bool branch_taken_0x326804 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x326804) {
            ctx->pc = 0x326808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326804u;
            // 0x326808: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326814u;
            goto label_326814;
        }
    }
    ctx->pc = 0x32680Cu;
    // 0x32680c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x32680Cu;
    {
        const bool branch_taken_0x32680c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32680Cu;
        // 0x326810: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32680c) {
            ctx->pc = 0x3268B0u;
            goto label_3268b0;
        }
    }
    ctx->pc = 0x326814u;
label_326814:
    // 0x326814: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x326814u;
    {
        const bool branch_taken_0x326814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326814u;
        // 0x326818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326814) {
            ctx->pc = 0x32687Cu;
            goto label_32687c;
        }
    }
    ctx->pc = 0x32681Cu;
    // 0x32681c: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x32681cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x326820: 0xae4075f8  sw          $zero, 0x75F8($s2)
    ctx->pc = 0x326820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30200), GPR_U32(ctx, 0));
    // 0x326824: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x326824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x326828: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x326828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32682c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32682cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x326830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x326834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326838: 0x2629d480  addiu       $t1, $s1, -0x2B80
    ctx->pc = 0x326838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956160));
    // 0x32683c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x32683cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326840: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x326840u;
    SET_GPR_U32(ctx, 31, 0x326848u);
    ctx->pc = 0x326844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326840u;
    // 0x326844: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x326840u, 0x326848u)) {
        return;
    }
    ctx->pc = 0x326848u;
label_326848:
    // 0x326848: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326848u;
    {
        const bool branch_taken_0x326848 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x32684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326848u;
        // 0x32684c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326848) {
            ctx->pc = 0x32685Cu;
            goto label_32685c;
        }
    }
    ctx->pc = 0x326850u;
    // 0x326850: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x326850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x326854: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x326854u;
    {
        const bool branch_taken_0x326854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326854u;
        // 0x326858: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326854) {
            ctx->pc = 0x3268B0u;
            goto label_3268b0;
        }
    }
    ctx->pc = 0x32685Cu;
label_32685c:
    // 0x32685c: 0x2627d480  addiu       $a3, $s1, -0x2B80
    ctx->pc = 0x32685cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956160));
    // 0x326860: 0x2466d6a8  addiu       $a2, $v1, -0x2958
    ctx->pc = 0x326860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956712));
    // 0x326864: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x326864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x326868: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x326868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x32686c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x32686cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x326870: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x326870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x326874: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x326874u;
    {
        const bool branch_taken_0x326874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326874u;
        // 0x326878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326874) {
            ctx->pc = 0x3268B0u;
            goto label_3268b0;
        }
    }
    ctx->pc = 0x32687Cu;
label_32687c:
    // 0x32687c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x32687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x326880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x326880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326884: 0x0  nop
    ctx->pc = 0x326884u;
    // NOP
label_326888:
    // 0x326888: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32688c: 0x0  nop
    ctx->pc = 0x32688cu;
    // NOP
    // 0x326890: 0x0  nop
    ctx->pc = 0x326890u;
    // NOP
    // 0x326894: 0x0  nop
    ctx->pc = 0x326894u;
    // NOP
    // 0x326898: 0x0  nop
    ctx->pc = 0x326898u;
    // NOP
    // 0x32689c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32689Cu;
    {
        const bool branch_taken_0x32689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32689c) {
            ctx->pc = 0x326888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326888;
        }
    }
    ctx->pc = 0x3268A4u;
    // 0x3268a4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x3268A4u;
    {
        const bool branch_taken_0x3268a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268A4u;
        // 0x3268a8: 0x2630d680  addiu       $s0, $s1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268a4) {
            ctx->pc = 0x3267F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3267f0;
        }
    }
    ctx->pc = 0x3268ACu;
label_3268ac:
    // 0x3268ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3268acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3268b0:
    // 0x3268b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3268b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3268b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3268b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3268b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3268b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3268bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3268bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3268c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3268C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3268C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268C0u;
        // 0x3268c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3268C8u;
}
