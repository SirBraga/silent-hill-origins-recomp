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

// Function: sub_001AB5D0
// Address: 0x1ab5d0 - 0x1ab688
void sub_001AB5D0_0x1ab5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB5D0_0x1ab5d0");
#endif

    switch (ctx->pc) {
        case 0x1ab5f0u: goto label_1ab5f0;
        default: break;
    }

    ctx->pc = 0x1ab5d0u;

    // 0x1ab5d0: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x1ab5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1ab5d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ab5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab5d8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AB5D8u;
    {
        const bool branch_taken_0x1ab5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5D8u;
        // 0x1ab5dc: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5d8) {
            ctx->pc = 0x1AB638u;
            goto label_1ab638;
        }
    }
    ctx->pc = 0x1AB5E0u;
    // 0x1ab5e0: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x1ab5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1ab5e4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ab5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ab5e8: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AB5E8u;
    {
        const bool branch_taken_0x1ab5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5E8u;
        // 0x1ab5ec: 0xac840090  sw          $a0, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5e8) {
            ctx->pc = 0x1AB614u;
            goto label_1ab614;
        }
    }
    ctx->pc = 0x1AB5F0u;
label_1ab5f0:
    // 0x1ab5f0: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x1ab5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ab5f4: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x1ab5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ab5f8: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1ab5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ab5fc: 0xb046fff7  sdl         $a2, -0x9($v0)
    ctx->pc = 0x1ab5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab600: 0xb446fff0  sdr         $a2, -0x10($v0)
    ctx->pc = 0x1ab600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab604: 0xac47fff8  sw          $a3, -0x8($v0)
    ctx->pc = 0x1ab604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 7));
    // 0x1ab608: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ab608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ab60c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AB60Cu;
    {
        const bool branch_taken_0x1ab60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab60c) {
            ctx->pc = 0x1AB5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab5f0;
        }
    }
    ctx->pc = 0x1AB614u;
label_1ab614:
    // 0x1ab614: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1ab614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ab618: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1ab618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ab61c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1ab61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab620: 0xb043fff7  sdl         $v1, -0x9($v0)
    ctx->pc = 0x1ab620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab624: 0xb443fff0  sdr         $v1, -0x10($v0)
    ctx->pc = 0x1ab624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab628: 0xac46fff8  sw          $a2, -0x8($v0)
    ctx->pc = 0x1ab628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 6));
    // 0x1ab62c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1ab62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1ab630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ab634: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x1ab634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_1ab638:
    // 0x1ab638: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1ab638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1ab63c: 0x68a90007  ldl         $t1, 0x7($a1)
    ctx->pc = 0x1ab63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ab640: 0x6ca90000  ldr         $t1, 0x0($a1)
    ctx->pc = 0x1ab640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ab644: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ab644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ab648: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x1ab648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab64c: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x1ab64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab650: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ab650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1ab654: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ab654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ab658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab65c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab660: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x1ab660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x1ab664: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x1ab664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ab668: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x1ab668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ab66c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x1ab66cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab670: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x1ab670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab674: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x1ab674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab678: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1ab678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x1ab67c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB67Cu;
        // 0x1ab680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB684u;
    // 0x1ab684: 0x0  nop
    ctx->pc = 0x1ab684u;
    // NOP
    ctx->pc = 0x1ab688u;
}
