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

// Function: sub_0024C840
// Address: 0x24c840 - 0x24c9c8
void sub_0024C840_0x24c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C840_0x24c840");
#endif

    switch (ctx->pc) {
        case 0x24c840u: goto label_24c840;
        case 0x24c844u: goto label_24c844;
        case 0x24c848u: goto label_24c848;
        case 0x24c84cu: goto label_24c84c;
        case 0x24c850u: goto label_24c850;
        case 0x24c854u: goto label_24c854;
        case 0x24c858u: goto label_24c858;
        case 0x24c85cu: goto label_24c85c;
        case 0x24c860u: goto label_24c860;
        case 0x24c864u: goto label_24c864;
        case 0x24c868u: goto label_24c868;
        case 0x24c86cu: goto label_24c86c;
        case 0x24c870u: goto label_24c870;
        case 0x24c874u: goto label_24c874;
        case 0x24c878u: goto label_24c878;
        case 0x24c87cu: goto label_24c87c;
        case 0x24c880u: goto label_24c880;
        case 0x24c884u: goto label_24c884;
        case 0x24c888u: goto label_24c888;
        case 0x24c88cu: goto label_24c88c;
        case 0x24c890u: goto label_24c890;
        case 0x24c894u: goto label_24c894;
        case 0x24c898u: goto label_24c898;
        case 0x24c89cu: goto label_24c89c;
        case 0x24c8a0u: goto label_24c8a0;
        case 0x24c8a4u: goto label_24c8a4;
        case 0x24c8a8u: goto label_24c8a8;
        case 0x24c8acu: goto label_24c8ac;
        case 0x24c8b0u: goto label_24c8b0;
        case 0x24c8b4u: goto label_24c8b4;
        case 0x24c8b8u: goto label_24c8b8;
        case 0x24c8bcu: goto label_24c8bc;
        case 0x24c8c0u: goto label_24c8c0;
        case 0x24c8c4u: goto label_24c8c4;
        case 0x24c8c8u: goto label_24c8c8;
        case 0x24c8ccu: goto label_24c8cc;
        case 0x24c8d0u: goto label_24c8d0;
        case 0x24c8d4u: goto label_24c8d4;
        case 0x24c8d8u: goto label_24c8d8;
        case 0x24c8dcu: goto label_24c8dc;
        case 0x24c8e0u: goto label_24c8e0;
        case 0x24c8e4u: goto label_24c8e4;
        case 0x24c8e8u: goto label_24c8e8;
        case 0x24c8ecu: goto label_24c8ec;
        case 0x24c8f0u: goto label_24c8f0;
        case 0x24c8f4u: goto label_24c8f4;
        case 0x24c8f8u: goto label_24c8f8;
        case 0x24c8fcu: goto label_24c8fc;
        case 0x24c900u: goto label_24c900;
        case 0x24c904u: goto label_24c904;
        case 0x24c908u: goto label_24c908;
        case 0x24c90cu: goto label_24c90c;
        case 0x24c910u: goto label_24c910;
        case 0x24c914u: goto label_24c914;
        case 0x24c918u: goto label_24c918;
        case 0x24c91cu: goto label_24c91c;
        case 0x24c920u: goto label_24c920;
        case 0x24c924u: goto label_24c924;
        case 0x24c928u: goto label_24c928;
        case 0x24c92cu: goto label_24c92c;
        case 0x24c930u: goto label_24c930;
        case 0x24c934u: goto label_24c934;
        case 0x24c938u: goto label_24c938;
        case 0x24c93cu: goto label_24c93c;
        case 0x24c940u: goto label_24c940;
        case 0x24c944u: goto label_24c944;
        case 0x24c948u: goto label_24c948;
        case 0x24c94cu: goto label_24c94c;
        case 0x24c950u: goto label_24c950;
        case 0x24c954u: goto label_24c954;
        case 0x24c958u: goto label_24c958;
        case 0x24c95cu: goto label_24c95c;
        case 0x24c960u: goto label_24c960;
        case 0x24c964u: goto label_24c964;
        case 0x24c968u: goto label_24c968;
        case 0x24c96cu: goto label_24c96c;
        case 0x24c970u: goto label_24c970;
        case 0x24c974u: goto label_24c974;
        case 0x24c978u: goto label_24c978;
        case 0x24c97cu: goto label_24c97c;
        case 0x24c980u: goto label_24c980;
        case 0x24c984u: goto label_24c984;
        case 0x24c988u: goto label_24c988;
        case 0x24c98cu: goto label_24c98c;
        case 0x24c990u: goto label_24c990;
        case 0x24c994u: goto label_24c994;
        case 0x24c998u: goto label_24c998;
        case 0x24c99cu: goto label_24c99c;
        case 0x24c9a0u: goto label_24c9a0;
        case 0x24c9a4u: goto label_24c9a4;
        case 0x24c9a8u: goto label_24c9a8;
        case 0x24c9acu: goto label_24c9ac;
        case 0x24c9b0u: goto label_24c9b0;
        case 0x24c9b4u: goto label_24c9b4;
        case 0x24c9b8u: goto label_24c9b8;
        case 0x24c9bcu: goto label_24c9bc;
        case 0x24c9c0u: goto label_24c9c0;
        case 0x24c9c4u: goto label_24c9c4;
        default: break;
    }

    ctx->pc = 0x24c840u;

label_24c840:
    // 0x24c840: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_24c844:
    // 0x24c844: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x24c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_24c848:
    // 0x24c848: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x24c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_24c84c:
    // 0x24c84c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24c84cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c850:
    // 0x24c850: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x24c850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_24c854:
    // 0x24c854: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x24c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_24c858:
    // 0x24c858: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x24c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_24c85c:
    // 0x24c85c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x24c85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_24c860:
    // 0x24c860: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x24c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_24c864:
    // 0x24c864: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x24c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_24c868:
    // 0x24c868: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x24c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_24c86c:
    // 0x24c86c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_24c870:
    // 0x24c870: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24c870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_24c874:
    // 0x24c874: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24c874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24c878:
    // 0x24c878: 0x8eb60008  lw          $s6, 0x8($s5)
    ctx->pc = 0x24c878u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_24c87c:
    // 0x24c87c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x24c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_24c880:
    // 0x24c880: 0x8eb30010  lw          $s3, 0x10($s5)
    ctx->pc = 0x24c880u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_24c884:
    // 0x24c884: 0x12620043  beq         $s3, $v0, . + 4 + (0x43 << 2)
label_24c888:
    if (ctx->pc == 0x24C888u) {
        ctx->pc = 0x24C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C884u;
        // 0x24c888: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C88Cu;
        goto label_24c88c;
    }
    ctx->pc = 0x24C884u;
    {
        const bool branch_taken_0x24c884 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C884u;
        // 0x24c888: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c884) {
            ctx->pc = 0x24C994u;
            goto label_24c994;
        }
    }
    ctx->pc = 0x24C88Cu;
label_24c88c:
    // 0x24c88c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24c890:
    // 0x24c890: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24c890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24c894:
    // 0x24c894: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_24c898:
    // 0x24c898: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x24c898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_24c89c:
    // 0x24c89c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x24c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_24c8a0:
    // 0x24c8a0: 0x40f809  jalr        $v0
label_24c8a4:
    if (ctx->pc == 0x24C8A4u) {
        ctx->pc = 0x24C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8A0u;
        // 0x24c8a4: 0x26700008  addiu       $s0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8A8u;
        goto label_24c8a8;
    }
    ctx->pc = 0x24C8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C8A8u);
        ctx->pc = 0x24C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8A0u;
        // 0x24c8a4: 0x26700008  addiu       $s0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C8A0u, 0x24C8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C8A8u;
label_24c8a8:
    // 0x24c8a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24c8a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c8ac:
    // 0x24c8ac: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_24c8b0:
    if (ctx->pc == 0x24C8B0u) {
        ctx->pc = 0x24C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8ACu;
        // 0x24c8b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8B4u;
        goto label_24c8b4;
    }
    ctx->pc = 0x24C8ACu;
    {
        const bool branch_taken_0x24c8ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8ACu;
        // 0x24c8b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8ac) {
            ctx->pc = 0x24C8BCu;
            goto label_24c8bc;
        }
    }
    ctx->pc = 0x24C8B4u;
label_24c8b4:
    // 0x24c8b4: 0x10000038  b           . + 4 + (0x38 << 2)
label_24c8b8:
    if (ctx->pc == 0x24C8B8u) {
        ctx->pc = 0x24C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8B4u;
        // 0x24c8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8BCu;
        goto label_24c8bc;
    }
    ctx->pc = 0x24C8B4u;
    {
        const bool branch_taken_0x24c8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8B4u;
        // 0x24c8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8b4) {
            ctx->pc = 0x24C998u;
            goto label_24c998;
        }
    }
    ctx->pc = 0x24C8BCu;
label_24c8bc:
    // 0x24c8bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c8c0:
    // 0x24c8c0: 0xc075fdc  jal         func_1D7F70
label_24c8c4:
    if (ctx->pc == 0x24C8C4u) {
        ctx->pc = 0x24C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8C0u;
        // 0x24c8c4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8C8u;
        goto label_24c8c8;
    }
    ctx->pc = 0x24C8C0u;
    SET_GPR_U32(ctx, 31, 0x24C8C8u);
    ctx->pc = 0x24C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C8C0u;
    // 0x24c8c4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x24C8C0u, 0x24C8C8u)) {
        return;
    }
    ctx->pc = 0x24C8C8u;
label_24c8c8:
    // 0x24c8c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x24c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24c8cc:
    // 0x24c8cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24c8ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c8d0:
    // 0x24c8d0: 0x12c00027  beqz        $s6, . + 4 + (0x27 << 2)
label_24c8d4:
    if (ctx->pc == 0x24C8D4u) {
        ctx->pc = 0x24C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8D0u;
        // 0x24c8d4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8D8u;
        goto label_24c8d8;
    }
    ctx->pc = 0x24C8D0u;
    {
        const bool branch_taken_0x24c8d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8D0u;
        // 0x24c8d4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8d0) {
            ctx->pc = 0x24C970u;
            goto label_24c970;
        }
    }
    ctx->pc = 0x24C8D8u;
label_24c8d8:
    // 0x24c8d8: 0x26c70008  addiu       $a3, $s6, 0x8
    ctx->pc = 0x24c8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_24c8dc:
    // 0x24c8dc: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x24c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_24c8e0:
    // 0x24c8e0: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x24c8e0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_24c8e4:
    // 0x24c8e4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_24c8e8:
    if (ctx->pc == 0x24C8E8u) {
        ctx->pc = 0x24C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8E4u;
        // 0x24c8e8: 0x247e0001  addiu       $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8ECu;
        goto label_24c8ec;
    }
    ctx->pc = 0x24C8E4u;
    {
        const bool branch_taken_0x24c8e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8E4u;
        // 0x24c8e8: 0x247e0001  addiu       $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8e4) {
            ctx->pc = 0x24C960u;
            goto label_24c960;
        }
    }
    ctx->pc = 0x24C8ECu;
label_24c8ec:
    // 0x24c8ec: 0x3b8c0  sll         $s7, $v1, 3
    ctx->pc = 0x24c8ecu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_24c8f0:
    // 0x24c8f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24c8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c8f4:
    // 0x24c8f4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x24c8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24c8f8:
    // 0x24c8f8: 0x267a021  addu        $s4, $s3, $a3
    ctx->pc = 0x24c8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_24c8fc:
    // 0x24c8fc: 0x2061007  srav        $v0, $a2, $s0
    ctx->pc = 0x24c8fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
label_24c900:
    // 0x24c900: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24c900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24c904:
    // 0x24c904: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x24c904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_24c908:
    // 0x24c908: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_24c90c:
    if (ctx->pc == 0x24C90Cu) {
        ctx->pc = 0x24C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C908u;
        // 0x24c90c: 0x2f01821  addu        $v1, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C910u;
        goto label_24c910;
    }
    ctx->pc = 0x24C908u;
    {
        const bool branch_taken_0x24c908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C908u;
        // 0x24c90c: 0x2f01821  addu        $v1, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c908) {
            ctx->pc = 0x24C950u;
            goto label_24c950;
        }
    }
    ctx->pc = 0x24C910u;
label_24c910:
    // 0x24c910: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x24c910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_24c914:
    // 0x24c914: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x24c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_24c918:
    // 0x24c918: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x24c918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_24c91c:
    // 0x24c91c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x24c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24c920:
    // 0x24c920: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x24c920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_24c924:
    // 0x24c924: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x24c924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_24c928:
    // 0x24c928: 0x21023  negu        $v0, $v0
    ctx->pc = 0x24c928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_24c92c:
    // 0x24c92c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_24c930:
    // 0x24c930: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x24c930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_24c934:
    // 0x24c934: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x24c934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_24c938:
    // 0x24c938: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_24c93c:
    // 0x24c93c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x24c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24c940:
    // 0x24c940: 0x60f809  jalr        $v1
label_24c944:
    if (ctx->pc == 0x24C944u) {
        ctx->pc = 0x24C948u;
        goto label_24c948;
    }
    ctx->pc = 0x24C940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24C948u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C940u, 0x24C948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C948u;
label_24c948:
    // 0x24c948: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x24c948u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c94c:
    // 0x24c94c: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x24c94cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c950:
    // 0x24c950: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24c950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24c954:
    // 0x24c954: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x24c954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_24c958:
    // 0x24c958: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_24c95c:
    if (ctx->pc == 0x24C95Cu) {
        ctx->pc = 0x24C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C958u;
        // 0x24c95c: 0x2061007  srav        $v0, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C960u;
        goto label_24c960;
    }
    ctx->pc = 0x24C958u;
    {
        const bool branch_taken_0x24c958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C958u;
        // 0x24c95c: 0x2061007  srav        $v0, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c958) {
            ctx->pc = 0x24C900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c900;
        }
    }
    ctx->pc = 0x24C960u;
label_24c960:
    // 0x24c960: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x24c960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24c964:
    // 0x24c964: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x24c964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_24c968:
    // 0x24c968: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_24c96c:
    if (ctx->pc == 0x24C96Cu) {
        ctx->pc = 0x24C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C968u;
        // 0x24c96c: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C970u;
        goto label_24c970;
    }
    ctx->pc = 0x24C968u;
    {
        const bool branch_taken_0x24c968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C968u;
        // 0x24c96c: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c968) {
            ctx->pc = 0x24C8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c8e0;
        }
    }
    ctx->pc = 0x24C970u;
label_24c970:
    // 0x24c970: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24c970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24c974:
    // 0x24c974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c978:
    // 0x24c978: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24c978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_24c97c:
    // 0x24c97c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x24c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_24c980:
    // 0x24c980: 0x40f809  jalr        $v0
label_24c984:
    if (ctx->pc == 0x24C984u) {
        ctx->pc = 0x24C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C980u;
        // 0x24c984: 0x8fb3000c  lw          $s3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C988u;
        goto label_24c988;
    }
    ctx->pc = 0x24C980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C988u);
        ctx->pc = 0x24C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C980u;
        // 0x24c984: 0x8fb3000c  lw          $s3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C980u, 0x24C988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C988u;
label_24c988:
    // 0x24c988: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x24c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_24c98c:
    // 0x24c98c: 0x1662ffc0  bne         $s3, $v0, . + 4 + (-0x40 << 2)
label_24c990:
    if (ctx->pc == 0x24C990u) {
        ctx->pc = 0x24C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C98Cu;
        // 0x24c990: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C994u;
        goto label_24c994;
    }
    ctx->pc = 0x24C98Cu;
    {
        const bool branch_taken_0x24c98c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C98Cu;
        // 0x24c990: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c98c) {
            ctx->pc = 0x24C890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c890;
        }
    }
    ctx->pc = 0x24C994u;
label_24c994:
    // 0x24c994: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x24c994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24c998:
    // 0x24c998: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x24c998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_24c99c:
    // 0x24c99c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x24c99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24c9a0:
    // 0x24c9a0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x24c9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24c9a4:
    // 0x24c9a4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x24c9a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24c9a8:
    // 0x24c9a8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x24c9a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24c9ac:
    // 0x24c9ac: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x24c9acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24c9b0:
    // 0x24c9b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24c9b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24c9b4:
    // 0x24c9b4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x24c9b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24c9b8:
    // 0x24c9b8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x24c9b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24c9bc:
    // 0x24c9bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24c9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24c9c0:
    // 0x24c9c0: 0x3e00008  jr          $ra
label_24c9c4:
    if (ctx->pc == 0x24C9C4u) {
        ctx->pc = 0x24C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9C0u;
        // 0x24c9c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9C8u;
        goto label_fallthrough_0x24c9c0;
    }
    ctx->pc = 0x24C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9C0u;
        // 0x24c9c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c9c0:
    ctx->pc = 0x24C9C8u;
}
