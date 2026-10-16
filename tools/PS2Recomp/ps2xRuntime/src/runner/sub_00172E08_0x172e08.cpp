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

// Function: sub_00172E08
// Address: 0x172e08 - 0x172e98
void sub_00172E08_0x172e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172E08_0x172e08");
#endif

    switch (ctx->pc) {
        case 0x172e34u: goto label_172e34;
        case 0x172e84u: goto label_172e84;
        default: break;
    }

    ctx->pc = 0x172e08u;

    // 0x172e08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172e0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x172e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172e10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x172e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x172e14: 0x24820094  addiu       $v0, $a0, 0x94
    ctx->pc = 0x172e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x172e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172e1c: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x172e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x172e20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x172e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172e24: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x172E24u;
    {
        const bool branch_taken_0x172e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e24) {
            ctx->pc = 0x172E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172E24u;
            // 0x172e28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172E88u;
            goto label_172e88;
        }
    }
    ctx->pc = 0x172E2Cu;
    // 0x172e2c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x172E2Cu;
    SET_GPR_U32(ctx, 31, 0x172E34u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x172E2Cu, 0x172E34u)) {
        return;
    }
    ctx->pc = 0x172E34u;
label_172e34:
    // 0x172e34: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x172e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172e38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x172e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x172e3c: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x172e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x172e40: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x172e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x172e44: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x172e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x172e48: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x172e48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x172e4c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x172e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x172e50: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x172e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x172e54: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x172e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x172e58: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x172e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172e5c: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x172e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172e60: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x172e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x172e64: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x172e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x172e68: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x172E68u;
    {
        const bool branch_taken_0x172e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x172E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E68u;
        // 0x172e6c: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e68) {
            ctx->pc = 0x172E84u;
            goto label_172e84;
        }
    }
    ctx->pc = 0x172E70u;
    // 0x172e70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x172e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x172e74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E74u;
    {
        const bool branch_taken_0x172e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E74u;
        // 0x172e78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e74) {
            ctx->pc = 0x172E88u;
            goto label_172e88;
        }
    }
    ctx->pc = 0x172E7Cu;
    // 0x172e7c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x172E7Cu;
    SET_GPR_U32(ctx, 31, 0x172E84u);
    ctx->pc = 0x172E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E7Cu;
    // 0x172e80: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x172E7Cu, 0x172E84u)) {
        return;
    }
    ctx->pc = 0x172E84u;
label_172e84:
    // 0x172e84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x172e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172e88:
    // 0x172e88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x172E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E8Cu;
        // 0x172e90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172E94u;
    // 0x172e94: 0x0  nop
    ctx->pc = 0x172e94u;
    // NOP
    ctx->pc = 0x172e98u;
}
