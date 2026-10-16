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

// Function: sub_00141F80
// Address: 0x141f80 - 0x142048
void sub_00141F80_0x141f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141F80_0x141f80");
#endif

    switch (ctx->pc) {
        case 0x141f80u: goto label_141f80;
        case 0x141f84u: goto label_141f84;
        case 0x141f88u: goto label_141f88;
        case 0x141f8cu: goto label_141f8c;
        case 0x141f90u: goto label_141f90;
        case 0x141f94u: goto label_141f94;
        case 0x141f98u: goto label_141f98;
        case 0x141f9cu: goto label_141f9c;
        case 0x141fa0u: goto label_141fa0;
        case 0x141fa4u: goto label_141fa4;
        case 0x141fa8u: goto label_141fa8;
        case 0x141facu: goto label_141fac;
        case 0x141fb0u: goto label_141fb0;
        case 0x141fb4u: goto label_141fb4;
        case 0x141fb8u: goto label_141fb8;
        case 0x141fbcu: goto label_141fbc;
        case 0x141fc0u: goto label_141fc0;
        case 0x141fc4u: goto label_141fc4;
        case 0x141fc8u: goto label_141fc8;
        case 0x141fccu: goto label_141fcc;
        case 0x141fd0u: goto label_141fd0;
        case 0x141fd4u: goto label_141fd4;
        case 0x141fd8u: goto label_141fd8;
        case 0x141fdcu: goto label_141fdc;
        case 0x141fe0u: goto label_141fe0;
        case 0x141fe4u: goto label_141fe4;
        case 0x141fe8u: goto label_141fe8;
        case 0x141fecu: goto label_141fec;
        case 0x141ff0u: goto label_141ff0;
        case 0x141ff4u: goto label_141ff4;
        case 0x141ff8u: goto label_141ff8;
        case 0x141ffcu: goto label_141ffc;
        case 0x142000u: goto label_142000;
        case 0x142004u: goto label_142004;
        case 0x142008u: goto label_142008;
        case 0x14200cu: goto label_14200c;
        case 0x142010u: goto label_142010;
        case 0x142014u: goto label_142014;
        case 0x142018u: goto label_142018;
        case 0x14201cu: goto label_14201c;
        case 0x142020u: goto label_142020;
        case 0x142024u: goto label_142024;
        case 0x142028u: goto label_142028;
        case 0x14202cu: goto label_14202c;
        case 0x142030u: goto label_142030;
        case 0x142034u: goto label_142034;
        case 0x142038u: goto label_142038;
        case 0x14203cu: goto label_14203c;
        case 0x142040u: goto label_142040;
        case 0x142044u: goto label_142044;
        default: break;
    }

    ctx->pc = 0x141f80u;

label_141f80:
    // 0x141f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_141f84:
    // 0x141f84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x141f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_141f88:
    // 0x141f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_141f8c:
    // 0x141f8c: 0xc07600c  jal         func_1D8030
label_141f90:
    if (ctx->pc == 0x141F90u) {
        ctx->pc = 0x141F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F8Cu;
        // 0x141f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F94u;
        goto label_141f94;
    }
    ctx->pc = 0x141F8Cu;
    SET_GPR_U32(ctx, 31, 0x141F94u);
    ctx->pc = 0x141F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F8Cu;
    // 0x141f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x141F8Cu, 0x141F94u)) {
        return;
    }
    ctx->pc = 0x141F94u;
label_141f94:
    // 0x141f94: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x141f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_141f98:
    // 0x141f98: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_141f9c:
    if (ctx->pc == 0x141F9Cu) {
        ctx->pc = 0x141F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F98u;
        // 0x141f9c: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141FA0u;
        goto label_141fa0;
    }
    ctx->pc = 0x141F98u;
    {
        const bool branch_taken_0x141f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f98) {
            ctx->pc = 0x141F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141F98u;
            // 0x141f9c: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141FCCu;
            goto label_141fcc;
        }
    }
    ctx->pc = 0x141FA0u;
label_141fa0:
    // 0x141fa0: 0xc049c04  jal         func_127010
label_141fa4:
    if (ctx->pc == 0x141FA4u) {
        ctx->pc = 0x141FA8u;
        goto label_141fa8;
    }
    ctx->pc = 0x141FA0u;
    SET_GPR_U32(ctx, 31, 0x141FA8u);
    ctx->pc = 0x127010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127010u, 0x141FA0u, 0x141FA8u)) {
        return;
    }
    ctx->pc = 0x141FA8u;
label_141fa8:
    // 0x141fa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141fac:
    // 0x141fac: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x141facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_141fb0:
    // 0x141fb0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_141fb4:
    // 0x141fb4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_141fb8:
    if (ctx->pc == 0x141FB8u) {
        ctx->pc = 0x141FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FB4u;
        // 0x141fb8: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141FBCu;
        goto label_141fbc;
    }
    ctx->pc = 0x141FB4u;
    {
        const bool branch_taken_0x141fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FB4u;
        // 0x141fb8: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fb4) {
            ctx->pc = 0x141FC8u;
            goto label_141fc8;
        }
    }
    ctx->pc = 0x141FBCu;
label_141fbc:
    // 0x141fbc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x141fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_141fc0:
    // 0x141fc0: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x141fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_141fc4:
    // 0x141fc4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x141fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_141fc8:
    // 0x141fc8: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_141fcc:
    // 0x141fcc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_141fd0:
    if (ctx->pc == 0x141FD0u) {
        ctx->pc = 0x141FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FCCu;
        // 0x141fd0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141FD4u;
        goto label_141fd4;
    }
    ctx->pc = 0x141FCCu;
    {
        const bool branch_taken_0x141fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FCCu;
        // 0x141fd0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fcc) {
            ctx->pc = 0x141FF4u;
            goto label_141ff4;
        }
    }
    ctx->pc = 0x141FD4u;
label_141fd4:
    // 0x141fd4: 0x6a02007b  ldl         $v0, 0x7B($s0)
    ctx->pc = 0x141fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_141fd8:
    // 0x141fd8: 0x6e020074  ldr         $v0, 0x74($s0)
    ctx->pc = 0x141fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_141fdc:
    // 0x141fdc: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x141fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_141fe0:
    // 0x141fe0: 0xb2020093  sdl         $v0, 0x93($s0)
    ctx->pc = 0x141fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_141fe4:
    // 0x141fe4: 0xb602008c  sdr         $v0, 0x8C($s0)
    ctx->pc = 0x141fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_141fe8:
    // 0x141fe8: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x141fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_141fec:
    // 0x141fec: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x141fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_141ff0:
    // 0x141ff0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_141ff4:
    // 0x141ff4: 0x8c438474  lw          $v1, -0x7B8C($v0)
    ctx->pc = 0x141ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935668)));
label_141ff8:
    // 0x141ff8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_141ffc:
    if (ctx->pc == 0x141FFCu) {
        ctx->pc = 0x141FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FF8u;
        // 0x141ffc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142000u;
        goto label_142000;
    }
    ctx->pc = 0x141FF8u;
    {
        const bool branch_taken_0x141ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FF8u;
        // 0x141ffc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ff8) {
            ctx->pc = 0x14200Cu;
            goto label_14200c;
        }
    }
    ctx->pc = 0x142000u;
label_142000:
    // 0x142000: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x142000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_142004:
    // 0x142004: 0x8c438478  lw          $v1, -0x7B88($v0)
    ctx->pc = 0x142004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935672)));
label_142008:
    // 0x142008: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142008u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14200c:
    // 0x14200c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_142010:
    if (ctx->pc == 0x142010u) {
        ctx->pc = 0x142010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14200Cu;
        // 0x142010: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142014u;
        goto label_142014;
    }
    ctx->pc = 0x14200Cu;
    {
        const bool branch_taken_0x14200c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14200c) {
            ctx->pc = 0x142010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14200Cu;
            // 0x142010: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142038u;
            goto label_142038;
        }
    }
    ctx->pc = 0x142014u;
label_142014:
    // 0x142014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142018:
    // 0x142018: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x142018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_14201c:
    // 0x14201c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x14201cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_142020:
    // 0x142020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142024:
    // 0x142024: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x142024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_142028:
    // 0x142028: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x142028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_14202c:
    // 0x14202c: 0x40f809  jalr        $v0
label_142030:
    if (ctx->pc == 0x142030u) {
        ctx->pc = 0x142030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14202Cu;
        // 0x142030: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142034u;
        goto label_142034;
    }
    ctx->pc = 0x14202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x142034u);
        ctx->pc = 0x142030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14202Cu;
        // 0x142030: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14202Cu, 0x142034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142034u;
label_142034:
    // 0x142034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_142038:
    // 0x142038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14203c:
    // 0x14203c: 0x3e00008  jr          $ra
label_142040:
    if (ctx->pc == 0x142040u) {
        ctx->pc = 0x142040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14203Cu;
        // 0x142040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142044u;
        goto label_142044;
    }
    ctx->pc = 0x14203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14203Cu;
        // 0x142040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142044u;
label_142044:
    // 0x142044: 0x0  nop
    ctx->pc = 0x142044u;
    // NOP
    ctx->pc = 0x142048u;
}
