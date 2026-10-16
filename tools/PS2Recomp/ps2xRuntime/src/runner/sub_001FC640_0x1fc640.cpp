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

// Function: sub_001FC640
// Address: 0x1fc640 - 0x1fc6f0
void sub_001FC640_0x1fc640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC640_0x1fc640");
#endif

    switch (ctx->pc) {
        case 0x1fc65cu: goto label_1fc65c;
        case 0x1fc668u: goto label_1fc668;
        default: break;
    }

    ctx->pc = 0x1fc640u;

    // 0x1fc640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc644: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fc644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fc648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc64c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fc64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fc650: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fc650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fc654: 0xc07f1bc  jal         func_1FC6F0
    ctx->pc = 0x1FC654u;
    SET_GPR_U32(ctx, 31, 0x1FC65Cu);
    ctx->pc = 0x1FC658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC654u;
    // 0x1fc658: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC6F0u, 0x1FC654u, 0x1FC65Cu)) {
        return;
    }
    ctx->pc = 0x1FC65Cu;
label_1fc65c:
    // 0x1fc65c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fc65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc660: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1fc660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1fc664: 0x0  nop
    ctx->pc = 0x1fc664u;
    // NOP
label_1fc668:
    // 0x1fc668: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1fc668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc66c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fc670: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FC670u;
    {
        const bool branch_taken_0x1fc670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC670u;
        // 0x1fc674: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc670) {
            ctx->pc = 0x1FC6A0u;
            goto label_1fc6a0;
        }
    }
    ctx->pc = 0x1FC678u;
    // 0x1fc678: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x1fc678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fc67c: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x1fc67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fc680: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x1fc680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1fc684: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x1fc684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1fc688: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1fc688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc68c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1fc68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc690: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1fc690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc694: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1fc694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc698: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fc698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc69c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc6a0:
    // 0x1fc6a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc6a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc6a8: 0x1200ffef  beqz        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FC6A8u;
    {
        const bool branch_taken_0x1fc6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6A8u;
        // 0x1fc6ac: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6a8) {
            ctx->pc = 0x1FC668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc668;
        }
    }
    ctx->pc = 0x1FC6B0u;
    // 0x1fc6b0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1fc6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1fc6b4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1fc6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1fc6b8: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x1fc6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1fc6bc: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x1fc6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1fc6c0: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1fc6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc6c4: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1fc6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc6c8: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x1fc6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc6cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fc6ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6d0: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x1fc6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc6d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fc6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc6d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fc6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc6dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fc6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6E0u;
        // 0x1fc6e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC6E8u;
    // 0x1fc6e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fc6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fc6ec: 0x0  nop
    ctx->pc = 0x1fc6ecu;
    // NOP
    ctx->pc = 0x1fc6f0u;
}
