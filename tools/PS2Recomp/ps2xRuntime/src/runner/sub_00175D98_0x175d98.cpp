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

// Function: sub_00175D98
// Address: 0x175d98 - 0x175e28
void sub_00175D98_0x175d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175D98_0x175d98");
#endif

    switch (ctx->pc) {
        case 0x175dc4u: goto label_175dc4;
        case 0x175e14u: goto label_175e14;
        default: break;
    }

    ctx->pc = 0x175d98u;

    // 0x175d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175d9c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x175d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x175da0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x175da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x175da4: 0x2482005c  addiu       $v0, $a0, 0x5C
    ctx->pc = 0x175da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x175da8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x175dac: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x175dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175db0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175db4: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x175DB4u;
    {
        const bool branch_taken_0x175db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175db4) {
            ctx->pc = 0x175DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175DB4u;
            // 0x175db8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175E18u;
            goto label_175e18;
        }
    }
    ctx->pc = 0x175DBCu;
    // 0x175dbc: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x175DBCu;
    SET_GPR_U32(ctx, 31, 0x175DC4u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x175DBCu, 0x175DC4u)) {
        return;
    }
    ctx->pc = 0x175DC4u;
label_175dc4:
    // 0x175dc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x175dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175dc8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x175dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x175dcc: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x175dccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x175dd0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x175dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x175dd4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x175dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x175dd8: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x175dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x175ddc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x175ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x175de0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x175de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x175de4: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x175de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x175de8: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x175de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175dec: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x175decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175df0: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x175df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x175df4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x175df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x175df8: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175DF8u;
    {
        const bool branch_taken_0x175df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x175DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DF8u;
        // 0x175dfc: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175df8) {
            ctx->pc = 0x175E14u;
            goto label_175e14;
        }
    }
    ctx->pc = 0x175E00u;
    // 0x175e00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x175e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175e04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175E04u;
    {
        const bool branch_taken_0x175e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E04u;
        // 0x175e08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e04) {
            ctx->pc = 0x175E18u;
            goto label_175e18;
        }
    }
    ctx->pc = 0x175E0Cu;
    // 0x175e0c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x175E0Cu;
    SET_GPR_U32(ctx, 31, 0x175E14u);
    ctx->pc = 0x175E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E0Cu;
    // 0x175e10: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x175E0Cu, 0x175E14u)) {
        return;
    }
    ctx->pc = 0x175E14u;
label_175e14:
    // 0x175e14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175e18:
    // 0x175e18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x175E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E1Cu;
        // 0x175e20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175E24u;
    // 0x175e24: 0x0  nop
    ctx->pc = 0x175e24u;
    // NOP
    ctx->pc = 0x175e28u;
}
