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

// Function: sub_001AC150
// Address: 0x1ac150 - 0x1ac208
void sub_001AC150_0x1ac150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC150_0x1ac150");
#endif

    switch (ctx->pc) {
        case 0x1ac168u: goto label_1ac168;
        case 0x1ac1b0u: goto label_1ac1b0;
        default: break;
    }

    ctx->pc = 0x1ac150u;

    // 0x1ac150: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x1ac150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ac154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac158: 0x8cc21000  lw          $v0, 0x1000($a2)
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4096)));
    // 0x1ac15c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AC15Cu;
    {
        const bool branch_taken_0x1ac15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC15Cu;
        // 0x1ac160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac15c) {
            ctx->pc = 0x1AC194u;
            goto label_1ac194;
        }
    }
    ctx->pc = 0x1AC164u;
    // 0x1ac164: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1ac164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac168:
    // 0x1ac168: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1ac168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac16c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1ac16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac170: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac174: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1ac174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac178: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1ac178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac17c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ac17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ac180: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1ac180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1ac184: 0x8cc21000  lw          $v0, 0x1000($a2)
    ctx->pc = 0x1ac184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4096)));
    // 0x1ac188: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1ac188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ac18c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AC18Cu;
    {
        const bool branch_taken_0x1ac18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC18Cu;
        // 0x1ac190: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac18c) {
            ctx->pc = 0x1AC168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac168;
        }
    }
    ctx->pc = 0x1AC194u;
label_1ac194:
    // 0x1ac194: 0xacc01000  sw          $zero, 0x1000($a2)
    ctx->pc = 0x1ac194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4096), GPR_U32(ctx, 0));
    // 0x1ac198: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ac198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ac19c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1ac19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ac1a0: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AC1A0u;
    {
        const bool branch_taken_0x1ac1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac1a0) {
            ctx->pc = 0x1AC1FCu;
            goto label_1ac1fc;
        }
    }
    ctx->pc = 0x1AC1A8u;
    // 0x1ac1a8: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x1ac1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ac1ac: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x1ac1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
label_1ac1b0:
    // 0x1ac1b0: 0x68a30017  ldl         $v1, 0x17($a1)
    ctx->pc = 0x1ac1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ac1b4: 0x6ca30010  ldr         $v1, 0x10($a1)
    ctx->pc = 0x1ac1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ac1b8: 0x8ca70018  lw          $a3, 0x18($a1)
    ctx->pc = 0x1ac1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1ac1bc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1ac1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac1c0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1ac1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac1c4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1ac1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1ac1c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac1d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ac1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ac1d4: 0xac821060  sw          $v0, 0x1060($a0)
    ctx->pc = 0x1ac1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4192), GPR_U32(ctx, 2));
    // 0x1ac1d8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1ac1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac1dc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1ac1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac1e0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1ac1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac1e4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1ac1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac1e8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1ac1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac1ec: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1ac1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1ac1f0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1ac1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ac1f4: 0x54a0ffee  bnel        $a1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AC1F4u;
    {
        const bool branch_taken_0x1ac1f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac1f4) {
            ctx->pc = 0x1AC1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC1F4u;
            // 0x1ac1f8: 0x8c821060  lw          $v0, 0x1060($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac1b0;
        }
    }
    ctx->pc = 0x1AC1FCu;
label_1ac1fc:
    // 0x1ac1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1FCu;
        // 0x1ac200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC204u;
    // 0x1ac204: 0x0  nop
    ctx->pc = 0x1ac204u;
    // NOP
    ctx->pc = 0x1ac208u;
}
