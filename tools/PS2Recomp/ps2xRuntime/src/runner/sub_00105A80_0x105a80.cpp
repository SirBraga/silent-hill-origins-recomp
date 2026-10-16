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

// Function: sub_00105A80
// Address: 0x105a80 - 0x105b28
void sub_00105A80_0x105a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105A80_0x105a80");
#endif

    switch (ctx->pc) {
        case 0x105a80u: goto label_105a80;
        case 0x105a84u: goto label_105a84;
        case 0x105a88u: goto label_105a88;
        case 0x105a8cu: goto label_105a8c;
        case 0x105a90u: goto label_105a90;
        case 0x105a94u: goto label_105a94;
        case 0x105a98u: goto label_105a98;
        case 0x105a9cu: goto label_105a9c;
        case 0x105aa0u: goto label_105aa0;
        case 0x105aa4u: goto label_105aa4;
        case 0x105aa8u: goto label_105aa8;
        case 0x105aacu: goto label_105aac;
        case 0x105ab0u: goto label_105ab0;
        case 0x105ab4u: goto label_105ab4;
        case 0x105ab8u: goto label_105ab8;
        case 0x105abcu: goto label_105abc;
        case 0x105ac0u: goto label_105ac0;
        case 0x105ac4u: goto label_105ac4;
        case 0x105ac8u: goto label_105ac8;
        case 0x105accu: goto label_105acc;
        case 0x105ad0u: goto label_105ad0;
        case 0x105ad4u: goto label_105ad4;
        case 0x105ad8u: goto label_105ad8;
        case 0x105adcu: goto label_105adc;
        case 0x105ae0u: goto label_105ae0;
        case 0x105ae4u: goto label_105ae4;
        case 0x105ae8u: goto label_105ae8;
        case 0x105aecu: goto label_105aec;
        case 0x105af0u: goto label_105af0;
        case 0x105af4u: goto label_105af4;
        case 0x105af8u: goto label_105af8;
        case 0x105afcu: goto label_105afc;
        case 0x105b00u: goto label_105b00;
        case 0x105b04u: goto label_105b04;
        case 0x105b08u: goto label_105b08;
        case 0x105b0cu: goto label_105b0c;
        case 0x105b10u: goto label_105b10;
        case 0x105b14u: goto label_105b14;
        case 0x105b18u: goto label_105b18;
        case 0x105b1cu: goto label_105b1c;
        case 0x105b20u: goto label_105b20;
        case 0x105b24u: goto label_105b24;
        default: break;
    }

    ctx->pc = 0x105a80u;

label_105a80:
    // 0x105a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x105a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_105a84:
    // 0x105a84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x105a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_105a88:
    // 0x105a88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x105a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_105a8c:
    // 0x105a8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x105a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105a90:
    // 0x105a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x105a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_105a94:
    // 0x105a94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x105a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_105a98:
    // 0x105a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_105a9c:
    // 0x105a9c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x105a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_105aa0:
    // 0x105aa0: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x105aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_105aa4:
    // 0x105aa4: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x105aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_105aa8:
    // 0x105aa8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x105aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_105aac:
    // 0x105aac: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x105aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_105ab0:
    // 0x105ab0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x105ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_105ab4:
    // 0x105ab4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x105ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_105ab8:
    // 0x105ab8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x105ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105abc:
    // 0x105abc: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x105abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_105ac0:
    // 0x105ac0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x105ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_105ac4:
    // 0x105ac4: 0x40f809  jalr        $v0
label_105ac8:
    if (ctx->pc == 0x105AC8u) {
        ctx->pc = 0x105AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AC4u;
        // 0x105ac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105ACCu;
        goto label_105acc;
    }
    ctx->pc = 0x105AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105ACCu);
        ctx->pc = 0x105AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AC4u;
        // 0x105ac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105AC4u, 0x105ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105ACCu;
label_105acc:
    // 0x105acc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_105ad0:
    if (ctx->pc == 0x105AD0u) {
        ctx->pc = 0x105AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105ACCu;
        // 0x105ad0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105AD4u;
        goto label_105ad4;
    }
    ctx->pc = 0x105ACCu;
    {
        const bool branch_taken_0x105acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105acc) {
            ctx->pc = 0x105AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105ACCu;
            // 0x105ad0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105AF0u;
            goto label_105af0;
        }
    }
    ctx->pc = 0x105AD4u;
label_105ad4:
    // 0x105ad4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x105ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_105ad8:
    // 0x105ad8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x105ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_105adc:
    // 0x105adc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x105adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_105ae0:
    // 0x105ae0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x105ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_105ae4:
    // 0x105ae4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x105ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_105ae8:
    // 0x105ae8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x105ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_105aec:
    // 0x105aec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x105aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105af0:
    // 0x105af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105af4:
    // 0x105af4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x105af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_105af8:
    // 0x105af8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_105afc:
    // 0x105afc: 0x84440100  lh          $a0, 0x100($v0)
    ctx->pc = 0x105afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
label_105b00:
    // 0x105b00: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x105b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_105b04:
    // 0x105b04: 0x60f809  jalr        $v1
label_105b08:
    if (ctx->pc == 0x105B08u) {
        ctx->pc = 0x105B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B04u;
        // 0x105b08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B0Cu;
        goto label_105b0c;
    }
    ctx->pc = 0x105B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105B0Cu);
        ctx->pc = 0x105B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B04u;
        // 0x105b08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B04u, 0x105B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105B0Cu;
label_105b0c:
    // 0x105b0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x105b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_105b10:
    // 0x105b10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x105b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_105b14:
    // 0x105b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x105b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_105b18:
    // 0x105b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_105b1c:
    // 0x105b1c: 0x3e00008  jr          $ra
label_105b20:
    if (ctx->pc == 0x105B20u) {
        ctx->pc = 0x105B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B1Cu;
        // 0x105b20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B24u;
        goto label_105b24;
    }
    ctx->pc = 0x105B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B1Cu;
        // 0x105b20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105B24u;
label_105b24:
    // 0x105b24: 0x0  nop
    ctx->pc = 0x105b24u;
    // NOP
    ctx->pc = 0x105b28u;
}
