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

// Function: sub_00174958
// Address: 0x174958 - 0x1749e0
void sub_00174958_0x174958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174958_0x174958");
#endif

    switch (ctx->pc) {
        case 0x17497cu: goto label_17497c;
        case 0x1749ccu: goto label_1749cc;
        default: break;
    }

    ctx->pc = 0x174958u;

    // 0x174958: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17495c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x174960: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174968: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x174968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17496c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x17496Cu;
    {
        const bool branch_taken_0x17496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17496c) {
            ctx->pc = 0x174970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17496Cu;
            // 0x174970: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1749D0u;
            goto label_1749d0;
        }
    }
    ctx->pc = 0x174974u;
    // 0x174974: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x174974u;
    SET_GPR_U32(ctx, 31, 0x17497Cu);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x174974u, 0x17497Cu)) {
        return;
    }
    ctx->pc = 0x17497Cu;
label_17497c:
    // 0x17497c: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x17497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x174980: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x174980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x174984: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x174984u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x174988: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x174988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17498c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x17498cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x174990: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x174990u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x174994: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x174994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x174998: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x174998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17499c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x17499cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1749a0: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x1749a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1749a4: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x1749a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1749a8: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1749a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1749ac: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1749acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1749b0: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1749B0u;
    {
        const bool branch_taken_0x1749b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1749B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749B0u;
        // 0x1749b4: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749b0) {
            ctx->pc = 0x1749CCu;
            goto label_1749cc;
        }
    }
    ctx->pc = 0x1749B8u;
    // 0x1749b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1749b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1749bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1749BCu;
    {
        const bool branch_taken_0x1749bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749BCu;
        // 0x1749c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749bc) {
            ctx->pc = 0x1749D0u;
            goto label_1749d0;
        }
    }
    ctx->pc = 0x1749C4u;
    // 0x1749c4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1749C4u;
    SET_GPR_U32(ctx, 31, 0x1749CCu);
    ctx->pc = 0x1749C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1749C4u;
    // 0x1749c8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1749C4u, 0x1749CCu)) {
        return;
    }
    ctx->pc = 0x1749CCu;
label_1749cc:
    // 0x1749cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1749ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1749d0:
    // 0x1749d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1749d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1749d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1749D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1749D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749D4u;
        // 0x1749d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1749D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1749DCu;
    // 0x1749dc: 0x0  nop
    ctx->pc = 0x1749dcu;
    // NOP
    ctx->pc = 0x1749e0u;
}
