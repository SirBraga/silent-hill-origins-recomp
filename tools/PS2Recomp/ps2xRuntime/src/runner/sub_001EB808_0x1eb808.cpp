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

// Function: sub_001EB808
// Address: 0x1eb808 - 0x1eb9c8
void sub_001EB808_0x1eb808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB808_0x1eb808");
#endif

    switch (ctx->pc) {
        case 0x1eb82cu: goto label_1eb82c;
        case 0x1eb848u: goto label_1eb848;
        case 0x1eb864u: goto label_1eb864;
        case 0x1eb87cu: goto label_1eb87c;
        case 0x1eb88cu: goto label_1eb88c;
        case 0x1eb89cu: goto label_1eb89c;
        case 0x1eb8acu: goto label_1eb8ac;
        case 0x1eb8c8u: goto label_1eb8c8;
        case 0x1eb9b4u: goto label_1eb9b4;
        default: break;
    }

    ctx->pc = 0x1eb808u;

    // 0x1eb808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eb808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1eb80c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb810: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1eb810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1eb814: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1eb814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eb818: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eb818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eb81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eb81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb820: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1eb820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1eb824: 0xc078ec8  jal         func_1E3B20
    ctx->pc = 0x1EB824u;
    SET_GPR_U32(ctx, 31, 0x1EB82Cu);
    ctx->pc = 0x1EB828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB824u;
    // 0x1eb828: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB824u, 0x1EB82Cu)) {
        return;
    }
    ctx->pc = 0x1EB82Cu;
label_1eb82c:
    // 0x1eb82c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1eb82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb830: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1eb830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1eb834: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb838: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1eb83c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb83cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x1eb840: 0xc078ec8  jal         func_1E3B20
    ctx->pc = 0x1EB840u;
    SET_GPR_U32(ctx, 31, 0x1EB848u);
    ctx->pc = 0x1EB844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB840u;
    // 0x1eb844: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB840u, 0x1EB848u)) {
        return;
    }
    ctx->pc = 0x1EB848u;
label_1eb848:
    // 0x1eb848: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1eb848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb84c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1eb84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1eb850: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb854: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1eb858: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb858u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x1eb85c: 0xc078ec8  jal         func_1E3B20
    ctx->pc = 0x1EB85Cu;
    SET_GPR_U32(ctx, 31, 0x1EB864u);
    ctx->pc = 0x1EB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB85Cu;
    // 0x1eb860: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB85Cu, 0x1EB864u)) {
        return;
    }
    ctx->pc = 0x1EB864u;
label_1eb864:
    // 0x1eb864: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1eb864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb86c: 0x43282a  slt         $a1, $v0, $v1
    ctx->pc = 0x1eb86cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eb870: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x1eb870u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x1eb874: 0xc07ab94  jal         func_1EAE50
    ctx->pc = 0x1EB874u;
    SET_GPR_U32(ctx, 31, 0x1EB87Cu);
    ctx->pc = 0x1EB878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB874u;
    // 0x1eb878: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAE50u, 0x1EB874u, 0x1EB87Cu)) {
        return;
    }
    ctx->pc = 0x1EB87Cu;
label_1eb87c:
    // 0x1eb87c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb880: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1eb880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb884: 0xc078ee6  jal         func_1E3B98
    ctx->pc = 0x1EB884u;
    SET_GPR_U32(ctx, 31, 0x1EB88Cu);
    ctx->pc = 0x1EB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB884u;
    // 0x1eb888: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB884u, 0x1EB88Cu)) {
        return;
    }
    ctx->pc = 0x1EB88Cu;
label_1eb88c:
    // 0x1eb88c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb890: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eb894: 0xc078ee6  jal         func_1E3B98
    ctx->pc = 0x1EB894u;
    SET_GPR_U32(ctx, 31, 0x1EB89Cu);
    ctx->pc = 0x1EB898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB894u;
    // 0x1eb898: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB894u, 0x1EB89Cu)) {
        return;
    }
    ctx->pc = 0x1EB89Cu;
label_1eb89c:
    // 0x1eb89c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb8a0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1eb8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1eb8a4: 0xc078ee6  jal         func_1E3B98
    ctx->pc = 0x1EB8A4u;
    SET_GPR_U32(ctx, 31, 0x1EB8ACu);
    ctx->pc = 0x1EB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8A4u;
    // 0x1eb8a8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB8A4u, 0x1EB8ACu)) {
        return;
    }
    ctx->pc = 0x1EB8ACu;
label_1eb8ac:
    // 0x1eb8ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb8b0: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EB8B0u;
    {
        const bool branch_taken_0x1eb8b0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8B0u;
        // 0x1eb8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8b0) {
            ctx->pc = 0x1EB9ACu;
            goto label_1eb9ac;
        }
    }
    ctx->pc = 0x1EB8B8u;
    // 0x1eb8b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eb8b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb8bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb8c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb8c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb8c4: 0x0  nop
    ctx->pc = 0x1eb8c4u;
    // NOP
label_1eb8c8:
    // 0x1eb8c8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb8cc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1eb8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1eb8d0: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB8D0u;
    {
        const bool branch_taken_0x1eb8d0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8D0u;
        // 0x1eb8d4: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8d0) {
            ctx->pc = 0x1EB8F4u;
            goto label_1eb8f4;
        }
    }
    ctx->pc = 0x1EB8D8u;
    // 0x1eb8d8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1eb8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1eb8dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB8DCu;
    {
        const bool branch_taken_0x1eb8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8DCu;
        // 0x1eb8e0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8dc) {
            ctx->pc = 0x1EB8F4u;
            goto label_1eb8f4;
        }
    }
    ctx->pc = 0x1EB8E4u;
    // 0x1eb8e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1eb8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1eb8e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb8ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB8ECu;
    {
        const bool branch_taken_0x1eb8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8ECu;
        // 0x1eb8f0: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8ec) {
            ctx->pc = 0x1EB904u;
            goto label_1eb904;
        }
    }
    ctx->pc = 0x1EB8F4u;
label_1eb8f4:
    // 0x1eb8f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1eb8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb8f8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1eb8fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb900: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb904:
    // 0x1eb904: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x1eb904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x1eb908: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb90c: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB90Cu;
    {
        const bool branch_taken_0x1eb90c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB90Cu;
        // 0x1eb910: 0x1022021  addu        $a0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb90c) {
            ctx->pc = 0x1EB934u;
            goto label_1eb934;
        }
    }
    ctx->pc = 0x1EB914u;
    // 0x1eb914: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1eb914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1eb918: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1eb918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eb91c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB91Cu;
    {
        const bool branch_taken_0x1eb91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB91Cu;
        // 0x1eb920: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb91c) {
            ctx->pc = 0x1EB934u;
            goto label_1eb934;
        }
    }
    ctx->pc = 0x1EB924u;
    // 0x1eb924: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1eb924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1eb928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb92c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB92Cu;
    {
        const bool branch_taken_0x1eb92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB92Cu;
        // 0x1eb930: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb92c) {
            ctx->pc = 0x1EB948u;
            goto label_1eb948;
        }
    }
    ctx->pc = 0x1EB934u;
label_1eb934:
    // 0x1eb934: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1eb934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1eb938: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1eb938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb93c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb944: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb948:
    // 0x1eb948: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1eb948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1eb94c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb950: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB950u;
    {
        const bool branch_taken_0x1eb950 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB950u;
        // 0x1eb954: 0x1222021  addu        $a0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb950) {
            ctx->pc = 0x1EB978u;
            goto label_1eb978;
        }
    }
    ctx->pc = 0x1EB958u;
    // 0x1eb958: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1eb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1eb95c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1eb95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eb960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB960u;
    {
        const bool branch_taken_0x1eb960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB960u;
        // 0x1eb964: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb960) {
            ctx->pc = 0x1EB978u;
            goto label_1eb978;
        }
    }
    ctx->pc = 0x1EB968u;
    // 0x1eb968: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1eb968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1eb96c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb970: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB970u;
    {
        const bool branch_taken_0x1eb970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB970u;
        // 0x1eb974: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb970) {
            ctx->pc = 0x1EB98Cu;
            goto label_1eb98c;
        }
    }
    ctx->pc = 0x1EB978u;
label_1eb978:
    // 0x1eb978: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1eb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1eb97c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1eb97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb980: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb988: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb98c:
    // 0x1eb98c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x1eb98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1eb990: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1eb990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1eb994: 0x25290044  addiu       $t1, $t1, 0x44
    ctx->pc = 0x1eb994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 68));
    // 0x1eb998: 0x25080044  addiu       $t0, $t0, 0x44
    ctx->pc = 0x1eb998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
    // 0x1eb99c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb9a0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1eb9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eb9a4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1EB9A4u;
    {
        const bool branch_taken_0x1eb9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9A4u;
        // 0x1eb9a8: 0x24e70044  addiu       $a3, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb9a4) {
            ctx->pc = 0x1EB8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb8c8;
        }
    }
    ctx->pc = 0x1EB9ACu;
label_1eb9ac:
    // 0x1eb9ac: 0xc07ab0a  jal         func_1EAC28
    ctx->pc = 0x1EB9ACu;
    SET_GPR_U32(ctx, 31, 0x1EB9B4u);
    ctx->pc = 0x1EB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB9ACu;
    // 0x1eb9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAC28u, 0x1EB9ACu, 0x1EB9B4u)) {
        return;
    }
    ctx->pc = 0x1EB9B4u;
label_1eb9b4:
    // 0x1eb9b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1eb9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb9b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eb9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9BCu;
        // 0x1eb9c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB9C4u;
    // 0x1eb9c4: 0x0  nop
    ctx->pc = 0x1eb9c4u;
    // NOP
    ctx->pc = 0x1eb9c8u;
}
