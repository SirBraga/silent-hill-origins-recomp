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

// Function: sub_0019C0A8
// Address: 0x19c0a8 - 0x19c128
void sub_0019C0A8_0x19c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C0A8_0x19c0a8");
#endif

    switch (ctx->pc) {
        case 0x19c0ccu: goto label_19c0cc;
        case 0x19c114u: goto label_19c114;
        default: break;
    }

    ctx->pc = 0x19c0a8u;

    // 0x19c0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c0ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c0b4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C0B4u;
    {
        const bool branch_taken_0x19c0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0B4u;
        // 0x19c0b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0b4) {
            ctx->pc = 0x19C0CCu;
            goto label_19c0cc;
        }
    }
    ctx->pc = 0x19C0BCu;
    // 0x19c0bc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x19c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19c0c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0c4: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x19C0C4u;
    SET_GPR_U32(ctx, 31, 0x19C0CCu);
    ctx->pc = 0x19C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0C4u;
    // 0x19c0c8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x19C0C4u, 0x19C0CCu)) {
        return;
    }
    ctx->pc = 0x19C0CCu;
label_19c0cc:
    // 0x19c0cc: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x19c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19c0d0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19c0d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19c0d8: 0x68430047  ldl         $v1, 0x47($v0)
    ctx->pc = 0x19c0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19c0dc: 0x6c430040  ldr         $v1, 0x40($v0)
    ctx->pc = 0x19c0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x19c0e0: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x19c0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19c0e4: 0xb0830077  sdl         $v1, 0x77($a0)
    ctx->pc = 0x19c0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19c0e8: 0xb4830070  sdr         $v1, 0x70($a0)
    ctx->pc = 0x19c0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19c0ec: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x19c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x19c0f0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19c0f4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x19c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x19c0f8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C0F8u;
    {
        const bool branch_taken_0x19c0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0F8u;
        // 0x19c0fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0f8) {
            ctx->pc = 0x19C118u;
            goto label_19c118;
        }
    }
    ctx->pc = 0x19C100u;
    // 0x19c100: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x19c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19c104: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c108: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x19c108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19c10c: 0xc0b66fa  jal         func_2D9BE8
    ctx->pc = 0x19C10Cu;
    SET_GPR_U32(ctx, 31, 0x19C114u);
    ctx->pc = 0x19C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C10Cu;
    // 0x19c110: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9BE8u, 0x19C10Cu, 0x19C114u)) {
        return;
    }
    ctx->pc = 0x19C114u;
label_19c114:
    // 0x19c114: 0x0  nop
    ctx->pc = 0x19c114u;
    // NOP
label_19c118:
    // 0x19c118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c120: 0x3e00008  jr          $ra
    ctx->pc = 0x19C120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C120u;
        // 0x19c124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C128u;
}
