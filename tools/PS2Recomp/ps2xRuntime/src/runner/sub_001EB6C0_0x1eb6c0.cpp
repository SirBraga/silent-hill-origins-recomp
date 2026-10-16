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

// Function: sub_001EB6C0
// Address: 0x1eb6c0 - 0x1eb808
void sub_001EB6C0_0x1eb6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB6C0_0x1eb6c0");
#endif

    switch (ctx->pc) {
        case 0x1eb6e4u: goto label_1eb6e4;
        case 0x1eb700u: goto label_1eb700;
        case 0x1eb718u: goto label_1eb718;
        case 0x1eb728u: goto label_1eb728;
        case 0x1eb738u: goto label_1eb738;
        case 0x1eb750u: goto label_1eb750;
        case 0x1eb7f4u: goto label_1eb7f4;
        default: break;
    }

    ctx->pc = 0x1eb6c0u;

    // 0x1eb6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb6c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1eb6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1eb6cc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1eb6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eb6d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eb6d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eb6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb6d8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1eb6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1eb6dc: 0xc078ec8  jal         func_1E3B20
    ctx->pc = 0x1EB6DCu;
    SET_GPR_U32(ctx, 31, 0x1EB6E4u);
    ctx->pc = 0x1EB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6DCu;
    // 0x1eb6e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB6DCu, 0x1EB6E4u)) {
        return;
    }
    ctx->pc = 0x1EB6E4u;
label_1eb6e4:
    // 0x1eb6e4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1eb6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb6e8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1eb6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1eb6ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb6f0: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb6f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1eb6f4: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb6f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x1eb6f8: 0xc078ec8  jal         func_1E3B20
    ctx->pc = 0x1EB6F8u;
    SET_GPR_U32(ctx, 31, 0x1EB700u);
    ctx->pc = 0x1EB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6F8u;
    // 0x1eb6fc: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB6F8u, 0x1EB700u)) {
        return;
    }
    ctx->pc = 0x1EB700u;
label_1eb700:
    // 0x1eb700: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1eb700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb708: 0x43282a  slt         $a1, $v0, $v1
    ctx->pc = 0x1eb708u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eb70c: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x1eb70cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x1eb710: 0xc07ab94  jal         func_1EAE50
    ctx->pc = 0x1EB710u;
    SET_GPR_U32(ctx, 31, 0x1EB718u);
    ctx->pc = 0x1EB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB710u;
    // 0x1eb714: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAE50u, 0x1EB710u, 0x1EB718u)) {
        return;
    }
    ctx->pc = 0x1EB718u;
label_1eb718:
    // 0x1eb718: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb71c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1eb71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb720: 0xc078ee6  jal         func_1E3B98
    ctx->pc = 0x1EB720u;
    SET_GPR_U32(ctx, 31, 0x1EB728u);
    ctx->pc = 0x1EB724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB720u;
    // 0x1eb724: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB720u, 0x1EB728u)) {
        return;
    }
    ctx->pc = 0x1EB728u;
label_1eb728:
    // 0x1eb728: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb72c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1eb72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1eb730: 0xc078ee6  jal         func_1E3B98
    ctx->pc = 0x1EB730u;
    SET_GPR_U32(ctx, 31, 0x1EB738u);
    ctx->pc = 0x1EB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB730u;
    // 0x1eb734: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB730u, 0x1EB738u)) {
        return;
    }
    ctx->pc = 0x1EB738u;
label_1eb738:
    // 0x1eb738: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eb738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb73c: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EB73Cu;
    {
        const bool branch_taken_0x1eb73c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB73Cu;
        // 0x1eb740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb73c) {
            ctx->pc = 0x1EB7ECu;
            goto label_1eb7ec;
        }
    }
    ctx->pc = 0x1EB744u;
    // 0x1eb744: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb74c: 0x0  nop
    ctx->pc = 0x1eb74cu;
    // NOP
label_1eb750:
    // 0x1eb750: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb754: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1eb758: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB758u;
    {
        const bool branch_taken_0x1eb758 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB758u;
        // 0x1eb75c: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb758) {
            ctx->pc = 0x1EB77Cu;
            goto label_1eb77c;
        }
    }
    ctx->pc = 0x1EB760u;
    // 0x1eb760: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1eb760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1eb764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB764u;
    {
        const bool branch_taken_0x1eb764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB764u;
        // 0x1eb768: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb764) {
            ctx->pc = 0x1EB77Cu;
            goto label_1eb77c;
        }
    }
    ctx->pc = 0x1EB76Cu;
    // 0x1eb76c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1eb770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb774: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB774u;
    {
        const bool branch_taken_0x1eb774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB774u;
        // 0x1eb778: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb774) {
            ctx->pc = 0x1EB78Cu;
            goto label_1eb78c;
        }
    }
    ctx->pc = 0x1EB77Cu;
label_1eb77c:
    // 0x1eb77c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1eb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb780: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1eb780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1eb784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb788: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb78c:
    // 0x1eb78c: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x1eb78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x1eb790: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb794: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB794u;
    {
        const bool branch_taken_0x1eb794 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB794u;
        // 0x1eb798: 0x1022821  addu        $a1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb794) {
            ctx->pc = 0x1EB7BCu;
            goto label_1eb7bc;
        }
    }
    ctx->pc = 0x1EB79Cu;
    // 0x1eb79c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1eb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1eb7a0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eb7a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB7A4u;
    {
        const bool branch_taken_0x1eb7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7A4u;
        // 0x1eb7a8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7a4) {
            ctx->pc = 0x1EB7BCu;
            goto label_1eb7bc;
        }
    }
    ctx->pc = 0x1EB7ACu;
    // 0x1eb7ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1eb7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb7b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB7B4u;
    {
        const bool branch_taken_0x1eb7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7B4u;
        // 0x1eb7b8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7b4) {
            ctx->pc = 0x1EB7D0u;
            goto label_1eb7d0;
        }
    }
    ctx->pc = 0x1EB7BCu;
label_1eb7bc:
    // 0x1eb7bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1eb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1eb7c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1eb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb7c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb7cc: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb7d0:
    // 0x1eb7d0: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x1eb7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x1eb7d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1eb7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1eb7d8: 0x25080044  addiu       $t0, $t0, 0x44
    ctx->pc = 0x1eb7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
    // 0x1eb7dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eb7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb7e0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eb7e4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1EB7E4u;
    {
        const bool branch_taken_0x1eb7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7E4u;
        // 0x1eb7e8: 0x24e70044  addiu       $a3, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7e4) {
            ctx->pc = 0x1EB750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb750;
        }
    }
    ctx->pc = 0x1EB7ECu;
label_1eb7ec:
    // 0x1eb7ec: 0xc07ab0a  jal         func_1EAC28
    ctx->pc = 0x1EB7ECu;
    SET_GPR_U32(ctx, 31, 0x1EB7F4u);
    ctx->pc = 0x1EB7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB7ECu;
    // 0x1eb7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAC28u, 0x1EB7ECu, 0x1EB7F4u)) {
        return;
    }
    ctx->pc = 0x1EB7F4u;
label_1eb7f4:
    // 0x1eb7f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1eb7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb7f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7FCu;
        // 0x1eb800: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB804u;
    // 0x1eb804: 0x0  nop
    ctx->pc = 0x1eb804u;
    // NOP
    ctx->pc = 0x1eb808u;
}
