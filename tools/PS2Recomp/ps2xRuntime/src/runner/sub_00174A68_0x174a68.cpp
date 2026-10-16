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

// Function: sub_00174A68
// Address: 0x174a68 - 0x174af0
void sub_00174A68_0x174a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174A68_0x174a68");
#endif

    switch (ctx->pc) {
        case 0x174a8cu: goto label_174a8c;
        case 0x174adcu: goto label_174adc;
        default: break;
    }

    ctx->pc = 0x174a68u;

    // 0x174a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174a6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x174a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x174a70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a78: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x174a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x174a7c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x174A7Cu;
    {
        const bool branch_taken_0x174a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a7c) {
            ctx->pc = 0x174A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174A7Cu;
            // 0x174a80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174AE0u;
            goto label_174ae0;
        }
    }
    ctx->pc = 0x174A84u;
    // 0x174a84: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x174A84u;
    SET_GPR_U32(ctx, 31, 0x174A8Cu);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x174A84u, 0x174A8Cu)) {
        return;
    }
    ctx->pc = 0x174A8Cu;
label_174a8c:
    // 0x174a8c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x174a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x174a90: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x174a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x174a94: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x174a94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x174a98: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x174a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x174a9c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x174a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x174aa0: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x174aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x174aa4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x174aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x174aa8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x174aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x174aac: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x174aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x174ab0: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x174ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174ab4: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x174ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174ab8: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x174ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x174abc: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x174abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x174ac0: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174AC0u;
    {
        const bool branch_taken_0x174ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x174AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AC0u;
        // 0x174ac4: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ac0) {
            ctx->pc = 0x174ADCu;
            goto label_174adc;
        }
    }
    ctx->pc = 0x174AC8u;
    // 0x174ac8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174acc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174ACCu;
    {
        const bool branch_taken_0x174acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174ACCu;
        // 0x174ad0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174acc) {
            ctx->pc = 0x174AE0u;
            goto label_174ae0;
        }
    }
    ctx->pc = 0x174AD4u;
    // 0x174ad4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x174AD4u;
    SET_GPR_U32(ctx, 31, 0x174ADCu);
    ctx->pc = 0x174AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AD4u;
    // 0x174ad8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x174AD4u, 0x174ADCu)) {
        return;
    }
    ctx->pc = 0x174ADCu;
label_174adc:
    // 0x174adc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x174adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_174ae0:
    // 0x174ae0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x174AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AE4u;
        // 0x174ae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174AECu;
    // 0x174aec: 0x0  nop
    ctx->pc = 0x174aecu;
    // NOP
    ctx->pc = 0x174af0u;
}
