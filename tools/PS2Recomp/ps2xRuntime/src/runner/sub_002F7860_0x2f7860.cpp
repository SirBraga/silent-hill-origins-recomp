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

// Function: sub_002F7860
// Address: 0x2f7860 - 0x2f7968
void sub_002F7860_0x2f7860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7860_0x2f7860");
#endif

    switch (ctx->pc) {
        case 0x2f78a4u: goto label_2f78a4;
        case 0x2f78d8u: goto label_2f78d8;
        case 0x2f78f0u: goto label_2f78f0;
        case 0x2f7904u: goto label_2f7904;
        case 0x2f7914u: goto label_2f7914;
        default: break;
    }

    ctx->pc = 0x2f7860u;

    // 0x2f7860: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2f7860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7864: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f7864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7868: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2f7868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f786c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f786cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f7870: 0x244214c8  addiu       $v0, $v0, 0x14C8
    ctx->pc = 0x2f7870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x2f7874: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f7874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f7878: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f787c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2f787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f7880: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f7880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f7884: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f7884u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7888: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f788c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2f788cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f7890: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f7890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7894: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f7894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7898: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f789c: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F789Cu;
    SET_GPR_U32(ctx, 31, 0x2F78A4u);
    ctx->pc = 0x2F78A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F789Cu;
    // 0x2f78a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F789Cu, 0x2F78A4u)) {
        return;
    }
    ctx->pc = 0x2F78A4u;
label_2f78a4:
    // 0x2f78a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f78a8: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F78A8u;
    {
        const bool branch_taken_0x2f78a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78A8u;
        // 0x2f78ac: 0x3c130072  lui         $s3, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78a8) {
            ctx->pc = 0x2F7924u;
            goto label_2f7924;
        }
    }
    ctx->pc = 0x2F78B0u;
    // 0x2f78b0: 0x24032080  addiu       $v1, $zero, 0x2080
    ctx->pc = 0x2f78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f78b4: 0x26621540  addiu       $v0, $s3, 0x1540
    ctx->pc = 0x2f78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f78b8: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f78b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f78bc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2f78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2f78c0: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x2f78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x2f78c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2f78c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2f78c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f78c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78cc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2f78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2f78d0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F78D0u;
    SET_GPR_U32(ctx, 31, 0x2F78D8u);
    ctx->pc = 0x2F78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78D0u;
    // 0x2f78d4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F78D0u, 0x2F78D8u)) {
        return;
    }
    ctx->pc = 0x2F78D8u;
label_2f78d8:
    // 0x2f78d8: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x2f78d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x2f78dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f78e0: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x2f78e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x2f78e4: 0xae02664c  sw          $v0, 0x664C($s0)
    ctx->pc = 0x2f78e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x68664Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x68664Cu, _value); } while (0);
    // 0x2f78e8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f78e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f78ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f78ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f78f0:
    // 0x2f78f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f78f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78f4: 0x8e05664c  lw          $a1, 0x664C($s0)
    ctx->pc = 0x2f78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26188)));
    // 0x2f78f8: 0x26671540  addiu       $a3, $s3, 0x1540
    ctx->pc = 0x2f78f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f78fc: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F78FCu;
    SET_GPR_U32(ctx, 31, 0x2F7904u);
    ctx->pc = 0x2F7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78FCu;
    // 0x2f7900: 0x268870e8  addiu       $t0, $s4, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F78FCu, 0x2F7904u)) {
        return;
    }
    ctx->pc = 0x2F7904u;
label_2f7904:
    // 0x2f7904: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7904u;
    {
        const bool branch_taken_0x2f7904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f7904) {
            ctx->pc = 0x2F7908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7904u;
            // 0x2f7908: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F78F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f78f0;
        }
    }
    ctx->pc = 0x2F790Cu;
    // 0x2f790c: 0xc0bdbf0  jal         func_2F6FC0
    ctx->pc = 0x2F790Cu;
    SET_GPR_U32(ctx, 31, 0x2F7914u);
    ctx->pc = 0x2F6FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6FC0u, 0x2F790Cu, 0x2F7914u)) {
        return;
    }
    ctx->pc = 0x2F7914u;
label_2f7914:
    // 0x2f7914: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f7914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7918: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2f7918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f791c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F791Cu;
    {
        const bool branch_taken_0x2f791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f791c) {
            ctx->pc = 0x2F792Cu;
            goto label_2f792c;
        }
    }
    ctx->pc = 0x2F7924u;
label_2f7924:
    // 0x2f7924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7924u;
    {
        const bool branch_taken_0x2f7924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7924u;
        // 0x2f7928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7924) {
            ctx->pc = 0x2F7940u;
            goto label_2f7940;
        }
    }
    ctx->pc = 0x2F792Cu;
label_2f792c:
    // 0x2f792c: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x2f792cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f7930: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x2f7930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f7934: 0xb2a20007  sdl         $v0, 0x7($s5)
    ctx->pc = 0x2f7934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7938: 0xb6a20000  sdr         $v0, 0x0($s5)
    ctx->pc = 0x2f7938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f793c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2f793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2f7940:
    // 0x2f7940: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f7940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7944: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f7944u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7948: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f794c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f794cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7950: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f7950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7954: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7958: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f795c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F795Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F795Cu;
        // 0x2f7960: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F795Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7964u;
    // 0x2f7964: 0x0  nop
    ctx->pc = 0x2f7964u;
    // NOP
    ctx->pc = 0x2f7968u;
}
