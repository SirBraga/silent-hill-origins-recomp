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

// Function: sub_0015A778
// Address: 0x15a778 - 0x15a878
void sub_0015A778_0x15a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A778_0x15a778");
#endif

    switch (ctx->pc) {
        case 0x15a810u: goto label_15a810;
        case 0x15a828u: goto label_15a828;
        case 0x15a848u: goto label_15a848;
        default: break;
    }

    ctx->pc = 0x15a778u;

    // 0x15a778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a77c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15a780: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15a784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a788: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15a78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a790: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x15a794: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a798: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15a798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a79c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x15a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x15a7a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a7a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a7a4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x15a7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x15a7a8: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x15a7a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x15a7ac: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x15a7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x15a7b0: 0xe6210220  swc1        $f1, 0x220($s1)
    ctx->pc = 0x15a7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15a7b4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x15a7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x15a7b8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x15a7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15a7bc: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x15a7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x15a7c0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x15a7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x15a7c4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x15a7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x15a7c8: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x15a7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x15a7cc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x15a7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x15a7d0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x15a7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x15a7d4: 0xe6200250  swc1        $f0, 0x250($s1)
    ctx->pc = 0x15a7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    // 0x15a7d8: 0x8e22022c  lw          $v0, 0x22C($s1)
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x15a7dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15a7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15a7e0: 0xae22022c  sw          $v0, 0x22C($s1)
    ctx->pc = 0x15a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
    // 0x15a7e4: 0x6a2201d7  ldl         $v0, 0x1D7($s1)
    ctx->pc = 0x15a7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15a7e8: 0x6e2201d0  ldr         $v0, 0x1D0($s1)
    ctx->pc = 0x15a7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15a7ec: 0x8e2301d8  lw          $v1, 0x1D8($s1)
    ctx->pc = 0x15a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x15a7f0: 0xb2220257  sdl         $v0, 0x257($s1)
    ctx->pc = 0x15a7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a7f4: 0xb6220250  sdr         $v0, 0x250($s1)
    ctx->pc = 0x15a7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a7f8: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x15a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x15a7fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15a7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a800: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x15a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x15a804: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A804u;
    {
        const bool branch_taken_0x15a804 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A804u;
        // 0x15a808: 0x8e30035c  lw          $s0, 0x35C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a804) {
            ctx->pc = 0x15A85Cu;
            goto label_15a85c;
        }
    }
    ctx->pc = 0x15A80Cu;
    // 0x15a80c: 0x0  nop
    ctx->pc = 0x15a80cu;
    // NOP
label_15a810:
    // 0x15a810: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x15a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x15a814: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A814u;
    {
        const bool branch_taken_0x15a814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A814u;
        // 0x15a818: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a814) {
            ctx->pc = 0x15A830u;
            goto label_15a830;
        }
    }
    ctx->pc = 0x15A81Cu;
    // 0x15a81c: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15a820: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x15A820u;
    SET_GPR_U32(ctx, 31, 0x15A828u);
    ctx->pc = 0x15A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A820u;
    // 0x15a824: 0x26260220  addiu       $a2, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x15A820u, 0x15A828u)) {
        return;
    }
    ctx->pc = 0x15A828u;
label_15a828:
    // 0x15a828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15A828u;
    {
        const bool branch_taken_0x15a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A828u;
        // 0x15a82c: 0x8e220280  lw          $v0, 0x280($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a828) {
            ctx->pc = 0x15A84Cu;
            goto label_15a84c;
        }
    }
    ctx->pc = 0x15A830u;
label_15a830:
    // 0x15a830: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x15a830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x15a834: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x15a838: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a83c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x15a840: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x15A840u;
    SET_GPR_U32(ctx, 31, 0x15A848u);
    ctx->pc = 0x15A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A840u;
    // 0x15a844: 0x262601a0  addiu       $a2, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x15A840u, 0x15A848u)) {
        return;
    }
    ctx->pc = 0x15A848u;
label_15a848:
    // 0x15a848: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x15a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_15a84c:
    // 0x15a84c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15a84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15a850: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15a850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15a854: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15A854u;
    {
        const bool branch_taken_0x15a854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A854u;
        // 0x15a858: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a854) {
            ctx->pc = 0x15A810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a810;
        }
    }
    ctx->pc = 0x15A85Cu;
label_15a85c:
    // 0x15a85c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15a85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15a860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a864: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15a864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a86c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A86Cu;
        // 0x15a870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A874u;
    // 0x15a874: 0x0  nop
    ctx->pc = 0x15a874u;
    // NOP
    ctx->pc = 0x15a878u;
}
