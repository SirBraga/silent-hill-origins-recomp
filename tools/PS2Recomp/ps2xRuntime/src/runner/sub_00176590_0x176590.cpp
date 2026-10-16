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

// Function: sub_00176590
// Address: 0x176590 - 0x176620
void sub_00176590_0x176590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176590_0x176590");
#endif

    switch (ctx->pc) {
        case 0x1765bcu: goto label_1765bc;
        case 0x17660cu: goto label_17660c;
        default: break;
    }

    ctx->pc = 0x176590u;

    // 0x176590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x176590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176594: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x176594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x176598: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x176598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17659c: 0x2482005c  addiu       $v0, $a0, 0x5C
    ctx->pc = 0x17659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x1765a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1765a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1765a4: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x1765a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1765a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1765a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1765ac: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1765ACu;
    {
        const bool branch_taken_0x1765ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765ac) {
            ctx->pc = 0x1765B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1765ACu;
            // 0x1765b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176610u;
            goto label_176610;
        }
    }
    ctx->pc = 0x1765B4u;
    // 0x1765b4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1765B4u;
    SET_GPR_U32(ctx, 31, 0x1765BCu);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1765B4u, 0x1765BCu)) {
        return;
    }
    ctx->pc = 0x1765BCu;
label_1765bc:
    // 0x1765bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1765bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1765c0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1765c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1765c4: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x1765c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x1765c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1765c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1765cc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1765ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1765d0: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x1765d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x1765d4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1765d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1765d8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1765d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1765dc: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1765dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1765e0: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x1765e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1765e4: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x1765e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1765e8: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1765e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1765ec: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1765ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1765f0: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1765F0u;
    {
        const bool branch_taken_0x1765f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1765F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765F0u;
        // 0x1765f4: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765f0) {
            ctx->pc = 0x17660Cu;
            goto label_17660c;
        }
    }
    ctx->pc = 0x1765F8u;
    // 0x1765f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1765f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1765fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1765FCu;
    {
        const bool branch_taken_0x1765fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765FCu;
        // 0x176600: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765fc) {
            ctx->pc = 0x176610u;
            goto label_176610;
        }
    }
    ctx->pc = 0x176604u;
    // 0x176604: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x176604u;
    SET_GPR_U32(ctx, 31, 0x17660Cu);
    ctx->pc = 0x176608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176604u;
    // 0x176608: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x176604u, 0x17660Cu)) {
        return;
    }
    ctx->pc = 0x17660Cu;
label_17660c:
    // 0x17660c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17660cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_176610:
    // 0x176610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176614: 0x3e00008  jr          $ra
    ctx->pc = 0x176614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176614u;
        // 0x176618: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17661Cu;
    // 0x17661c: 0x0  nop
    ctx->pc = 0x17661cu;
    // NOP
    ctx->pc = 0x176620u;
}
