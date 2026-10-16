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

// Function: sub_001807D8
// Address: 0x1807d8 - 0x180a38
void sub_001807D8_0x1807d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001807D8_0x1807d8");
#endif

    switch (ctx->pc) {
        case 0x180834u: goto label_180834;
        case 0x180850u: goto label_180850;
        case 0x180878u: goto label_180878;
        case 0x180880u: goto label_180880;
        case 0x18089cu: goto label_18089c;
        case 0x1808a4u: goto label_1808a4;
        case 0x1808b4u: goto label_1808b4;
        case 0x1808d0u: goto label_1808d0;
        case 0x180904u: goto label_180904;
        case 0x180920u: goto label_180920;
        case 0x180938u: goto label_180938;
        case 0x180958u: goto label_180958;
        case 0x180964u: goto label_180964;
        case 0x180974u: goto label_180974;
        case 0x180984u: goto label_180984;
        case 0x180990u: goto label_180990;
        case 0x1809bcu: goto label_1809bc;
        case 0x1809c4u: goto label_1809c4;
        case 0x1809dcu: goto label_1809dc;
        case 0x1809e4u: goto label_1809e4;
        case 0x180a04u: goto label_180a04;
        default: break;
    }

    ctx->pc = 0x1807d8u;

    // 0x1807d8: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x1807dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1807dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1807e0: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x1807e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
    // 0x1807e4: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x1807e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
    // 0x1807e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1807e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807ec: 0x7fb50330  sq          $s5, 0x330($sp)
    ctx->pc = 0x1807ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 21));
    // 0x1807f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1807f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807f4: 0x8c438a30  lw          $v1, -0x75D0($v0)
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338A30u));
    // 0x1807f8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1807f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807fc: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x1807fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
    // 0x180800: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x180800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
    // 0x180804: 0x7fb40340  sq          $s4, 0x340($sp)
    ctx->pc = 0x180804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 20));
    // 0x180808: 0x7fb60320  sq          $s6, 0x320($sp)
    ctx->pc = 0x180808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 22));
    // 0x18080c: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x18080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
    // 0x180810: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x180810u;
    {
        const bool branch_taken_0x180810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180810u;
        // 0x180814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180810) {
            ctx->pc = 0x180A0Cu;
            goto label_180a0c;
        }
    }
    ctx->pc = 0x180818u;
    // 0x180818: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x18081c: 0x37a40001  ori         $a0, $sp, 0x1
    ctx->pc = 0x18081cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
    // 0x180820: 0x90437e08  lbu         $v1, 0x7E08($v0)
    ctx->pc = 0x180820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x697E08u));
    // 0x180824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180828: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x180828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18082c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18082Cu;
    SET_GPR_U32(ctx, 31, 0x180834u);
    ctx->pc = 0x180830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18082Cu;
    // 0x180830: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18082Cu, 0x180834u)) {
        return;
    }
    ctx->pc = 0x180834u;
label_180834:
    // 0x180834: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x180834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x180838: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x18083c: 0x82a60000  lb          $a2, 0x0($s5)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x180840: 0x24567e10  addiu       $s6, $v0, 0x7E10
    ctx->pc = 0x180840u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 32272));
    // 0x180844: 0x24a57e20  addiu       $a1, $a1, 0x7E20
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32288));
    // 0x180848: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x180848u;
    SET_GPR_U32(ctx, 31, 0x180850u);
    ctx->pc = 0x18084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180848u;
    // 0x18084c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x180848u, 0x180850u)) {
        return;
    }
    ctx->pc = 0x180850u;
label_180850:
    // 0x180850: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x180850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x180854: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x180854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x180858: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x180858u;
    {
        const bool branch_taken_0x180858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180858u;
        // 0x18085c: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180858) {
            ctx->pc = 0x180888u;
            goto label_180888;
        }
    }
    ctx->pc = 0x180860u;
    // 0x180860: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x180860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x180864: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x180864u;
    {
        const bool branch_taken_0x180864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180864) {
            ctx->pc = 0x180868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180864u;
            // 0x180868: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18088Cu;
            goto label_18088c;
        }
    }
    ctx->pc = 0x18086Cu;
    // 0x18086c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x18086cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x180870: 0xc0438ec  jal         func_10E3B0
    ctx->pc = 0x180870u;
    SET_GPR_U32(ctx, 31, 0x180878u);
    ctx->pc = 0x180874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180870u;
    // 0x180874: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E3B0u, 0x180870u, 0x180878u)) {
        return;
    }
    ctx->pc = 0x180878u;
label_180878:
    // 0x180878: 0xc04309e  jal         func_10C278
    ctx->pc = 0x180878u;
    SET_GPR_U32(ctx, 31, 0x180880u);
    ctx->pc = 0x18087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180878u;
    // 0x18087c: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10C278u, 0x180878u, 0x180880u)) {
        return;
    }
    ctx->pc = 0x180880u;
label_180880:
    // 0x180880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180884: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x180884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_180888:
    // 0x180888: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18088c:
    // 0x18088c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18088Cu;
    {
        const bool branch_taken_0x18088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18088c) {
            ctx->pc = 0x1808ACu;
            goto label_1808ac;
        }
    }
    ctx->pc = 0x180894u;
    // 0x180894: 0xc0bae56  jal         func_2EB958
    ctx->pc = 0x180894u;
    SET_GPR_U32(ctx, 31, 0x18089Cu);
    ctx->pc = 0x180898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180894u;
    // 0x180898: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB958u, 0x180894u, 0x18089Cu)) {
        return;
    }
    ctx->pc = 0x18089Cu;
label_18089c:
    // 0x18089c: 0xc0bae7e  jal         func_2EB9F8
    ctx->pc = 0x18089Cu;
    SET_GPR_U32(ctx, 31, 0x1808A4u);
    ctx->pc = 0x1808A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18089Cu;
    // 0x1808a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB9F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB9F8u, 0x18089Cu, 0x1808A4u)) {
        return;
    }
    ctx->pc = 0x1808A4u;
label_1808a4:
    // 0x1808a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1808a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1808a8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1808a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_1808ac:
    // 0x1808ac: 0xc0760ae  jal         func_1D82B8
    ctx->pc = 0x1808ACu;
    SET_GPR_U32(ctx, 31, 0x1808B4u);
    ctx->pc = 0x1D82B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D82B8u, 0x1808ACu, 0x1808B4u)) {
        return;
    }
    ctx->pc = 0x1808B4u;
label_1808b4:
    // 0x1808b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1808B4u;
    {
        const bool branch_taken_0x1808b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1808B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808B4u;
        // 0x1808b8: 0x3c140034  lui         $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808b4) {
            ctx->pc = 0x1808D4u;
            goto label_1808d4;
        }
    }
    ctx->pc = 0x1808BCu;
    // 0x1808bc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1808bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1808c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1808c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1808c4: 0xac6289f8  sw          $v0, -0x7608($v1)
    ctx->pc = 0x1808c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3389F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3389F8u, _value); } while (0);
    // 0x1808c8: 0xc0760b2  jal         func_1D82C8
    ctx->pc = 0x1808C8u;
    SET_GPR_U32(ctx, 31, 0x1808D0u);
    ctx->pc = 0x1808CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808C8u;
    // 0x1808cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D82C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D82C8u, 0x1808C8u, 0x1808D0u)) {
        return;
    }
    ctx->pc = 0x1808D0u;
label_1808d0:
    // 0x1808d0: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1808d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_1808d4:
    // 0x1808d4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1808d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1808d8: 0x8e84830c  lw          $a0, -0x7CF4($s4)
    ctx->pc = 0x1808d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935308)));
    // 0x1808dc: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x1808dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x1808e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1808E0u;
    {
        const bool branch_taken_0x1808e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808E0u;
        // 0x1808e4: 0x24537e28  addiu       $s3, $v0, 0x7E28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808e0) {
            ctx->pc = 0x1808F0u;
            goto label_1808f0;
        }
    }
    ctx->pc = 0x1808E8u;
    // 0x1808e8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1808ec: 0x24537e30  addiu       $s3, $v0, 0x7E30
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32304));
label_1808f0:
    // 0x1808f0: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1808f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1808f4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1808f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1808f8: 0x26107e38  addiu       $s0, $s0, 0x7E38
    ctx->pc = 0x1808f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32312));
    // 0x1808fc: 0xc08175a  jal         func_205D68
    ctx->pc = 0x1808FCu;
    SET_GPR_U32(ctx, 31, 0x180904u);
    ctx->pc = 0x180900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808FCu;
    // 0x180900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205D68u, 0x1808FCu, 0x180904u)) {
        return;
    }
    ctx->pc = 0x180904u;
label_180904:
    // 0x180904: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x180904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18090c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18090cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180914: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x180914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180918: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x180918u;
    SET_GPR_U32(ctx, 31, 0x180920u);
    ctx->pc = 0x18091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180918u;
    // 0x18091c: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x180918u, 0x180920u)) {
        return;
    }
    ctx->pc = 0x180920u;
label_180920:
    // 0x180920: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x180920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x180924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180928: 0x24c67e48  addiu       $a2, $a2, 0x7E48
    ctx->pc = 0x180928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32328));
    // 0x18092c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x18092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x180930: 0xc07cc10  jal         func_1F3040
    ctx->pc = 0x180930u;
    SET_GPR_U32(ctx, 31, 0x180938u);
    ctx->pc = 0x180934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180930u;
    // 0x180934: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3040u, 0x180930u, 0x180938u)) {
        return;
    }
    ctx->pc = 0x180938u;
label_180938:
    // 0x180938: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x180938u;
    {
        const bool branch_taken_0x180938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180938u;
        // 0x18093c: 0x27b00210  addiu       $s0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180938) {
            ctx->pc = 0x180A04u;
            goto label_180a04;
        }
    }
    ctx->pc = 0x180940u;
    // 0x180940: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x180940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x180944: 0x24a57e50  addiu       $a1, $a1, 0x7E50
    ctx->pc = 0x180944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32336));
    // 0x180948: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x180948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18094c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18094cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180950: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x180950u;
    SET_GPR_U32(ctx, 31, 0x180958u);
    ctx->pc = 0x180954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180950u;
    // 0x180954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x180950u, 0x180958u)) {
        return;
    }
    ctx->pc = 0x180958u;
label_180958:
    // 0x180958: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18095c: 0xc060868  jal         func_1821A0
    ctx->pc = 0x18095Cu;
    SET_GPR_U32(ctx, 31, 0x180964u);
    ctx->pc = 0x180960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18095Cu;
    // 0x180960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1821A0u, 0x18095Cu, 0x180964u)) {
        return;
    }
    ctx->pc = 0x180964u;
label_180964:
    // 0x180964: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x180964u;
    {
        const bool branch_taken_0x180964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180964u;
        // 0x180968: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180964) {
            ctx->pc = 0x1809A8u;
            goto label_1809a8;
        }
    }
    ctx->pc = 0x18096Cu;
    // 0x18096c: 0xc075d7e  jal         func_1D75F8
    ctx->pc = 0x18096Cu;
    SET_GPR_U32(ctx, 31, 0x180974u);
    ctx->pc = 0x1D75F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75F8u, 0x18096Cu, 0x180974u)) {
        return;
    }
    ctx->pc = 0x180974u;
label_180974:
    // 0x180974: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x180974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x180978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18097c: 0xc05eee2  jal         func_17BB88
    ctx->pc = 0x18097Cu;
    SET_GPR_U32(ctx, 31, 0x180984u);
    ctx->pc = 0x180980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18097Cu;
    // 0x180980: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB88u, 0x18097Cu, 0x180984u)) {
        return;
    }
    ctx->pc = 0x180984u;
label_180984:
    // 0x180984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180988: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x180988u;
    SET_GPR_U32(ctx, 31, 0x180990u);
    ctx->pc = 0x18098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180988u;
    // 0x18098c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x180988u, 0x180990u)) {
        return;
    }
    ctx->pc = 0x180990u;
label_180990:
    // 0x180990: 0x8e82830c  lw          $v0, -0x7CF4($s4)
    ctx->pc = 0x180990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935308)));
    // 0x180994: 0x8c4301a0  lw          $v1, 0x1A0($v0)
    ctx->pc = 0x180994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x180998: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x180998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x18099c: 0x8e82830c  lw          $v0, -0x7CF4($s4)
    ctx->pc = 0x18099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935308)));
    // 0x1809a0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1809A0u;
    {
        const bool branch_taken_0x1809a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809A0u;
        // 0x1809a4: 0xac4001a0  sw          $zero, 0x1A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809a0) {
            ctx->pc = 0x180A04u;
            goto label_180a04;
        }
    }
    ctx->pc = 0x1809A8u;
label_1809a8:
    // 0x1809a8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1809a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1809ac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1809ACu;
    {
        const bool branch_taken_0x1809ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1809ac) {
            ctx->pc = 0x1809B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1809ACu;
            // 0x1809b0: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1809CCu;
            goto label_1809cc;
        }
    }
    ctx->pc = 0x1809B4u;
    // 0x1809b4: 0xc0bae6a  jal         func_2EB9A8
    ctx->pc = 0x1809B4u;
    SET_GPR_U32(ctx, 31, 0x1809BCu);
    ctx->pc = 0x1809B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809B4u;
    // 0x1809b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB9A8u, 0x1809B4u, 0x1809BCu)) {
        return;
    }
    ctx->pc = 0x1809BCu;
label_1809bc:
    // 0x1809bc: 0xc0baea2  jal         func_2EBA88
    ctx->pc = 0x1809BCu;
    SET_GPR_U32(ctx, 31, 0x1809C4u);
    ctx->pc = 0x1809C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809BCu;
    // 0x1809c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EBA88u, 0x1809BCu, 0x1809C4u)) {
        return;
    }
    ctx->pc = 0x1809C4u;
label_1809c4:
    // 0x1809c4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1809c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1809c8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1809c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1809cc:
    // 0x1809cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1809CCu;
    {
        const bool branch_taken_0x1809cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809CCu;
        // 0x1809d0: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809cc) {
            ctx->pc = 0x1809E8u;
            goto label_1809e8;
        }
    }
    ctx->pc = 0x1809D4u;
    // 0x1809d4: 0xc0438e6  jal         func_10E398
    ctx->pc = 0x1809D4u;
    SET_GPR_U32(ctx, 31, 0x1809DCu);
    ctx->pc = 0x1809D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809D4u;
    // 0x1809d8: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E398u, 0x1809D4u, 0x1809DCu)) {
        return;
    }
    ctx->pc = 0x1809DCu;
label_1809dc:
    // 0x1809dc: 0xc0438d0  jal         func_10E340
    ctx->pc = 0x1809DCu;
    SET_GPR_U32(ctx, 31, 0x1809E4u);
    ctx->pc = 0x1809E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809DCu;
    // 0x1809e0: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E340u, 0x1809DCu, 0x1809E4u)) {
        return;
    }
    ctx->pc = 0x1809E4u;
label_1809e4:
    // 0x1809e4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1809e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1809e8:
    // 0x1809e8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1809e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1809ec: 0x8c6289f8  lw          $v0, -0x7608($v1)
    ctx->pc = 0x1809ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3389F8u));
    // 0x1809f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1809F0u;
    {
        const bool branch_taken_0x1809f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1809f0) {
            ctx->pc = 0x1809F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1809F0u;
            // 0x1809f4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A08u;
            goto label_180a08;
        }
    }
    ctx->pc = 0x1809F8u;
    // 0x1809f8: 0xac6089f8  sw          $zero, -0x7608($v1)
    ctx->pc = 0x1809f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937080), GPR_U32(ctx, 0));
    // 0x1809fc: 0xc0760b2  jal         func_1D82C8
    ctx->pc = 0x1809FCu;
    SET_GPR_U32(ctx, 31, 0x180A04u);
    ctx->pc = 0x180A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809FCu;
    // 0x180a00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D82C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D82C8u, 0x1809FCu, 0x180A04u)) {
        return;
    }
    ctx->pc = 0x180A04u;
label_180a04:
    // 0x180a04: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x180a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_180a08:
    // 0x180a08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x180a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_180a0c:
    // 0x180a0c: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x180a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x180a10: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x180a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x180a14: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x180a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x180a18: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x180a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x180a1c: 0x7bb40340  lq          $s4, 0x340($sp)
    ctx->pc = 0x180a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x180a20: 0x7bb50330  lq          $s5, 0x330($sp)
    ctx->pc = 0x180a20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x180a24: 0x7bb60320  lq          $s6, 0x320($sp)
    ctx->pc = 0x180a24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x180a28: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x180a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x180a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x180A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A2Cu;
        // 0x180a30: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A34u;
    // 0x180a34: 0x0  nop
    ctx->pc = 0x180a34u;
    // NOP
    ctx->pc = 0x180a38u;
}
