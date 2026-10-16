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

// Function: sub_00171460
// Address: 0x171460 - 0x1715e8
void sub_00171460_0x171460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171460_0x171460");
#endif

    switch (ctx->pc) {
        case 0x17149cu: goto label_17149c;
        case 0x1714b0u: goto label_1714b0;
        case 0x1714c4u: goto label_1714c4;
        case 0x17151cu: goto label_17151c;
        case 0x171550u: goto label_171550;
        case 0x171580u: goto label_171580;
        case 0x1715acu: goto label_1715ac;
        case 0x1715c4u: goto label_1715c4;
        default: break;
    }

    ctx->pc = 0x171460u;

    // 0x171460: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x171460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x171464: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x171464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x171468: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x171468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x17146c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17146cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171470: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x171470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x171474: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x171474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x171478: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17147c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x171480: 0x8e120100  lw          $s2, 0x100($s0)
    ctx->pc = 0x171480u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x171484: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x171484u;
    {
        const bool branch_taken_0x171484 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x171488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171484u;
        // 0x171488: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171484) {
            ctx->pc = 0x1714F0u;
            goto label_1714f0;
        }
    }
    ctx->pc = 0x17148Cu;
    // 0x17148c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x171490: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x171490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x171494: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x171494u;
    SET_GPR_U32(ctx, 31, 0x17149Cu);
    ctx->pc = 0x171498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171494u;
    // 0x171498: 0x8c5186c8  lw          $s1, -0x7938($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x171494u, 0x17149Cu)) {
        return;
    }
    ctx->pc = 0x17149Cu;
label_17149c:
    // 0x17149c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17149Cu;
    {
        const bool branch_taken_0x17149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17149Cu;
        // 0x1714a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17149c) {
            ctx->pc = 0x1714CCu;
            goto label_1714cc;
        }
    }
    ctx->pc = 0x1714A4u;
    // 0x1714a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714a8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1714A8u;
    SET_GPR_U32(ctx, 31, 0x1714B0u);
    ctx->pc = 0x1714ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714A8u;
    // 0x1714ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1714A8u, 0x1714B0u)) {
        return;
    }
    ctx->pc = 0x1714B0u;
label_1714b0:
    // 0x1714b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1714B0u;
    {
        const bool branch_taken_0x1714b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714B0u;
        // 0x1714b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714b0) {
            ctx->pc = 0x1714CCu;
            goto label_1714cc;
        }
    }
    ctx->pc = 0x1714B8u;
    // 0x1714b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1714b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714bc: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1714BCu;
    SET_GPR_U32(ctx, 31, 0x1714C4u);
    ctx->pc = 0x1714C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714BCu;
    // 0x1714c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1714BCu, 0x1714C4u)) {
        return;
    }
    ctx->pc = 0x1714C4u;
label_1714c4:
    // 0x1714c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1714C4u;
    {
        const bool branch_taken_0x1714c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714C4u;
        // 0x1714c8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714c4) {
            ctx->pc = 0x1714D0u;
            goto label_1714d0;
        }
    }
    ctx->pc = 0x1714CCu;
label_1714cc:
    // 0x1714cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1714ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1714d0:
    // 0x1714d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1714D0u;
    {
        const bool branch_taken_0x1714d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714D0u;
        // 0x1714d4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714d0) {
            ctx->pc = 0x1714E8u;
            goto label_1714e8;
        }
    }
    ctx->pc = 0x1714D8u;
    // 0x1714d8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1714d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1714dc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1714dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1714e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1714E0u;
    {
        const bool branch_taken_0x1714e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714E0u;
        // 0x1714e4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714e0) {
            ctx->pc = 0x1714F4u;
            goto label_1714f4;
        }
    }
    ctx->pc = 0x1714E8u;
label_1714e8:
    // 0x1714e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1714E8u;
    {
        const bool branch_taken_0x1714e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714E8u;
        // 0x1714ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714e8) {
            ctx->pc = 0x1714F4u;
            goto label_1714f4;
        }
    }
    ctx->pc = 0x1714F0u;
label_1714f0:
    // 0x1714f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1714f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1714f4:
    // 0x1714f4: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1714F4u;
    {
        const bool branch_taken_0x1714f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1714f4) {
            ctx->pc = 0x1714F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1714F4u;
            // 0x1714f8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1715C8u;
            goto label_1715c8;
        }
    }
    ctx->pc = 0x1714FCu;
    // 0x1714fc: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x1714fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x171500: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x171500u;
    {
        const bool branch_taken_0x171500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x171504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171500u;
        // 0x171504: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171500) {
            ctx->pc = 0x171528u;
            goto label_171528;
        }
    }
    ctx->pc = 0x171508u;
    // 0x171508: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17150c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17150Cu;
    {
        const bool branch_taken_0x17150c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17150Cu;
        // 0x171510: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17150c) {
            ctx->pc = 0x171528u;
            goto label_171528;
        }
    }
    ctx->pc = 0x171514u;
    // 0x171514: 0xc0643a6  jal         func_190E98
    ctx->pc = 0x171514u;
    SET_GPR_U32(ctx, 31, 0x17151Cu);
    ctx->pc = 0x171518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171514u;
    // 0x171518: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190E98u, 0x171514u, 0x17151Cu)) {
        return;
    }
    ctx->pc = 0x17151Cu;
label_17151c:
    // 0x17151c: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x17151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x171520: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x171520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x171524: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x171524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_171528:
    // 0x171528: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x171528u;
    {
        const bool branch_taken_0x171528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171528u;
        // 0x17152c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171528) {
            ctx->pc = 0x1715C4u;
            goto label_1715c4;
        }
    }
    ctx->pc = 0x171530u;
    // 0x171530: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x171530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x171534: 0x24455560  addiu       $a1, $v0, 0x5560
    ctx->pc = 0x171534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21856));
    // 0x171538: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x171538u;
    {
        const bool branch_taken_0x171538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171538u;
        // 0x17153c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171538) {
            ctx->pc = 0x171544u;
            goto label_171544;
        }
    }
    ctx->pc = 0x171540u;
    // 0x171540: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_171544:
    // 0x171544: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x171544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x171548: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x171548u;
    SET_GPR_U32(ctx, 31, 0x171550u);
    ctx->pc = 0x17154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171548u;
    // 0x17154c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x171548u, 0x171550u)) {
        return;
    }
    ctx->pc = 0x171550u;
label_171550:
    // 0x171550: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x171550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x171554: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x171554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x171558: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x171558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x17155c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17155Cu;
    {
        const bool branch_taken_0x17155c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17155c) {
            ctx->pc = 0x171560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17155Cu;
            // 0x171560: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171584u;
            goto label_171584;
        }
    }
    ctx->pc = 0x171564u;
    // 0x171564: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x171564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171568: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x171568u;
    {
        const bool branch_taken_0x171568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171568) {
            ctx->pc = 0x17156Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171568u;
            // 0x17156c: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171584u;
            goto label_171584;
        }
    }
    ctx->pc = 0x171570u;
    // 0x171570: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x171570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x171574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171578: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x171578u;
    SET_GPR_U32(ctx, 31, 0x171580u);
    ctx->pc = 0x17157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171578u;
    // 0x17157c: 0xafb40004  sw          $s4, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x171578u, 0x171580u)) {
        return;
    }
    ctx->pc = 0x171580u;
label_171580:
    // 0x171580: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x171580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_171584:
    // 0x171584: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x171584u;
    {
        const bool branch_taken_0x171584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x171584) {
            ctx->pc = 0x171588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171584u;
            // 0x171588: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1715C8u;
            goto label_1715c8;
        }
    }
    ctx->pc = 0x17158Cu;
    // 0x17158c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x17158cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171590: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x171590u;
    {
        const bool branch_taken_0x171590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171590) {
            ctx->pc = 0x171594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171590u;
            // 0x171594: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1715C8u;
            goto label_1715c8;
        }
    }
    ctx->pc = 0x171598u;
    // 0x171598: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x171598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x17159c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17159Cu;
    {
        const bool branch_taken_0x17159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17159Cu;
        // 0x1715a0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17159c) {
            ctx->pc = 0x1715C4u;
            goto label_1715c4;
        }
    }
    ctx->pc = 0x1715A4u;
    // 0x1715a4: 0xc0641d6  jal         func_190758
    ctx->pc = 0x1715A4u;
    SET_GPR_U32(ctx, 31, 0x1715ACu);
    ctx->pc = 0x1715A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715A4u;
    // 0x1715a8: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190758u, 0x1715A4u, 0x1715ACu)) {
        return;
    }
    ctx->pc = 0x1715ACu;
label_1715ac:
    // 0x1715ac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1715acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1715b0: 0x8e070108  lw          $a3, 0x108($s0)
    ctx->pc = 0x1715b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1715b4: 0x24a55590  addiu       $a1, $a1, 0x5590
    ctx->pc = 0x1715b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21904));
    // 0x1715b8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1715b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1715bc: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x1715BCu;
    SET_GPR_U32(ctx, 31, 0x1715C4u);
    ctx->pc = 0x1715C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715BCu;
    // 0x1715c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x1715BCu, 0x1715C4u)) {
        return;
    }
    ctx->pc = 0x1715C4u;
label_1715c4:
    // 0x1715c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1715c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1715c8:
    // 0x1715c8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1715c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1715cc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1715ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1715d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1715d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1715d4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1715d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1715d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1715d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1715dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1715DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1715E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715DCu;
        // 0x1715e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1715DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1715E4u;
    // 0x1715e4: 0x0  nop
    ctx->pc = 0x1715e4u;
    // NOP
    ctx->pc = 0x1715e8u;
}
