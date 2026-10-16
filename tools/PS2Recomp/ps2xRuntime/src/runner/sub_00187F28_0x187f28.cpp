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

// Function: sub_00187F28
// Address: 0x187f28 - 0x188060
void sub_00187F28_0x187f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187F28_0x187f28");
#endif

    switch (ctx->pc) {
        case 0x187f48u: goto label_187f48;
        case 0x187f60u: goto label_187f60;
        case 0x188040u: goto label_188040;
        default: break;
    }

    ctx->pc = 0x187f28u;

    // 0x187f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187f2c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x187f30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x187f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x187f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f38: 0x8c46bd18  lw          $a2, -0x42E8($v0)
    ctx->pc = 0x187f38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBD18u));
    // 0x187f3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187f40: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x187F40u;
    SET_GPR_U32(ctx, 31, 0x187F48u);
    ctx->pc = 0x187F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F40u;
    // 0x187f44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x187F40u, 0x187F48u)) {
        return;
    }
    ctx->pc = 0x187F48u;
label_187f48:
    // 0x187f48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187f50: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x187F50u;
    {
        const bool branch_taken_0x187f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f50) {
            ctx->pc = 0x187F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187F50u;
            // 0x187f54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188054u;
            goto label_188054;
        }
    }
    ctx->pc = 0x187F58u;
    // 0x187f58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x187f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187f60:
    // 0x187f60: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x187f60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x187f64: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x187F64u;
    {
        const bool branch_taken_0x187f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F64u;
        // 0x187f68: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f64) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x187F6Cu;
    // 0x187f6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x187f70: 0x24428a10  addiu       $v0, $v0, -0x75F0
    ctx->pc = 0x187f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937104));
    // 0x187f74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x187f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187f78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x187f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187f7c: 0x800008  jr          $a0
    ctx->pc = 0x187F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187F84u: goto label_187f84;
            case 0x187F94u: goto label_187f94;
            case 0x187FA4u: goto label_187fa4;
            case 0x187FC8u: goto label_187fc8;
            case 0x187FE8u: goto label_187fe8;
            case 0x188008u: goto label_188008;
            case 0x188018u: goto label_188018;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x187F84u;
label_187f84:
    // 0x187f84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f88: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x187f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x187f8c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x187F8Cu;
    {
        const bool branch_taken_0x187f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F8Cu;
        // 0x187f90: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f8c) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x187F94u;
label_187f94:
    // 0x187f94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x187f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187f9c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x187F9Cu;
    {
        const bool branch_taken_0x187f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F9Cu;
        // 0x187fa0: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f9c) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x187FA4u;
label_187fa4:
    // 0x187fa4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187fa8: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x187fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x187fac: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x187facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x187fb0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x187fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x187fb4: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x187fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187fb8: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x187fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187fbc: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x187fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x187fc0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x187FC0u;
    {
        const bool branch_taken_0x187fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FC0u;
        // 0x187fc4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fc0) {
            ctx->pc = 0x188028u;
            goto label_188028;
        }
    }
    ctx->pc = 0x187FC8u;
label_187fc8:
    // 0x187fc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187fcc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x187fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x187fd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187FD0u;
    {
        const bool branch_taken_0x187fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FD0u;
        // 0x187fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fd0) {
            ctx->pc = 0x187FE0u;
            goto label_187fe0;
        }
    }
    ctx->pc = 0x187FD8u;
    // 0x187fd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x187FD8u;
    {
        const bool branch_taken_0x187fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FD8u;
        // 0x187fdc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fd8) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x187FE0u;
label_187fe0:
    // 0x187fe0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x187FE0u;
    {
        const bool branch_taken_0x187fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FE0u;
        // 0x187fe4: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fe0) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x187FE8u;
label_187fe8:
    // 0x187fe8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187fec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x187fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x187ff0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187FF0u;
    {
        const bool branch_taken_0x187ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FF0u;
        // 0x187ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ff0) {
            ctx->pc = 0x188000u;
            goto label_188000;
        }
    }
    ctx->pc = 0x187FF8u;
    // 0x187ff8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x187FF8u;
    {
        const bool branch_taken_0x187ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FF8u;
        // 0x187ffc: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ff8) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x188000u;
label_188000:
    // 0x188000: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x188000u;
    {
        const bool branch_taken_0x188000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188000u;
        // 0x188004: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188000) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x188008u;
label_188008:
    // 0x188008: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18800c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188010: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188010u;
    {
        const bool branch_taken_0x188010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188010u;
        // 0x188014: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188010) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x188018u;
label_188018:
    // 0x188018: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18801c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188020: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x188020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_188024:
    // 0x188024: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x188024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_188028:
    // 0x188028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x188028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18802c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188034: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188038: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x188038u;
    SET_GPR_U32(ctx, 31, 0x188040u);
    ctx->pc = 0x18803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188038u;
    // 0x18803c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x188038u, 0x188040u)) {
        return;
    }
    ctx->pc = 0x188040u;
label_188040:
    // 0x188040: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188044: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188048: 0x5460ffc5  bnel        $v1, $zero, . + 4 + (-0x3B << 2)
    ctx->pc = 0x188048u;
    {
        const bool branch_taken_0x188048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188048) {
            ctx->pc = 0x18804Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188048u;
            // 0x18804c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f60;
        }
    }
    ctx->pc = 0x188050u;
    // 0x188050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x188050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_188054:
    // 0x188054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188058: 0x3e00008  jr          $ra
    ctx->pc = 0x188058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188058u;
        // 0x18805c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188060u;
}
