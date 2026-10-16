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

// Function: sub_002806F0
// Address: 0x2806f0 - 0x280858
void sub_002806F0_0x2806f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002806F0_0x2806f0");
#endif

    switch (ctx->pc) {
        case 0x2806f0u: goto label_2806f0;
        case 0x2806f4u: goto label_2806f4;
        case 0x2806f8u: goto label_2806f8;
        case 0x2806fcu: goto label_2806fc;
        case 0x280700u: goto label_280700;
        case 0x280704u: goto label_280704;
        case 0x280708u: goto label_280708;
        case 0x28070cu: goto label_28070c;
        case 0x280710u: goto label_280710;
        case 0x280714u: goto label_280714;
        case 0x280718u: goto label_280718;
        case 0x28071cu: goto label_28071c;
        case 0x280720u: goto label_280720;
        case 0x280724u: goto label_280724;
        case 0x280728u: goto label_280728;
        case 0x28072cu: goto label_28072c;
        case 0x280730u: goto label_280730;
        case 0x280734u: goto label_280734;
        case 0x280738u: goto label_280738;
        case 0x28073cu: goto label_28073c;
        case 0x280740u: goto label_280740;
        case 0x280744u: goto label_280744;
        case 0x280748u: goto label_280748;
        case 0x28074cu: goto label_28074c;
        case 0x280750u: goto label_280750;
        case 0x280754u: goto label_280754;
        case 0x280758u: goto label_280758;
        case 0x28075cu: goto label_28075c;
        case 0x280760u: goto label_280760;
        case 0x280764u: goto label_280764;
        case 0x280768u: goto label_280768;
        case 0x28076cu: goto label_28076c;
        case 0x280770u: goto label_280770;
        case 0x280774u: goto label_280774;
        case 0x280778u: goto label_280778;
        case 0x28077cu: goto label_28077c;
        case 0x280780u: goto label_280780;
        case 0x280784u: goto label_280784;
        case 0x280788u: goto label_280788;
        case 0x28078cu: goto label_28078c;
        case 0x280790u: goto label_280790;
        case 0x280794u: goto label_280794;
        case 0x280798u: goto label_280798;
        case 0x28079cu: goto label_28079c;
        case 0x2807a0u: goto label_2807a0;
        case 0x2807a4u: goto label_2807a4;
        case 0x2807a8u: goto label_2807a8;
        case 0x2807acu: goto label_2807ac;
        case 0x2807b0u: goto label_2807b0;
        case 0x2807b4u: goto label_2807b4;
        case 0x2807b8u: goto label_2807b8;
        case 0x2807bcu: goto label_2807bc;
        case 0x2807c0u: goto label_2807c0;
        case 0x2807c4u: goto label_2807c4;
        case 0x2807c8u: goto label_2807c8;
        case 0x2807ccu: goto label_2807cc;
        case 0x2807d0u: goto label_2807d0;
        case 0x2807d4u: goto label_2807d4;
        case 0x2807d8u: goto label_2807d8;
        case 0x2807dcu: goto label_2807dc;
        case 0x2807e0u: goto label_2807e0;
        case 0x2807e4u: goto label_2807e4;
        case 0x2807e8u: goto label_2807e8;
        case 0x2807ecu: goto label_2807ec;
        case 0x2807f0u: goto label_2807f0;
        case 0x2807f4u: goto label_2807f4;
        case 0x2807f8u: goto label_2807f8;
        case 0x2807fcu: goto label_2807fc;
        case 0x280800u: goto label_280800;
        case 0x280804u: goto label_280804;
        case 0x280808u: goto label_280808;
        case 0x28080cu: goto label_28080c;
        case 0x280810u: goto label_280810;
        case 0x280814u: goto label_280814;
        case 0x280818u: goto label_280818;
        case 0x28081cu: goto label_28081c;
        case 0x280820u: goto label_280820;
        case 0x280824u: goto label_280824;
        case 0x280828u: goto label_280828;
        case 0x28082cu: goto label_28082c;
        case 0x280830u: goto label_280830;
        case 0x280834u: goto label_280834;
        case 0x280838u: goto label_280838;
        case 0x28083cu: goto label_28083c;
        case 0x280840u: goto label_280840;
        case 0x280844u: goto label_280844;
        case 0x280848u: goto label_280848;
        case 0x28084cu: goto label_28084c;
        case 0x280850u: goto label_280850;
        case 0x280854u: goto label_280854;
        default: break;
    }

    ctx->pc = 0x2806f0u;

label_2806f0:
    // 0x2806f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2806f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2806f4:
    // 0x2806f4: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_2806f8:
    // 0x2806f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2806f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2806fc:
    // 0x2806fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2806fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_280700:
    // 0x280700: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x280700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_280704:
    // 0x280704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_280708:
    // 0x280708: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x280708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_28070c:
    // 0x28070c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_280710:
    // 0x280710: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x280710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280714:
    // 0x280714: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_280718:
    if (ctx->pc == 0x280718u) {
        ctx->pc = 0x280718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280714u;
        // 0x280718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28071Cu;
        goto label_28071c;
    }
    ctx->pc = 0x280714u;
    {
        const bool branch_taken_0x280714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x280718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280714u;
        // 0x280718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280714) {
            ctx->pc = 0x280764u;
            goto label_280764;
        }
    }
    ctx->pc = 0x28071Cu;
label_28071c:
    // 0x28071c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28071cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_280720:
    // 0x280720: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x280720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
label_280724:
    // 0x280724: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x280724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_280728:
    // 0x280728: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x280728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28072c:
    // 0x28072c: 0x8cc4e698  lw          $a0, -0x1968($a2)
    ctx->pc = 0x28072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960792)));
label_280730:
    // 0x280730: 0x40f809  jalr        $v0
label_280734:
    if (ctx->pc == 0x280734u) {
        ctx->pc = 0x280734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280730u;
        // 0x280734: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280738u;
        goto label_280738;
    }
    ctx->pc = 0x280730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x280738u);
        ctx->pc = 0x280734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280730u;
        // 0x280734: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280730u, 0x280738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x280738u;
label_280738:
    // 0x280738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28073c:
    // 0x28073c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_280740:
    if (ctx->pc == 0x280740u) {
        ctx->pc = 0x280740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28073Cu;
        // 0x280740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280744u;
        goto label_280744;
    }
    ctx->pc = 0x28073Cu;
    {
        const bool branch_taken_0x28073c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x280740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28073Cu;
        // 0x280740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28073c) {
            ctx->pc = 0x28074Cu;
            goto label_28074c;
        }
    }
    ctx->pc = 0x280744u;
label_280744:
    // 0x280744: 0x10000007  b           . + 4 + (0x7 << 2)
label_280748:
    if (ctx->pc == 0x280748u) {
        ctx->pc = 0x280748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280744u;
        // 0x280748: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28074Cu;
        goto label_28074c;
    }
    ctx->pc = 0x280744u;
    {
        const bool branch_taken_0x280744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280744u;
        // 0x280748: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280744) {
            ctx->pc = 0x280764u;
            goto label_280764;
        }
    }
    ctx->pc = 0x28074Cu;
label_28074c:
    // 0x28074c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28074cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280750:
    // 0x280750: 0xc0c493d  jal         func_3124F4
label_280754:
    if (ctx->pc == 0x280754u) {
        ctx->pc = 0x280754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280750u;
        // 0x280754: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280758u;
        goto label_280758;
    }
    ctx->pc = 0x280750u;
    SET_GPR_U32(ctx, 31, 0x280758u);
    ctx->pc = 0x280754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280750u;
    // 0x280754: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x280750u, 0x280758u)) {
        return;
    }
    ctx->pc = 0x280758u;
label_280758:
    // 0x280758: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x280758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_28075c:
    // 0x28075c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x28075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_280760:
    // 0x280760: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x280760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_280764:
    // 0x280764: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_280768:
    if (ctx->pc == 0x280768u) {
        ctx->pc = 0x280768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280764u;
        // 0x280768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28076Cu;
        goto label_28076c;
    }
    ctx->pc = 0x280764u;
    {
        const bool branch_taken_0x280764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280764u;
        // 0x280768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280764) {
            ctx->pc = 0x28083Cu;
            goto label_28083c;
        }
    }
    ctx->pc = 0x28076Cu;
label_28076c:
    // 0x28076c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_280770:
    if (ctx->pc == 0x280770u) {
        ctx->pc = 0x280774u;
        goto label_280774;
    }
    ctx->pc = 0x28076Cu;
    {
        const bool branch_taken_0x28076c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28076c) {
            ctx->pc = 0x280788u;
            goto label_280788;
        }
    }
    ctx->pc = 0x280774u;
label_280774:
    // 0x280774: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x280774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_280778:
    // 0x280778: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_28077c:
    if (ctx->pc == 0x28077Cu) {
        ctx->pc = 0x28077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280778u;
        // 0x28077c: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280780u;
        goto label_280780;
    }
    ctx->pc = 0x280778u;
    {
        const bool branch_taken_0x280778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280778) {
            ctx->pc = 0x28077Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280778u;
            // 0x28077c: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x280794u;
            goto label_280794;
        }
    }
    ctx->pc = 0x280780u;
label_280780:
    // 0x280780: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_280784:
    if (ctx->pc == 0x280784u) {
        ctx->pc = 0x280784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280780u;
        // 0x280784: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280788u;
        goto label_280788;
    }
    ctx->pc = 0x280780u;
    {
        const bool branch_taken_0x280780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x280784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280780u;
        // 0x280784: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280780) {
            ctx->pc = 0x280794u;
            goto label_280794;
        }
    }
    ctx->pc = 0x280788u;
label_280788:
    // 0x280788: 0xc09fd56  jal         func_27F558
label_28078c:
    if (ctx->pc == 0x28078Cu) {
        ctx->pc = 0x28078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280788u;
        // 0x28078c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280790u;
        goto label_280790;
    }
    ctx->pc = 0x280788u;
    SET_GPR_U32(ctx, 31, 0x280790u);
    ctx->pc = 0x28078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280788u;
    // 0x28078c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F558u, 0x280788u, 0x280790u)) {
        return;
    }
    ctx->pc = 0x280790u;
label_280790:
    // 0x280790: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x280790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_280794:
    // 0x280794: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_280798:
    if (ctx->pc == 0x280798u) {
        ctx->pc = 0x280798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280794u;
        // 0x280798: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28079Cu;
        goto label_28079c;
    }
    ctx->pc = 0x280794u;
    {
        const bool branch_taken_0x280794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280794u;
        // 0x280798: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280794) {
            ctx->pc = 0x280830u;
            goto label_280830;
        }
    }
    ctx->pc = 0x28079Cu;
label_28079c:
    // 0x28079c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x28079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2807a0:
    // 0x2807a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2807a4:
    // 0x2807a4: 0x2442ccc0  addiu       $v0, $v0, -0x3340
    ctx->pc = 0x2807a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954176));
label_2807a8:
    // 0x2807a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2807a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2807ac:
    // 0x2807ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2807acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2807b0:
    // 0x2807b0: 0x800008  jr          $a0
label_2807b4:
    if (ctx->pc == 0x2807B4u) {
        ctx->pc = 0x2807B8u;
        goto label_2807b8;
    }
    ctx->pc = 0x2807B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2807B8u: goto label_2807b8;
            case 0x2807C4u: goto label_2807c4;
            case 0x2807D0u: goto label_2807d0;
            case 0x2807E4u: goto label_2807e4;
            case 0x280804u: goto label_280804;
            case 0x280810u: goto label_280810;
            case 0x280830u: goto label_280830;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2807B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2807B8u;
label_2807b8:
    // 0x2807b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2807b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2807bc:
    // 0x2807bc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2807c0:
    if (ctx->pc == 0x2807C0u) {
        ctx->pc = 0x2807C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807BCu;
        // 0x2807c0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2807C4u;
        goto label_2807c4;
    }
    ctx->pc = 0x2807BCu;
    {
        const bool branch_taken_0x2807bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2807C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807BCu;
        // 0x2807c0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807bc) {
            ctx->pc = 0x280830u;
            goto label_280830;
        }
    }
    ctx->pc = 0x2807C4u;
label_2807c4:
    // 0x2807c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2807c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2807c8:
    // 0x2807c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2807cc:
    if (ctx->pc == 0x2807CCu) {
        ctx->pc = 0x2807CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807C8u;
        // 0x2807cc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2807D0u;
        goto label_2807d0;
    }
    ctx->pc = 0x2807C8u;
    {
        const bool branch_taken_0x2807c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2807CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807C8u;
        // 0x2807cc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807c8) {
            ctx->pc = 0x280830u;
            goto label_280830;
        }
    }
    ctx->pc = 0x2807D0u;
label_2807d0:
    // 0x2807d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2807d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2807d4:
    // 0x2807d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2807d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2807d8:
    // 0x2807d8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2807d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_2807dc:
    // 0x2807dc: 0x10000014  b           . + 4 + (0x14 << 2)
label_2807e0:
    if (ctx->pc == 0x2807E0u) {
        ctx->pc = 0x2807E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807DCu;
        // 0x2807e0: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2807E4u;
        goto label_2807e4;
    }
    ctx->pc = 0x2807DCu;
    {
        const bool branch_taken_0x2807dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2807E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807DCu;
        // 0x2807e0: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807dc) {
            ctx->pc = 0x280830u;
            goto label_280830;
        }
    }
    ctx->pc = 0x2807E4u;
label_2807e4:
    // 0x2807e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2807e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2807e8:
    // 0x2807e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2807e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2807ec:
    // 0x2807ec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2807ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2807f0:
    // 0x2807f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2807f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2807f4:
    // 0x2807f4: 0xc0a041e  jal         func_281078
label_2807f8:
    if (ctx->pc == 0x2807F8u) {
        ctx->pc = 0x2807F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807F4u;
        // 0x2807f8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2807FCu;
        goto label_2807fc;
    }
    ctx->pc = 0x2807F4u;
    SET_GPR_U32(ctx, 31, 0x2807FCu);
    ctx->pc = 0x2807F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2807F4u;
    // 0x2807f8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281078u, 0x2807F4u, 0x2807FCu)) {
        return;
    }
    ctx->pc = 0x2807FCu;
label_2807fc:
    // 0x2807fc: 0x1000000c  b           . + 4 + (0xC << 2)
label_280800:
    if (ctx->pc == 0x280800u) {
        ctx->pc = 0x280804u;
        goto label_280804;
    }
    ctx->pc = 0x2807FCu;
    {
        const bool branch_taken_0x2807fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2807fc) {
            ctx->pc = 0x280830u;
            goto label_280830;
        }
    }
    ctx->pc = 0x280804u;
label_280804:
    // 0x280804: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x280804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_280808:
    // 0x280808: 0x10000009  b           . + 4 + (0x9 << 2)
label_28080c:
    if (ctx->pc == 0x28080Cu) {
        ctx->pc = 0x28080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280808u;
        // 0x28080c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280810u;
        goto label_280810;
    }
    ctx->pc = 0x280808u;
    {
        const bool branch_taken_0x280808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280808u;
        // 0x28080c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280808) {
            ctx->pc = 0x280830u;
            goto label_280830;
        }
    }
    ctx->pc = 0x280810u;
label_280810:
    // 0x280810: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x280810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_280814:
    // 0x280814: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x280814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_280818:
    // 0x280818: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x280818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_28081c:
    // 0x28081c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_280820:
    // 0x280820: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x280820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_280824:
    // 0x280824: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x280824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_280828:
    // 0x280828: 0xc0a041e  jal         func_281078
label_28082c:
    if (ctx->pc == 0x28082Cu) {
        ctx->pc = 0x28082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280828u;
        // 0x28082c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280830u;
        goto label_280830;
    }
    ctx->pc = 0x280828u;
    SET_GPR_U32(ctx, 31, 0x280830u);
    ctx->pc = 0x28082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280828u;
    // 0x28082c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281078u, 0x280828u, 0x280830u)) {
        return;
    }
    ctx->pc = 0x280830u;
label_280830:
    // 0x280830: 0xc0a05cc  jal         func_281730
label_280834:
    if (ctx->pc == 0x280834u) {
        ctx->pc = 0x280834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280830u;
        // 0x280834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280838u;
        goto label_280838;
    }
    ctx->pc = 0x280830u;
    SET_GPR_U32(ctx, 31, 0x280838u);
    ctx->pc = 0x280834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280830u;
    // 0x280834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281730u, 0x280830u, 0x280838u)) {
        return;
    }
    ctx->pc = 0x280838u;
label_280838:
    // 0x280838: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x280838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28083c:
    // 0x28083c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28083cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_280840:
    // 0x280840: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x280840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_280844:
    // 0x280844: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x280844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_280848:
    // 0x280848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28084c:
    // 0x28084c: 0x3e00008  jr          $ra
label_280850:
    if (ctx->pc == 0x280850u) {
        ctx->pc = 0x280850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28084Cu;
        // 0x280850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280854u;
        goto label_280854;
    }
    ctx->pc = 0x28084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28084Cu;
        // 0x280850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28084Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280854u;
label_280854:
    // 0x280854: 0x0  nop
    ctx->pc = 0x280854u;
    // NOP
    ctx->pc = 0x280858u;
}
