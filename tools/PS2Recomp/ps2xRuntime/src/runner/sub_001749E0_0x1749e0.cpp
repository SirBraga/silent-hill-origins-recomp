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

// Function: sub_001749E0
// Address: 0x1749e0 - 0x174a68
void sub_001749E0_0x1749e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001749E0_0x1749e0");
#endif

    switch (ctx->pc) {
        case 0x174a04u: goto label_174a04;
        case 0x174a54u: goto label_174a54;
        default: break;
    }

    ctx->pc = 0x1749e0u;

    // 0x1749e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1749e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1749e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1749e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1749e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1749e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1749ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1749ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749f0: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1749f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1749f4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1749F4u;
    {
        const bool branch_taken_0x1749f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1749f4) {
            ctx->pc = 0x1749F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1749F4u;
            // 0x1749f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174A58u;
            goto label_174a58;
        }
    }
    ctx->pc = 0x1749FCu;
    // 0x1749fc: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1749FCu;
    SET_GPR_U32(ctx, 31, 0x174A04u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1749FCu, 0x174A04u)) {
        return;
    }
    ctx->pc = 0x174A04u;
label_174a04:
    // 0x174a04: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x174a08: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x174a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x174a0c: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x174a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x174a10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x174a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x174a14: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x174a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x174a18: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x174a18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x174a1c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x174a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x174a20: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x174a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x174a24: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x174a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x174a28: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x174a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174a2c: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x174a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174a30: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x174a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x174a34: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x174a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x174a38: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A38u;
    {
        const bool branch_taken_0x174a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x174A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A38u;
        // 0x174a3c: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a38) {
            ctx->pc = 0x174A54u;
            goto label_174a54;
        }
    }
    ctx->pc = 0x174A40u;
    // 0x174a40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174A44u;
    {
        const bool branch_taken_0x174a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A44u;
        // 0x174a48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a44) {
            ctx->pc = 0x174A58u;
            goto label_174a58;
        }
    }
    ctx->pc = 0x174A4Cu;
    // 0x174a4c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x174A4Cu;
    SET_GPR_U32(ctx, 31, 0x174A54u);
    ctx->pc = 0x174A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A4Cu;
    // 0x174a50: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x174A4Cu, 0x174A54u)) {
        return;
    }
    ctx->pc = 0x174A54u;
label_174a54:
    // 0x174a54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x174a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_174a58:
    // 0x174a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x174A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A5Cu;
        // 0x174a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174A64u;
    // 0x174a64: 0x0  nop
    ctx->pc = 0x174a64u;
    // NOP
    ctx->pc = 0x174a68u;
}
